
/* universe::Http::Http() */

void __thiscall universe::Http::Http(Http *this)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x28] = (Http)0x0;
  *(undefined8 *)(this + 0x30) = 0;
                    /* try { // try from 00a083b8 to 00b083bf has its CatchHandler @ 00a08480 */
  *(undefined ***)this = &PTR__Http_01c6cbc8;
  *(undefined8 *)(this + 8) = 0;
  lVar2 = core::Service::getInstance();
                    /* try { // try from 00a083c0 to 00b08493 has its CatchHandler @ 00a0825c */
  puVar3 = *(undefined8 **)(this + 0x30);
  uVar5 = *(long *)(lVar2 + 0xe8) - *(long *)(lVar2 + 0xe0);
  if (puVar3 == (undefined8 *)0x0) {
    uVar1 = (long)(uVar5 * 0x20000000) >> 0x20;
    uVar4 = uVar1 << 3;
    if (uVar1 >> 0x3d != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar3 = operator_new__(uVar4);
    *(undefined8 **)(this + 0x30) = puVar3;
  }
  if (0 < (int)(uVar5 >> 3)) {
    uVar5 = uVar5 >> 3 & 0xffffffff;
    *puVar3 = 0;
    if (uVar5 != 1) {
      uVar4 = 1;
      do {
        *(undefined8 *)(*(long *)(this + 0x30) + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
  *(undefined8 *)(this + 0x60) = 0;
  return;
}

