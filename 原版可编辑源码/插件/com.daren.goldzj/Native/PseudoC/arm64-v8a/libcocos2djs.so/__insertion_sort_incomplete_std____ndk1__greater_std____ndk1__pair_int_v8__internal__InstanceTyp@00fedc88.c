
/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::greater<std::__ndk1::pair<int,
   v8::internal::InstanceType> >&, std::__ndk1::pair<int,
   v8::internal::InstanceType>*>(std::__ndk1::pair<int, v8::internal::InstanceType>*,
   std::__ndk1::pair<int, v8::internal::InstanceType>*, std::__ndk1::greater<std::__ndk1::pair<int,
   v8::internal::InstanceType> >&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
               (pair *param_1,pair *param_2,greater *param_3)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  pair *ppVar6;
  undefined8 uVar7;
  pair *ppVar8;
  long lVar9;
  long lVar10;
  pair *ppVar11;
  ushort uVar12;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar4 = *(int *)param_1;
    iVar5 = *(int *)(param_2 + -8);
    if ((iVar4 < iVar5) ||
       ((iVar4 <= iVar5 && (*(ushort *)(param_1 + 4) < *(ushort *)(param_2 + -4))))) {
      *(int *)param_1 = iVar5;
      *(int *)(param_2 + -8) = iVar4;
      uVar2 = *(undefined2 *)(param_1 + 4);
      *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + -4);
      *(undefined2 *)(param_2 + -4) = uVar2;
      return true;
    }
    break;
  case 3:
    __sort3<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
              (param_1,param_1 + 8,param_2 + -8,param_3);
    break;
  case 4:
    __sort4<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
              (param_1,param_1 + 8,param_1 + 0x10,param_2 + -8,param_3);
    break;
  case 5:
    FUN_00fedb14(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,param_2 + -8);
    break;
  default:
    __sort3<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
              (param_1,param_1 + 8,param_1 + 0x10,param_3);
    if (param_1 + 0x18 != param_2) {
      lVar3 = 0;
      iVar4 = 0;
      ppVar11 = param_1 + 0x18;
      ppVar8 = param_1 + 0x10;
      do {
        ppVar6 = ppVar11;
        iVar5 = *(int *)ppVar8;
        if ((iVar5 < *(int *)ppVar6) ||
           ((iVar5 <= *(int *)ppVar6 && (*(ushort *)(ppVar8 + 4) < *(ushort *)(ppVar6 + 4))))) {
          uVar7 = *(undefined8 *)ppVar6;
          *(int *)ppVar6 = iVar5;
          ppVar11 = ppVar8 + 4;
          *(undefined2 *)(ppVar6 + 4) = *(undefined2 *)ppVar11;
          iVar5 = (int)uVar7;
          lVar10 = lVar3;
          if (ppVar8 != param_1) {
            do {
              iVar1 = *(int *)(param_1 + lVar10 + 8);
              if (iVar1 < iVar5) {
                uVar12 = *(ushort *)(param_1 + lVar10 + 0xc);
              }
              else if ((iVar5 < iVar1) ||
                      (uVar12 = *(ushort *)(param_1 + lVar10 + 0xc),
                      ((uint)((ulong)uVar7 >> 0x20) & 0xffff) <= (uint)uVar12)) break;
              *(int *)(param_1 + lVar10 + 0x10) = iVar1;
              lVar9 = lVar10 + -8;
              *(ushort *)(param_1 + lVar10 + 0x14) = uVar12;
              lVar10 = lVar9;
            } while (lVar9 != -0x10);
            ppVar11 = param_1 + lVar10 + 0x14;
            ppVar8 = param_1 + lVar10 + 0x10;
          }
          iVar4 = iVar4 + 1;
          *(int *)ppVar8 = iVar5;
          *(short *)ppVar11 = (short)((ulong)uVar7 >> 0x20);
          if (iVar4 == 8) {
            return ppVar6 + 8 == param_2;
          }
        }
        lVar3 = lVar3 + 8;
        ppVar11 = ppVar6 + 8;
        ppVar8 = ppVar6;
      } while (ppVar6 + 8 != param_2);
    }
  }
  return true;
}

