
/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<unsigned long, unsigned long>&,
   v8::internal::UnalignedSlot<unsigned long> >(v8::internal::UnalignedSlot<unsigned long>,
   v8::internal::UnalignedSlot<unsigned long>, std::__ndk1::__less<unsigned long, unsigned long>&)
    */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
               (ulong *param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  
  switch((ulong)(long)((int)param_2 - (int)param_1) >> 3 & 0xffffffff) {
  case 0:
  case 1:
    break;
  case 2:
    uVar5 = *param_1;
    if (param_2[-1] < uVar5) {
      *param_1 = param_2[-1];
      param_2[-1] = uVar5;
      return true;
    }
    break;
  case 3:
    __sort3<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
              (param_1,param_1 + 1,param_2 + -1,param_3);
    return true;
  case 4:
    __sort4<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    return true;
  case 5:
    FUN_015b5868(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    __sort3<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
              (param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      iVar3 = 0;
      lVar4 = 0x10;
      puVar6 = param_1 + 3;
      puVar9 = param_1 + 2;
      do {
        puVar2 = puVar6;
        uVar5 = *puVar2;
        uVar7 = *puVar9;
        lVar1 = lVar4;
        if (uVar5 < uVar7) {
          do {
            lVar8 = lVar1;
            *(ulong *)((long)param_1 + lVar8 + 8) = uVar7;
            puVar6 = param_1;
            if (lVar8 == 0) goto LAB_015b59cc;
            uVar7 = *(ulong *)((long)param_1 + lVar8 + -8);
            lVar1 = lVar8 + -8;
          } while (uVar5 < uVar7);
          puVar6 = (ulong *)((long)param_1 + lVar8);
LAB_015b59cc:
          iVar3 = iVar3 + 1;
          *puVar6 = uVar5;
          if (iVar3 == 8) {
            return puVar2 + 1 == param_2;
          }
        }
        lVar4 = lVar4 + 8;
        puVar6 = puVar2 + 1;
        puVar9 = puVar2;
      } while (puVar2 + 1 != param_2);
    }
  }
  return true;
}

