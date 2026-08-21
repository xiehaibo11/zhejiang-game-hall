
/* v8::internal::TorqueGeneratedClassVerifiers::SyntheticModuleVerify(v8::internal::SyntheticModule,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::SyntheticModuleVerify
               (ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  Module::ModuleVerify((Module *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x45) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsSyntheticModule()");
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","name__value.IsString()");
  }
  uVar1 = *(uint *)(local_38 + 0x1b);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (0xe < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","export_names__value.IsFixedArray()");
  }
  uVar1 = *(uint *)(local_38 + 0x1f);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x46)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","evaluation_steps__value.IsForeign()");
}

