
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::JsonParser<unsigned char>::ParseJsonValue() */

ulong * __thiscall
v8::internal::JsonParser<unsigned_char>::ParseJsonValue(JsonParser<unsigned_char> *this)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  Isolate *pIVar10;
  JsonParser<unsigned_char> JVar11;
  undefined1 uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  JsonParser<unsigned_char> *pJVar22;
  undefined8 uVar23;
  undefined1 auVar24 [12];
  undefined1 local_f8 [12];
  ulong *local_e8;
  long *local_e0;
  long *plStack_d8;
  long *local_d0;
  undefined1 (*local_c0) [12];
  undefined1 (*local_b8) [12];
  undefined1 (*local_b0) [12];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  Isolate *local_90;
  undefined8 local_88;
  long lStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  std::__ndk1::
  vector<v8::internal::JsonParser<unsigned_char>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_char>::JsonContinuation>>
  ::reserve((vector<v8::internal::JsonParser<unsigned_char>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_char>::JsonContinuation>>
             *)&local_a8,0x10);
  local_c0 = operator_new(0x180);
  local_b0 = local_c0 + 0x20;
  local_b8 = local_c0;
  local_e0 = operator_new(0x80);
  local_d0 = local_e0 + 0x10;
  local_90 = *(Isolate **)this;
  lStack_80 = *(long *)(local_90 + 0x95a8);
  local_88 = *(undefined8 *)(local_90 + 0x95a0);
  *(int *)(local_90 + 0x95b0) = *(int *)(local_90 + 0x95b0) + 1;
  uStack_74 = 0;
  uStack_70 = 0;
  local_78 = 0;
  local_e8 = (ulong *)0x0;
  pJVar22 = this + 0x30;
  pbVar13 = *(byte **)pJVar22;
  pbVar16 = *(byte **)(this + 0x38);
  this[0x10] = (JsonParser<unsigned_char>)0xd;
  pbVar15 = pbVar13;
  plStack_d8 = local_e0;
  if (pbVar13 == pbVar16) {
LAB_01043580:
    *(byte **)pJVar22 = pbVar13;
    pbVar15 = pbVar13;
    pbVar13 = pbVar16;
switchD_01042a78_caseD_3:
    if (pbVar15 == pbVar13) {
      uVar12 = 0xd;
    }
    else {
      uVar12 = (&DAT_019cbf74)[*pbVar15];
    }
    ReportUnexpectedToken(this,uVar12);
    if (local_a8 == local_a0) {
LAB_0104366c:
      puVar21 = (ulong *)0x0;
joined_r0x01043818:
      if (local_90 != (Isolate *)0x0) {
        *(undefined8 *)(local_90 + 0x95a0) = local_88;
        *(int *)(local_90 + 0x95b0) = *(int *)(local_90 + 0x95b0) + -1;
        if (*(long *)(local_90 + 0x95a8) != lStack_80) {
          *(long *)(local_90 + 0x95a8) = lStack_80;
          HandleScope::DeleteExtensions(local_90);
        }
      }
      if (local_e0 != (long *)0x0) {
        plStack_d8 = local_e0;
        operator_delete(local_e0);
      }
      if (local_c0 != (undefined1 (*) [12])0x0) {
        local_b8 = local_c0;
        operator_delete(local_c0);
      }
      puVar20 = local_a8;
      if (local_a8 != (undefined8 *)0x0) {
        if (local_a0 != local_a8) {
          pIVar10 = (Isolate *)local_a0[-5];
          puVar9 = local_a0 + -5;
          puVar7 = local_a0;
          while( true ) {
            puVar6 = puVar9;
            if (pIVar10 != (Isolate *)0x0) {
              lVar18 = puVar7[-3];
              *(undefined8 *)(pIVar10 + 0x95a0) = puVar7[-4];
              *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + -1;
              if (*(long *)(pIVar10 + 0x95a8) != lVar18) {
                *(long *)(pIVar10 + 0x95a8) = lVar18;
                HandleScope::DeleteExtensions(pIVar10);
              }
            }
            if (puVar20 == puVar6) break;
            pIVar10 = (Isolate *)puVar6[-5];
            puVar9 = puVar6 + -5;
            puVar7 = puVar6;
          }
        }
        local_a0 = puVar20;
        operator_delete(local_a8);
      }
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return puVar21;
    }
    if (local_90 != (Isolate *)0x0) goto LAB_010435d0;
    do {
      local_90 = (Isolate *)local_a0[-5];
      puVar20 = local_a0;
      while( true ) {
        local_88 = puVar20[-4];
        lStack_80 = puVar20[-3];
        puVar20[-5] = 0;
        uStack_70 = *(undefined4 *)(puVar20 + -1);
        local_78 = (uint)puVar20[-2];
        uStack_74 = (undefined4)((ulong)puVar20[-2] >> 0x20);
        puVar20 = local_a0 + -5;
        pIVar10 = (Isolate *)*puVar20;
        if (pIVar10 != (Isolate *)0x0) {
          lVar18 = local_a0[-3];
          *(undefined8 *)(pIVar10 + 0x95a0) = local_a0[-4];
          *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + -1;
          if (*(long *)(pIVar10 + 0x95a8) != lVar18) {
            *(long *)(pIVar10 + 0x95a8) = lVar18;
            HandleScope::DeleteExtensions(pIVar10);
          }
        }
        local_a0 = puVar20;
        if (local_a8 == puVar20) goto LAB_0104366c;
        if (local_90 == (Isolate *)0x0) break;
LAB_010435d0:
        puVar20 = local_a0;
        *(undefined8 *)(local_90 + 0x95a0) = local_88;
        *(int *)(local_90 + 0x95b0) = *(int *)(local_90 + 0x95b0) + -1;
        if (*(long *)(local_90 + 0x95a8) != lStack_80) {
          *(long *)(local_90 + 0x95a8) = lStack_80;
          HandleScope::DeleteExtensions(local_90);
        }
      }
    } while( true );
  }
