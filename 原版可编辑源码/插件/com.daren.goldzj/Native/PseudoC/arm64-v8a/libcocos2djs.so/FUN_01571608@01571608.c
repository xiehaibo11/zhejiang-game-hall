
ulong * FUN_01571608(Isolate *param_1,long *param_2,uint param_3,undefined4 param_4)

{
  Isolate *pIVar1;
  byte bVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  Isolate *pIVar13;
  double dVar14;
  
  uVar8 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  pIVar1 = param_1 + 0x95a0;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
  }
  uVar10 = *(uint *)(*param_2 + 3);
  if ((uVar10 >> 1 & 1) == 0) {
    iVar3 = *(int *)(*param_2 + (long)(int)((uVar10 & 0x7ffffffe) * 2 + -4) + 7);
  }
  else {
    iVar12 = ((int)uVar10 >> 1) + -1;
    iVar3 = (int)uVar10 >> 1;
    if (-1 < iVar12) {
      iVar3 = iVar12;
    }
  }
  if ((param_3 >> 4 & 1) == 0) {
    puVar4 = (ulong *)v8::internal::Factory::ObjectLiteralMapFromCache
                                ((Factory *)param_1,puVar4,iVar3 >> 1);
  }
  else {
    uVar8 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0x29b);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar8;
    }
    else {
      puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
    }
  }
  if ((*(uint *)(*puVar4 + 0xb) >> 0x15 & 1) == 0) {
    puVar5 = (ulong *)v8::internal::Factory::NewJSObjectFromMap(param_1,puVar4,param_4,0);
  }
  else {
    puVar5 = (ulong *)v8::internal::Factory::NewSlowJSObjectFromMap
                                ((Factory *)param_1,puVar4,iVar3 >> 1,param_4,0);
  }
  if ((param_3 >> 3 & 1) == 0) {
    v8::internal::JSObject::NormalizeElements(puVar5);
  }
  lVar9 = *param_2;
  uVar10 = (*(int *)(lVar9 + 3) >> 1) - 1;
  if ((int)uVar10 < 2) {
LAB_01571974:
    if (((*(uint *)(*puVar4 + 0xb) >> 0x15 & 1) != 0) && ((param_3 >> 4 & 1) == 0)) {
      uVar8 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 - 1);
      bVar2 = *(byte *)(uVar8 + 5);
      uVar10 = (uint)bVar2;
      if (2 < bVar2) {
        uVar10 = (uint)*(byte *)(uVar8 + 3) - (uint)bVar2;
      }
      v8::internal::JSObject::MigrateSlowToFast(puVar5,uVar10,"FastLiteral");
    }
    return puVar5;
  }
  uVar8 = (ulong)(uVar10 >> 1);
  iVar12 = 0xf;
  do {
    uVar8 = uVar8 - 1;
    uVar10 = *(uint *)(lVar9 + (iVar12 + -0xb) + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = (ulong)(param_1 + uVar10);
    }
    else {
      puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                   (ulong)(param_1 + uVar10));
    }
    pIVar13 = param_1 + *(uint *)(*param_2 + (long)iVar12);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar1;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = (ulong)pIVar13;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),(ulong)pIVar13);
      pIVar13 = (Isolate *)*puVar7;
    }
    if (((ulong)pIVar13 & 1) != 0) {
      if (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(pIVar13 + -1)) == 0x56) {
        puVar7 = (ulong *)FUN_01571a14(param_1,puVar7,param_4);
      }
      else if (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(pIVar13 + -1)) == 0x82) {
        puVar7 = (ulong *)FUN_01571608(param_1,puVar7,*(int *)(pIVar13 + 7) >> 1,param_4);
      }
    }
    uVar11 = *puVar6;
    if ((uVar11 & 1) == 0) {
      if ((int)uVar11 < 0) goto LAB_015718f8;
      dVar14 = (double)(uVar11 >> 1 & 0x7fffffff);
LAB_01571880:
      if (((*puVar7 & 1) != 0) && ((int)*puVar7 == *(int *)(param_1 + 0x98))) {
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar1;
          if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
            puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar7 + 1;
          *puVar7 = 0;
        }
        else {
          puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
        }
      }
      lVar9 = v8::internal::JSObject::SetOwnElementIgnoreAttributes
                        (puVar5,(ulong)dVar14 & 0xffffffff,puVar7,0);
    }
    else {
      if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x42) {
        dVar14 = *(double *)(uVar11 + 3) + 4503599627370496.0;
        if ((((ulong)dVar14 >> 0x20 == 0x43300000) && (SUB84(dVar14,0) != -1)) &&
           (*(double *)(uVar11 + 3) == (double)((ulong)dVar14 & 0xffffffff))) goto LAB_01571880;
      }
LAB_015718f8:
      lVar9 = v8::internal::JSObject::SetOwnPropertyIgnoreAttributes(puVar5,puVar6,puVar7,0);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    if (uVar8 == 0) goto LAB_01571974;
    lVar9 = *param_2;
    iVar12 = iVar12 + 8;
  } while( true );
}

