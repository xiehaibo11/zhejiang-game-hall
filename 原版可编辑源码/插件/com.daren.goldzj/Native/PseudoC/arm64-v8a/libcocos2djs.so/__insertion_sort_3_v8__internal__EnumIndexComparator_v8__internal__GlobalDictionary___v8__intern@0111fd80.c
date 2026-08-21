
/* void 
   std::__ndk1::__insertion_sort_3<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,
   v8::internal::AtomicSlot>(v8::internal::AtomicSlot, v8::internal::AtomicSlot,
   v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&) */

void std::__ndk1::
     __insertion_sort_3<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
               (uint *param_1,uint *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  
  __sort3<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
            (param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar5 = 0;
    puVar6 = param_1 + 3;
    puVar9 = param_1 + 2;
    do {
      puVar4 = puVar6;
      uVar8 = *param_3 & 0xffffffff00000000;
      lVar1 = *param_3 + 7;
      if (*(uint *)((uVar8 | *(uint *)(lVar1 + (int)((*puVar4 & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9
          < *(uint *)((uVar8 | *(uint *)(lVar1 + (int)((*puVar9 & 0x7ffffffe) * 2 + 0x14))) + 7) >>
            9) {
        uVar3 = *puVar4;
        lVar1 = lVar5;
        do {
          lVar7 = lVar1;
          *(undefined4 *)((long)param_1 + lVar7 + 0xc) = *(undefined4 *)((long)param_1 + lVar7 + 8);
          puVar6 = param_1;
          if (lVar7 == -8) goto LAB_0111fdc8;
          lVar2 = *param_3 + 7;
          uVar8 = *param_3 & 0xffffffff00000000;
          lVar1 = lVar7 + -4;
        } while (*(uint *)((uVar8 | *(uint *)(lVar2 + (int)((uVar3 & 0x7ffffffe) * 2 + 0x14))) + 7)
                 >> 9 < *(uint *)((uVar8 | *(uint *)(lVar2 + (int)((*(uint *)((long)param_1 +
                                                                             lVar7 + 4) & 0x7ffffffe
                                                                   ) * 2 + 0x14))) + 7) >> 9);
        puVar6 = (uint *)((long)param_1 + lVar7 + 8);
LAB_0111fdc8:
        *puVar6 = uVar3;
      }
      lVar5 = lVar5 + 4;
      puVar6 = puVar4 + 1;
      puVar9 = puVar4;
    } while (puVar4 + 1 != param_2);
  }
  return;
}

