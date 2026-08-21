
void FUN_015e7db4(long param_1,ulong param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  byte **local_70;
  byte *local_68;
  char *local_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  if ((param_2 & 1) != 0) {
    if (DAT_01d478a0 == (byte *)0x0) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      DAT_01d478a0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.wasm");
    }
    pbVar3 = DAT_01d478a0;
    local_70 = (byte **)0x0;
    if ((*DAT_01d478a0 & 5) != 0) {
      local_50 = (long *)0x0;
      local_48 = (long *)0x0;
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      uVar5 = (**(code **)(*plVar4 + 0x18))
                        (plVar4,0x58,pbVar3,"BaselineFinished",0,0,0,0,0,0,0,&local_50,0);
      plVar4 = local_48;
      local_48 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = local_50;
      local_50 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      local_70 = &local_68;
      local_60 = "BaselineFinished";
      local_68 = pbVar3;
      local_58 = uVar5;
    }
    lVar2 = *(long *)(param_1 + 0x188);
    for (lVar1 = *(long *)(param_1 + 0x180); lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
      local_50 = (long *)((ulong)local_50 & 0xffffffffffffff00);
      plVar4 = *(long **)(lVar1 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_015e80c0;
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_50);
    }
    param_3 = *(int *)(param_1 + 0x19c) == 0 | param_3;
    if ((local_70 != (byte **)0x0) && (*local_68 != 0)) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_68,local_60,local_58);
    }
  }
  if ((*(int *)(param_1 + 0x198) == 0) && ((param_3 & 1) != 0)) {
    if (DAT_01d478a8 == (byte *)0x0) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      DAT_01d478a8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.wasm");
    }
    pbVar3 = DAT_01d478a8;
    local_70 = (byte **)0x0;
    if ((*DAT_01d478a8 & 5) != 0) {
      local_50 = (long *)0x0;
      local_48 = (long *)0x0;
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      uVar5 = (**(code **)(*plVar4 + 0x18))
                        (plVar4,0x58,pbVar3,"TopTierFinished",0,0,0,0,0,0,0,&local_50,0);
      plVar4 = local_48;
      local_48 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = local_50;
      local_50 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      local_70 = &local_68;
      local_60 = "TopTierFinished";
      local_68 = pbVar3;
      local_58 = uVar5;
    }
    plVar4 = *(long **)(param_1 + 0x180);
    plVar8 = *(long **)(param_1 + 0x188);
    if (plVar4 != plVar8) {
      do {
        local_50 = (long *)CONCAT71(local_50._1_7_,1);
        plVar6 = (long *)plVar4[4];
        if (plVar6 == (long *)0x0) {
LAB_015e80c0:
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_50);
        plVar4 = plVar4 + 6;
      } while (plVar8 != plVar4);
      plVar4 = *(long **)(param_1 + 0x180);
      plVar8 = *(long **)(param_1 + 0x188);
joined_r0x015e8038:
      if (plVar8 != plVar4) {
        plVar6 = (long *)plVar8[-2];
        plVar8 = plVar8 + -6;
        if (plVar8 != plVar6) goto code_r0x015e8064;
        pcVar7 = *(code **)(*plVar6 + 0x20);
        goto LAB_015e8048;
      }
    }
    *(long **)(param_1 + 0x188) = plVar4;
    if ((local_70 != (byte **)0x0) && (*local_68 != 0)) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_68,local_60,local_58);
    }
  }
  return;
code_r0x015e8064:
  if (plVar6 != (long *)0x0) {
    pcVar7 = *(code **)(*plVar6 + 0x28);
LAB_015e8048:
    (*pcVar7)();
  }
  goto joined_r0x015e8038;
}

