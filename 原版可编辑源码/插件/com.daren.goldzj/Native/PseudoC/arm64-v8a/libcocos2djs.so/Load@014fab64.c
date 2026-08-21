
/* v8::internal::LoadIC::Load(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Name>, bool) */

long __thiscall v8::internal::LoadIC::Load(LoadIC *this,ulong *param_2,ulong *param_3,byte param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined4 uVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  undefined4 uVar12;
  Isolate *pIVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  Logger *this_00;
  Factory *pFVar17;
  LoadIC *pLVar18;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  Factory *local_a0;
  ulong *local_98;
  undefined8 local_90;
  ulong *local_88;
  ulong *local_80;
  ulong *local_78;
  ulong local_70;
  undefined8 local_68;
  ulong local_48;
  
  uVar14 = *param_2;
  param_4 = (*(int *)(this + 0x18) != 0 && FLAG_use_ic != '\0') & param_4;
  if (*(int *)(this + 0x1c) == 9) {
    if (((uVar14 & 1) != 0) &&
       (0xa8 < *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)))) {
      lVar11 = *(long *)(this + 8);
LAB_014fac34:
      if ((0xa9 < *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1))) &&
         ((*(uint *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1)) + 0xb) >> 0x18 & 1
          ) != 0)) {
        JSObject::MigrateInstance(lVar11,param_2);
        lVar11 = *(long *)(this + 8);
        param_4 = 0;
      }
