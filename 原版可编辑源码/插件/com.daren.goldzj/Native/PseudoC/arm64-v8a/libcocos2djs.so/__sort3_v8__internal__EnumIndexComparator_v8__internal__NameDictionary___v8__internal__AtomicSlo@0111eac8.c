
/* unsigned int
   std::__ndk1::__sort3<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,
   v8::internal::AtomicSlot>(v8::internal::AtomicSlot, v8::internal::AtomicSlot,
   v8::internal::AtomicSlot, v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&) */

uint std::__ndk1::
     __sort3<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
               (uint *param_1,uint *param_2,uint *param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *param_4 + 7;
  uVar3 = *(uint *)((((long)((ulong)*param_3 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20)
                   + lVar1) >> 9;
  uVar4 = *(uint *)((((long)((ulong)*param_2 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20)
                   + lVar1) >> 9;
  if (*(uint *)((((long)((ulong)*param_2 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
               lVar1) >> 9 <
      *(uint *)((((long)((ulong)*param_1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
               lVar1) >> 9) {
    uVar2 = *param_1;
    if (uVar3 < uVar4) {
      *param_1 = *param_3;
      *param_3 = uVar2;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = uVar2;
    if (*(uint *)((((long)((ulong)*param_3 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 *param_4 + 7) >> 9 <
        *(uint *)((((long)((ulong)*param_2 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 *param_4 + 7) >> 9) {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      return 2;
    }
  }
  else {
    if (uVar4 <= uVar3) {
      return 0;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    if (*(uint *)((((long)((ulong)*param_2 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 *param_4 + 7) >> 9 <
        *(uint *)((((long)((ulong)*param_1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 *param_4 + 7) >> 9) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  return 1;
}

