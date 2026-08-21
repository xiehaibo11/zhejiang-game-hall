
/* bool 
   std::__ndk1::__insertion_sort_incomplete<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,
   v8::internal::AtomicSlot>(v8::internal::AtomicSlot, v8::internal::AtomicSlot,
   v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
               (uint *param_1,uint *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  
  iVar4 = (int)param_2 - (int)param_1;
  iVar7 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar7 = iVar4;
  }
  switch(iVar7 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    uVar10 = *param_3 & 0xffffffff00000000;
    lVar6 = *param_3 + 7;
    if (*(uint *)((uVar10 | *(uint *)(lVar6 + (int)((param_2[-1] & 0x7ffffffe) * 2 + 0x14))) + 7) >>
        9 < *(uint *)((uVar10 | *(uint *)(lVar6 + (int)((*param_1 & 0x7ffffffe) * 2 + 0x14))) + 7)
            >> 9) {
      uVar3 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar3;
      return true;
    }
    break;
  case 3:
    __sort3<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
              (param_1,param_1 + 1,param_2 + -1,param_3);
    return true;
  case 4:
    __sort4<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    return true;
  case 5:
    FUN_0111fb9c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    __sort3<v8::internal::EnumIndexComparator<v8::internal::GlobalDictionary>&,v8::internal::AtomicSlot>
              (param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      puVar8 = param_1 + 3;
      puVar11 = param_1 + 2;
      do {
        puVar5 = puVar8;
        uVar10 = *param_3 & 0xffffffff00000000;
        lVar1 = *param_3 + 7;
        if (*(uint *)((uVar10 | *(uint *)(lVar1 + (int)((*puVar5 & 0x7ffffffe) * 2 + 0x14))) + 7) >>
            9 < *(uint *)((uVar10 | *(uint *)(lVar1 + (int)((*puVar11 & 0x7ffffffe) * 2 + 0x14))) +
                         7) >> 9) {
          uVar3 = *puVar5;
          lVar1 = lVar6;
          do {
            lVar9 = lVar1;
            *(undefined4 *)((long)param_1 + lVar9 + 0xc) =
                 *(undefined4 *)((long)param_1 + lVar9 + 8);
            puVar8 = param_1;
            if (lVar9 == -8) goto LAB_0111ffac;
            lVar2 = *param_3 + 7;
            uVar10 = *param_3 & 0xffffffff00000000;
            lVar1 = lVar9 + -4;
          } while (*(uint *)((uVar10 | *(uint *)(lVar2 + (int)((uVar3 & 0x7ffffffe) * 2 + 0x14))) +
                            7) >> 9 <
                   *(uint *)((uVar10 | *(uint *)(lVar2 + (int)((*(uint *)((long)param_1 + lVar9 + 4)
                                                               & 0x7ffffffe) * 2 + 0x14))) + 7) >> 9
                  );
          puVar8 = (uint *)((long)param_1 + lVar9 + 8);
LAB_0111ffac:
          iVar7 = iVar7 + 1;
          *puVar8 = uVar3;
          if (iVar7 == 8) {
            return puVar5 + 1 == param_2;
          }
        }
        lVar6 = lVar6 + 4;
        puVar8 = puVar5 + 1;
        puVar11 = puVar5;
      } while (puVar5 + 1 != param_2);
    }
  }
  return true;
}

