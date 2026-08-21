
/* v8::internal::JsonParser<unsigned short>::ParseJsonValue() */

ulong * __thiscall
v8::internal::JsonParser<unsigned_short>::ParseJsonValue(JsonParser<unsigned_short> *this)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  Isolate *pIVar10;
  undefined1 uVar11;
  JsonParser<unsigned_short> JVar12;
  ushort *puVar13;
  ulong uVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  JsonParser<unsigned_short> *pJVar23;
  JsonParser<unsigned_short> *pJVar24;
  undefined8 uVar25;
  undefined1 auVar26 [12];
  undefined1 local_f8 [12];
  ulong *local_e8;
  long *local_e0;
  long *plStack_d8;
  long *local_d0;
  undefined1 (*local_c8) [12];
  undefined1 (*local_c0) [12];
  undefined1 (*local_b8) [12];
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  Isolate *local_98;
  undefined8 local_90;
  long lStack_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_a8 = (undefined8 *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
  std::__ndk1::
  vector<v8::internal::JsonParser<unsigned_short>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_short>::JsonContinuation>>
  ::reserve((vector<v8::internal::JsonParser<unsigned_short>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_short>::JsonContinuation>>
             *)&local_b0,0x10);
  local_c8 = operator_new(0x180);
  local_b8 = local_c8 + 0x20;
  local_c0 = local_c8;
  local_e0 = operator_new(0x80);
  local_d0 = local_e0 + 0x10;
  local_98 = *(Isolate **)this;
  lStack_88 = *(long *)(local_98 + 0x95a8);
  local_90 = *(undefined8 *)(local_98 + 0x95a0);
  *(int *)(local_98 + 0x95b0) = *(int *)(local_98 + 0x95b0) + 1;
  uStack_7c = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_e8 = (ulong *)0x0;
  pJVar23 = this + 0x30;
  puVar13 = *(ushort **)pJVar23;
  pJVar24 = this + 0x10;
  *pJVar24 = (JsonParser<unsigned_short>)0xd;
  puVar17 = *(ushort **)(this + 0x38);
  puVar15 = puVar13;
  plStack_d8 = local_e0;
  if (puVar13 == puVar17) {
LAB_01046f64:
    *(ushort **)pJVar23 = puVar15;
    puVar13 = puVar15;
switchD_01046370_caseD_3:
    if (puVar13 == puVar17) {
      uVar11 = 0xd;
    }
    else if ((ulong)*puVar13 < 0x100) {
      uVar11 = (&DAT_019cbf74)[*puVar13];
    }
    else {
      uVar11 = 0xc;
    }
    ReportUnexpectedToken(this,uVar11);
    if (local_b0 != local_a8) {
      if (local_98 != (Isolate *)0x0) goto LAB_01046fc4;
      do {
        local_98 = (Isolate *)local_a8[-5];
        puVar21 = local_a8;
        while( true ) {
          local_90 = puVar21[-4];
          lStack_88 = puVar21[-3];
          puVar21[-5] = 0;
          uStack_78 = *(undefined4 *)(puVar21 + -1);
          local_80 = (uint)puVar21[-2];
          uStack_7c = (undefined4)((ulong)puVar21[-2] >> 0x20);
          puVar21 = local_a8 + -5;
          pIVar10 = (Isolate *)*puVar21;
          if (pIVar10 != (Isolate *)0x0) {
            lVar19 = local_a8[-3];
            *(undefined8 *)(pIVar10 + 0x95a0) = local_a8[-4];
            *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + -1;
            if (*(long *)(pIVar10 + 0x95a8) != lVar19) {
              *(long *)(pIVar10 + 0x95a8) = lVar19;
              HandleScope::DeleteExtensions(pIVar10);
            }
          }
          local_a8 = puVar21;
          if (local_b0 == puVar21) goto LAB_01047060;
          if (local_98 == (Isolate *)0x0) break;
LAB_01046fc4:
          puVar21 = local_a8;
          *(undefined8 *)(local_98 + 0x95a0) = local_90;
          *(int *)(local_98 + 0x95b0) = *(int *)(local_98 + 0x95b0) + -1;
          if (*(long *)(local_98 + 0x95a8) != lStack_88) {
            *(long *)(local_98 + 0x95a8) = lStack_88;
            HandleScope::DeleteExtensions(local_98);
          }
        }
      } while( true );
    }
LAB_01047060:
    puVar22 = (ulong *)0x0;
joined_r0x01047218:
    if (local_98 != (Isolate *)0x0) {
      *(undefined8 *)(local_98 + 0x95a0) = local_90;
      *(int *)(local_98 + 0x95b0) = *(int *)(local_98 + 0x95b0) + -1;
      if (*(long *)(local_98 + 0x95a8) != lStack_88) {
        *(long *)(local_98 + 0x95a8) = lStack_88;
        HandleScope::DeleteExtensions(local_98);
      }
    }
    if (local_e0 != (long *)0x0) {
      plStack_d8 = local_e0;
      operator_delete(local_e0);
    }
    if (local_c8 != (undefined1 (*) [12])0x0) {
      local_c0 = local_c8;
      operator_delete(local_c8);
    }
    puVar21 = local_b0;
    if (local_b0 != (undefined8 *)0x0) {
      if (local_a8 != local_b0) {
        pIVar10 = (Isolate *)local_a8[-5];
        puVar9 = local_a8 + -5;
        puVar7 = local_a8;
        while( true ) {
          puVar6 = puVar9;
          if (pIVar10 != (Isolate *)0x0) {
            lVar19 = puVar7[-3];
            *(undefined8 *)(pIVar10 + 0x95a0) = puVar7[-4];
            *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + -1;
            if (*(long *)(pIVar10 + 0x95a8) != lVar19) {
              *(long *)(pIVar10 + 0x95a8) = lVar19;
              HandleScope::DeleteExtensions(pIVar10);
            }
          }
          if (puVar21 == puVar6) break;
          pIVar10 = (Isolate *)puVar6[-5];
          puVar9 = puVar6 + -5;
          puVar7 = puVar6;
        }
      }
      local_a8 = puVar21;
      operator_delete(local_b0);
    }
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return puVar22;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_01046318:
  puVar16 = puVar13 + 2;
  while( true ) {
    if (0xff < (ulong)*puVar13) {
      *pJVar24 = (JsonParser<unsigned_short>)0xc;
      puVar15 = puVar13;
      goto LAB_01046f64;
    }
    JVar12 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + *puVar13);
    if (JVar12 != (JsonParser<unsigned_short>)0x9) break;
    puVar13 = puVar13 + 1;
    puVar16 = puVar16 + 1;
    puVar15 = puVar17;
    if (puVar17 == puVar13) goto LAB_01046f64;
  }
  *pJVar24 = JVar12;
  *(ushort **)pJVar23 = puVar13;
  puVar21 = local_a8;
  switch(JVar12) {
  case (JsonParser<unsigned_short>)0x0:
    local_e8 = (ulong *)ParseJsonNumber(this);
    puVar21 = local_a8;
    break;
  case (JsonParser<unsigned_short>)0x1:
    *(ushort **)(this + 0x30) = puVar13 + 1;
    auVar26 = ScanJsonString(this,false);
    local_f8 = auVar26;
    local_e8 = (ulong *)MakeString(this,local_f8,0);
    puVar21 = local_a8;
    break;
  case (JsonParser<unsigned_short>)0x2:
    puVar15 = puVar13 + 1;
    *(ushort **)pJVar23 = puVar15;
    *pJVar24 = (JsonParser<unsigned_short>)0xd;
    if (puVar17 + -1 != puVar13) {
      do {
        uVar4 = *puVar15;
        if (0xff < (ulong)uVar4) {
          *pJVar24 = (JsonParser<unsigned_short>)0xc;
          puVar17 = puVar15;
          break;
        }
        if (*(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar4) !=
            (JsonParser<unsigned_short>)0x9) {
          puVar13 = puVar15 + 1;
          if (uVar4 != 0x7d) {
            puVar13 = puVar15;
          }
          *pJVar24 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar4);
          *(ushort **)pJVar23 = puVar13;
          if (uVar4 != 0x7d) goto LAB_01046484;
          local_e8 = (ulong *)Factory::NewJSObject(*(Factory **)this,*(undefined8 *)(this + 0x18),0)
          ;
          puVar21 = local_a8;
          goto switchD_01046370_caseD_9;
        }
        puVar15 = puVar15 + 1;
      } while (puVar17 != puVar15);
    }
    *(ushort **)pJVar23 = puVar17;
LAB_01046484:
    if (local_a8 < puStack_a0) {
      *local_a8 = local_98;
      local_a8[1] = local_90;
      local_a8[2] = lStack_88;
      local_98 = (Isolate *)0x0;
      *(undefined4 *)(local_a8 + 4) = uStack_78;
      local_a8[3] = CONCAT44(uStack_7c,local_80);
      local_a8 = local_a8 + 5;
    }
    else {
      std::__ndk1::
      vector<v8::internal::JsonParser<unsigned_short>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_short>::JsonContinuation>>
      ::__emplace_back_slow_path<v8::internal::JsonParser<unsigned_short>::JsonContinuation>
                ((vector<v8::internal::JsonParser<unsigned_short>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_short>::JsonContinuation>>
                  *)&local_b0,(JsonContinuation *)&local_98);
    }
    pIVar10 = *(Isolate **)this;
    lVar19 = *(long *)(pIVar10 + 0x95a8);
    uVar25 = *(undefined8 *)(pIVar10 + 0x95a0);
    uVar3 = (int)((ulong)((long)local_c0 - (long)local_c8) >> 3) * -0x55555554 | 1;
    *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + 1;
    if (local_98 != (Isolate *)0x0) {
      *(undefined8 *)(local_98 + 0x95a0) = local_90;
      *(int *)(local_98 + 0x95b0) = *(int *)(local_98 + 0x95b0) + -1;
      pIVar10 = local_98;
      if (*(long *)(local_98 + 0x95a8) != lStack_88) {
        *(long *)(local_98 + 0x95a8) = lStack_88;
        HandleScope::DeleteExtensions(local_98);
        pIVar10 = local_98;
      }
    }
    local_98 = pIVar10;
    uStack_7c = 0;
    uStack_78 = 0;
    puVar13 = *(ushort **)(this + 0x30);
    puVar17 = *(ushort **)(this + 0x38);
    JVar12 = (JsonParser<unsigned_short>)0xd;
    this[0x10] = (JsonParser<unsigned_short>)0xd;
    local_90 = uVar25;
    lStack_88 = lVar19;
    local_80 = uVar3;
    if (puVar13 != puVar17) {
      do {
        uVar4 = *puVar13;
        if (0xff < (ulong)uVar4) {
          JVar12 = (JsonParser<unsigned_short>)0xc;
          *pJVar24 = (JsonParser<unsigned_short>)0xc;
          goto LAB_01046d64;
        }
        JVar12 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar4);
        if (JVar12 != (JsonParser<unsigned_short>)0x9) {
          *pJVar24 = JVar12;
          *(ushort **)pJVar23 = puVar13;
          if (uVar4 != 0x22) goto LAB_01046d68;
          *(ushort **)pJVar23 = puVar13 + 1;
          goto LAB_01046e0c;
        }
        puVar13 = puVar13 + 1;
      } while (puVar17 != puVar13);
      JVar12 = (JsonParser<unsigned_short>)0xd;
      puVar13 = puVar17;
    }
