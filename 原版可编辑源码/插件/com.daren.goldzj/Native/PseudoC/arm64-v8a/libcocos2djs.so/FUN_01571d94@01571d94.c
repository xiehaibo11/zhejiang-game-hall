
long * FUN_01571d94(undefined8 *param_1,long *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  Isolate *pIVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  Isolate *this;
  Isolate *pIVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  Representation local_68 [8];
  
  iVar20 = *(int *)(param_1 + 1);
  this = *(Isolate **)*param_1;
  if ((iVar20 != 1) &&
     (uVar7 = v8::internal::GetCurrentStackPosition(), uVar7 < *(ulong *)(this + 0x58))) {
    v8::internal::Isolate::StackOverflow(this);
    return (long *)0x0;
  }
  uVar7 = (ulong)this | 0xb;
  if ((*(uint *)(uVar7 + *(uint *)(*param_2 + -1)) >> 0x18 & 1) != 0) {
    v8::internal::JSObject::MigrateInstance(this,param_2);
  }
  if (iVar20 == 1) {
    return param_2;
  }
  pIVar1 = this + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(this + 0x95a8);
  uVar19 = (ulong)this | 7;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  lVar12 = *param_2;
  if (*(short *)(uVar19 + *(uint *)(lVar12 + -1)) != 0x423) {
    if ((*(uint *)(uVar7 + *(uint *)(lVar12 + -1)) >> 0x15 & 1) == 0) {
      uVar5 = *(uint *)(((ulong)this | 0x17) + (ulong)*(uint *)(lVar12 + -1));
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = puVar2;
        if (puVar3 == puVar2) {
          puVar8 = (ulong *)v8::internal::HandleScope::Extend(this);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = (ulong)(this + uVar5);
      }
      else {
        puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)(this + uVar5)
                                    );
      }
      lVar12 = *param_2;
      uVar7 = (ulong)(*(uint *)(uVar7 + *(uint *)(lVar12 + -1)) >> 10) & 0x3ff;
      if ((int)uVar7 != 0) {
        uVar21 = 0x1000000000;
        while( true ) {
          uVar7 = uVar7 - 1;
          uVar4 = *(uint *)(lVar12 + -1);
          uVar5 = *(int *)(*puVar8 + (uVar21 >> 0x20 | 3)) >> 1;
          uVar6 = uVar5 >> 0x13 & 0x3ff;
          iVar20 = (uint)(byte)this[(ulong)uVar4 + 3] - (uint)(byte)this[(ulong)uVar4 + 4];
          if ((int)uVar6 < iVar20) {
            uVar16 = (ulong)(byte)this[(ulong)uVar4 + 4] << 0x1c;
            iVar17 = (uVar6 + (byte)this[(ulong)uVar4 + 4]) * 4;
          }
          else {
            iVar17 = (uVar6 - iVar20) * 4 + 8;
            uVar16 = 0x20000000;
          }
          uVar5 = uVar5 >> 6 & 7;
          local_68[0] = SUB41(uVar5,0);
          if (4 < uVar5) {
            uVar10 = v8::internal::Representation::Mnemonic(local_68);
            v8::internal::PrintF("%s\n",uVar10);
            goto switchD_01572220_caseD_f;
          }
          uVar15 = (ulong)iVar17;
          uVar14 = (ulong)((int)uVar6 < iVar20) << 0xd | (long)iVar20 << 0x10 | uVar15;
          if (((uint)uVar14 >> 0xd & 1) == 0) {
            pIVar13 = this + *(uint *)(lVar12 + 3);
            if ((((ulong)pIVar13 & 1) == 0) || ((int)pIVar13 == *(int *)(this + 0x168))) {
              pIVar13 = *(Isolate **)(this + 0x3b8);
            }
            uVar5 = *(uint *)(pIVar13 + ((uVar15 & 0x1ffc) - ((uVar14 | uVar16) >> 0x1a & 0x7c)) + 7
                             );
          }
          else {
            uVar5 = *(uint *)(lVar12 + -1 + (uVar15 & 0x1fff));
          }
          pIVar13 = this + uVar5;
          if ((((ulong)pIVar13 & 1) != 0) && (0xa9 < *(ushort *)(uVar19 + *(uint *)(pIVar13 + -1))))
          {
            if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar9 = *(ulong **)pIVar1;
              if (puVar9 == *(ulong **)(this + 0x95a8)) {
                puVar9 = (ulong *)v8::internal::HandleScope::Extend(this);
              }
              *(ulong **)pIVar1 = puVar9 + 1;
              *puVar9 = (ulong)pIVar13;
            }
            else {
              puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar13)
              ;
              pIVar13 = (Isolate *)*puVar9;
            }
            if (*(short *)(((ulong)pIVar13 & 0xffffffff00000000 | 7) +
                          (ulong)*(uint *)(pIVar13 + -1)) == 0x423) {
              uVar10 = FUN_01570ca8(*param_1);
              lVar12 = FUN_01571d94(param_1,puVar9);
              FUN_01570e50(*param_1,uVar10,puVar9);
            }
            else {
              lVar12 = FUN_01571d94(param_1,puVar9);
            }
            if (lVar12 == 0) goto LAB_015724cc;
          }
          if (uVar7 == 0) break;
          lVar12 = *param_2;
          uVar21 = uVar21 + 0xc00000000;
        }
      }
    }
    else {
      pIVar13 = this + *(uint *)(lVar12 + 3);
      if (((ulong)pIVar13 & 1) == 0) {
        pIVar13 = *(Isolate **)(this + 0x410);
      }
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = puVar2;
        if (puVar3 == puVar2) {
          puVar8 = (ulong *)v8::internal::HandleScope::Extend(this);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = (ulong)pIVar13;
      }
      else {
        puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar13);
        pIVar13 = (Isolate *)*puVar8;
      }
      if ((int)*(uint *)(pIVar13 + 0xf) >> 1 != 0) {
        lVar22 = (long)((ulong)*(uint *)(pIVar13 + 0xf) << 0x20) >> 0x21;
        lVar12 = 0x1800000000;
        while( true ) {
          lVar22 = lVar22 + -1;
          pIVar13 = this + *(uint *)(pIVar13 + (lVar12 >> 0x20) + 7);
          if ((((ulong)pIVar13 & 1) != 0) && (0xa9 < *(ushort *)(uVar19 + *(uint *)(pIVar13 + -1))))
          {
            if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar9 = *(ulong **)pIVar1;
              if (puVar9 == *(ulong **)(this + 0x95a8)) {
                puVar9 = (ulong *)v8::internal::HandleScope::Extend(this);
              }
              *(ulong **)pIVar1 = puVar9 + 1;
              *puVar9 = (ulong)pIVar13;
            }
            else {
              puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar13)
              ;
              pIVar13 = (Isolate *)*puVar9;
            }
            if (*(short *)(((ulong)pIVar13 & 0xffffffff00000000 | 7) +
                          (ulong)*(uint *)(pIVar13 + -1)) == 0x423) {
              uVar10 = FUN_01570ca8(*param_1);
              lVar11 = FUN_01571d94(param_1,puVar9);
              FUN_01570e50(*param_1,uVar10,puVar9);
            }
            else {
              lVar11 = FUN_01571d94(param_1,puVar9);
            }
            if (lVar11 == 0) goto LAB_015724cc;
          }
          if (lVar22 == 0) break;
          pIVar13 = (Isolate *)*puVar8;
          lVar12 = lVar12 + 0xc00000000;
        }
      }
    }
    lVar12 = *param_2;
    if (1 < *(uint *)(((ulong)this | 3) + (ulong)*(uint *)(lVar12 + 7))) goto LAB_015721ec;
    goto switchD_01572220_caseD_4;
  }
