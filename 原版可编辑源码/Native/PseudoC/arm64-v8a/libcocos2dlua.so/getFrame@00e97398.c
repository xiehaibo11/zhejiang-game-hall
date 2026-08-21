
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
  long local_70;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
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
        uVar7 = FUN_00e971bc(uVar1 | *(byte *)((long)param_1 + 3),&local_70,auStack_64,0,auStack_5c,
                             auStack_60);
        if ((uVar7 & 1) != 0) {
          uVar8 = *(undefined8 *)this;
          puVar9 = *(undefined8 **)(this + 8);
          iVar4 = (*(code *)puVar9[1])(uVar8,*(undefined8 *)(this + 0x18),0);
          if (iVar4 == 0) {
            lVar6 = (*(code *)*puVar9)(param_1,1,local_70,uVar8);
            if (lVar6 < local_70) break;
          }
          else if (0 < local_70) break;
          *param_2 = (uint)local_70;
          uVar5 = 1;
          *(long *)(this + 0x18) = *(long *)(this + 0x18) + local_70;
          goto LAB_00e974ac;
        }
        uVar2 = *(uint *)(this + 0x10);
      }
      local_78 = *(undefined8 *)(this + 0x18);
      uVar7 = FUN_00e96d60(*(undefined8 *)(this + 8),*(undefined8 *)this,uVar2,&local_78,0);
      if ((uVar7 & 1) == 0) break;
      uVar8 = *(undefined8 *)this;
      puVar9 = *(undefined8 **)(this + 8);
      *(undefined8 *)(this + 0x18) = local_78;
      iVar4 = (*(code *)puVar9[1])(uVar8,local_78,0);
    } while (iVar4 == 0);
    uVar5 = 0;
  }
LAB_00e974ac:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