LAB_01046d64:
    *(ushort **)pJVar23 = puVar13;
LAB_01046d68:
    ReportUnexpectedToken(this,JVar12);
LAB_01046e0c:
    auVar26 = ScanJsonPropertyKey(this,(JsonContinuation *)&local_98);
    local_f8 = auVar26;
    if (local_c0 < local_b8) {
      *(undefined8 *)(local_c0[1] + 4) = 0;
      *local_c0 = auVar26;
      local_c0 = local_c0 + 2;
    }
    else {
      std::__ndk1::
      vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>::
      __emplace_back_slow_path<v8::internal::JsonString>
                ((vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>
                  *)&local_c8,(JsonString *)local_f8);
    }
    puVar13 = *(ushort **)(this + 0x30);
    puVar17 = *(ushort **)(this + 0x38);
    JVar12 = (JsonParser<unsigned_short>)0xd;
    this[0x10] = (JsonParser<unsigned_short>)0xd;
    if (puVar13 != puVar17) {
      do {
        uVar14 = (ulong)*puVar13;
        if (0xff < uVar14) goto LAB_01046f24;
        JVar12 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar14);
        if (JVar12 != (JsonParser<unsigned_short>)0x9) goto LAB_01046eac;
        puVar13 = puVar13 + 1;
      } while (puVar17 != puVar13);
      goto LAB_01046e94;
    }
    goto LAB_01046e9c;
  case (JsonParser<unsigned_short>)0x3:
  case (JsonParser<unsigned_short>)0x5:
  case (JsonParser<unsigned_short>)0xa:
  case (JsonParser<unsigned_short>)0xb:
  case (JsonParser<unsigned_short>)0xc:
  case (JsonParser<unsigned_short>)0xd:
    goto switchD_01046370_caseD_3;
  case (JsonParser<unsigned_short>)0x4:
    puVar15 = puVar13 + 1;
    *(ushort **)pJVar23 = puVar15;
    *pJVar24 = (JsonParser<unsigned_short>)0xd;
    if (puVar17 + -1 != puVar13) {
      do {
        uVar4 = *puVar15;
        if (0xff < (ulong)uVar4) {
          *pJVar24 = (JsonParser<unsigned_short>)0xc;
          puVar17 = puVar15;
          break;
        }
        if (*(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar4) !=
            (JsonParser<unsigned_short>)0x9) {
          puVar13 = puVar15 + 1;
          if (uVar4 != 0x5d) {
            puVar13 = puVar15;
          }
          *pJVar24 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar4);
          *(ushort **)pJVar23 = puVar13;
          if (uVar4 != 0x5d) goto LAB_01046518;
          local_e8 = (ulong *)Factory::NewJSArray(*(Factory **)this,0,0,0,1,0);
          puVar21 = local_a8;
          goto switchD_01046370_caseD_9;
        }
        puVar15 = puVar15 + 1;
      } while (puVar17 != puVar15);
    }
    *(ushort **)pJVar23 = puVar17;