LAB_015721ec:
  switch(*(byte *)(((ulong)this | 10) + (ulong)*(uint *)(lVar12 + -1)) >> 3) {
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    pIVar13 = this + *(uint *)(lVar12 + 7);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)pIVar1;
      if (puVar8 == *(ulong **)(this + 0x95a8)) {
        puVar8 = (ulong *)v8::internal::HandleScope::Extend(this);
      }
      *(ulong **)pIVar1 = puVar8 + 1;
      *puVar8 = (ulong)pIVar13;
    }
    else {
      puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar13);
      pIVar13 = (Isolate *)*puVar8;
    }
    if ((*(int *)(pIVar13 + -1) + (int)this != *(int *)(this + 0xe8)) && (1 < *(int *)(pIVar13 + 3))
       ) {
      iVar20 = 0;
      lVar12 = 0;
      do {
        pIVar18 = this + *(uint *)(pIVar13 + (long)iVar20 + 7);
        if ((((ulong)pIVar18 & 1) != 0) && (0xa9 < *(ushort *)(uVar19 + *(uint *)(pIVar18 + -1)))) {
          if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar9 = *(ulong **)pIVar1;
            if (puVar9 == *(ulong **)(this + 0x95a8)) {
              puVar9 = (ulong *)v8::internal::HandleScope::Extend(this);
            }
            *(ulong **)pIVar1 = puVar9 + 1;
            *puVar9 = (ulong)pIVar18;
          }
          else {
            puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar18);
            pIVar18 = (Isolate *)*puVar9;
          }
          if (*(short *)(((ulong)pIVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(pIVar18 + -1))
              == 0x423) {
            uVar10 = FUN_01570ca8(*param_1);
            lVar22 = FUN_01571d94(param_1,puVar9);
            FUN_01570e50(*param_1,uVar10,puVar9);
          }
          else {
            lVar22 = FUN_01571d94(param_1,puVar9);
          }
          if (lVar22 == 0) goto LAB_015724cc;
          pIVar13 = (Isolate *)*puVar8;
        }
        lVar12 = lVar12 + 1;
        iVar20 = iVar20 + 4;
      } while (lVar12 < *(int *)(pIVar13 + 3) >> 1);
      break;
    }
    goto LAB_015724d0;
  case 0xc:
    pIVar13 = this + *(uint *)(lVar12 + 7);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)pIVar1;
      if (puVar8 == *(ulong **)(this + 0x95a8)) {
        puVar8 = (ulong *)v8::internal::HandleScope::Extend(this);
      }
      *(ulong **)pIVar1 = puVar8 + 1;
      *puVar8 = (ulong)pIVar13;
    }
    else {
      puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar13);
      pIVar13 = (Isolate *)*puVar8;
    }
    if ((int)*(uint *)(pIVar13 + 0xf) >> 1 == 0) goto LAB_015724d0;
    lVar22 = (long)((ulong)*(uint *)(pIVar13 + 0xf) << 0x20) >> 0x21;
    lVar12 = 0x1400000000;
    while( true ) {
      lVar22 = lVar22 + -1;
      pIVar13 = this + *(uint *)(pIVar13 + (lVar12 >> 0x20) + 7);
      if ((((ulong)pIVar13 & 1) != 0) && (0xa9 < *(ushort *)(uVar19 + *(uint *)(pIVar13 + -1)))) {
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar1;
          if (puVar9 == *(ulong **)(this + 0x95a8)) {
            puVar9 = (ulong *)v8::internal::HandleScope::Extend(this);
          }
          *(ulong **)pIVar1 = puVar9 + 1;
          *puVar9 = (ulong)pIVar13;
        }
        else {
          puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(this + 0x95b8),(ulong)pIVar13);
          pIVar13 = (Isolate *)*puVar9;
        }
        if (*(short *)(((ulong)pIVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(pIVar13 + -1))
            == 0x423) {
          uVar10 = FUN_01570ca8(*param_1);
          lVar11 = FUN_01571d94(param_1,puVar9);
          FUN_01570e50(*param_1,uVar10,puVar9);
        }
        else {
          lVar11 = FUN_01571d94(param_1,puVar9);
        }
        if (lVar11 == 0) goto LAB_015724cc;
      }
      if (lVar22 == 0) break;
      pIVar13 = (Isolate *)*puVar8;
      lVar12 = lVar12 + 0xc00000000;
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
switchD_01572220_caseD_f:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
switchD_01572220_caseD_4:
  if (this != (Isolate *)0x0) {
LAB_015724d0:
    *(ulong **)pIVar1 = puVar2;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(ulong **)(this + 0x95a8) != puVar3) {
      *(ulong **)(this + 0x95a8) = puVar3;
      v8::internal::HandleScope::DeleteExtensions(this);
    }
  }
  return param_2;
LAB_015724cc:
  param_2 = (long *)0x0;
  goto LAB_015724d0;
}

