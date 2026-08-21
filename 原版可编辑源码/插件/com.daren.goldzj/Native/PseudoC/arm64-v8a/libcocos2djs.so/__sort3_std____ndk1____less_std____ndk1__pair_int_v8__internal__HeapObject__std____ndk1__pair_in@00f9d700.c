
/* unsigned int std::__ndk1::__sort3<std::__ndk1::__less<std::__ndk1::pair<int,
   v8::internal::HeapObject>, std::__ndk1::pair<int, v8::internal::HeapObject> >&,
   std::__ndk1::pair<int, v8::internal::HeapObject>*>(std::__ndk1::pair<int,
   v8::internal::HeapObject>*, std::__ndk1::pair<int, v8::internal::HeapObject>*,
   std::__ndk1::pair<int, v8::internal::HeapObject>*, std::__ndk1::__less<std::__ndk1::pair<int,
   v8::internal::HeapObject>, std::__ndk1::pair<int, v8::internal::HeapObject> >&) */

uint std::__ndk1::
     __sort3<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
               (pair *param_1,pair *param_2,pair *param_3,__less *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)param_1;
  if (iVar1 < iVar2) {
    bVar4 = true;
  }
  else if (iVar2 < iVar1) {
    bVar4 = false;
  }
  else {
    bVar4 = *(uint *)(param_2 + 8) < *(uint *)(param_1 + 8);
  }
  iVar3 = *(int *)param_3;
  if (iVar3 < iVar1) {
    bVar5 = true;
  }
  else if (iVar1 < iVar3) {
    bVar5 = false;
  }
  else {
    bVar5 = *(uint *)(param_3 + 8) < *(uint *)(param_2 + 8);
  }
  if (!bVar4) {
    if (!bVar5) {
      return 0;
    }
    *(int *)param_2 = iVar3;
    *(int *)param_3 = iVar1;
    uVar6 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_3 + 8) = uVar6;
    iVar1 = *(int *)param_2;
    iVar2 = *(int *)param_1;
    if (iVar2 <= iVar1) {
      if (iVar2 < iVar1) {
        return 1;
      }
      if (*(uint *)(param_1 + 8) <= *(uint *)(param_2 + 8)) {
        return 1;
      }
    }
    *(int *)param_1 = iVar1;
    *(int *)param_2 = iVar2;
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = uVar6;
    return 2;
  }
  if (bVar5) {
    *(int *)param_1 = iVar3;
    *(int *)param_3 = iVar2;
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_3 + 8) = uVar6;
    return 1;
  }
  *(int *)param_1 = iVar1;
  *(int *)param_2 = iVar2;
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  iVar1 = *(int *)param_3;
  iVar2 = *(int *)param_2;
  if (iVar2 <= iVar1) {
    if (iVar2 < iVar1) {
      return 1;
    }
    if ((uint)uVar6 <= *(uint *)(param_3 + 8)) {
      return 1;
    }
  }
  *(int *)param_2 = iVar1;
  *(int *)param_3 = iVar2;
  uVar6 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_3 + 8) = uVar6;
  return 2;
}