LAB_014fac74:
      pLVar18 = this + 8;
      JSObject::MakePrototypesFast(param_2,0,lVar11);
      uVar14 = *param_2;
      if ((uVar14 & 1) == 0) {
        pFVar17 = *(Factory **)pLVar18;
        *(Factory **)(this + 0x20) = pFVar17 + 0x140;
      }
      else {
        pIVar13 = *(Isolate **)pLVar18;
        uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1);
        if (*(CanonicalHandleScope **)(pIVar13 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(pIVar13 + 0x95a0);
          if (puVar8 == *(ulong **)(pIVar13 + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(pIVar13);
          }
          *(ulong **)(pIVar13 + 0x95a0) = puVar8 + 1;
          *puVar8 = uVar14;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar13 + 0x95b8),uVar14);
        }
        pFVar17 = *(Factory **)(this + 8);
        *(ulong **)(this + 0x20) = puVar8;
      }
      local_48 = 0;
      uVar14 = *param_3;
      local_78 = param_2;
      local_a0 = pFVar17;
      local_88 = param_2;
      if (0x3f < *(ushort *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1))) {
LAB_014fad54:
        if (((*param_2 & 1) == 0) ||
           (*(ushort *)(((ulong)pFVar17 | 7) + (ulong)*(uint *)(*param_2 - 1)) < 0xa9)) {
          local_78 = (ulong *)LookupIterator::GetRootForNonJSReceiver
                                        (pFVar17,param_2,0xffffffffffffffff);
        }
        uVar12 = 3;
        if ((*(short *)(((ulong)pFVar17 | 7) + (ulong)*(uint *)(*param_3 - 1)) == 0x40) &&
           (uVar12 = 3, (*(byte *)(*param_3 + 7) & 1) != 0)) {
          uVar12 = 0;
        }
        local_b8 = CONCAT44(local_b8._4_4_,uVar12);
        local_ac = 0;
        uStack_a8 = 0xc0;
        local_98 = param_3;
        if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) &
            0xffe0) == 0x20) {
          local_98 = (ulong *)StringTable::LookupString(pFVar17,param_3);
        }
        local_90 = 0;
        local_80 = (ulong *)0x0;
        local_68 = 0xffffffffffffffff;
        local_70 = 0xffffffffffffffff;
        LookupIterator::Start<false>((LookupIterator *)&local_b8);
        goto LAB_014faf14;
      }
      uVar4 = *(uint *)(uVar14 + 3);
      local_b8 = uVar14;
      if ((uVar4 & 0xc0000003) == 0) {
        local_48 = (ulong)(uVar4 >> 3) & 0xffffff;
        uVar14 = *param_2;
        if ((uVar14 & 1) == 0) goto LAB_014fae3c;
LAB_014fae24:
        local_70 = local_48;
        if (*(ushort *)(((ulong)pFVar17 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0xa9)
        goto LAB_014fae3c;
      }
      else {
        if (((uVar4 & 5) == 4) ||
           (uVar14 = String::SlowAsIntegerIndex((String *)&local_b8,&local_48), (uVar14 & 1) == 0))
        goto LAB_014fad54;
        uVar14 = *param_2;
        if ((uVar14 & 1) != 0) goto LAB_014fae24;
LAB_014fae3c:
        uVar14 = local_48;
        local_78 = (ulong *)LookupIterator::GetRootForNonJSReceiver(pFVar17,param_2,local_48);
        local_70 = uVar14;
      }
      local_b8 = CONCAT44(local_b8._4_4_,3);
      local_98 = (ulong *)0x0;
      local_90 = 0;
      local_80 = (ulong *)0x0;
      local_ac = 0;
      uStack_a8 = 0xc0;
      local_68 = 0xffffffffffffffff;
      if ((local_70 < 0xffffffff) ||
         (*(short *)((*local_78 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*local_78 - 1)) ==
          0x41b)) {
        puVar8 = local_98;
        if ((param_3 != (ulong *)0x0) &&
           (*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0x20
           )) {
          puVar8 = param_3;
        }
      }
      else {
        puVar8 = param_3;
        if (param_3 == (ulong *)0x0) {
          puVar8 = (ulong *)Factory::SizeToString(pFVar17,local_70,true);
        }
        if ((*(ushort *)((*puVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar8 - 1)) &
            0xffe0) == 0x20) {
          puVar8 = (ulong *)StringTable::LookupString(pFVar17);
        }
      }
      local_98 = puVar8;
      LookupIterator::Start<true>((LookupIterator *)&local_b8);
LAB_014faf14:
      iVar3 = *(int *)(this + 0x1c);
      do {
        switch(local_b8._4_4_) {
        case 0:
          if ((*(short *)((*local_80 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*local_80 - 1)) !=
               0xab) ||
             (uVar14 = LookupIterator::HasAccess((LookupIterator *)&local_b8), (uVar14 & 1) == 0))
          goto switchD_014faf3c_caseD_1;
          break;
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
          goto switchD_014faf3c_caseD_1;
        case 2:
          uVar14 = *local_80 & 0xffffffff00000000;
          uVar4 = *(uint *)((uVar14 | 0x13) + (ulong)*(uint *)(*local_80 - 1));
          uVar16 = uVar14 | uVar4;
          if ((uVar4 & 1) != 0) {
            do {
              if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0xa2) {
                if (((uVar16 & 1) != 0) &&
                   (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x439)) {
                  uVar16 = uVar16 & 0xffffffff00000000 |
                           (ulong)*(uint *)((uVar16 & 0xffffffff00000000 |
                                            (ulong)*(uint *)(uVar16 + 0xb)) + 3);
                }
                break;
              }
              puVar1 = (uint *)(uVar16 + 0x13);
              uVar16 = uVar14 | *puVar1;
            } while ((*puVar1 & 1) != 0);
          }
          uVar15 = *(ulong *)(uVar14 + 0xa0);
          if (*(uint *)(uVar16 + 0x23) != (uint)uVar15) {
            uVar15 = uVar14 | *(uint *)((uVar14 | *(uint *)(uVar16 + 0x23)) + 0xf);
          }
          if (((*(uint *)(uVar15 + 3) & 1) == 0) ||
             (*(uint *)(uVar15 + 3) != *(uint *)(local_a0 + 0xa0))) goto switchD_014faf3c_caseD_1;
          if (iVar3 == 9) {
            uVar14 = *local_80 & 0xffffffff00000000;
            uVar4 = *(uint *)((uVar14 | 0x13) + (ulong)*(uint *)(*local_80 - 1));
            uVar16 = uVar14 | uVar4;
            if ((uVar4 & 1) != 0) {
              do {
                if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar16 - 1)) != 0xa2) {
                  if (((uVar16 & 1) != 0) &&
                     (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x439)) {
                    uVar16 = uVar16 & 0xffffffff00000000 |
                             (ulong)*(uint *)((uVar16 & 0xffffffff00000000 |
                                              (ulong)*(uint *)(uVar16 + 0xb)) + 3);
                  }
                  break;
                }
                puVar1 = (uint *)(uVar16 + 0x13);
                uVar16 = uVar14 | *puVar1;
              } while ((*puVar1 & 1) != 0);
            }
            uVar15 = *(ulong *)(uVar14 + 0xa0);
            if (*(uint *)(uVar16 + 0x23) != (uint)uVar15) {
              uVar15 = uVar14 | *(uint *)((uVar14 | *(uint *)(uVar16 + 0x23)) + 0xf);
            }
            if (((*(uint *)(uVar15 + 0xb) & 1) == 0) ||
               (*(uint *)(uVar15 + 0xb) != *(uint *)(local_a0 + 0xa0)))
            goto switchD_014faf3c_caseD_1;
          }
          break;
        case 7:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        LookupIterator::Next((LookupIterator *)&local_b8);
      } while( true );
    }
  }
  else {
    lVar11 = *(long *)(this + 8);
    if ((uVar14 & 1) == 0) goto LAB_014fac74;
    if (((int)uVar14 != *(int *)(lVar11 + 0xb0)) && ((int)uVar14 != *(int *)(lVar11 + 0xa0)))
    goto LAB_014fac34;
  }
  if (param_4 == 0) goto LAB_014fb468;
  if (TracingFlags::runtime_stats == 0) {
    if ((uVar14 & 1) != 0) goto LAB_014fb390;
LAB_014fac28:
    pIVar7 = *(Isolate **)(this + 8);
    pIVar13 = pIVar7 + 0x140;
  }
  else {
    RuntimeCallStats::CorrectCurrentCounterId
              ((RuntimeCallStats *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a0),0x41a,0);
    uVar14 = *param_2;
    if ((uVar14 & 1) == 0) goto LAB_014fac28;
LAB_014fb390:
    pIVar7 = *(Isolate **)(this + 8);
    uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1);
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar13 = *(Isolate **)(pIVar7 + 0x95a0);
      if (pIVar13 == *(Isolate **)(pIVar7 + 0x95a8)) {
        pIVar13 = (Isolate *)HandleScope::Extend(pIVar7);
      }
      *(Isolate **)(pIVar7 + 0x95a0) = pIVar13 + 8;
      *(ulong *)pIVar13 = uVar14;
    }
    else {
      pIVar13 = (Isolate *)
                CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar14);
    }
    pIVar7 = *(Isolate **)(this + 8);
  }
  *(Isolate **)(this + 0x20) = pIVar13;
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(undefined8 **)(pIVar7 + 0x95a0);
    if (puVar9 == *(undefined8 **)(pIVar7 + 0x95a8)) {
      puVar9 = (undefined8 *)HandleScope::Extend(pIVar7);
    }
    *(undefined8 **)(pIVar7 + 0x95a0) = puVar9 + 1;
    *puVar9 = 0x16;
  }
  else {
    puVar9 = (undefined8 *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar7 + 0x95b8),0x16);
  }
  local_b8 = CONCAT44(local_b8._4_4_,1);
  uStack_b0 = SUB84(puVar9,0);
  local_ac = (undefined4)((ulong)puVar9 >> 0x20);
  IC::SetCache((IC *)this,param_3,&local_b8);
  if (TracingFlags::ic_stats != 0) {
    if (*(int *)(this + 0x18) == 0) {
      uVar12 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = FeedbackNexus::ic_state((FeedbackNexus *)(this + 0x50));
      uVar12 = *(undefined4 *)(this + 0x18);
    }
    IC::TraceIC((IC *)this,"LoadIC",param_3,uVar12,uVar6);
  }