LAB_01042a34:
  do {
    pbVar13 = pbVar16;
    JVar11 = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + *pbVar15);
    if (JVar11 != (JsonParser<unsigned_char>)0x9) {
      this[0x10] = JVar11;
      *(byte **)(this + 0x30) = pbVar15;
      puVar20 = local_a0;
      switch(JVar11) {
      case (JsonParser<unsigned_char>)0x0:
        local_e8 = (ulong *)ParseJsonNumber(this);
        puVar20 = local_a0;
        break;
      case (JsonParser<unsigned_char>)0x1:
        *(byte **)(this + 0x30) = pbVar15 + 1;
        auVar24 = ScanJsonString(this,false);
        local_f8 = auVar24;
        local_e8 = (ulong *)MakeString(this,local_f8,0);
        puVar20 = local_a0;
        break;
      case (JsonParser<unsigned_char>)0x2:
        pbVar16 = pbVar15 + 1;
        *(byte **)(this + 0x30) = pbVar16;
        this[0x10] = (JsonParser<unsigned_char>)0xd;
        if (pbVar13 + -1 != pbVar15) {
          do {
            bVar4 = *pbVar16;
            if (*(JsonParser<unsigned_char> *)(&DAT_019cbf74 + bVar4) !=
                (JsonParser<unsigned_char>)0x9) {
              if (bVar4 == 0x7d) {
                pbVar16 = pbVar16 + 1;
              }
              this[0x10] = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + bVar4);
              *(byte **)(this + 0x30) = pbVar16;
              if (bVar4 != 0x7d) goto LAB_01042b7c;
              local_e8 = (ulong *)Factory::NewJSObject
                                            (*(Factory **)this,*(undefined8 *)(this + 0x18),0);
              puVar20 = local_a0;
              goto switchD_01042a78_caseD_9;
            }
            pbVar16 = pbVar16 + 1;
          } while (pbVar13 != pbVar16);
        }
        *(byte **)pJVar22 = pbVar13;
LAB_01042b7c:
        if (local_a0 < puStack_98) {
          *local_a0 = local_90;
          local_a0[1] = local_88;
          local_a0[2] = lStack_80;
          local_90 = (Isolate *)0x0;
          *(undefined4 *)(local_a0 + 4) = uStack_70;
          local_a0[3] = CONCAT44(uStack_74,local_78);
          local_a0 = local_a0 + 5;
        }
        else {
          std::__ndk1::
          vector<v8::internal::JsonParser<unsigned_char>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_char>::JsonContinuation>>
          ::__emplace_back_slow_path<v8::internal::JsonParser<unsigned_char>::JsonContinuation>
                    ((vector<v8::internal::JsonParser<unsigned_char>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_char>::JsonContinuation>>
                      *)&local_a8,(JsonContinuation *)&local_90);
        }
        pIVar10 = *(Isolate **)this;
        lVar18 = *(long *)(pIVar10 + 0x95a8);
        uVar23 = *(undefined8 *)(pIVar10 + 0x95a0);
        uVar3 = (int)((ulong)((long)local_b8 - (long)local_c0) >> 3) * -0x55555554 | 1;
        *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + 1;
        if (local_90 != (Isolate *)0x0) {
          *(undefined8 *)(local_90 + 0x95a0) = local_88;
          *(int *)(local_90 + 0x95b0) = *(int *)(local_90 + 0x95b0) + -1;
          pIVar10 = local_90;
          if (*(long *)(local_90 + 0x95a8) != lStack_80) {
            *(long *)(local_90 + 0x95a8) = lStack_80;
            HandleScope::DeleteExtensions(local_90);
            pIVar10 = local_90;
          }
        }
        local_90 = pIVar10;
        uStack_74 = 0;
        uStack_70 = 0;
        pbVar15 = *(byte **)(this + 0x30);
        this[0x10] = (JsonParser<unsigned_char>)0xd;
        pbVar13 = pbVar15;
        for (; local_88 = uVar23, lStack_80 = lVar18, local_78 = uVar3,
            pbVar15 != *(byte **)(this + 0x38); pbVar15 = pbVar15 + 1) {
          bVar4 = *pbVar15;
          JVar11 = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + bVar4);
          if (JVar11 != (JsonParser<unsigned_char>)0x9) {
            this[0x10] = JVar11;
            *(byte **)(this + 0x30) = pbVar15;
            if (bVar4 != 0x22) goto LAB_010432f8;
            *(byte **)pJVar22 = pbVar15 + 1;
            goto LAB_01043330;
          }
          pbVar13 = *(byte **)(this + 0x38);
        }
        JVar11 = (JsonParser<unsigned_char>)0xd;
        *(byte **)pJVar22 = pbVar13;
