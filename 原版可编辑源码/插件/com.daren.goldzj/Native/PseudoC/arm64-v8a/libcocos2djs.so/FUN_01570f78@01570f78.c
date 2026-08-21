
long * FUN_01570f78(undefined8 *param_1,long *param_2)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  Isolate *pIVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  Isolate *this;
  int iVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  Representation local_68 [8];
  
  iVar19 = *(int *)(param_1 + 1);
  this = *(Isolate **)*param_1;
  if ((iVar19 != 1) &&
     (uVar8 = v8::internal::GetCurrentStackPosition(), uVar8 < *(ulong *)(this + 0x58))) {
    v8::internal::Isolate::StackOverflow(this);
    return (long *)0x0;
  }
  uVar8 = (ulong)this | 0xb;
  if ((*(uint *)(uVar8 + *(uint *)(*param_2 + -1)) >> 0x18 & 1) != 0) {
    v8::internal::JSObject::MigrateInstance(this,param_2);
  }
  if (iVar19 == 1) {
    return param_2;
  }
  pIVar1 = this + 0x95a0;
  puVar3 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(this + 0x95a8);
  uVar22 = (ulong)this | 7;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  lVar13 = *param_2;
  if (*(short *)(uVar22 + *(uint *)(lVar13 + -1)) != 0x423) {
    if ((*(uint *)(uVar8 + *(uint *)(lVar13 + -1)) >> 0x15 & 1) == 0) {
      uVar6 = *(uint *)(((ulong)this | 0x17) + (ulong)*(uint *)(lVar13 + -1));
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = puVar3;
        if (puVar4 == puVar3) {
          puVar9 = (ulong *)v8::internal::HandleScope::Extend(this);
        }
        *(ulong **)pIVar1 = puVar9 + 1;
        *puVar9 = (ulong)(this + uVar6);
      }
      else {
        puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)(this + uVar6)
                                    );
      }
      lVar13 = *param_2;
      uVar8 = (ulong)(*(uint *)(uVar8 + *(uint *)(lVar13 + -1)) >> 10) & 0x3ff;
      if ((int)uVar8 != 0) {
        uVar21 = 0x1000000000;
        while( true ) {
          uVar8 = uVar8 - 1;
          uVar5 = *(uint *)(lVar13 + -1);
          uVar6 = *(int *)(*puVar9 + (uVar21 >> 0x20 | 3)) >> 1;
          uVar7 = uVar6 >> 0x13 & 0x3ff;
          iVar19 = (uint)(byte)this[(ulong)uVar5 + 3] - (uint)(byte)this[(ulong)uVar5 + 4];
          if ((int)uVar7 < iVar19) {
            uVar17 = (ulong)(byte)this[(ulong)uVar5 + 4] << 0x1c;
            iVar18 = (uVar7 + (byte)this[(ulong)uVar5 + 4]) * 4;
          }
          else {
            iVar18 = (uVar7 - iVar19) * 4 + 8;
            uVar17 = 0x20000000;
          }
          uVar6 = uVar6 >> 6 & 7;
          local_68[0] = SUB41(uVar6,0);
          if (4 < uVar6) {
            uVar12 = v8::internal::Representation::Mnemonic(local_68);
            v8::internal::PrintF("%s\n",uVar12);
            goto switchD_01571364_caseD_f;
          }
          uVar16 = (ulong)iVar18;
          uVar15 = (ulong)((int)uVar7 < iVar19) << 0xd | (long)iVar19 << 0x10 | uVar16;
          if (((uint)uVar15 >> 0xd & 1) == 0) {
            pIVar14 = this + *(uint *)(lVar13 + 3);
            if ((((ulong)pIVar14 & 1) == 0) || ((int)pIVar14 == *(int *)(this + 0x168))) {
              pIVar14 = *(Isolate **)(this + 0x3b8);
            }
            uVar6 = *(uint *)(pIVar14 + ((uVar16 & 0x1ffc) - ((uVar15 | uVar17) >> 0x1a & 0x7c)) + 7
                             );
          }
          else {
            uVar6 = *(uint *)(lVar13 + -1 + (uVar16 & 0x1fff));
          }
          pIVar14 = this + uVar6;
          if ((((ulong)pIVar14 & 1) != 0) && (0xa9 < *(ushort *)(uVar22 + *(uint *)(pIVar14 + -1))))
          {
            if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar10 = *(ulong **)pIVar1;
              if (puVar10 == *(ulong **)(this + 0x95a8)) {
                puVar10 = (ulong *)v8::internal::HandleScope::Extend(this);
              }
              *(ulong **)pIVar1 = puVar10 + 1;
              *puVar10 = (ulong)pIVar14;
            }
            else {
              puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar14
                                           );
            }
            lVar13 = FUN_01570f78(param_1,puVar10);
            if (lVar13 == 0) goto LAB_01571580;
          }
          if (uVar8 == 0) break;
          lVar13 = *param_2;
          uVar21 = uVar21 + 0xc00000000;
        }
      }
    }
    else {
      pIVar14 = this + *(uint *)(lVar13 + 3);
      if (((ulong)pIVar14 & 1) == 0) {
        pIVar14 = *(Isolate **)(this + 0x410);
      }
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = puVar3;
        if (puVar4 == puVar3) {
          puVar9 = (ulong *)v8::internal::HandleScope::Extend(this);
        }
        *(ulong **)pIVar1 = puVar9 + 1;
        *puVar9 = (ulong)pIVar14;
      }
      else {
        puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar14);
        pIVar14 = (Isolate *)*puVar9;
      }
      if ((int)*(uint *)(pIVar14 + 0xf) >> 1 != 0) {
        lVar20 = (long)((ulong)*(uint *)(pIVar14 + 0xf) << 0x20) >> 0x21;
        lVar13 = 0x1800000000;
        while( true ) {
          lVar20 = lVar20 + -1;
          pIVar14 = this + *(uint *)(pIVar14 + (lVar13 >> 0x20) + 7);
          if ((((ulong)pIVar14 & 1) != 0) && (0xa9 < *(ushort *)(uVar22 + *(uint *)(pIVar14 + -1))))
          {
            if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar10 = *(ulong **)pIVar1;
              if (puVar10 == *(ulong **)(this + 0x95a8)) {
                puVar10 = (ulong *)v8::internal::HandleScope::Extend(this);
              }
              *(ulong **)pIVar1 = puVar10 + 1;
              *puVar10 = (ulong)pIVar14;
            }
            else {
              puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar14
                                           );
            }
            lVar11 = FUN_01570f78(param_1,puVar10);
            if (lVar11 == 0) goto LAB_01571580;
          }
          if (lVar20 == 0) break;
          pIVar14 = (Isolate *)*puVar9;
          lVar13 = lVar13 + 0xc00000000;
        }
      }
    }
    lVar13 = *param_2;
    if (1 < *(uint *)(((ulong)this | 3) + (ulong)*(uint *)(lVar13 + 7))) goto LAB_01571330;
    goto switchD_01571364_caseD_4;
  }
