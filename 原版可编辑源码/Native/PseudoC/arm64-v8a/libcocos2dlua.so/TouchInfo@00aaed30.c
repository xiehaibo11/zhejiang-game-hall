
/* fairygui::TouchInfo::TouchInfo() */

void __thiscall fairygui::TouchInfo::TouchInfo(TouchInfo *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0xffffffff00000000;
  *(undefined8 *)(this + 0x10) = 0xffffffff;
                    /* try { // try from 00aaed5c to 00baed6f has its CatchHandler @ 00aaeeb4 */
  *(undefined2 *)(this + 0x28) = 0;
  WeakPtr::WeakPtr((WeakPtr *)(this + 0x38));
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  return;
}

