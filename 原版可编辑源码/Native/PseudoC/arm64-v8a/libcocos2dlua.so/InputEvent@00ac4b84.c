
/* fairygui::InputEvent::InputEvent() */

void __thiscall fairygui::InputEvent::InputEvent(InputEvent *this)

{
                    /* catch() { ... } // from try @ 00ac4aec with catch @ 00ac4b84 */
                    /* catch() { ... } // from try @ 00ac4b04 with catch @ 00ac4b88 */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0x4c;
  *(undefined8 *)(this + 0x20) = 0xffffffff00000000;
  *(undefined8 *)(this + 0x18) = 0xffffffff;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}

