# Sublime Settings
- MinGW GCC 11.0
- Theme : Monokai Pro

# C++ Compiler Build.
```bash
{
    "cmd": ["g++.exe", "-std=c++17", "-o", "$file_base_name", "$file", "&&", "start", "cmd", "/c", "$file_base_name & echo. & echo. & pause"],
    "shell": true,
    "selector": "source.c++"
}
```
# Completion 1
```bash
{
    "scope": "source.c++",
    "completions": [
        {
            "trigger": "tc",
            "contents": "#include <bits/stdc++.h>\nusing namespace std;\n#define ll long long\n#define endl '\\n' \n#define debug(x) cerr << #x << \" --> \" << x << endl;\n#define shine ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);\n\nint main(){\n    shine\n\n}"
        }
    ]
}
```
# Completion 2
```bash
{
    "scope": "source.c++",
    "completions": [
        {
            "trigger": "ac",
            "contents": "#include <algorithm>\n#include <array>\n#include <bitset>\n#include <cassert>\n#include <chrono>\n#include <cmath>\n#include <complex>\n#include <cstring>\n#include <functional>\n#include <iomanip>\n#include <iostream>\n#include <map>\n#include <numeric>\n#include <queue>\n#include <random>\n#include <vector>\n#include <climits>\n#include <deque>\n#include <unordered_map>\n#include <set>\n#include <unordered_set>\nusing namespace std;\n\nusing ll = long long;\n#define endl '\\n'\n#define debug(x) cerr << #x << \" --> \" << x << endl;\n#define shine ios_base::sync_with_stdio(false), cin.tie(nullptr);\n\nint main(){\n    shine\n\n}"
        }
    ]
}
```
# Preferences
```bash
{
  "theme": "Agila Monokai.sublime-theme",
  "color_scheme": "Packages/Agila Theme/Markdown/Monokai Markdown.tmTheme",
  "theme_agila_compact_sidebar": true,
  "theme_agila_sidebar_mini": true,
  "theme_agila_sidebar_heading_gray": true,
  "theme_agila_sidebar_font_small": true,
  "theme_agila_active_tab_entry_gray": true,
  "theme_agila_modified_tab_marker_gray": true,
  "theme_agila_auto_complete_gray": true,
  "theme_agila_camouflage": true,
  "theme_agila_sidebar_selected_entry_gray": true,
  "theme_agila_sidebar_plus_minus": true,
  "theme_agila_compact_tab": true,
  "font_size": 14,
  "ignored_packages":
  [
        "Vintage",
  ],
  "dark_color_scheme": "Packages/Agila Theme/Agila Classic Oceanic Next.tmTheme",
  "light_color_scheme": "Packages/Agila Theme/Agila Light Solarized.tmTheme",
  "index_files": true,
}
```
