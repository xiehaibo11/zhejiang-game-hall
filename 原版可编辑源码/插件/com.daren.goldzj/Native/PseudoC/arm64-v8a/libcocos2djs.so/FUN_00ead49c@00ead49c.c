
/* WARNING: Type propagation algorithm not settling */

void FUN_00ead49c(undefined8 *param_1,Isolate *param_2,ulong *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong local_68;
  
  local_68 = *param_3;
  pIVar1 = param_2 + 0x95a0;
  uVar7 = v8::internal::Script::GetNameOrSourceURL((Script *)&local_68);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(param_2 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar7;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar7);
  }
  uVar7 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0x37);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar1;
    if (puVar9 == *(ulong **)(param_2 + 0x95a8)) {
      puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar7;
  }
  else {
    puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar7);
  }
  uVar7 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0x3b);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar1;
    if (puVar10 == *(ulong **)(param_2 + 0x95a8)) {
      puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)pIVar1 = puVar10 + 1;
    *puVar10 = uVar7;
  }
  else {
    puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar7);
  }
  uVar14 = *(uint *)(*param_3 + 0xb);
  uVar15 = *(uint *)(*param_3 + 0x2f);
  lVar5 = (long)((ulong)uVar14 << 0x20) >> 0x21;
  if (lVar5 + 0x40000000U >> 0x1f == 0) {
    uVar7 = lVar5 << 1;
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)pIVar1;
      if (puVar11 == *(ulong **)(param_2 + 0x95a8)) {
        puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_2);
      }
      *(ulong **)pIVar1 = puVar11 + 1;
      *puVar11 = uVar7;
    }
    else {
      puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar7);
    }
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x2c60);
    *(undefined4 *)(param_2 + 0x2c60) = 5;
    puVar11 = (ulong *)v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                                 ((Factory *)param_2,(double)((int)uVar14 >> 1));
    *(undefined4 *)(param_2 + 0x2c60) = uVar4;
  }
  uVar14 = *(uint *)(*param_3 + 0xf);
  lVar5 = (long)((ulong)uVar14 << 0x20) >> 0x21;
  if (lVar5 + 0x40000000U >> 0x1f == 0) {
    uVar7 = lVar5 << 1;
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)pIVar1;
      if (puVar12 == *(ulong **)(param_2 + 0x95a8)) {
        puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_2);
      }
      *(ulong **)pIVar1 = puVar12 + 1;
      *puVar12 = uVar7;
    }
    else {
      puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar7);
    }
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x2c60);
    *(undefined4 *)(param_2 + 0x2c60) = 5;
    puVar12 = (ulong *)v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                                 ((Factory *)param_2,(double)((int)uVar14 >> 1));
    *(undefined4 *)(param_2 + 0x2c60) = uVar4;
  }
  uVar14 = *(uint *)(*param_3 + 0x1f);
  lVar5 = 0xc0;
  if ((uVar15 & 0x10) != 0) {
    lVar5 = 0xb8;
  }
  lVar6 = (long)((ulong)uVar14 << 0x20) >> 0x21;
  if (lVar6 + 0x40000000U >> 0x1f == 0) {
    uVar7 = lVar6 << 1;
    if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar13 = *(ulong **)pIVar1;
      if (puVar13 == *(ulong **)(param_2 + 0x95a8)) {
        puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_2);
      }
      *(ulong **)pIVar1 = puVar13 + 1;
      *puVar13 = uVar7;
    }
    else {
      puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar7);
    }
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x2c60);
    *(undefined4 *)(param_2 + 0x2c60) = 5;
    puVar13 = (ulong *)v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                                 ((Factory *)param_2,(double)((int)uVar14 >> 1));
    *(undefined4 *)(param_2 + 0x2c60) = uVar4;
  }
  lVar6 = 0xc0;
  if ((uVar15 & 0x20) != 0) {
    lVar6 = 0xb8;
  }
  lVar2 = 0xb8;
  if ((*(uint *)(*param_3 + 0x17) & 0xfffffffe) != 6) {
    lVar2 = 0xc0;
  }
  lVar3 = 0xc0;
  if ((uVar15 & 0x80) != 0) {
    lVar3 = 0xb8;
  }
  *param_1 = puVar8;
  param_1[1] = puVar11;
  param_1[2] = puVar12;
  if (param_2 + lVar5 != (Isolate *)0x0) {
    uVar7 = *(ulong *)(param_2 + lVar5);
    if ((uVar7 & 1) != 0) {
      uVar14 = (uint)((int)uVar7 == *(int *)((uVar7 & 0xffffffff00000000) + 0xb8));
      goto joined_r0x00ead798;
    }
  }
  uVar14 = 0;
joined_r0x00ead798:
  uVar15 = 0;
  if (param_2 + lVar6 != (Isolate *)0x0) {
    uVar7 = *(ulong *)(param_2 + lVar6);
    if ((uVar7 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (uint)((int)uVar7 == *(int *)((uVar7 & 0xffffffff00000000) + 0xb8)) << 1;
    }
  }
  if (param_2 + lVar2 == (Isolate *)0x0) {
    uVar16 = 0;
    uVar17 = 0;
  }
  else {
    uVar16 = (uint)(param_2 + lVar3);
    uVar7 = *(ulong *)(param_2 + lVar2);
    if ((uVar7 & 1) == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = (uint)((int)uVar7 == *(int *)((uVar7 & 0xffffffff00000000) + 0xb8)) << 2;
    }
  }
  if (param_2 + lVar3 != (Isolate *)0x0) {
    uVar7 = *(ulong *)(param_2 + lVar3);
    if ((uVar7 & 1) == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (uint)((int)uVar7 == *(int *)((uVar7 & 0xffffffff00000000) + 0xb8)) << 3;
    }
  }
  param_1[4] = puVar13;
  param_1[5] = puVar9;
  *(uint *)(param_1 + 3) = uVar15 | uVar14 | uVar17 | uVar16;
  param_1[6] = puVar10;
  return;
}

