
void FUN_00fdb304(ObjectVisitor *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ConcurrentBitmap<(v8::internal::AccessMode)1> *pCVar5;
  ulong uVar6;
  ulong local_58;
  
  if (param_3 < param_4) {
    iVar2 = (int)param_2;
    uVar6 = param_3;
    do {
      local_58 = uVar6 + 1;
      uVar4 = (**(code **)(*(long *)param_1 + 0xb8))(param_1);
      if (((uVar4 & 1) == 0) ||
         (*(int *)(local_58 - 1) == *(int *)(*(long *)(param_1 + 0x10) + -0x87c8))) {
        uVar6 = uVar6 + 4;
      }
      else {
        uVar4 = (**(code **)(*(long *)param_1 + 0xb0))(param_1);
        if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMarked(object)");
        }
        if (uVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","current >= next_object_must_be_here_or_later");
        }
        v8::internal::HeapObject::Iterate((HeapObject *)&local_58,param_1);
        iVar3 = v8::internal::HeapObject::SizeFromMap
                          ((HeapObject *)&local_58,
                           local_58 & 0xffffffff00000000 | (ulong)*(uint *)(local_58 - 1));
        param_3 = uVar6 + (long)iVar3;
        pCVar5 = (ConcurrentBitmap<(v8::internal::AccessMode)1> *)
                 (**(code **)(*(long *)param_1 + 0x90))(param_1,param_2);
        iVar3 = (int)uVar6;
        uVar1 = (uint)((int)param_3 - iVar2) >> 2;
        uVar4 = v8::internal::ConcurrentBitmap<(v8::internal::AccessMode)1>::AllBitsSetInRange
                          (pCVar5,(uint)(iVar3 - iVar2) >> 2,uVar1);
        uVar6 = param_3;
        if ((uVar4 & 1) == 0) {
          pCVar5 = (ConcurrentBitmap<(v8::internal::AccessMode)1> *)
                   (**(code **)(*(long *)param_1 + 0x90))(param_1,param_2);
          uVar4 = v8::internal::ConcurrentBitmap<(v8::internal::AccessMode)1>::AllBitsClearInRange
                            (pCVar5,(uint)((8 - iVar2) + iVar3) >> 2,uVar1);
          if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "bitmap(page)->AllBitsSetInRange( page->AddressToMarkbitIndex(current), page->AddressToMarkbitIndex(next_object_must_be_here_or_later)) || bitmap(page)->AllBitsClearInRange( page->AddressToMarkbitIndex(current + kTaggedSize * 2), page->AddressToMarkbitIndex(next_object_must_be_here_or_later))"
                    );
          }
        }
      }
    } while (uVar6 < param_4);
  }
  return;
}