LAB_010432f8:
        ReportUnexpectedToken(this,JVar11);
LAB_01043330:
        auVar24 = ScanJsonPropertyKey(this,(JsonContinuation *)&local_90);
        local_f8 = auVar24;
        if (local_b8 < local_b0) {
          *(undefined8 *)(local_b8[1] + 4) = 0;
          *local_b8 = auVar24;
          local_b8 = local_b8 + 2;
        }
        else {
          std::__ndk1::
          vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>::
          __emplace_back_slow_path<v8::internal::JsonString>
                    ((vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>
                      *)&local_c0,(JsonString *)local_f8);
        }
        pbVar15 = *(byte **)(this + 0x30);
        this[0x10] = (JsonParser<unsigned_char>)0xd;
        pbVar13 = pbVar15;
        for (; pbVar15 != *(byte **)(this + 0x38); pbVar15 = pbVar15 + 1) {
          uVar14 = (ulong)*pbVar15;
          JVar11 = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + uVar14);
          if (JVar11 != (JsonParser<unsigned_char>)0x9) goto LAB_010433c4;
          pbVar13 = *(byte **)(this + 0x38);
        }
        goto LAB_010433b0;
      case (JsonParser<unsigned_char>)0x3:
      case (JsonParser<unsigned_char>)0x5:
      case (JsonParser<unsigned_char>)0xa:
      case (JsonParser<unsigned_char>)0xb:
      case (JsonParser<unsigned_char>)0xc:
      case (JsonParser<unsigned_char>)0xd:
        goto switchD_01042a78_caseD_3;
      case (JsonParser<unsigned_char>)0x4:
        pbVar16 = pbVar15 + 1;
        *(byte **)(this + 0x30) = pbVar16;
        this[0x10] = (JsonParser<unsigned_char>)0xd;
        if (pbVar13 + -1 != pbVar15) {
          do {
            bVar4 = *pbVar16;
            if (*(JsonParser<unsigned_char> *)(&DAT_019cbf74 + bVar4) !=
                (JsonParser<unsigned_char>)0x9) {
              if (bVar4 == 0x5d) {
                pbVar16 = pbVar16 + 1;
              }
              this[0x10] = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + bVar4);
              *(byte **)(this + 0x30) = pbVar16;
              if (bVar4 != 0x5d) goto LAB_01042c00;
              local_e8 = (ulong *)Factory::NewJSArray(*(Factory **)this,0,0,0,1,0);
              puVar20 = local_a0;
              goto switchD_01042a78_caseD_9;
            }
            pbVar16 = pbVar16 + 1;
          } while (pbVar13 != pbVar16);
        }
        *(byte **)pJVar22 = pbVar13;
