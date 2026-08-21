
/* void 
   std::__ndk1::__insertion_sort_3<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,
   v8::internal::AtomicSlot>(v8::internal::AtomicSlot, v8::internal::AtomicSlot,
   v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&) */

void std::__ndk1::
     __insertion_sort_3<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
               (uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  
  __sort3<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
            (param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar4 = 0;
    puVar5 = param_1 + 3;
    puVar7 = param_1 + 2;
    do {
      puVar3 = puVar5;
      if (*(uint *)((((long)((ulong)*puVar3 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20)
                   + *param_3 + 7) >> 9 <
          *(uint *)((((long)((ulong)*puVar7 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20)
                   + *param_3 + 7) >> 9) {
        uVar1 = *puVar3;
        lVar2 = lVar4;
        do {
          lVar6 = lVar2;
          *(undefined4 *)((long)param_1 + lVar6 + 0xc) = *(undefined4 *)((long)param_1 + lVar6 + 8);
          puVar5 = param_1;
          if (lVar6 == -8) goto LAB_0111ef88;
          lVar2 = lVar6 + -4;
        } while (*(uint *)(*param_3 + 7 +
                          (((long)((ulong)uVar1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                          0x20)) >> 9 <
                 *(uint *)((((long)((ulong)*(uint *)((long)param_1 + lVar6 + 4) << 0x20) >> 0x21) *
                            0xc00000000 + 0x1c00000000 >> 0x20) + *param_3 + 7) >> 9);
        puVar5 = (uint *)((long)param_1 + lVar6 + 8);
LAB_0111ef88:
        *puVar5 = uVar1;
      }
      lVar4 = lVar4 + 4;
      puVar5 = puVar3 + 1;
      puVar7 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return;
}

