
uint FUN_00fedb14(pair *param_1,pair *param_2,pair *param_3,pair *param_4,int *param_5,
                 greater *param_6)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = std::__ndk1::
          __sort4<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
                    (param_1,param_2,param_3,param_4,param_6);
  iVar1 = *(int *)param_4;
  iVar2 = *param_5;
  if ((iVar1 < iVar2) ||
     ((uVar5 = uVar4, iVar1 <= iVar2 && (*(ushort *)(param_4 + 4) < *(ushort *)(param_5 + 1))))) {
    *(int *)param_4 = iVar2;
    *param_5 = iVar1;
    uVar3 = *(undefined2 *)(param_4 + 4);
    *(short *)(param_4 + 4) = (short)param_5[1];
    *(undefined2 *)(param_5 + 1) = uVar3;
    iVar1 = *(int *)param_3;
    iVar2 = *(int *)param_4;
    if ((iVar1 < iVar2) ||
       ((uVar5 = uVar4 + 1, iVar1 <= iVar2 && (*(ushort *)(param_3 + 4) < *(ushort *)(param_4 + 4)))
       )) {
      *(int *)param_3 = iVar2;
      *(int *)param_4 = iVar1;
      uVar3 = *(undefined2 *)(param_3 + 4);
      *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_4 + 4);
      *(undefined2 *)(param_4 + 4) = uVar3;
      iVar1 = *(int *)param_2;
      iVar2 = *(int *)param_3;
      if ((iVar1 < iVar2) ||
         ((uVar5 = uVar4 + 2, iVar1 <= iVar2 &&
          (*(ushort *)(param_2 + 4) < *(ushort *)(param_3 + 4))))) {
        *(int *)param_2 = iVar2;
        *(int *)param_3 = iVar1;
        uVar3 = *(undefined2 *)(param_2 + 4);
        *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_3 + 4);
        *(undefined2 *)(param_3 + 4) = uVar3;
        iVar1 = *(int *)param_1;
        iVar2 = *(int *)param_2;
        if ((iVar1 < iVar2) ||
           ((uVar5 = uVar4 + 3, iVar1 <= iVar2 &&
            (*(ushort *)(param_1 + 4) < *(ushort *)(param_2 + 4))))) {
          *(int *)param_1 = iVar2;
          *(int *)param_2 = iVar1;
          uVar3 = *(undefined2 *)(param_1 + 4);
          *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
          *(undefined2 *)(param_2 + 4) = uVar3;
          uVar5 = uVar4 + 4;
        }
      }
    }
  }
  return uVar5;
}