LAB_01046518:
    if (local_a8 < puStack_a0) {
      *local_a8 = local_98;
      local_a8[1] = local_90;
      local_a8[2] = lStack_88;
      local_98 = (Isolate *)0x0;
      *(undefined4 *)(local_a8 + 4) = uStack_78;
      local_a8[3] = CONCAT44(uStack_7c,local_80);
      local_a8 = local_a8 + 5;
    }
    else {
      std::__ndk1::
      vector<v8::internal::JsonParser<unsigned_short>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_short>::JsonContinuation>>
      ::__emplace_back_slow_path<v8::internal::JsonParser<unsigned_short>::JsonContinuation>
                ((vector<v8::internal::JsonParser<unsigned_short>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_short>::JsonContinuation>>
                  *)&local_b0,(JsonContinuation *)&local_98);
    }
    pIVar10 = *(Isolate **)this;
    uVar14 = (long)plStack_d8 - (long)local_e0;
    lVar19 = *(long *)(pIVar10 + 0x95a8);
    uVar25 = *(undefined8 *)(pIVar10 + 0x95a0);
    *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + 1;
    if (local_98 != (Isolate *)0x0) {
      *(undefined8 *)(local_98 + 0x95a0) = local_90;
      *(int *)(local_98 + 0x95b0) = *(int *)(local_98 + 0x95b0) + -1;
      pIVar10 = local_98;
      if (*(long *)(local_98 + 0x95a8) != lStack_88) {
        *(long *)(local_98 + 0x95a8) = lStack_88;
        HandleScope::DeleteExtensions(local_98);
        pIVar10 = local_98;
      }
    }
    local_98 = pIVar10;
    uStack_7c = 0;
    uStack_78 = 0;
    local_90 = uVar25;
    lStack_88 = lVar19;
    local_80 = (uint)(uVar14 >> 1) & 0xfffffffc | 2;
    goto LAB_01046ec4;
  case (JsonParser<unsigned_short>)0x6:
    uVar14 = (long)puVar17 - (long)puVar13 >> 1;
    if (uVar14 < 4) {
LAB_01046670:
      uVar14 = uVar14 - 1;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      *(ushort **)pJVar23 = puVar13 + 1;
      if (uVar14 != 0) {
        uVar20 = 0;
        do {
          uVar4 = puVar16[-1];
          if (uVar4 != (byte)"Invalid ScriptOrigin: is_module must be true"[uVar20 + 0x29]) {
            if (uVar4 < 0x100) {
              uVar11 = (&DAT_019cbf74)[uVar4];
            }
            else {
              uVar11 = 0xc;
            }
            goto LAB_010466bc;
          }
          uVar20 = uVar20 + 1;
          *(ushort **)pJVar23 = puVar16;
          puVar16 = puVar16 + 1;
        } while (uVar20 < uVar14);
      }
      uVar11 = 0xd;
LAB_010466bc:
      ReportUnexpectedToken(this,uVar11);
    }
    else {
      lVar19 = 1;
      do {
        if (puVar13[lVar19] !=
            (ushort)(byte)"Invalid ScriptOrigin: is_module must be true"[lVar19 + 0x28])
        goto LAB_01046670;
        lVar8 = lVar19 + 0x29;
        lVar19 = lVar19 + 1;
      } while ("Invalid ScriptOrigin: is_module must be true" + lVar8 < "");
      *(ushort **)pJVar23 = puVar13 + 4;
    }
    local_e8 = (ulong *)(*(long *)this + 0xb8);
    puVar21 = local_a8;
    break;
  case (JsonParser<unsigned_short>)0x7:
    uVar14 = (long)puVar17 - (long)puVar13 >> 1;
    if (uVar14 < 5) {
LAB_010465a8:
      uVar14 = uVar14 - 1;
      if (3 < uVar14) {
        uVar14 = 4;
      }
      *(ushort **)pJVar23 = puVar13 + 1;
      if (uVar14 != 0) {
        uVar20 = 0;
        do {
          uVar4 = puVar16[-1];
          if (uVar4 != (byte)"1 == count_false"[uVar20 + 0xc]) {
            if (uVar4 < 0x100) {
              uVar11 = (&DAT_019cbf74)[uVar4];
            }
            else {
              uVar11 = 0xc;
            }
            goto LAB_010465f4;
          }
          uVar20 = uVar20 + 1;
          *(ushort **)pJVar23 = puVar16;
          puVar16 = puVar16 + 1;
        } while (uVar20 < uVar14);
      }
      uVar11 = 0xd;
LAB_010465f4:
      ReportUnexpectedToken(this,uVar11);
    }
    else {
      lVar19 = 1;
      do {
        if (puVar13[lVar19] != (ushort)(byte)"1 == count_false"[lVar19 + 0xb]) goto LAB_010465a8;
        lVar8 = lVar19 + 0xc;
        lVar19 = lVar19 + 1;
      } while ("1 == count_false" + lVar8 < "");
      *(ushort **)pJVar23 = puVar13 + 5;
    }
    local_e8 = (ulong *)(*(long *)this + 0xc0);
    puVar21 = local_a8;
    break;
  case (JsonParser<unsigned_short>)0x8:
    uVar14 = (long)puVar17 - (long)puVar13 >> 1;
    if (uVar14 < 4) {
LAB_0104660c:
      uVar14 = uVar14 - 1;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      *(ushort **)pJVar23 = puVar13 + 1;
      if (uVar14 != 0) {
        uVar20 = 0;
        do {
          uVar4 = puVar16[-1];
          if (uVar4 != (byte)"list cannot be null"[uVar20 + 0x10]) {
            if (uVar4 < 0x100) {
              uVar11 = (&DAT_019cbf74)[uVar4];
            }
            else {
              uVar11 = 0xc;
            }
            goto LAB_01046658;
          }
          uVar20 = uVar20 + 1;
          *(ushort **)pJVar23 = puVar16;
          puVar16 = puVar16 + 1;
        } while (uVar20 < uVar14);
      }
      uVar11 = 0xd;
LAB_01046658:
      ReportUnexpectedToken(this,uVar11);
    }
    else {
      lVar19 = 1;
      do {
        if (puVar13[lVar19] != (ushort)(byte)"list cannot be null"[lVar19 + 0xf]) goto LAB_0104660c;
        lVar8 = lVar19 + 0x10;
        lVar19 = lVar19 + 1;
      } while ("list cannot be null" + lVar8 < "");
      *(ushort **)pJVar23 = puVar13 + 4;
    }
    local_e8 = (ulong *)(*(long *)this + 0xb0);
    puVar21 = local_a8;
  }
