# lint
## Include What You Use

Command
```
iwyu main.cpp
```

Output
```
main.cpp should add these lines:
#include <vector>  // for vector

main.cpp should remove these lines:
- #include "lib.hpp"  // lines 1-1

The full include-list for main.cpp:
#include <vector>  // for vector
---
```
