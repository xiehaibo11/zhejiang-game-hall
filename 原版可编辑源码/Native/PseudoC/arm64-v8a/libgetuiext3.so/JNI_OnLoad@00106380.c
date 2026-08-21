
void JNI_OnLoad(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1,&local_40,0x10006);
  if (iVar2 == 0) {
    lVar4 = (**(code **)(*local_40 + 0x30))(local_40,"com/igexin/push/extension/mod/SecurityUtils");
    if (lVar4 != 0) {
      iVar2 = (**(code **)(*local_40 + 0x6b8))(local_40,lVar4,&PTR_DAT_0011d010,0xd);
      uVar3 = iVar2 >> 0x1f | 0x10006;
      goto LAB_00106414;
    }
  }
  uVar3 = 0xffffffff;
LAB_00106414:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
  thunk_EXT_FUN_00002bb0(uVar3);
  return;
}

