
/* v8::internal::TurboAssemblerBase::IndirectLoadConstant(v8::internal::Register,
   v8::internal::Handle<v8::internal::HeapObject>) */

void v8::internal::TurboAssemblerBase::IndirectLoadConstant
               (long *param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  int local_34;
  
  if ((char)param_1[0x31] != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","root_array_available_");
  }
  lVar2 = param_1[0x2f];
  if ((param_4 < (long *)(lVar2 + 0x1010U)) && ((long *)(lVar2 + 0x80U) <= param_4)) {
    uVar1 = (ulong)((long)param_4 - (long)(lVar2 + 0x80U)) >> 3;
    pcVar3 = *(code **)(*param_1 + 0x58);
  }
  else {
    uVar1 = Builtins::IsBuiltinHandle((Builtins *)(lVar2 + 0x9e00),param_4,&local_34);
    if ((uVar1 & 1) == 0) {
      plVar4 = (long *)param_1[0x30];
      if (((param_4 == plVar4) ||
          (((param_4 != (long *)0x0 && (plVar4 != (long *)0x0)) && (*param_4 == *plVar4)))) &&
         (*(uint *)((long)param_1 + 0x18c) < 0x5bc)) {
        (**(code **)(*param_1 + 0x50))
                  (param_1,param_2,param_3,*(uint *)((long)param_1 + 0x18c) * 8 + 0x5a58);
        return;
      }
      if (*(BuiltinsConstantsTableBuilder **)(param_1[0x2f] + 0xc678) ==
          (BuiltinsConstantsTableBuilder *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","isolate()->IsGeneratingEmbeddedBuiltins()");
      }
      uVar1 = BuiltinsConstantsTableBuilder::AddObject
                        (*(BuiltinsConstantsTableBuilder **)(param_1[0x2f] + 0xc678),param_4);
      uVar1 = uVar1 & 0xffffffff;
      pcVar3 = *(code **)(*param_1 + 0x40);
    }
    else {
      pcVar3 = *(code **)(*param_1 + 0x50);
      uVar1 = (ulong)(local_34 * 8 + 0x5a58);
    }
  }
  (*pcVar3)(param_1,param_2,param_3,uVar1);
  return;
}

