
/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<std::__ndk1::pair<int,
   v8::internal::HeapObject>, std::__ndk1::pair<int, v8::internal::HeapObject> >&,
   std::__ndk1::pair<int, v8::internal::HeapObject>*>(std::__ndk1::pair<int,
   v8::internal::HeapObject>*, std::__ndk1::pair<int, v8::internal::HeapObject>*,
   std::__ndk1::__less<std::__ndk1::pair<int, v8::internal::HeapObject>, std::__ndk1::pair<int,
   v8::internal::HeapObject> >&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
               (pair *param_1,pair *param_2,__less *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  pair *ppVar5;
  undefined8 uVar6;
  pair *ppVar7;
  long lVar8;
  long lVar9;
  pair *ppVar10;
  undefined8 uVar11;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    iVar1 = *(int *)(param_2 + -0x10);
    iVar4 = *(int *)param_1;
    if ((iVar1 < iVar4) || ((iVar1 <= iVar4 && (*(uint *)(param_2 + -8) < *(uint *)(param_1 + 8)))))
    {
      *(int *)param_1 = iVar1;
      *(int *)(param_2 + -0x10) = iVar4;
      uVar6 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -8) = uVar6;
      return true;
    }
    break;
  case 3:
    __sort3<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
              (param_1,param_1 + 0x10,param_2 + -0x10,param_3);
    break;
  case 4:
    __sort4<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
              (param_1,param_1 + 0x10,param_1 + 0x20,param_2 + -0x10,param_3);
    break;
  case 5:
    FUN_00f9d99c(param_1,param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,param_2 + -0x10);
    break;
  default:
    __sort3<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
              (param_1,param_1 + 0x10,param_1 + 0x20,param_3);
    if (param_1 + 0x30 != param_2) {
      lVar3 = 0;
      iVar4 = 0;
      ppVar10 = param_1 + 0x30;
      ppVar7 = param_1 + 0x20;
      do {
        ppVar5 = ppVar10;
        iVar1 = *(int *)ppVar5;
        iVar2 = *(int *)ppVar7;
        if (iVar1 < iVar2) {
          uVar6 = *(undefined8 *)(ppVar5 + 8);
LAB_00f9dc38:
          *(int *)ppVar5 = iVar2;
          ppVar10 = ppVar7 + 8;
          *(undefined8 *)(ppVar5 + 8) = *(undefined8 *)ppVar10;
          lVar9 = lVar3;
          if (ppVar7 != param_1) {
            do {
              iVar2 = *(int *)(param_1 + lVar9 + 0x10);
              if (iVar1 < iVar2) {
                uVar11 = *(undefined8 *)(param_1 + lVar9 + 0x18);
              }
              else if ((iVar2 < iVar1) ||
                      (uVar11 = *(undefined8 *)(param_1 + lVar9 + 0x18), (uint)uVar11 <= (uint)uVar6
                      )) break;
              *(int *)(param_1 + lVar9 + 0x20) = iVar2;
              lVar8 = lVar9 + -0x10;
              *(undefined8 *)(param_1 + lVar9 + 0x28) = uVar11;
              lVar9 = lVar8;
            } while (lVar8 != -0x20);
            ppVar10 = param_1 + lVar9 + 0x28;
            ppVar7 = param_1 + lVar9 + 0x20;
          }
          iVar4 = iVar4 + 1;
          *(int *)ppVar7 = iVar1;
          *(undefined8 *)ppVar10 = uVar6;
          if (iVar4 == 8) {
            return ppVar5 + 0x10 == param_2;
          }
        }
        else if ((iVar1 <= iVar2) &&
                (uVar6 = *(undefined8 *)(ppVar5 + 8), (uint)uVar6 < *(uint *)(ppVar7 + 8)))
        goto LAB_00f9dc38;
        lVar3 = lVar3 + 0x10;
        ppVar10 = ppVar5 + 0x10;
        ppVar7 = ppVar5;
      } while (ppVar5 + 0x10 != param_2);
    }
  }
  return true;
}