switchD_01046370_caseD_9:
  local_a8 = puVar21;
  pIVar10 = local_98;
  uVar3 = local_80 & 3;
  if (uVar3 == 1) {
    *(ulong **)(local_c0[-1] + 4) = local_e8;
    puVar13 = *(ushort **)(this + 0x30);
    puVar17 = *(ushort **)(this + 0x38);
    this[0x10] = (JsonParser<unsigned_short>)0xd;
    puVar15 = puVar13;
    for (; puVar13 != puVar17; puVar13 = puVar13 + 1) {
      uVar4 = *puVar13;
      if (0xff < (ulong)uVar4) {
        *pJVar24 = (JsonParser<unsigned_short>)0xc;
        puVar15 = puVar13;
        break;
      }
      if (*(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar4) != (JsonParser<unsigned_short>)0x9)
      {
        *pJVar24 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar4);
        puVar15 = puVar13 + 1;
        puVar16 = puVar15;
        if (uVar4 != 0x2c) {
          puVar16 = puVar13;
        }
        *(ushort **)pJVar23 = puVar16;
        if (uVar4 != 0x2c) goto LAB_01046768;
        JVar12 = (JsonParser<unsigned_short>)0xd;
        *pJVar24 = (JsonParser<unsigned_short>)0xd;
        if (puVar16 != puVar17) goto LAB_01046b2c;
        goto LAB_01046b58;
      }
      puVar15 = puVar17;
    }
    *(ushort **)pJVar23 = puVar15;
