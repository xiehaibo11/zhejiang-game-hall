
/* unsigned int std::__ndk1::__sort3<std::__ndk1::greater<std::__ndk1::pair<int,
   v8::internal::InstanceType> >&, std::__ndk1::pair<int,
   v8::internal::InstanceType>*>(std::__ndk1::pair<int, v8::internal::InstanceType>*,
   std::__ndk1::pair<int, v8::internal::InstanceType>*, std::__ndk1::pair<int,
   v8::internal::InstanceType>*, std::__ndk1::greater<std::__ndk1::pair<int,
   v8::internal::InstanceType> >&) */

uint std::__ndk1::
     __sort3<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
               (pair *param_1,pair *param_2,pair *param_3,greater *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  
  iVar1 = *(int *)param_1;
  iVar2 = *(int *)param_2;
  if (iVar1 < iVar2) {
    bVar6 = true;
  }
  else if (iVar2 < iVar1) {
    bVar6 = false;
  }
  else {
    bVar6 = *(ushort *)(param_1 + 4) < *(ushort *)(param_2 + 4);
  }
  iVar3 = *(int *)param_3;
  if (iVar2 < iVar3) {
    bVar7 = true;
  }
  else if (iVar3 < iVar2) {
    bVar7 = false;
  }
  else {
    bVar7 = *(ushort *)(param_2 + 4) < *(ushort *)(param_3 + 4);
  }
  if (!bVar6) {
    if (!bVar7) {
      return 0;
    }
    *(int *)param_2 = iVar3;
    *(int *)param_3 = iVar2;
    uVar4 = *(undefined2 *)(param_2 + 4);
    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_3 + 4);
    *(undefined2 *)(param_3 + 4) = uVar4;
    iVar1 = *(int *)param_1;
    iVar2 = *(int *)param_2;
    if (iVar2 <= iVar1) {
      if (iVar2 < iVar1) {
        return 1;
      }
      if (*(ushort *)(param_2 + 4) <= *(ushort *)(param_1 + 4)) {
        return 1;
      }
    }
    *(int *)param_1 = iVar2;
    *(int *)param_2 = iVar1;
    uVar4 = *(undefined2 *)(param_1 + 4);
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
    *(undefined2 *)(param_2 + 4) = uVar4;
    return 2;
  }
  if (bVar7) {
    *(int *)param_1 = iVar3;
    *(int *)param_3 = iVar1;
    uVar4 = *(undefined2 *)(param_1 + 4);
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_3 + 4);
    *(undefined2 *)(param_3 + 4) = uVar4;
    return 1;
  }
  *(int *)param_1 = iVar2;
  *(int *)param_2 = iVar1;
  uVar5 = *(ushort *)(param_1 + 4);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(ushort *)(param_2 + 4) = uVar5;
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)param_3;
  if (iVar2 <= iVar1) {
    if (iVar2 < iVar1) {
      return 1;
    }
    if (*(ushort *)(param_3 + 4) <= uVar5) {
      return 1;
    }
  }
  *(int *)param_2 = iVar2;
  *(int *)param_3 = iVar1;
  uVar4 = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_3 + 4);
  *(undefined2 *)(param_3 + 4) = uVar4;
  return 2;
}

