
/* v8::internal::TranslatedState::EnsurePropertiesAllocatedAndMarked(v8::internal::TranslatedValue*,
   v8::internal::Handle<v8::internal::Map>) */

void __thiscall
v8::internal::TranslatedState::EnsurePropertiesAllocatedAndMarked
          (TranslatedState *this,char *param_1,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  Isolate *pIVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  Representation local_28 [8];
  
  if (param_1[1] != '\0') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "TranslatedValue::kUninitialized == properties_slot->materialization_state()");
  }
  if (*param_1 == '\b') {
    iVar6 = *(int *)(param_1 + 0x1c) * 4 + -8;
  }
  else {
    iVar6 = -8;
  }
  plVar3 = (long *)Factory::NewByteArray(*(Factory **)(this + 0x18),iVar6,1);
  lVar7 = *plVar3;
  if (1 < *(int *)(lVar7 + 3)) {
    lVar9 = 0;
    do {
      *(undefined1 *)(lVar7 + lVar9 + 7) = 0;
      lVar7 = *plVar3;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar7 + 3) >> 1);
  }
  param_1[1] = '\x01';
  *(long **)(param_1 + 0x10) = plVar3;
  pIVar8 = *(Isolate **)(this + 0x18);
  uVar13 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0x17);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar13;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar13);
  }
  uVar11 = *param_3;
  uVar13 = (ulong)(*(uint *)(uVar11 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar13 != 0) {
    lVar7 = 0xc;
    while( true ) {
      uVar1 = *(int *)((uVar11 & 0xffffffff00000000 | lVar7 + 7U) + (ulong)*(uint *)(uVar11 + 0x17))
              >> 1;
      uVar2 = uVar1 >> 0x13 & 0x3ff;
      iVar6 = (uint)*(byte *)(uVar11 + 3) - (uint)*(byte *)(uVar11 + 4);
      if ((int)uVar2 < iVar6) {
        uVar12 = (ulong)*(byte *)(uVar11 + 4) << 0x1c;
        uVar10 = (uVar2 + *(byte *)(uVar11 + 4)) * 4;
      }
      else {
        uVar10 = (uVar2 - iVar6) * 4 + 8;
        uVar12 = 0x20000000;
      }
      uVar1 = uVar1 >> 6 & 7;
      local_28[0] = SUB41(uVar1,0);
      if (4 < uVar1) {
        uVar5 = Representation::Mnemonic(local_28);
        PrintF("%s\n",uVar5);
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar11 = (ulong)((int)uVar2 < iVar6) << 0xd | (long)iVar6 << 0x10 | (long)(int)uVar10;
      if ((((uint)uVar11 >> 0xd & 1) == 0) && ((*(uint *)(lVar7 + *puVar4 + 7) & 0x380) == 0x100)) {
        *(undefined1 *)
         (*plVar3 +
         (long)(int)(((uVar10 & 0x1ffc) - ((uint)((uVar11 | uVar12) >> 0x1a) & 0x7c)) + 7)) = 2;
      }
      if (uVar13 * 0xc - lVar7 == 0) break;
      uVar11 = *param_3;
      lVar7 = lVar7 + 0xc;
    }
  }
  return;
}

