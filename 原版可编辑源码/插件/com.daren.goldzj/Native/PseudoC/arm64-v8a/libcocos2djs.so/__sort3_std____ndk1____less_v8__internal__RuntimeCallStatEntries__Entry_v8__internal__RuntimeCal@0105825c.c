
/* unsigned int
   std::__ndk1::__sort3<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,
   v8::internal::RuntimeCallStatEntries::Entry>&,
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>
   > 
   >(std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>
   >, std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,
   v8::internal::RuntimeCallStatEntries::Entry>&) */

uint std::__ndk1::
     __sort3<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
               long param_6)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar6 = *(long *)(param_4 + -0x20);
  if (lVar6 < *(long *)(param_2 + -0x20)) {
    bVar1 = true;
  }
  else if (*(long *)(param_2 + -0x20) < lVar6) {
    bVar1 = false;
  }
  else {
    bVar1 = *(ulong *)(param_4 + -0x18) < *(ulong *)(param_2 + -0x18);
  }
  puVar3 = (undefined8 *)(param_4 + -0x28);
  puVar8 = (undefined8 *)(param_2 + -0x28);
  puVar7 = (undefined8 *)(param_6 + -0x28);
  if (*(long *)(param_6 + -0x20) < lVar6) {
    bVar2 = true;
  }
  else if (lVar6 < *(long *)(param_6 + -0x20)) {
    bVar2 = false;
  }
  else {
    bVar2 = *(ulong *)(param_6 + -0x18) < *(ulong *)(param_4 + -0x18);
  }
  if (bVar1) {
    if (bVar2) {
      uVar4 = *(undefined8 *)(param_2 + -8);
      uVar14 = *(undefined8 *)(param_2 + -0x20);
      uVar12 = *puVar8;
      uVar11 = *(undefined8 *)(param_2 + -0x10);
      uVar9 = *(undefined8 *)(param_2 + -0x18);
      uVar10 = *puVar7;
      uVar15 = *(undefined8 *)(param_6 + -0x10);
      uVar13 = *(undefined8 *)(param_6 + -0x18);
      uVar5 = *(undefined8 *)(param_6 + -8);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_6 + -0x20);
      *puVar8 = uVar10;
      *(undefined8 *)(param_2 + -0x10) = uVar15;
      *(undefined8 *)(param_2 + -0x18) = uVar13;
      *(undefined8 *)(param_2 + -8) = uVar5;
      *(undefined8 *)(param_6 + -0x20) = uVar14;
      *puVar7 = uVar12;
      *(undefined8 *)(param_6 + -0x10) = uVar11;
      *(undefined8 *)(param_6 + -0x18) = uVar9;
      *(undefined8 *)(param_6 + -8) = uVar4;
      return 1;
    }
    uVar4 = *(undefined8 *)(param_2 + -8);
    uVar14 = *(undefined8 *)(param_2 + -0x20);
    uVar12 = *puVar8;
    uVar11 = *(undefined8 *)(param_2 + -0x10);
    uVar9 = *(undefined8 *)(param_2 + -0x18);
    uVar10 = *puVar3;
    uVar15 = *(undefined8 *)(param_4 + -0x10);
    uVar13 = *(undefined8 *)(param_4 + -0x18);
    uVar5 = *(undefined8 *)(param_4 + -8);
    *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_4 + -0x20);
    *puVar8 = uVar10;
    *(undefined8 *)(param_2 + -0x10) = uVar15;
    *(undefined8 *)(param_2 + -0x18) = uVar13;
    *(undefined8 *)(param_2 + -8) = uVar5;
    *(undefined8 *)(param_4 + -0x20) = uVar14;
    *puVar3 = uVar12;
    *(undefined8 *)(param_4 + -0x10) = uVar11;
    *(undefined8 *)(param_4 + -0x18) = uVar9;
    *(undefined8 *)(param_4 + -8) = uVar4;
    if ((*(long *)(param_4 + -0x20) <= *(long *)(param_6 + -0x20)) &&
       ((*(long *)(param_4 + -0x20) < *(long *)(param_6 + -0x20) ||
        (*(ulong *)(param_4 + -0x18) <= *(ulong *)(param_6 + -0x18))))) {
      return 1;
    }
    uVar4 = *(undefined8 *)(param_4 + -8);
    uVar14 = *(undefined8 *)(param_4 + -0x20);
    uVar12 = *puVar3;
    uVar11 = *(undefined8 *)(param_4 + -0x10);
    uVar9 = *(undefined8 *)(param_4 + -0x18);
    uVar10 = *puVar7;
    uVar15 = *(undefined8 *)(param_6 + -0x10);
    uVar13 = *(undefined8 *)(param_6 + -0x18);
    uVar5 = *(undefined8 *)(param_6 + -8);
    *(undefined8 *)(param_4 + -0x20) = *(undefined8 *)(param_6 + -0x20);
    *puVar3 = uVar10;
    *(undefined8 *)(param_4 + -0x10) = uVar15;
    *(undefined8 *)(param_4 + -0x18) = uVar13;
    *(undefined8 *)(param_4 + -8) = uVar5;
    *(undefined8 *)(param_6 + -0x20) = uVar14;
    *puVar7 = uVar12;
    *(undefined8 *)(param_6 + -0x10) = uVar11;
    *(undefined8 *)(param_6 + -0x18) = uVar9;
    *(undefined8 *)(param_6 + -8) = uVar4;
  }
  else {
    if (!bVar2) {
      return 0;
    }
    uVar4 = *(undefined8 *)(param_4 + -8);
    uVar14 = *(undefined8 *)(param_4 + -0x20);
    uVar12 = *puVar3;
    uVar11 = *(undefined8 *)(param_4 + -0x10);
    uVar9 = *(undefined8 *)(param_4 + -0x18);
    uVar10 = *puVar7;
    uVar15 = *(undefined8 *)(param_6 + -0x10);
    uVar13 = *(undefined8 *)(param_6 + -0x18);
    uVar5 = *(undefined8 *)(param_6 + -8);
    *(undefined8 *)(param_4 + -0x20) = *(undefined8 *)(param_6 + -0x20);
    *puVar3 = uVar10;
    *(undefined8 *)(param_4 + -0x10) = uVar15;
    *(undefined8 *)(param_4 + -0x18) = uVar13;
    *(undefined8 *)(param_4 + -8) = uVar5;
    *(undefined8 *)(param_6 + -0x20) = uVar14;
    *puVar7 = uVar12;
    *(undefined8 *)(param_6 + -0x10) = uVar11;
    *(undefined8 *)(param_6 + -0x18) = uVar9;
    *(undefined8 *)(param_6 + -8) = uVar4;
    if (*(long *)(param_2 + -0x20) <= *(long *)(param_4 + -0x20)) {
      if (*(long *)(param_2 + -0x20) < *(long *)(param_4 + -0x20)) {
        return 1;
      }
      if (*(ulong *)(param_2 + -0x18) <= *(ulong *)(param_4 + -0x18)) {
        return 1;
      }
    }
    uVar4 = *(undefined8 *)(param_2 + -8);
    uVar14 = *(undefined8 *)(param_2 + -0x20);
    uVar12 = *puVar8;
    uVar11 = *(undefined8 *)(param_2 + -0x10);
    uVar9 = *(undefined8 *)(param_2 + -0x18);
    uVar10 = *puVar3;
    uVar15 = *(undefined8 *)(param_4 + -0x10);
    uVar13 = *(undefined8 *)(param_4 + -0x18);
    uVar5 = *(undefined8 *)(param_4 + -8);
    *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_4 + -0x20);
    *puVar8 = uVar10;
    *(undefined8 *)(param_2 + -0x10) = uVar15;
    *(undefined8 *)(param_2 + -0x18) = uVar13;
    *(undefined8 *)(param_2 + -8) = uVar5;
    *(undefined8 *)(param_4 + -0x20) = uVar14;
    *puVar3 = uVar12;
    *(undefined8 *)(param_4 + -0x10) = uVar11;
    *(undefined8 *)(param_4 + -0x18) = uVar9;
    *(undefined8 *)(param_4 + -8) = uVar4;
  }
  return 2;
}

