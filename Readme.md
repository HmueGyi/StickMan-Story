# Instruction for Adding Graphics File in Code::Blocks

## Steps to Add Graphics Support

### 1️⃣ Copy Necessary Files
- Copy **`graphics.h`** and **`winbgim.h`** files to the `include` folder of the Code::Blocks directory.
  - **Default location:** `C:\Program Files (x86)\CodeBlocks\MinGW\include\`

- Copy **`libbgi.a`** file to the `lib` folder of the Code::Blocks directory.
  - **Default location:** `C:\Program Files (x86)\CodeBlocks\MinGW\lib\`

### 2️⃣ Configure Code::Blocks
#### **Open Code::Blocks and follow these steps:**
1. Go to **Settings > Compiler > Linker Settings**.
2. Under **Link Libraries (left panel)**:
   - Click **"Add"** button.
   - Click **"Browse"** and select the `libbgi.a` file from the `lib` folder.
   - **Default location:** `C:\Program Files (x86)\CodeBlocks\MinGW\lib\libbgi.a`
   - Click **"Open"**.
3. Under **Other Linker Options (right panel)**:
   - Copy and paste the following text:
     ```
     -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
     ```
4. Click **"OK"**.

✅ **Done!** Graphics library is now set up.

---
## 📌 **Important Notes**
1. The `graphics.h` library will only work in programs saved with the `.cpp` extension.
2. To test if `graphics.h` is working correctly, follow the next section.

---
## 🚀 **Test the Graphics Library**
### **Create a Console Application**
- Save your file in **`.cpp` format** and copy the following code:

```cpp
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    circle(200, 200, 100);
    getch();
    closegraph();
    return 0;
}
```
- Click **"Build and Run"** or press **F9** to execute.

🎉 **Enjoy Coding!**

---
## 📌 Useful Links
1. **Graphics Header File Details** – [Click Here](#)
2. **Complete Graphics Video Tutorials** – [YouTube Channel](http://www.youtube.com/c/codewar#)

