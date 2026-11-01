class Solution {
public:
    string simplifyPath(string path) {
        vector<string> dirs;
        stringstream ss(path);
        string token;

        // Split the path by the delimiter '/'
        while (getline(ss, token, '/')) {
            if (token.empty() || token == ".") {
                // Ignore empty tokens (from multiple slashes) and current directory '.'
                continue;
            } else if (token == "..") {
                // Move up one directory level if possible
                if (!dirs.empty()) {
                    dirs.pop_back();
                }
            } else {
                // Valid directory or file name (e.g., "...", "home", "foo")
                dirs.push_back(token);
            }
        }

        // If no directories remain, the path is the root "/"
        if (dirs.empty()) {
            return "/";
        }

        // Reconstruct the canonical path
        string canonicalPath = "";
        for (const string& dir : dirs) {
            canonicalPath += "/" + dir;
        }

        return canonicalPath;
    }
};