LAB_01046768:
    if ((((local_a8 == local_b0) || ((*(uint *)(local_a8 + -2) & 3) != 2)) ||
        ((ulong)((long)plStack_d8 - (long)local_e0 >> 3) <= (ulong)(*(uint *)(local_a8 + -2) >> 2)))
       || (uVar14 = *(ulong *)plStack_d8[-1], (uVar14 & 1) == 0)) {
LAB_010467f4:
      puVar22 = (ulong *)0x0;
    }
    else {
      uVar20 = uVar14 & 0xffffffff00000000;
      if (*(ushort *)((uVar20 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0xaa) goto LAB_010467f4;
      uVar14 = uVar20 | *(uint *)(uVar14 - 1);
      if (((*(uint *)(uVar14 + 0x13) & 1) == 0) ||
         (uVar18 = uVar20 | *(uint *)(uVar14 + 0x13),
         *(short *)((uVar20 | 7) + (ulong)*(uint *)(uVar18 - 1)) != 0xa2)) {
        uVar18 = *(ulong *)(uVar20 + 0xa0);
      }
      pIVar10 = *(Isolate **)this;
      if ((int)uVar18 == *(int *)(pIVar10 + 0xa0)) goto LAB_010467f4;
      if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar22 = *(ulong **)(pIVar10 + 0x95a0);
        if (puVar22 == *(ulong **)(pIVar10 + 0x95a8)) {
          puVar22 = (ulong *)HandleScope::Extend(pIVar10);
        }
        *(ulong **)(pIVar10 + 0x95a0) = puVar22 + 1;
        *puVar22 = uVar14;
      }
      else {
        puVar22 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar14);
      }
    }
    local_e8 = (ulong *)BuildJsonObject(this,&local_98,&local_c8,puVar22);
    lVar19 = (long)local_c0 - (long)local_c8 >> 3;
    uVar14 = (ulong)(local_80 >> 2);
    uVar20 = lVar19 * -0x5555555555555555;
    if (uVar20 < uVar14) {
      std::__ndk1::
      vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>::
      __append((vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>
                *)&local_c8,uVar14 + lVar19 * 0x5555555555555555);
    }
    else if (uVar20 - uVar14 != 0) {
      local_c0 = local_c8 + uVar14 * 2;
    }
    if (*pJVar24 != (JsonParser<unsigned_short>)0x3) goto LAB_01046a78;
