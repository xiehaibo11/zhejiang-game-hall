
/* cocos2d::unzGetCurrentFileInfo(void*, cocos2d::unz_file_info_s*, char*, unsigned long, void*,
   unsigned long, char*, unsigned long) */

void cocos2d::unzGetCurrentFileInfo
               (void *param_1,unz_file_info_s *param_2,char *param_3,ulong param_4,void *param_5,
               ulong param_6,char *param_7,ulong param_8)

{
  long lVar1;
  int iVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_009190b0((int)param_1,&local_b0,0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar2 == 0) {
    *(undefined8 *)(param_2 + 8) = uStack_a8;
    *(undefined8 *)param_2 = local_b0;
    *(undefined8 *)(param_2 + 0x18) = uStack_98;
    *(undefined8 *)(param_2 + 0x10) = local_a0;
    *(undefined8 *)(param_2 + 0x28) = uStack_88;
    *(undefined8 *)(param_2 + 0x20) = local_90;
    *(undefined8 *)(param_2 + 0x48) = uStack_68;
    *(undefined8 *)(param_2 + 0x40) = local_70;
    *(undefined8 *)(param_2 + 0x58) = uStack_58;
    *(undefined8 *)(param_2 + 0x50) = local_60;
    *(undefined8 *)(param_2 + 0x68) = uStack_48;
    *(undefined8 *)(param_2 + 0x60) = local_50;
    *(undefined8 *)(param_2 + 0x80) = local_30;
    *(undefined8 *)(param_2 + 0x78) = uStack_38;
    *(undefined8 *)(param_2 + 0x70) = local_40;
    *(undefined8 *)(param_2 + 0x38) = uStack_78;
    *(undefined8 *)(param_2 + 0x30) = local_80;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

