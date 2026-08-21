
/* universe::utils::CMD5Checksum::Update(unsigned char*, unsigned int) */

void __thiscall
universe::utils::CMD5Checksum::Update(CMD5Checksum *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  CMD5Checksum *__dest;
  uint uVar3;
  ulong __n;
  int iVar4;
  ulong uVar5;
  
                    /* catch() { ... } // from try @ 009fbd50 with catch @ 009fbf10 */
                    /* catch() { ... } // from try @ 009fbd44 with catch @ 009fbf14
                       catch() { ... } // from try @ 009fbdf4 with catch @ 009fbf14 */
  uVar1 = *(uint *)(this + 0x48);
  iVar2 = *(int *)(this + 0x4c);
                    /* catch() { ... } // from try @ 009fbd28 with catch @ 009fbf34
                       catch() { ... } // from try @ 009fbda0 with catch @ 009fbf34 */
  uVar5 = (ulong)(uVar1 >> 3) & 0x3f;
  *(uint *)(this + 0x48) = uVar1 + param_2 * 8;
  if (CARRY4(uVar1,param_2 * 8)) {
    iVar2 = iVar2 + 1;
    *(int *)(this + 0x4c) = iVar2;
  }
                    /* catch() { ... } // from try @ 009fbce4 with catch @ 009fbf4c */
                    /* catch() { ... } // from try @ 009fbcd8 with catch @ 009fbf50 */
                    /* catch() { ... } // from try @ 009fbcb8 with catch @ 009fbf54 */
  *(uint *)(this + 0x4c) = iVar2 + (param_2 >> 0x1d);
  iVar4 = (int)uVar5;
  iVar2 = -iVar4;
  uVar1 = iVar2 + 0x40;
  __n = (ulong)uVar1;
                    /* catch() { ... } // from try @ 009fbcf0 with catch @ 009fbf64
                       catch() { ... } // from try @ 009fbd84 with catch @ 009fbf64
                       catch() { ... } // from try @ 009fbe60 with catch @ 009fbf64 */
  __dest = this + uVar5 + 8;
  if (param_2 < uVar1) {
    __n = 0;
  }
  else {
    memcpy(__dest,param_1,__n);
    __dest = this + 8;
    Transform(this,(uchar *)__dest);
    if (iVar2 + 0x7fU < param_2) {
      uVar1 = 0x7f - iVar4;
      do {
        uVar3 = uVar1;
        Transform(this,param_1 + (uVar3 - 0x3f));
                    /* try { // try from 009fbfbc to 00afc00f has its CatchHandler @ 009fbfbc
                       catch() { ... } // from try @ 009fbfbc with catch @ 009fbfbc
                       catch() { ... } // from try @ 009fc064 with catch @ 009fbfbc */
        uVar1 = uVar3 + 0x40;
      } while (uVar3 + 0x40 < param_2);
      __n = (ulong)(uVar3 + 1);
    }
  }
  memcpy(__dest,param_1 + __n,(ulong)(param_2 - (int)__n));
  return;
}