LAB_010468f0:
    *(long *)pJVar23 = *(long *)pJVar23 + 2;
  }
  else {
    if (uVar3 != 2) {
      if (uVar3 == 0) {
        pIVar2 = local_98 + 0x95a0;
        uVar14 = *local_e8;
        *(undefined8 *)pIVar2 = local_90;
        *(int *)(local_98 + 0x95b0) = *(int *)(local_98 + 0x95b0) + -1;
        if (*(long *)(local_98 + 0x95a8) != lStack_88) {
          *(long *)(local_98 + 0x95a8) = lStack_88;
          HandleScope::DeleteExtensions(local_98);
        }
        if (*(CanonicalHandleScope **)(local_98 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          pIVar1 = local_98 + 0x95a0;
          puVar22 = *(ulong **)pIVar1;
          if (puVar22 == *(ulong **)(local_98 + 0x95a8)) {
            puVar22 = (ulong *)HandleScope::Extend(local_98);
          }
          *(ulong **)pIVar1 = puVar22 + 1;
          *puVar22 = uVar14;
        }
        else {
          puVar22 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(local_98 + 0x95b8),uVar14);
        }
        lStack_88 = *(long *)(pIVar10 + 0x95a8);
        local_90 = *(undefined8 *)pIVar2;
        *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + 1;
        goto joined_r0x01047218;
      }
      goto LAB_01046ec4;
    }
    if (plStack_d8 < local_d0) {
      *plStack_d8 = (long)local_e8;
      plStack_d8 = plStack_d8 + 1;
    }
    else {
      std::__ndk1::
      vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
      ::__emplace_back_slow_path<v8::internal::Handle<v8::internal::Object>&>
                ((vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
                  *)&local_e0,(Handle *)&local_e8);
    }
    puVar13 = *(ushort **)(this + 0x30);
    this[0x10] = (JsonParser<unsigned_short>)0xd;
    puVar17 = puVar13;
    for (; puVar13 != *(ushort **)(this + 0x38); puVar13 = puVar13 + 1) {
      uVar4 = *puVar13;
      if (0xff < (ulong)uVar4) {
        *pJVar24 = (JsonParser<unsigned_short>)0xc;
        puVar17 = puVar13;
        break;
      }
      if (*(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar4) != (JsonParser<unsigned_short>)0x9)
      {
        puVar17 = puVar13 + 1;
        if (uVar4 != 0x2c) {
          puVar17 = puVar13;
        }
        *pJVar24 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar4);
        *(ushort **)pJVar23 = puVar17;
        if (uVar4 != 0x2c) goto LAB_01046890;
        goto LAB_01046ec4;
      }
      puVar17 = *(ushort **)(this + 0x38);
    }
    *(ushort **)pJVar23 = puVar17;
