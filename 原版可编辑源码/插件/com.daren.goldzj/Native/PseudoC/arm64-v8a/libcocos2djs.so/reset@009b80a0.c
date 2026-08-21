
/* cocos2d::renderer::State::reset() */

void __thiscall cocos2d::renderer::State::reset(State *this)

{
  Ref *pRVar1;
  long lVar2;
  ulong uVar3;
  
                    /* try { // try from 009b80a8 to 00ab80b3 has its CatchHandler @ 009b822c */
                    /* try { // try from 009b80b4 to 00ab81b7 has its CatchHandler @ 009b8244 */
  *(undefined8 *)(this + 0x10) = 0x201000000000001;
  *(undefined8 *)(this + 0x18) = 0x2070000;
  *(undefined8 *)(this + 0x34) = 0xff00000000;
  *(undefined4 *)(this + 0x2c) = 0xff;
  *(undefined2 *)(this + 0x28) = 0x1e00;
  *(undefined4 *)(this + 0x3c) = 0x1e001e00;
  *(undefined2 *)(this + 0x40) = 0x1e00;
  lVar2 = *(long *)(this + 0x88);
  *(undefined2 *)(this + 0x30) = 0x207;
  *(undefined8 *)(this + 0x44) = 0x40405000000ff;
  *(undefined2 *)this = 0;
  *(undefined8 *)(this + 0x20) = 0x1e001e00000000ff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined8 *)(this + 8) = 0x180068006;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  if (*(long *)(this + 0x90) != lVar2) {
    uVar3 = 0;
    do {
      pRVar1 = *(Ref **)(lVar2 + uVar3 * 8);
      if (pRVar1 != (Ref *)0x0) {
        Ref::release(pRVar1);
        lVar2 = *(long *)(this + 0x88);
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      lVar2 = *(long *)(this + 0x88);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x90) - lVar2 >> 3));
  }
  lVar2 = *(long *)(this + 0x50);
  if (*(long *)(this + 0x58) != lVar2) {
    uVar3 = 0;
    do {
      pRVar1 = *(Ref **)(lVar2 + uVar3 * 8);
      if (pRVar1 != (Ref *)0x0) {
        Ref::release(pRVar1);
        lVar2 = *(long *)(this + 0x50);
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      lVar2 = *(long *)(this + 0x50);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x58) - lVar2 >> 3));
  }
  if (*(Ref **)(this + 0x80) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x80));
  }
  *(undefined8 *)(this + 0x80) = 0;
  if (*(Ref **)(this + 0xa0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xa0));
  }
  *(undefined8 *)(this + 0xa0) = 0;
                    /* try { // try from 009b81b8 to 00ab829b has its CatchHandler @ 009b8028 */
  return;
}

