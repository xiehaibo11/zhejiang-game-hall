
/* Mp3Reader::getFrame(void*, unsigned int*) */

void __thiscall Mp3Reader::getFrame(Mp3Reader *this,void *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_78;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar8 = *(undefined8 *)this;
  puVar9 = *(undefined8 **)(this + 8);
  iVar4 = (*(code *)puVar9[1])(uVar8,*(undefined8 *)(this + 0x18),0);
  uVar5 = 0;
  if (iVar4 == 0) {
    do {
      lVar6 = (*(code *)*puVar9)(param_1,1,4,uVar8);
      if (lVar6 < 4) break;
      uVar2 = *(uint *)(this + 0x10);
      uVar1 = (uint)*(byte *)param_1 << 0x18 | (uint)*(byte *)((long)param_1 + 1) << 0x10 |
              (uint)*(byte *)((long)param_1 + 2) << 8;
      if (((uVar1 ^ uVar2) & 0xfffe0c00) == 0) {
        uVar7 = FUN_00a9ddd4(uVar1 | *(byte *)((long)param_1 + 3),&local_60,auStack_6c,0,auStack_64,
                             auStack_68);
                    /* catch() { ... } // from try @ 00a9e15c with catch @ 00a9e094
                       catch() { ... } // from try @ 00a9e21c with catch @ 00a9e094 */
        if ((uVar7 & 1) != 0) {
          uVar8 = *(undefined8 *)this;
          puVar9 = *(undefined8 **)(this + 8);
                    /* try { // try from 00a9e110 to 00b9e113 has its CatchHandler @ 00a9e290 */
                    /* try { // try from 00a9e114 to 00b9e11b has its CatchHandler @ 00a9e280 */
          iVar4 = (*(code *)puVar9[1])(uVar8,*(undefined8 *)(this + 0x18),0);
          if (iVar4 == 0) {
                    /* try { // try from 00a9e144 to 00b9e15b has its CatchHandler @ 00a9e21c */
            lVar6 = (*(code *)*puVar9)(param_1,1,local_60,uVar8);
            if (lVar6 < local_60) break;
          }
          else if (0 < local_60) break;
          *param_2 = (uint)local_60;
                    /* try { // try from 00a9e15c to 00b9e20f has its CatchHandler @ 00a9e094 */
          uVar5 = 1;
          *(long *)(this + 0x18) = *(long *)(this + 0x18) + local_60;
          goto LAB_00a9e0dc;
        }
        uVar2 = *(uint *)(this + 0x10);
      }
      local_78 = *(undefined8 *)(this + 0x18);
      uVar7 = FUN_00a9d97c(*(undefined8 *)(this + 8),*(undefined8 *)this,uVar2,&local_78,0);
      if ((uVar7 & 1) == 0) break;
      uVar8 = *(undefined8 *)this;
      puVar9 = *(undefined8 **)(this + 8);
      *(undefined8 *)(this + 0x18) = local_78;
      iVar4 = (*(code *)puVar9[1])(uVar8,local_78,0);
    } while (iVar4 == 0);
    uVar5 = 0;
  }
LAB_00a9e0dc:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* try { // try from 00a9e104 to 00b9e10b has its CatchHandler @ 00a9e2a0 */
  return;
}

