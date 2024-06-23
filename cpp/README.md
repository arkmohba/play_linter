# lint
## Include What You Use

```
# iwyu main.cpp

main.cpp should add these lines:
#include <string>       // for basic_string, allocator, operator<<, string
#include <vector>       // for vector

main.cpp should remove these lines:

The full include-list for main.cpp:
#include <iostream>     // for char_traits, basic_ostream, cout, endl
#include <string>       // for basic_string, allocator, operator<<, string
#include <vector>       // for vector
#include "utility.hpp"  // for basename
```
