
/* unsigned int
   std::__ndk1::__sort3<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,
   v8::internal::AtomicSlot>(v8::internal::AtomicSlot, v8::internal::AtomicSlot,
   v8::internal::AtomicSlot, v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&) */

uint std::__ndk1::
     __sort3<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
               (uint *param_1,uint *param_2,uint *param_3,ulong *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *param_4 & 0xffffffff00000000;
  lVar1 = *param_4 + 7;
  uVar3 = *(uint *)((uVar5 | *(uint *)(lVar1 + (int)((*param_3 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9
  ;
  uVar4 = *(uint *)((uVar5 | *(uint *)(lVar1 + (int)((*param_2 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9
  ;
  if (*(uint *)((uVar5 | *(uint *)(lVar1 + (int)((*param_2 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9 <
      *(uint *)((uVar5 | *(uint *)(lVar1 + (int)((*param_1 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9) {
    uVar2 = *param_1;
    if (uVar3 < uVar4) {
      *param_1 = *param_3;
      *param_3 = uVar2;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = uVar2;
    uVar5 = *param_4 & 0xffffffff00000000;
    lVar1 = *param_4 + 7;
    if (*(uint *)((uVar5 | *(uint *)(lVar1 + (int)((*param_3 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9 <
        *(uint *)((uVar5 | *(uint *)(lVar1 + (int)((*param_2 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9)
    {
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
    uVar5 = *param_4 & 0xffffffff00000000;
    lVar1 = *param_4 + 7;
    if (*(uint *)((uVar5 | *(uint *)(lVar1 + (int)((*param_2 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9 <
        *(uint *)((uVar5 | *(uint *)(lVar1 + (int)((*param_1 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9)
    {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  return 1;
}