LAB_014fb468:
  pIVar13 = *(Isolate **)(this + 8);
  if ((int)*param_3 == *(int *)(pIVar13 + 0xc18)) {
    puVar9 = (undefined8 *)ErrorUtils::NewIteratorError(pIVar13,param_2);
    Isolate::Throw(pIVar13,*puVar9,0);
    return 0;
  }
  if (*(int *)(this + 0x1c) != 9) {
    ErrorUtils::ThrowLoadFromNullOrUndefined(pIVar13,param_2,param_3);
    return 0;
  }
  uVar2 = *(undefined8 *)(pIVar13 + 0x95a0);
  lVar11 = *(long *)(pIVar13 + 0x95a8);
  *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + 1;
  pFVar17 = *(Factory **)(this + 8);
  puVar9 = (undefined8 *)Factory::NewTypeError(pFVar17,0x40,param_3,param_2,0);
  Isolate::Throw((Isolate *)pFVar17,*puVar9,0);
  if (pIVar13 == (Isolate *)0x0) {
    return 0;
  }
  *(undefined8 *)(pIVar13 + 0x95a0) = uVar2;
  *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + -1;
  if (*(long *)(pIVar13 + 0x95a8) == lVar11) {
    return 0;
  }
  *(long *)(pIVar13 + 0x95a8) = lVar11;
  HandleScope::DeleteExtensions(pIVar13);
  return 0;