LAB_01042c00:
        if (local_a0 < puStack_98) {
          *local_a0 = local_90;
          local_a0[1] = local_88;
          local_a0[2] = lStack_80;
          local_90 = (Isolate *)0x0;
          *(undefined4 *)(local_a0 + 4) = uStack_70;
          local_a0[3] = CONCAT44(uStack_74,local_78);
          local_a0 = local_a0 + 5;
        }
        else {
          std::__ndk1::
          vector<v8::internal::JsonParser<unsigned_char>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_char>::JsonContinuation>>
          ::__emplace_back_slow_path<v8::internal::JsonParser<unsigned_char>::JsonContinuation>
                    ((vector<v8::internal::JsonParser<unsigned_char>::JsonContinuation,std::__ndk1::allocator<v8::internal::JsonParser<unsigned_char>::JsonContinuation>>
                      *)&local_a8,(JsonContinuation *)&local_90);
        }
        pIVar10 = *(Isolate **)this;
        uVar14 = (long)plStack_d8 - (long)local_e0;
        lVar18 = *(long *)(pIVar10 + 0x95a8);
        uVar23 = *(undefined8 *)(pIVar10 + 0x95a0);
        *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + 1;
        if (local_90 != (Isolate *)0x0) {
          *(undefined8 *)(local_90 + 0x95a0) = local_88;
          *(int *)(local_90 + 0x95b0) = *(int *)(local_90 + 0x95b0) + -1;
          pIVar10 = local_90;
          if (*(long *)(local_90 + 0x95a8) != lStack_80) {
            *(long *)(local_90 + 0x95a8) = lStack_80;
            HandleScope::DeleteExtensions(local_90);
            pIVar10 = local_90;
          }
        }
        local_90 = pIVar10;
        uStack_74 = 0;
        uStack_70 = 0;
        local_88 = uVar23;
        lStack_80 = lVar18;
        local_78 = (uint)(uVar14 >> 1) & 0xfffffffc | 2;
        goto LAB_010433dc;
      case (JsonParser<unsigned_char>)0x6:
        pbVar16 = pbVar15 + 1;
        if ((ulong)((long)pbVar13 - (long)pbVar15) < 4) {
          uVar14 = ((long)pbVar13 - (long)pbVar15) - 1;
          if (2 < uVar14) {
            uVar14 = 3;
          }
          *(byte **)pJVar22 = pbVar16;
          if (uVar14 != 0) goto LAB_010434fc;
LAB_0104352c:
          uVar12 = 0xd;
LAB_01043568:
          ReportUnexpectedToken(this,uVar12);
        }
        else {
          if (*(short *)pbVar16 != 0x7572 || pbVar15[3] != 0x65) {
            *(byte **)pJVar22 = pbVar16;
            uVar14 = 3;
LAB_010434fc:
            uVar19 = 0;
            do {
              if ("Invalid ScriptOrigin: is_module must be true"[uVar19 + 0x29] !=
                  pbVar15[uVar19 + 1]) {
                uVar12 = (&DAT_019cbf74)[pbVar15[uVar19 + 1]];
                goto LAB_01043568;
              }
              uVar17 = uVar19 + 1;
              *(byte **)pJVar22 = pbVar15 + uVar19 + 2;
              uVar19 = uVar17;
            } while (uVar17 < uVar14);
            goto LAB_0104352c;
          }
          *(byte **)pJVar22 = pbVar15 + 4;
        }
        local_e8 = (ulong *)(*(long *)this + 0xb8);
        puVar20 = local_a0;
        break;
      case (JsonParser<unsigned_char>)0x7:
        pbVar16 = pbVar15 + 1;
        if ((ulong)((long)pbVar13 - (long)pbVar15) < 5) {
          uVar14 = ((long)pbVar13 - (long)pbVar15) - 1;
          if (3 < uVar14) {
            uVar14 = 4;
          }
          *(byte **)pJVar22 = pbVar16;
          if (uVar14 != 0) goto LAB_0104346c;
LAB_0104349c:
          uVar12 = 0xd;
LAB_01043538:
          ReportUnexpectedToken(this,uVar12);
        }
        else {
          if (*(int *)pbVar16 != 0x65736c61) {
            *(byte **)pJVar22 = pbVar16;
            uVar14 = 4;
LAB_0104346c:
            uVar19 = 0;
            do {
              if ("1 == count_false"[uVar19 + 0xc] != pbVar15[uVar19 + 1]) {
                uVar12 = (&DAT_019cbf74)[pbVar15[uVar19 + 1]];
                goto LAB_01043538;
              }
              uVar17 = uVar19 + 1;
              *(byte **)pJVar22 = pbVar15 + uVar19 + 2;
              uVar19 = uVar17;
            } while (uVar17 < uVar14);
            goto LAB_0104349c;
          }
          *(byte **)pJVar22 = pbVar15 + 5;
        }
        local_e8 = (ulong *)(*(long *)this + 0xc0);
        puVar20 = local_a0;
        break;
      case (JsonParser<unsigned_char>)0x8:
        pbVar16 = pbVar15 + 1;
        if ((ulong)((long)pbVar13 - (long)pbVar15) < 4) {
          uVar14 = ((long)pbVar13 - (long)pbVar15) - 1;
          if (2 < uVar14) {
            uVar14 = 3;
          }
          *(byte **)pJVar22 = pbVar16;
          if (uVar14 != 0) goto LAB_010434b4;
LAB_010434e4:
          uVar12 = 0xd;
LAB_01043550:
          ReportUnexpectedToken(this,uVar12);
        }
        else {
          if (*(short *)pbVar16 != 0x6c75 || pbVar15[3] != 0x6c) {
            *(byte **)pJVar22 = pbVar16;
            uVar14 = 3;
LAB_010434b4:
            uVar19 = 0;
            do {
              if ("list cannot be null"[uVar19 + 0x10] != pbVar15[uVar19 + 1]) {
                uVar12 = (&DAT_019cbf74)[pbVar15[uVar19 + 1]];
                goto LAB_01043550;
              }
              uVar17 = uVar19 + 1;
              *(byte **)pJVar22 = pbVar15 + uVar19 + 2;
              uVar19 = uVar17;
            } while (uVar17 < uVar14);
            goto LAB_010434e4;
          }
          *(byte **)pJVar22 = pbVar15 + 4;
        }
        local_e8 = (ulong *)(*(long *)this + 0xb0);
        puVar20 = local_a0;
      }