LAB_01571330:
  switch(*(byte *)(((ulong)this | 10) + (ulong)*(uint *)(lVar13 + -1)) >> 3) {
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    pIVar14 = this + *(uint *)(lVar13 + 7);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar1;
      if (puVar9 == *(ulong **)(this + 0x95a8)) {
        puVar9 = (ulong *)v8::internal::HandleScope::Extend(this);
      }
      *(ulong **)pIVar1 = puVar9 + 1;
      *puVar9 = (ulong)pIVar14;
    }
    else {
      puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar14);
      pIVar14 = (Isolate *)*puVar9;
    }
    if ((*(int *)(pIVar14 + -1) + (int)this != *(int *)(this + 0xe8)) && (1 < *(int *)(pIVar14 + 3))
       ) {
      iVar19 = 0;
      lVar13 = 0;
      do {
        pIVar2 = this + *(uint *)(pIVar14 + (long)iVar19 + 7);
        if ((((ulong)pIVar2 & 1) != 0) && (0xa9 < *(ushort *)(uVar22 + *(uint *)(pIVar2 + -1)))) {
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar10 = *(ulong **)pIVar1;
            if (puVar10 == *(ulong **)(this + 0x95a8)) {
              puVar10 = (ulong *)v8::internal::HandleScope::Extend(this);
            }
            *(ulong **)pIVar1 = puVar10 + 1;
            *puVar10 = (ulong)pIVar2;
          }
          else {
            puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar2);
          }
          lVar20 = FUN_01570f78(param_1,puVar10);
          if (lVar20 == 0) goto LAB_01571580;
          pIVar14 = (Isolate *)*puVar9;
        }
        lVar13 = lVar13 + 1;
        iVar19 = iVar19 + 4;
      } while (lVar13 < *(int *)(pIVar14 + 3) >> 1);
      break;
    }
    goto LAB_01571584;
  case 0xc:
    pIVar14 = this + *(uint *)(lVar13 + 7);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar1;
      if (puVar9 == *(ulong **)(this + 0x95a8)) {
        puVar9 = (ulong *)v8::internal::HandleScope::Extend(this);
      }
      *(ulong **)pIVar1 = puVar9 + 1;
      *puVar9 = (ulong)pIVar14;
    }
    else {
      puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar14);
      pIVar14 = (Isolate *)*puVar9;
    }
    if ((int)*(uint *)(pIVar14 + 0xf) >> 1 == 0) goto LAB_01571584;
    lVar20 = (long)((ulong)*(uint *)(pIVar14 + 0xf) << 0x20) >> 0x21;
    lVar13 = 0x1400000000;
    while( true ) {
      lVar20 = lVar20 + -1;
      pIVar14 = this + *(uint *)(pIVar14 + (lVar13 >> 0x20) + 7);
      if ((((ulong)pIVar14 & 1) != 0) && (0xa9 < *(ushort *)(uVar22 + *(uint *)(pIVar14 + -1)))) {
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)pIVar1;
          if (puVar10 == *(ulong **)(this + 0x95a8)) {
            puVar10 = (ulong *)v8::internal::HandleScope::Extend(this);
          }
          *(ulong **)pIVar1 = puVar10 + 1;
          *puVar10 = (ulong)pIVar14;
        }
        else {
          puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar14);
        }
        lVar11 = FUN_01570f78(param_1,puVar10);
        if (lVar11 == 0) goto LAB_01571580;
      }
      if (lVar20 == 0) break;
      pIVar14 = (Isolate *)*puVar9;
      lVar13 = lVar13 + 0xc00000000;
    }
    break;
  case 0xd:
  case 0xe:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unimplemented code");
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
switchD_01571364_caseD_f:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
switchD_01571364_caseD_4:
  if (this != (Isolate *)0x0) {
LAB_01571584:
    *(ulong **)pIVar1 = puVar3;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(ulong **)(this + 0x95a8) != puVar4) {
      *(ulong **)(this + 0x95a8) = puVar4;
      v8::internal::HandleScope::DeleteExtensions(this);
    }
  }
  return param_2;
LAB_01571580:
  param_2 = (long *)0x0;
  goto LAB_01571584;
}

