
undefined4 JNI_OnLoad(long *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined4 uVar6;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (long *)0x0;
  uVar6 = 0x10006;
  DAT_00103000 = param_1;
  iVar3 = (**(code **)(*param_1 + 0x30))(param_1,&local_40,0x10006);
  plVar2 = local_40;
  if (iVar3 == 0) {
    lVar4 = (**(code **)(*local_40 + 0x30))(local_40,"com/bytedance/pangle/flipped/FlippedV2Impl");
    if (lVar4 == 0) {
      LOG("Failed to find \'%s\' class when registering Native method...",
          "com/bytedance/pangle/flipped/FlippedV2Impl");
    }
    else {
      iVar3 = (**(code **)(*plVar2 + 0x6b8))(plVar2,lVar4,&PTR_s_getDeclaredMethod_00102d68,1);
      if (-1 < iVar3) {
        pcVar5 = "init succeeded.";
        goto LAB_00100eb4;
      }
      LOG("Failed to register native method when registering Native method...");
    }
    uVar6 = 0xffffffff;
    pcVar5 = "Failed to register Native method...";
  }
  else {
    uVar6 = 0xffffffff;
    pcVar5 = "Failed to get env...";
  }
LAB_00100eb4:
  LOG(pcVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

