
/* v8::internal::CallInterfaceDescriptorData::InitializePlatformIndependent(v8::base::Flags<v8::internal::CallInterfaceDescriptorData::Flag,
   int>, int, int, v8::internal::MachineType const*, int) */

void v8::internal::CallInterfaceDescriptorData::InitializePlatformIndependent
               (long param_1,undefined4 param_2,int param_3,int param_4,undefined2 *param_5)

{
  uint uVar1;
  undefined2 *puVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar1 = param_4 + param_3;
  uVar9 = (ulong)(int)uVar1;
  *(int *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 4) = param_3;
  if (param_5 != (undefined2 *)0x0) {
    uVar7 = uVar9 * 2;
    if (CARRY8(uVar9,uVar9)) {
      uVar7 = 0xffffffffffffffff;
    }
    puVar2 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
    if (puVar2 == (undefined2 *)0x0) {
      plVar3 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar3 + 0x18))();
      puVar2 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
      if (puVar2 == (undefined2 *)0x0) goto LAB_00ee8fbc;
    }
    if (uVar1 == 0) {
      *(undefined2 **)(param_1 + 0x20) = puVar2;
      return;
    }
    memset(puVar2,0,uVar9 << 1);
    *(undefined2 **)(param_1 + 0x20) = puVar2;
    if ((int)uVar1 < 1) {
      return;
    }
    *puVar2 = *param_5;
    if (uVar1 == 1) {
      return;
    }
    uVar9 = 1;
    do {
      lVar8 = uVar9 * 2;
      puVar2 = param_5 + uVar9;
      uVar9 = uVar9 + 1;
      *(undefined2 *)(*(long *)(param_1 + 0x20) + lVar8) = *puVar2;
    } while (uVar1 != uVar9);
    return;
  }
  pvVar4 = operator_new__(uVar9 << 1,(nothrow_t *)&std::nothrow);
  if (pvVar4 == (void *)0x0) {
    plVar3 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar3 + 0x18))();
    pvVar4 = operator_new__(uVar9 << 1,(nothrow_t *)&std::nothrow);
    if (pvVar4 == (void *)0x0) {
LAB_00ee8fbc:
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  if (uVar1 != 0) {
    if (uVar1 < 0x10) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar9 & 0xfffffffffffffff0;
      puVar6 = (undefined8 *)((long)pvVar4 + 0x10);
      uVar7 = uVar5;
      do {
        puVar6[-1] = 0x708070807080708;
        puVar6[-2] = 0x708070807080708;
        puVar6[1] = 0x708070807080708;
        *puVar6 = 0x708070807080708;
        uVar7 = uVar7 - 0x10;
        puVar6 = puVar6 + 4;
      } while (uVar7 != 0);
      if (uVar5 == uVar9) goto LAB_00ee8fa4;
    }
    lVar8 = uVar9 - uVar5;
    puVar2 = (undefined2 *)((long)pvVar4 + uVar5 * 2);
    do {
      lVar8 = lVar8 + -1;
      *puVar2 = 0x708;
      puVar2 = puVar2 + 1;
    } while (lVar8 != 0);
  }
LAB_00ee8fa4:
  *(void **)(param_1 + 0x20) = pvVar4;
  return;
}

