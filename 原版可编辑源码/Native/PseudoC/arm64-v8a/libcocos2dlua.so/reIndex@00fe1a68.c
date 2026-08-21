
/* cocos2d::QuadCommand::reIndex(int) */

void __thiscall cocos2d::QuadCommand::reIndex(QuadCommand *this,int param_1)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ushort *puVar8;
  
                    /* catch() { ... } // from try @ 00fe1a10 with catch @ 00fe1a7c */
  uVar7 = param_1;
  if (param_1 < 0x801) {
    uVar7 = 0x800;
  }
  if (__indexCapacity != 0xffffffff) {
    uVar7 = param_1;
  }
  if ((int)__indexCapacity < (int)uVar7) {
    plVar1 = *(long **)(this + 0x98);
    uVar7 = (uint)((double)(int)uVar7 * 1.25);
    if (0xffff < (int)uVar7) {
      uVar7 = 0x10000;
    }
    if (plVar1 == *(long **)(this + 0xa0)) {
      std::__ndk1::vector<unsigned_short*,std::__ndk1::allocator<unsigned_short*>>::
      __push_back_slow_path<unsigned_short*const&>
                ((vector<unsigned_short*,std::__ndk1::allocator<unsigned_short*>> *)(this + 0x90),
                 &__indices);
    }
    else {
                    /* catch() { ... } // from try @ 00fe1b14 with catch @ 00fe1ad4 */
      *plVar1 = (long)__indices;
      *(long **)(this + 0x98) = plVar1 + 1;
    }
    uVar4 = (ulong)(int)uVar7;
    uVar6 = uVar4 * 2;
    if (CARRY8(uVar4,uVar4)) {
      uVar6 = 0xffffffffffffffff;
    }
    __indices = operator_new__(uVar6,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00fe1b0c to 010e1b13 has its CatchHandler @ 00fe1b80 */
                    /* try { // try from 00fe1b14 to 010e1b9b has its CatchHandler @ 00fe1ad4 */
    __indexCapacity = uVar7;
  }
  if (5 < (int)__indexCapacity) {
    uVar4 = (ulong)__indexCapacity;
    uVar6 = 0;
    puVar8 = (ushort *)((long)__indices + 6);
    do {
      iVar5 = (int)uVar6;
      puVar8[-3] = (ushort)(iVar5 << 2);
      uVar2 = (ushort)(iVar5 << 2) | 1;
      uVar3 = (ushort)(iVar5 << 2) | 2;
      uVar6 = uVar6 + 1;
      puVar8[-2] = uVar2;
      puVar8[-1] = uVar3;
      *puVar8 = (ushort)(iVar5 << 2) | 3;
      puVar8[1] = uVar3;
      puVar8[2] = uVar2;
      puVar8 = puVar8 + 6;
    } while (uVar6 < uVar4 / 6);
  }
                    /* catch() { ... } // from try @ 00fe1b0c with catch @ 00fe1b80 */
  *(uint *)(this + 0x8c) = uVar7;
  return;
}

