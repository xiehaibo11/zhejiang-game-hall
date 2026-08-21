
/* v8::internal::SourceTextModuleInfoEntry::SourceTextModuleInfoEntryVerify(v8::internal::Isolate*)
    */

void __thiscall
v8::internal::SourceTextModuleInfoEntry::SourceTextModuleInfoEntryVerify
          (SourceTextModuleInfoEntry *this,Isolate *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  TorqueGeneratedClassVerifiers::SourceTextModuleInfoEntryVerify(*(undefined8 *)this);
  uVar1 = *(ulong *)this;
  uVar4 = uVar1 & 0xffffffff00000000;
  uVar3 = uVar4 | 7;
  uVar2 = uVar4 | *(uint *)(uVar1 + 0xb);
  if ((*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40) && (*(int *)(uVar1 + 0xf) < 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","import_name().IsString() implies module_request() >= 0");
  }
  if (((*(ushort *)(uVar3 + *(uint *)((uVar4 | *(uint *)(uVar1 + 3)) - 1)) < 0x40) &&
      (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40)) &&
     (*(int *)(uVar1 + 7) != *(int *)(param_1 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "export_name().IsString() && import_name().IsString() implies local_name().IsUndefined(isolate)"
            );
  }
  return;
}