LAB_01046890:
    local_e8 = (ulong *)BuildJsonArray(this,(JsonContinuation *)&local_98,(vector *)&local_e0);
    uVar14 = (ulong)(local_80 >> 2);
    uVar20 = (long)plStack_d8 - (long)local_e0 >> 3;
    if (uVar20 < uVar14) {
      std::__ndk1::
      vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
      ::__append((vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
                  *)&local_e0,uVar14 - uVar20);
    }
    else if (uVar20 != uVar14) {
      plStack_d8 = local_e0 + uVar14;
    }
    if (*pJVar24 == (JsonParser<unsigned_short>)0x5) goto LAB_010468f0;
LAB_01046a78:
    ReportUnexpectedToken(this);
  }
  pIVar2 = local_98;
  pIVar10 = local_98 + 0x95a0;
  uVar14 = *local_e8;
  *(undefined8 *)pIVar10 = local_90;
  *(int *)(local_98 + 0x95b0) = *(int *)(local_98 + 0x95b0) + -1;
  if (*(long *)(local_98 + 0x95a8) != lStack_88) {
    *(long *)(local_98 + 0x95a8) = lStack_88;
    HandleScope::DeleteExtensions(local_98);
  }
  if (*(CanonicalHandleScope **)(local_98 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    pIVar1 = local_98 + 0x95a0;
    puVar22 = *(ulong **)pIVar1;
    if (puVar22 == *(ulong **)(local_98 + 0x95a8)) {
      puVar22 = (ulong *)HandleScope::Extend(local_98);
    }
    *(ulong **)pIVar1 = puVar22 + 1;
    *puVar22 = uVar14;
  }
  else {
    puVar22 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(local_98 + 0x95b8),uVar14);
  }
  puVar21 = local_a8;
  local_90 = *(undefined8 *)pIVar10;
  lStack_88 = *(long *)(pIVar2 + 0x95a8);
  *(int *)(pIVar2 + 0x95b0) = *(int *)(pIVar2 + 0x95b0) + 1;
  local_e8 = puVar22;
  if (local_98 == (Isolate *)0x0) {
    local_98 = (Isolate *)local_a8[-5];
  }
  else {
    *(undefined8 *)(local_98 + 0x95a0) = local_90;
    *(int *)(local_98 + 0x95b0) = *(int *)(local_98 + 0x95b0) + -1;
    if (*(long *)(local_98 + 0x95a8) != lStack_88) {
      *(long *)(local_98 + 0x95a8) = lStack_88;
      HandleScope::DeleteExtensions(local_98);
    }
  }
  local_90 = puVar21[-4];
  lStack_88 = puVar21[-3];
  puVar21[-5] = 0;
  uStack_78 = *(undefined4 *)(puVar21 + -1);
  local_80 = (uint)puVar21[-2];
  uStack_7c = (undefined4)((ulong)puVar21[-2] >> 0x20);
  puVar21 = local_a8 + -5;
  pIVar10 = (Isolate *)*puVar21;
  if (pIVar10 != (Isolate *)0x0) {
    lVar19 = local_a8[-3];
    *(undefined8 *)(pIVar10 + 0x95a0) = local_a8[-4];
    *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + -1;
    if (*(long *)(pIVar10 + 0x95a8) != lVar19) {
      *(long *)(pIVar10 + 0x95a8) = lVar19;
      HandleScope::DeleteExtensions(pIVar10);
    }
  }
  goto switchD_01046370_caseD_9;
  while (puVar15 = puVar15 + 1, puVar17 != puVar15) {
LAB_01046b2c:
    uVar4 = *puVar15;
    if (0xff < (ulong)uVar4) {
      JVar12 = (JsonParser<unsigned_short>)0xc;
      *pJVar24 = (JsonParser<unsigned_short>)0xc;
      goto LAB_01046b58;
    }
    JVar12 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar4);
    if (JVar12 != (JsonParser<unsigned_short>)0x9) {
      *pJVar24 = JVar12;
      *(ushort **)pJVar23 = puVar15;
      if (uVar4 != 0x22) goto LAB_01046b5c;
      *(ushort **)pJVar23 = puVar15 + 1;
      goto LAB_01046b80;
    }
  }
  JVar12 = (JsonParser<unsigned_short>)0xd;
  puVar15 = puVar17;
