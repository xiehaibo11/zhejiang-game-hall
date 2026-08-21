
uint FUN_0111ed94(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                 long *param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = std::__ndk1::
          __sort4<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
                    ();
  if (*(uint *)((((long)((ulong)*param_5 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
               *param_6 + 7) >> 9 <
      *(uint *)((((long)((ulong)*param_4 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
               *param_6 + 7) >> 9) {
    uVar1 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar1;
    if (*(uint *)((((long)((ulong)*param_4 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 *param_6 + 7) >> 9 <
        *(uint *)((((long)((ulong)*param_3 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 *param_6 + 7) >> 9) {
      uVar1 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar1;
      if (*(uint *)((((long)((ulong)*param_3 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20)
                   + *param_6 + 7) >> 9 <
          *(uint *)((((long)((ulong)*param_2 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20)
                   + *param_6 + 7) >> 9) {
        uVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar1;
        if (*(uint *)((((long)((ulong)*param_2 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                      0x20) + *param_6 + 7) >> 9 <
            *(uint *)((((long)((ulong)*param_1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                      0x20) + *param_6 + 7) >> 9) {
          uVar1 = *param_1;
          uVar2 = uVar2 + 4;
          *param_1 = *param_2;
          *param_2 = uVar1;
        }
        else {
          uVar2 = uVar2 + 3;
        }
      }
      else {
        uVar2 = uVar2 + 2;
      }
    }
    else {
      uVar2 = uVar2 + 1;
    }
  }
  return uVar2;
}

