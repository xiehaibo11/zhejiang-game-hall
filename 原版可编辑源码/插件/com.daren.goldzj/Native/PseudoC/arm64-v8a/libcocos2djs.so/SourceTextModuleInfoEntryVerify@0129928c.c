
/* v8::internal::TorqueGeneratedClassVerifiers::SourceTextModuleInfoEntryVerify(v8::internal::SourceTextModuleInfoEntry,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::SourceTextModuleInfoEntryVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x6a) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsSourceTextModuleInfoEntry()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","export_name__value.IsString() || export_name__value.IsOddball()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((uVar3 = uVar3 | 7, 0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","local_name__value.IsString() || local_name__value.IsOddball()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((uVar3 = uVar3 | 7, 0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","import_name__value.IsString() || import_name__value.IsOddball()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","module_request__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x13);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","cell_index__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","beg_pos__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x1b);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","end_pos__value.IsSmi()");
}

