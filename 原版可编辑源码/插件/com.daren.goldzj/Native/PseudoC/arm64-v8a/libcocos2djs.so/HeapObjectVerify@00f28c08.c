
/* v8::internal::HeapObject::HeapObjectVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::HeapObject::HeapObjectVerify(HeapObject *this,Isolate *param_1)

{
  ushort uVar1;
  
  TorqueGeneratedClassVerifiers::HeapObjectVerify(*(undefined8 *)this);
  uVar1 = *(ushort *)
           ((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1)) + 7);
  if (uVar1 < 0x43a) {
                    /* WARNING: Could not recover jumptable at 0x00f28c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_00f28c60 + (ulong)*(ushort *)(&DAT_019a95cc + (ulong)uVar1 * 2) * 4))();
    return;
  }
  return;
}

