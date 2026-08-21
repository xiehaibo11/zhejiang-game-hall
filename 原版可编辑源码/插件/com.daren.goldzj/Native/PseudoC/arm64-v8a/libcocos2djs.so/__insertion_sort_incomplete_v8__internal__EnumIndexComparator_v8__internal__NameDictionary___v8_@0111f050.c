
/* bool 
   std::__ndk1::__insertion_sort_incomplete<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,
   v8::internal::AtomicSlot>(v8::internal::AtomicSlot, v8::internal::AtomicSlot,
   v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
               (uint *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  
  iVar2 = (int)param_2 - (int)param_1;
  iVar6 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  switch(iVar6 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(uint *)((((long)((ulong)param_2[-1] << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20
                  ) + *param_3 + 7) >> 9 <
        *(uint *)((((long)((ulong)*param_1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20) +
                 *param_3 + 7) >> 9) {
      uVar1 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar1;
      return true;
    }
    break;
  case 3:
    __sort3<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
              (param_1,param_1 + 1,param_2 + -1,param_3);
    return true;
  case 4:
    __sort4<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    return true;
  case 5:
    FUN_0111ed94(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    __sort3<v8::internal::EnumIndexComparator<v8::internal::NameDictionary>&,v8::internal::AtomicSlot>
              (param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      puVar7 = param_1 + 3;
      puVar9 = param_1 + 2;
      do {
        puVar4 = puVar7;
        if (*(uint *)((((long)((ulong)*puVar4 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20
                      ) + *param_3 + 7) >> 9 <
            *(uint *)((((long)((ulong)*puVar9 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >> 0x20
                      ) + *param_3 + 7) >> 9) {
          uVar1 = *puVar4;
          lVar3 = lVar5;
          do {
            lVar8 = lVar3;
            *(undefined4 *)((long)param_1 + lVar8 + 0xc) =
                 *(undefined4 *)((long)param_1 + lVar8 + 8);
            puVar7 = param_1;
            if (lVar8 == -8) goto LAB_0111f13c;
            lVar3 = lVar8 + -4;
          } while (*(uint *)(*param_3 + 7 +
                            (((long)((ulong)uVar1 << 0x20) >> 0x21) * 0xc00000000 + 0x1c00000000 >>
                            0x20)) >> 9 <
                   *(uint *)((((long)((ulong)*(uint *)((long)param_1 + lVar8 + 4) << 0x20) >> 0x21)
                              * 0xc00000000 + 0x1c00000000 >> 0x20) + *param_3 + 7) >> 9);
          puVar7 = (uint *)((long)param_1 + lVar8 + 8);
LAB_0111f13c:
          iVar6 = iVar6 + 1;
          *puVar7 = uVar1;
          if (iVar6 == 8) {
            return puVar4 + 1 == param_2;
          }
        }
        lVar5 = lVar5 + 4;
        puVar7 = puVar4 + 1;
        puVar9 = puVar4;
      } while (puVar4 + 1 != param_2);
    }
  }
  return true;
}