switchD_01042a78_caseD_9:
      local_a0 = puVar20;
      pIVar10 = local_90;
      uVar3 = local_78 & 3;
      if (uVar3 == 1) {
        *(ulong **)(local_b8[-1] + 4) = local_e8;
        pbVar15 = *(byte **)(this + 0x30);
        pbVar13 = *(byte **)(this + 0x38);
        this[0x10] = (JsonParser<unsigned_char>)0xd;
        pbVar16 = pbVar15;
        for (; pbVar15 != pbVar13; pbVar15 = pbVar15 + 1) {
          bVar4 = *pbVar15;
          if (*(JsonParser<unsigned_char> *)(&DAT_019cbf74 + bVar4) !=
              (JsonParser<unsigned_char>)0x9) {
            pbVar16 = pbVar15;
            if (bVar4 == 0x2c) {
              pbVar16 = pbVar15 + 1;
            }
            this[0x10] = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + bVar4);
            *(byte **)(this + 0x30) = pbVar16;
            if (bVar4 != 0x2c) goto LAB_01042d18;
            pbVar15 = pbVar15 + 1;
            this[0x10] = (JsonParser<unsigned_char>)0xd;
            pbVar8 = pbVar15;
            goto joined_r0x01043084;
          }
          pbVar16 = pbVar13;
        }
        *(byte **)pJVar22 = pbVar16;