LAB_01046b58:
  *(ushort **)pJVar23 = puVar15;
LAB_01046b5c:
  ReportUnexpectedToken(this,JVar12);
LAB_01046b80:
  auVar26 = ScanJsonPropertyKey(this,(JsonContinuation *)&local_98);
  local_f8 = auVar26;
  if (local_c0 < local_b8) {
    *(undefined8 *)(local_c0[1] + 4) = 0;
    *local_c0 = auVar26;
    local_c0 = local_c0 + 2;
  }
  else {
    std::__ndk1::
    vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>::
    __emplace_back_slow_path<v8::internal::JsonString>
              ((vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>
                *)&local_c8,(JsonString *)local_f8);
  }
  puVar13 = *(ushort **)(this + 0x30);
  puVar17 = *(ushort **)(this + 0x38);
  JVar12 = (JsonParser<unsigned_short>)0xd;
  this[0x10] = (JsonParser<unsigned_short>)0xd;
  if (puVar13 != puVar17) {
    do {
      uVar14 = (ulong)*puVar13;
      if (0xff < uVar14) goto LAB_01046f24;
      JVar12 = *(JsonParser<unsigned_short> *)(&DAT_019cbf74 + uVar14);
      if (JVar12 != (JsonParser<unsigned_short>)0x9) goto LAB_01046eac;
      puVar13 = puVar13 + 1;
    } while (puVar17 != puVar13);
LAB_01046e94:
    puVar13 = puVar17;
    JVar12 = (JsonParser<unsigned_short>)0xd;
  }
LAB_01046e9c:
  *(ushort **)pJVar23 = puVar13;
LAB_01046ea0:
  ReportUnexpectedToken(this,JVar12);
LAB_01046ec4:
  puVar13 = *(ushort **)(this + 0x30);
  puVar17 = *(ushort **)(this + 0x38);
  this[0x10] = (JsonParser<unsigned_short>)0xd;
  puVar15 = puVar13;
  if (puVar13 == puVar17) goto LAB_01046f64;
  goto LAB_01046318;
LAB_01046f24:
  JVar12 = (JsonParser<unsigned_short>)0xc;
  *pJVar24 = (JsonParser<unsigned_short>)0xc;
  goto LAB_01046e9c;
LAB_01046eac:
  *pJVar24 = JVar12;
  *(ushort **)pJVar23 = puVar13;
  if ((int)uVar14 == 0x3a) {
    *(ushort **)pJVar23 = puVar13 + 1;
    goto LAB_01046ec4;
  }
  goto LAB_01046ea0;
}

