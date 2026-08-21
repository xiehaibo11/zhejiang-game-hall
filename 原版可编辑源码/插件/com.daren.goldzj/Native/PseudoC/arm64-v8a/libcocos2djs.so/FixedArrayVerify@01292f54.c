
/* v8::internal::TorqueGeneratedClassVerifiers::FixedArrayVerify(v8::internal::FixedArray,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::FixedArrayVerify(ulong param_1,Isolate *param_2)

{
  long lVar1;
  long lVar2;
  ulong local_18;
  
  local_18 = param_1;
  FixedArrayBase::FixedArrayBaseVerify((FixedArrayBase *)&local_18,param_2);
  if (*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) - 0x76 < 0xf
     ) {
    if (1 < *(int *)(local_18 + 3)) {
      lVar1 = 0;
      lVar2 = 7;
      do {
        Object::VerifyPointer
                  (param_2,local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 + lVar2));
        lVar1 = lVar1 + 1;
        lVar2 = lVar2 + 4;
      } while (lVar1 < *(int *)(local_18 + 3) >> 1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsFixedArray()");
}

