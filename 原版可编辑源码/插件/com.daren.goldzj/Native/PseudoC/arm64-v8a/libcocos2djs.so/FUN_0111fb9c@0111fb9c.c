
uint FUN_0111fb9c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                 ulong *param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = std::__ndk1::
          __sort4<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
                    ();
  uVar4 = *param_6 & 0xffffffff00000000;
  lVar1 = *param_6 + 7;
  if (*(uint *)((uVar4 | *(uint *)(lVar1 + (int)((*param_5 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9 <
      *(uint *)((uVar4 | *(uint *)(lVar1 + (int)((*param_4 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9) {
    uVar2 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar2;
    uVar4 = *param_6 & 0xffffffff00000000;
    lVar1 = *param_6 + 7;
    if (*(uint *)((uVar4 | *(uint *)(lVar1 + (int)((*param_4 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9 <
        *(uint *)((uVar4 | *(uint *)(lVar1 + (int)((*param_3 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9)
    {
      uVar2 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar2;
      uVar4 = *param_6 & 0xffffffff00000000;
      lVar1 = *param_6 + 7;
      if (*(uint *)((uVar4 | *(uint *)(lVar1 + (int)((*param_3 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9
          < *(uint *)((uVar4 | *(uint *)(lVar1 + (int)((*param_2 & 0x7ffffffe) * 2 + 0x14))) + 7) >>
            9) {
        uVar2 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar2;
        uVar4 = *param_6 & 0xffffffff00000000;
        lVar1 = *param_6 + 7;
        if (*(uint *)((uVar4 | *(uint *)(lVar1 + (int)((*param_2 & 0x7ffffffe) * 2 + 0x14))) + 7) >>
            9 < *(uint *)((uVar4 | *(uint *)(lVar1 + (int)((*param_1 & 0x7ffffffe) * 2 + 0x14))) + 7
                         ) >> 9) {
          uVar2 = *param_1;
          uVar3 = uVar3 + 4;
          *param_1 = *param_2;
          *param_2 = uVar2;
        }
        else {
          uVar3 = uVar3 + 3;
        }
      }
      else {
        uVar3 = uVar3 + 2;
      }
    }
    else {
      uVar3 = uVar3 + 1;
    }
  }
  return uVar3;
}

