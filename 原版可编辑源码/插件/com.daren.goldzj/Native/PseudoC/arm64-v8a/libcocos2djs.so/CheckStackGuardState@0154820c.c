
/* v8::internal::NativeRegExpMacroAssembler::CheckStackGuardState(v8::internal::Isolate*, int,
   v8::internal::RegExp::CallOrigin, unsigned long*, v8::internal::Code, unsigned long*, unsigned
   char const**, unsigned char const**) */

undefined4
v8::internal::NativeRegExpMacroAssembler::CheckStackGuardState
          (Isolate *param_1,undefined4 param_2,int param_3,long *param_4,ulong param_5,
          ulong *param_6,long *param_7,long *param_8)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ushort uVar4;
  bool bVar5;
  Isolate *pIVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  undefined4 uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  Isolate *local_70;
  undefined1 auStack_68 [8];
  
  local_70 = param_1;
  uVar8 = StackLimitCheck::JsHasOverflowed((StackLimitCheck *)&local_70,0);
  pIVar1 = local_70;
  if (param_3 == 1) {
    if ((uVar8 & 1) == 0) {
      uVar8 = GetCurrentStackPosition();
      uVar12 = 0xfffffffe;
      if (*(ulong *)(pIVar1 + 0x68) <= uVar8) {
        uVar12 = 0;
      }
    }
    else {
      uVar12 = 0xffffffff;
    }
  }
  else {
    pIVar1 = param_1 + 0x95a0;
    puVar2 = *(ulong **)pIVar1;
    puVar3 = *(ulong **)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = puVar2;
      if (puVar3 == puVar2) {
        puVar9 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar9 + 1;
      *puVar9 = param_5;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_5);
    }
    uVar16 = *param_6;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)pIVar1;
      if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
        puVar10 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar10 + 1;
      *puVar10 = uVar16;
    }
    else {
      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
      uVar16 = *puVar10;
    }
    while( true ) {
      pIVar6 = local_70;
      uVar4 = *(ushort *)((uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 - 1)) + 7);
      if ((uVar4 & 9) == 0) break;
      if ((uVar4 & 9) == 8) {
        bVar5 = true;
        goto joined_r0x01548368;
      }
      uVar16 = uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 0xb);
    }
    bVar5 = false;
joined_r0x01548368:
    if ((uVar8 & 1) == 0) {
      uVar8 = GetCurrentStackPosition();
      if ((uVar8 < *(ulong *)(pIVar6 + 0x68)) &&
         (uVar7 = StackGuard::HandleInterrupts((StackGuard *)(param_1 + 0x48)), (uVar7 & 1) != 0)) {
        iVar13 = -(uint)(uVar7 == *(uint *)(param_1 + 0x180));
      }
      else {
        iVar13 = 0;
      }
    }
    else {
      Isolate::StackOverflow(param_1);
      iVar13 = -1;
    }
    if ((int)*puVar9 != (int)param_5) {
      *param_4 = (*puVar9 - param_5) + *param_4;
    }
    if (iVar13 == 0) {
      uVar8 = *puVar10;
      while( true ) {
        uVar4 = *(ushort *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 7);
        if ((uVar4 & 9) == 8) break;
        if ((uVar4 & 9) == 0) {
          if (!bVar5) goto LAB_01548410;
          goto LAB_01548450;
        }
        uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
      }
      if (bVar5) {
LAB_01548410:
        *param_6 = *puVar10;
        lVar14 = *param_8;
        lVar15 = *param_7;
        lVar11 = StringCharacterPosition(*puVar10,param_2,auStack_68);
        uVar12 = 0;
        *param_7 = lVar11;
        *param_8 = lVar11 + (lVar14 - lVar15);
      }
      else {
LAB_01548450:
        uVar12 = 0xfffffffe;
      }
    }
    else {
      uVar12 = 0xffffffff;
    }
    if (param_1 != (Isolate *)0x0) {
      *(ulong **)pIVar1 = puVar2;
      *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
      if (*(ulong **)(param_1 + 0x95a8) != puVar3) {
        *(ulong **)(param_1 + 0x95a8) = puVar3;
        HandleScope::DeleteExtensions(param_1);
      }
    }
  }
  return uVar12;
}

