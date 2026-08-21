
/* cocos2d::Terrain::lookForIndicesLOD(int*, int, bool*) */

ulong __thiscall
cocos2d::Terrain::lookForIndicesLOD(Terrain *this,int *param_1,int param_2,bool *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  void *__s2;
  ulong uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *param_3 = false;
  __s2 = *(void **)(this + 0x2f8);
  if (__s2 != *(void **)(this + 0x300)) {
                    /* try { // try from 00d4703c to 00e47047 has its CatchHandler @ 00d4709c */
    uStack_58 = *(undefined8 *)(param_1 + 2);
    local_60 = *(undefined8 *)param_1;
    lVar1 = (long)*(void **)(this + 0x300) - (long)__s2;
    local_50 = param_2;
                    /* try { // try from 00d47048 to 00e470a3 has its CatchHandler @ 00d46fdc */
    if (lVar1 != 0) {
      uVar6 = 0;
      do {
        iVar3 = memcmp(&local_60,__s2,0x14);
        if (iVar3 == 0) {
          *param_3 = true;
          uVar6 = (ulong)*(uint *)((long)__s2 + 0x14);
          uVar4 = (ulong)*(ushort *)((long)__s2 + 0x1a) << 0x30;
          uVar5 = (ulong)*(ushort *)((long)__s2 + 0x18) << 0x20;
          goto LAB_00d470a0;
        }
        uVar6 = uVar6 + 1;
        __s2 = (void *)((long)__s2 + 0x1c);
      } while (uVar6 < (ulong)((lVar1 >> 2) * 0x6db6db6db6db6db7));
    }
  }
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
                    /* catch() { ... } // from try @ 00d4703c with catch @ 00d4709c */
  *param_3 = false;
LAB_00d470a0:
                    /* try { // try from 00d470a4 to 00e47113 has its CatchHandler @ 00d470a4
                       catch() { ... } // from try @ 00d470a4 with catch @ 00d470a4
                       catch() { ... } // from try @ 00d47130 with catch @ 00d470a4
                       catch() { ... } // from try @ 00d471a4 with catch @ 00d470a4 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar5 | uVar6 | uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

