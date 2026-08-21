
uint FUN_00f9d99c(pair *param_1,pair *param_2,pair *param_3,pair *param_4,int *param_5,
                 __less *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar3 = std::__ndk1::
          __sort4<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
                    (param_1,param_2,param_3,param_4,param_6);
  iVar1 = *param_5;
  iVar2 = *(int *)param_4;
  if ((iVar1 < iVar2) ||
     ((uVar4 = uVar3, iVar1 <= iVar2 && ((uint)param_5[2] < *(uint *)(param_4 + 8))))) {
    *(int *)param_4 = iVar1;
    *param_5 = iVar2;
    uVar5 = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)(param_5 + 2) = uVar5;
    iVar1 = *(int *)param_4;
    iVar2 = *(int *)param_3;
    if ((iVar1 < iVar2) ||
       ((uVar4 = uVar3 + 1, iVar1 <= iVar2 && (*(uint *)(param_4 + 8) < *(uint *)(param_3 + 8))))) {
      *(int *)param_3 = iVar1;
      *(int *)param_4 = iVar2;
      uVar5 = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)(param_4 + 8) = uVar5;
      iVar1 = *(int *)param_3;
      iVar2 = *(int *)param_2;
      if ((iVar1 < iVar2) ||
         ((uVar4 = uVar3 + 2, iVar1 <= iVar2 && (*(uint *)(param_3 + 8) < *(uint *)(param_2 + 8)))))
      {
        *(int *)param_2 = iVar1;
        *(int *)param_3 = iVar2;
        uVar5 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = uVar5;
        iVar1 = *(int *)param_2;
        iVar2 = *(int *)param_1;
        if ((iVar1 < iVar2) ||
           ((uVar4 = uVar3 + 3, iVar1 <= iVar2 && (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8)))
           )) {
          *(int *)param_1 = iVar1;
          *(int *)param_2 = iVar2;
          uVar5 = *(undefined8 *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(param_2 + 8) = uVar5;
          uVar4 = uVar3 + 4;
        }
      }
    }
  }
  return uVar4;
}