LAB_01042d18:
        if ((((local_a0 == local_a8) || ((*(uint *)(local_a0 + -2) & 3) != 2)) ||
            ((ulong)((long)plStack_d8 - (long)local_e0 >> 3) <=
             (ulong)(*(uint *)(local_a0 + -2) >> 2))) ||
           (uVar14 = *(ulong *)plStack_d8[-1], (uVar14 & 1) == 0)) {
LAB_01042da4:
          puVar21 = (ulong *)0x0;
        }
        else {
          uVar19 = uVar14 & 0xffffffff00000000;
          if (*(ushort *)((uVar19 | 7) + (ulong)*(uint *)(uVar14 - 1)) < 0xaa) goto LAB_01042da4;
          uVar14 = uVar19 | *(uint *)(uVar14 - 1);
          if (((*(uint *)(uVar14 + 0x13) & 1) == 0) ||
             (uVar17 = uVar19 | *(uint *)(uVar14 + 0x13),
             *(short *)((uVar19 | 7) + (ulong)*(uint *)(uVar17 - 1)) != 0xa2)) {
            uVar17 = *(ulong *)(uVar19 + 0xa0);
          }
          pIVar10 = *(Isolate **)this;
          if ((int)uVar17 == *(int *)(pIVar10 + 0xa0)) goto LAB_01042da4;
          if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar21 = *(ulong **)(pIVar10 + 0x95a0);
            if (puVar21 == *(ulong **)(pIVar10 + 0x95a8)) {
              puVar21 = (ulong *)HandleScope::Extend(pIVar10);
            }
            *(ulong **)(pIVar10 + 0x95a0) = puVar21 + 1;
            *puVar21 = uVar14;
          }
          else {
            puVar21 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar14);
          }
        }
        local_e8 = (ulong *)BuildJsonObject(this,&local_90,&local_c0,puVar21);
        lVar18 = (long)local_b8 - (long)local_c0 >> 3;
        uVar14 = (ulong)(local_78 >> 2);
        uVar19 = lVar18 * -0x5555555555555555;
        if (uVar19 < uVar14) {
          std::__ndk1::
          vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>::
          __append((vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>
                    *)&local_c0,uVar14 + lVar18 * 0x5555555555555555);
        }
        else if (uVar19 - uVar14 != 0) {
          local_b8 = local_c0 + uVar14 * 2;
        }
        if (this[0x10] != (JsonParser<unsigned_char>)0x3) goto LAB_01042ff8;