switchD_014faf3c_caseD_1:
  uVar14 = *param_3;
  uVar16 = uVar14 & 0xffffffff00000000 | 7;
  if ((*(short *)(uVar16 + *(uint *)(uVar14 - 1)) == 0x40) && ((*(uint *)(uVar14 + 7) & 1) != 0)) {
    if ((*(short *)(uVar16 + *(uint *)(uVar14 - 1)) == 0x40) &&
       (((*(uint *)(uVar14 + 7) >> 4 & 1) != 0 && (local_b8._4_4_ == 4)))) {
      pIVar13 = *(Isolate **)pLVar18;
      uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb);
      if (*(CanonicalHandleScope **)(pIVar13 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(pIVar13 + 0x95a0);
        if (puVar8 == *(ulong **)(pIVar13 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar13);
        }
        *(ulong **)(pIVar13 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar14;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar13 + 0x95b8),uVar14);
      }
      pIVar13 = *(Isolate **)pLVar18;
      uVar2 = *(undefined8 *)(pIVar13 + 0x95a0);
      lVar11 = *(long *)(pIVar13 + 0x95a8);
      *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + 1;
      pFVar17 = *(Factory **)pLVar18;
      puVar9 = (undefined8 *)Factory::NewTypeError(pFVar17,0x104,puVar8,param_2,0);
      Isolate::Throw((Isolate *)pFVar17,*puVar9,0);
      if (pIVar13 == (Isolate *)0x0) {
        return 0;
      }
      *(undefined8 *)(pIVar13 + 0x95a0) = uVar2;
      *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + -1;
      if (*(long *)(pIVar13 + 0x95a8) == lVar11) {
        return 0;
      }
      *(long *)(pIVar13 + 0x95a8) = lVar11;
      goto LAB_014fb1e4;
    }
    uVar14 = *param_2;
    if ((uVar14 & 1) != 0) {
      param_4 = param_4 & *(short *)((uVar14 & 0xffffffff00000000 | 7) +
                                    (ulong)*(uint *)(uVar14 - 1)) != 0xa9;
    }
  }
  if ((local_b8._4_4_ != 4) || (*(int *)(this + 0x1c) != 6)) {
    if (param_4 == 0) {
      if (*(int *)(this + 0x18) == 0) {
        if ((*(uint *)(this + 0x1c) | 1) == 7) {
          if (TracingFlags::ic_stats != 0) {
            pcVar10 = "LoadGlobalIC";
LAB_014fb598:
            IC::TraceIC((IC *)this,pcVar10,param_3,0,0);
          }
        }
        else if (TracingFlags::ic_stats != 0) {
          pcVar10 = "LoadIC";
          goto LAB_014fb598;
        }
      }
    }
    else {
      UpdateCaches(this,(LookupIterator *)&local_b8);
    }
    if (*(uint *)(this + 0x1c) == 9) {
      uVar5 = JSReceiver::HasProperty((LookupIterator *)&local_b8);
      if ((uVar5 & 0xff) == 0) {
        return 0;
      }
      if (uVar5 < 0x100) {
        return *(long *)pLVar18 + 0xc0;
      }
      return *(long *)pLVar18 + 0xb8;
    }
    lVar11 = Object::GetProperty((LookupIterator *)&local_b8,(*(uint *)(this + 0x1c) | 1) == 7);
    if (lVar11 == 0) {
      return 0;
    }
    if (local_b8._4_4_ != 4) {
      return lVar11;
    }
    if (*(int *)(this + 0x1c) != 6) {
      this_00 = *(Logger **)(*(long *)pLVar18 + 0x9558);
      uVar14 = Logger::is_logging(this_00);
      if ((uVar14 & 1) != 0) {
        Logger::SuspectReadEvent(this_00,*param_3,*param_2);
        return lVar11;
      }
      return lVar11;
    }
  }
  pIVar13 = *(Isolate **)pLVar18;
  uVar2 = *(undefined8 *)(pIVar13 + 0x95a0);
  lVar11 = *(long *)(pIVar13 + 0x95a8);
  *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + 1;
  pFVar17 = *(Factory **)pLVar18;
  puVar9 = (undefined8 *)Factory::NewReferenceError(pFVar17,0xb2,param_3,0,0);
  Isolate::Throw((Isolate *)pFVar17,*puVar9,0);
  if (pIVar13 == (Isolate *)0x0) {
    return 0;
  }
  *(undefined8 *)(pIVar13 + 0x95a0) = uVar2;
  *(int *)(pIVar13 + 0x95b0) = *(int *)(pIVar13 + 0x95b0) + -1;
  if (*(long *)(pIVar13 + 0x95a8) == lVar11) {
    return 0;
  }
  *(long *)(pIVar13 + 0x95a8) = lVar11;
LAB_014fb1e4:
  HandleScope::DeleteExtensions(pIVar13);
  return 0;
}

