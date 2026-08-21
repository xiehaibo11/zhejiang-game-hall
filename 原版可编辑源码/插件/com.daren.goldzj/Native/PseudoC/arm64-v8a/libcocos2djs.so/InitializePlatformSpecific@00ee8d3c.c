
/* v8::internal::CallInterfaceDescriptorData::InitializePlatformSpecific(int, v8::internal::Register
   const*) */

void __thiscall
v8::internal::CallInterfaceDescriptorData::InitializePlatformSpecific
          (CallInterfaceDescriptorData *this,int param_1,Register *param_2)

{
  Register *pRVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  *(int *)this = param_1;
  if (param_1 != 0) {
    lVar8 = (long)param_1;
    uVar7 = (lVar8 + (long)param_1 * 2) * 4;
    puVar2 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
    if (puVar2 == (undefined8 *)0x0) {
      plVar3 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar3 + 0x18))();
      puVar2 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
    }
    puVar4 = puVar2 + 1;
    do {
      puVar4[-1] = 0xffffffff;
      *(undefined4 *)puVar4 = 2;
      lVar8 = lVar8 + -1;
      puVar4 = (undefined8 *)((long)puVar4 + 0xc);
    } while (lVar8 != 0);
    *(undefined8 **)(this + 0x18) = puVar2;
    if (0 < param_1) {
      uVar6 = *(undefined8 *)param_2;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8);
      *puVar2 = uVar6;
      if (param_1 != 1) {
        lVar5 = (ulong)(uint)param_1 - 1;
        lVar8 = 0xc;
        do {
          pRVar1 = param_2 + lVar8;
          uVar6 = *(undefined8 *)pRVar1;
          lVar5 = lVar5 + -1;
          puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar8);
          lVar8 = lVar8 + 0xc;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(pRVar1 + 8);
          *puVar2 = uVar6;
        } while (lVar5 != 0);
      }
    }
  }
  return;
}