LAB_01042e88:
        *(long *)pJVar22 = *(long *)pJVar22 + 1;
      }
      else {
        if (uVar3 != 2) {
          if (uVar3 == 0) {
            pIVar2 = local_90 + 0x95a0;
            uVar14 = *local_e8;
            *(undefined8 *)pIVar2 = local_88;
            *(int *)(local_90 + 0x95b0) = *(int *)(local_90 + 0x95b0) + -1;
            if (*(long *)(local_90 + 0x95a8) != lStack_80) {
              *(long *)(local_90 + 0x95a8) = lStack_80;
              HandleScope::DeleteExtensions(local_90);
            }
            if (*(CanonicalHandleScope **)(local_90 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              pIVar1 = local_90 + 0x95a0;
              puVar21 = *(ulong **)pIVar1;
              if (puVar21 == *(ulong **)(local_90 + 0x95a8)) {
                puVar21 = (ulong *)HandleScope::Extend(local_90);
              }
              *(ulong **)pIVar1 = puVar21 + 1;
              *puVar21 = uVar14;
            }
            else {
              puVar21 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(local_90 + 0x95b8),uVar14);
            }
            lStack_80 = *(long *)(pIVar10 + 0x95a8);
            local_88 = *(undefined8 *)pIVar2;
            *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + 1;
            goto joined_r0x01043818;
          }
          goto LAB_010433dc;
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
        pbVar15 = *(byte **)(this + 0x30);
        this[0x10] = (JsonParser<unsigned_char>)0xd;
        pbVar13 = pbVar15;
        for (; pbVar15 != *(byte **)(this + 0x38); pbVar15 = pbVar15 + 1) {
          bVar4 = *pbVar15;
          if (*(JsonParser<unsigned_char> *)(&DAT_019cbf74 + bVar4) !=
              (JsonParser<unsigned_char>)0x9) {
            if (bVar4 == 0x2c) {
              pbVar15 = pbVar15 + 1;
            }
            this[0x10] = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + bVar4);
            *(byte **)(this + 0x30) = pbVar15;
            if (bVar4 == 0x2c) goto LAB_010433dc;
            goto LAB_01042e2c;
          }
          pbVar13 = *(byte **)(this + 0x38);
        }
        *(byte **)pJVar22 = pbVar13;
LAB_01042e2c:
        local_e8 = (ulong *)BuildJsonArray(this,(JsonContinuation *)&local_90,(vector *)&local_e0);
        uVar14 = (ulong)(local_78 >> 2);
        uVar19 = (long)plStack_d8 - (long)local_e0 >> 3;
        if (uVar19 < uVar14) {
          std::__ndk1::
          vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
          ::__append((vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
                      *)&local_e0,uVar14 - uVar19);
        }
        else if (uVar19 != uVar14) {
          plStack_d8 = local_e0 + uVar14;
        }
        if (this[0x10] == (JsonParser<unsigned_char>)0x5) goto LAB_01042e88;
LAB_01042ff8:
        ReportUnexpectedToken(this);
      }
      pIVar2 = local_90;
      pIVar10 = local_90 + 0x95a0;
      uVar14 = *local_e8;
      *(undefined8 *)pIVar10 = local_88;
      *(int *)(local_90 + 0x95b0) = *(int *)(local_90 + 0x95b0) + -1;
      if (*(long *)(local_90 + 0x95a8) != lStack_80) {
        *(long *)(local_90 + 0x95a8) = lStack_80;
        HandleScope::DeleteExtensions(local_90);
      }
      if (*(CanonicalHandleScope **)(local_90 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar1 = local_90 + 0x95a0;
        puVar21 = *(ulong **)pIVar1;
        if (puVar21 == *(ulong **)(local_90 + 0x95a8)) {
          puVar21 = (ulong *)HandleScope::Extend(local_90);
        }
        *(ulong **)pIVar1 = puVar21 + 1;
        *puVar21 = uVar14;
      }
      else {
        puVar21 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(local_90 + 0x95b8),uVar14);
      }
      puVar20 = local_a0;
      local_88 = *(undefined8 *)pIVar10;
      lStack_80 = *(long *)(pIVar2 + 0x95a8);
      *(int *)(pIVar2 + 0x95b0) = *(int *)(pIVar2 + 0x95b0) + 1;
      local_e8 = puVar21;
      if (local_90 == (Isolate *)0x0) {
        local_90 = (Isolate *)local_a0[-5];
      }
      else {
        *(undefined8 *)(local_90 + 0x95a0) = local_88;
        *(int *)(local_90 + 0x95b0) = *(int *)(local_90 + 0x95b0) + -1;
        if (*(long *)(local_90 + 0x95a8) != lStack_80) {
          *(long *)(local_90 + 0x95a8) = lStack_80;
          HandleScope::DeleteExtensions(local_90);
        }
      }
      local_88 = puVar20[-4];
      lStack_80 = puVar20[-3];
      puVar20[-5] = 0;
      uStack_70 = *(undefined4 *)(puVar20 + -1);
      local_78 = (uint)puVar20[-2];
      uStack_74 = (undefined4)((ulong)puVar20[-2] >> 0x20);
      puVar20 = local_a0 + -5;
      pIVar10 = (Isolate *)*puVar20;
      if (pIVar10 != (Isolate *)0x0) {
        lVar18 = local_a0[-3];
        *(undefined8 *)(pIVar10 + 0x95a0) = local_a0[-4];
        *(int *)(pIVar10 + 0x95b0) = *(int *)(pIVar10 + 0x95b0) + -1;
        if (*(long *)(pIVar10 + 0x95a8) != lVar18) {
          *(long *)(pIVar10 + 0x95a8) = lVar18;
          HandleScope::DeleteExtensions(pIVar10);
        }
      }
      goto switchD_01042a78_caseD_9;
    }
    pbVar15 = pbVar15 + 1;
    pbVar16 = pbVar13;
  } while (pbVar13 != pbVar15);
  goto LAB_01043580;
joined_r0x01043084:
  if (pbVar16 == pbVar13) goto LAB_010430a8;
  bVar4 = *pbVar15;
  JVar11 = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + bVar4);
  if (JVar11 != (JsonParser<unsigned_char>)0x9) {
    this[0x10] = JVar11;
    *(byte **)(this + 0x30) = pbVar15;
    if (bVar4 != 0x22) goto LAB_010430b0;
    *(byte **)pJVar22 = pbVar15 + 1;
    goto LAB_010430d4;
  }
  pbVar15 = pbVar15 + 1;
  pbVar8 = pbVar13;
  pbVar16 = pbVar15;
  goto joined_r0x01043084;
LAB_010430a8:
  JVar11 = (JsonParser<unsigned_char>)0xd;
  *(byte **)pJVar22 = pbVar8;
LAB_010430b0:
  ReportUnexpectedToken(this,JVar11);
LAB_010430d4:
  auVar24 = ScanJsonPropertyKey(this,(JsonContinuation *)&local_90);
  local_f8 = auVar24;
  if (local_b8 < local_b0) {
    *(undefined8 *)(local_b8[1] + 4) = 0;
    *local_b8 = auVar24;
    local_b8 = local_b8 + 2;
  }
  else {
    std::__ndk1::
    vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>::
    __emplace_back_slow_path<v8::internal::JsonString>
              ((vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>
                *)&local_c0,(JsonString *)local_f8);
  }
  pbVar15 = *(byte **)(this + 0x30);
  this[0x10] = (JsonParser<unsigned_char>)0xd;
  pbVar13 = pbVar15;
  for (; pbVar15 != *(byte **)(this + 0x38); pbVar15 = pbVar15 + 1) {
    uVar14 = (ulong)*pbVar15;
    JVar11 = *(JsonParser<unsigned_char> *)(&DAT_019cbf74 + uVar14);
    if (JVar11 != (JsonParser<unsigned_char>)0x9) goto LAB_010433c4;
    pbVar13 = *(byte **)(this + 0x38);
  }
LAB_010433b0:
  JVar11 = (JsonParser<unsigned_char>)0xd;
  *(byte **)pJVar22 = pbVar13;
LAB_010433b8:
  ReportUnexpectedToken(this,JVar11);
LAB_010433dc:
  pbVar13 = *(byte **)(this + 0x30);
  pbVar16 = *(byte **)(this + 0x38);
  this[0x10] = (JsonParser<unsigned_char>)0xd;
  pbVar15 = pbVar13;
  if (pbVar13 == pbVar16) goto LAB_01043580;
  goto LAB_01042a34;
LAB_010433c4:
  this[0x10] = JVar11;
  *(byte **)(this + 0x30) = pbVar15;
  if ((int)uVar14 == 0x3a) {
    *(byte **)pJVar22 = pbVar15 + 1;
    goto LAB_010433dc;
  }
  goto LAB_010433b8;
}

