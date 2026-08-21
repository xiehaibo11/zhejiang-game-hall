
/* v8::internal::KeyAccumulator::CollectOwnJSProxyKeys(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::JSProxy>) */

undefined2 __thiscall
v8::internal::KeyAccumulator::CollectOwnJSProxyKeys
          (KeyAccumulator *this,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 uVar15;
  Isolate *pIVar16;
  ulong uVar17;
  ulong uVar18;
  Factory *pFVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint local_11c;
  ulong local_100 [5];
  ulong *local_d8;
  long local_d0 [3];
  ulong *local_b8;
  Zone aZStack_b0 [16];
  long local_a0;
  long lStack_98;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar22 = *(long *)this;
  uVar7 = GetCurrentStackPosition();
  if (uVar7 < *(ulong *)(lVar22 + 0x58)) {
    Isolate::StackOverflow(*(Isolate **)this);
    uVar3 = 0;
    goto LAB_010e084c;
  }
  uVar7 = *param_3;
  uVar17 = uVar7 & 0xffffffff00000000;
  if (*(int *)(this + 0x24) == 0x40) {
    if ((*(uint *)(uVar7 + 3) & 1) == 0) {
      uVar17 = *(ulong *)(uVar17 + 0x410);
    }
    else {
      uVar17 = uVar17 | *(uint *)(uVar7 + 3);
    }
    pIVar16 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(pIVar16 + 0x95a0);
      if (puVar8 == *(ulong **)(pIVar16 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(pIVar16);
      }
      *(ulong **)(pIVar16 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar17;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar17);
    }
    uVar7 = BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
            CollectKeysTo(puVar8,this);
    uVar3 = 0x101;
    if ((uVar7 & 1) == 0) {
      uVar3 = 0;
    }
    goto LAB_010e084c;
  }
  pIVar16 = *(Isolate **)this;
  uVar17 = uVar17 | *(uint *)(uVar7 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar16 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar16 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar16);
    }
    *(ulong **)(pIVar16 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar17;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar17);
  }
  uVar7 = *param_3;
  uVar17 = uVar7 & 0xffffffff00000000;
  if (*(ushort *)((uVar17 | 7) + (ulong)*(uint *)((uVar17 | *(uint *)(uVar7 + 0xb)) - 1)) < 0xa9) {
    pFVar19 = *(Factory **)this;
    puVar9 = (undefined8 *)Factory::NewTypeError(pFVar19,0x90,pFVar19 + 0x8d0,0,0);
    Isolate::Throw((Isolate *)pFVar19,*puVar9,0);
    uVar3 = 0;
    goto LAB_010e084c;
  }
  pIVar16 = *(Isolate **)this;
  uVar17 = uVar17 | *(uint *)(uVar7 + 7);
  if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)(pIVar16 + 0x95a0);
    if (puVar10 == *(ulong **)(pIVar16 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(pIVar16);
    }
    *(ulong **)(pIVar16 + 0x95a0) = puVar10 + 1;
    *puVar10 = uVar17;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar17);
  }
  puVar11 = (ulong *)Object::GetMethod(puVar8,*(long *)this + 0x8d0);
  if (puVar11 != (ulong *)0x0) {
    if (((*puVar11 & 1) == 0) || ((int)*puVar11 != *(int *)(*(long *)this + 0xa0))) {
      local_b8 = puVar10;
      lVar22 = Execution::Call(*(long *)this,puVar11,puVar8,1,&local_b8);
      if ((lVar22 != 0) &&
         (puVar8 = (ulong *)Object::CreateListFromArrayLike(*(undefined8 *)this,lVar22,1),
         puVar8 != (ulong *)0x0)) {
        Zone::Zone(aZStack_b0,*(AccountingAllocator **)(*(long *)this + 0x95d0),
                   "../../src/objects/keys.cc:932");
        local_d0[2] = *(long *)this;
        if ((ulong)(lStack_98 - local_a0) < 0xc0) {
          local_d0[0] = Zone::NewExpand(aZStack_b0,0xc0);
        }
        else {
          local_d0[0] = local_a0;
          local_a0 = local_a0 + 0xc0;
        }
        if (local_d0[0] == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Out of memory: HashMap::Initialize");
        }
        *(undefined1 *)(local_d0[0] + 0x10) = 0;
        *(undefined1 *)(local_d0[0] + 0x28) = 0;
        *(undefined1 *)(local_d0[0] + 0x40) = 0;
        *(undefined1 *)(local_d0[0] + 0x58) = 0;
        *(undefined1 *)(local_d0[0] + 0x70) = 0;
        *(undefined1 *)(local_d0[0] + 0x88) = 0;
        *(undefined1 *)(local_d0[0] + 0xa0) = 0;
        *(undefined1 *)(local_d0[0] + 0xb8) = 0;
        local_d0[1] = 8;
        uVar17 = *puVar8;
        uVar7 = 0;
        if (1 < *(int *)(uVar17 + 3)) {
          iVar20 = 0;
          uVar7 = 0;
          do {
            pIVar16 = *(Isolate **)this;
            uVar17 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + (long)iVar20 + 7);
            if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar11 = *(ulong **)(pIVar16 + 0x95a0);
              if (puVar11 == *(ulong **)(pIVar16 + 0x95a8)) {
                puVar11 = (ulong *)HandleScope::Extend(pIVar16);
              }
              *(ulong **)(pIVar16 + 0x95a0) = puVar11 + 1;
              *puVar11 = uVar17;
            }
            else {
              puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar17);
              uVar17 = *puVar11;
            }
            local_d8 = puVar11;
            if ((*(uint *)(uVar17 + 3) & 1) == 0) {
              uVar6 = *(uint *)(uVar17 + 3) >> 3;
            }
            else {
              local_100[0] = uVar17;
              uVar6 = String::ComputeAndSetHash((String *)local_100);
            }
            lVar22 = FUN_010e31f8(local_d0,&local_d8,uVar6);
            if (*(char *)(lVar22 + 0x10) == '\0') {
              local_100[0] = local_100[0] & 0xffffffff00000000;
              lVar22 = FUN_010e3310(local_d0,lVar22,&local_d8,local_100,uVar6,aZStack_b0);
            }
            if (*(int *)(lVar22 + 8) == 1) {
              pFVar19 = *(Factory **)this;
              uVar15 = 0x8d;
              goto LAB_010e05f0;
            }
            *(undefined4 *)(lVar22 + 8) = 1;
            uVar17 = *puVar8;
            uVar7 = uVar7 + 1;
            iVar20 = iVar20 + 4;
          } while ((long)uVar7 < (long)(*(int *)(uVar17 + 3) >> 1));
        }
        uVar4 = JSReceiver::IsExtensible(puVar10);
        if (((uVar4 & 0xff) == 0) ||
           (puVar11 = (ulong *)GetKeys(puVar10,0,0,0,0,0), puVar11 == (ulong *)0x0)) {
LAB_010e05e0:
          uVar3 = 0;
        }
        else {
          puVar12 = (ulong *)Factory::NewFixedArray(*(Factory **)this,*(int *)(*puVar11 + 3) >> 1,0)
          ;
          local_11c = 0;
          if (1 < *(int *)(*puVar11 + 3)) {
            iVar20 = 0;
            lVar22 = 0;
            local_11c = 0;
            do {
              local_100[0] = local_100[0] & 0xffffffffffffff00;
              local_100[2] = 0;
              local_100[1] = 0;
              local_100[4] = 0;
              local_100[3] = 0;
              pIVar16 = *(Isolate **)this;
              lVar14 = (long)iVar20 + 7;
              uVar17 = *puVar11 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar11 + lVar14);
              if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar13 = *(ulong **)(pIVar16 + 0x95a0);
                if (puVar13 == *(ulong **)(pIVar16 + 0x95a8)) {
                  puVar13 = (ulong *)HandleScope::Extend(pIVar16);
                }
                *(ulong **)(pIVar16 + 0x95a0) = puVar13 + 1;
                *puVar13 = uVar17;
              }
              else {
                puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar17);
              }
              uVar5 = JSReceiver::GetOwnPropertyDescriptor(pIVar16,puVar10,puVar13,local_100);
              if ((uVar5 & 0xff) == 0) goto LAB_010e05e0;
              if ((0xff < uVar5) && (((byte)local_100[0]._0_1_ >> 2 & 1) == 0)) {
                uVar17 = *puVar11;
                uVar23 = *puVar12;
                uVar6 = *(uint *)(uVar17 + lVar14);
                lVar1 = uVar23 + (long)(int)(local_11c << 2);
                *(uint *)(lVar1 + 7) = uVar6;
                if ((uVar6 & 1) != 0) {
                  uVar17 = uVar17 & 0xffffffff00000000;
                  uVar24 = uVar17 | uVar6;
                  uVar17 = uVar17 | (ulong)uVar6 & 0xfffffffffffc0000;
                  uVar18 = *(ulong *)(uVar17 + 8);
                  lVar1 = lVar1 + 7;
                  if (((uint)uVar18 >> 0x12 & 1) != 0) {
                    Heap_MarkingBarrierSlow(uVar23,lVar1,uVar24);
                    uVar18 = *(ulong *)(uVar17 | 8);
                  }
                  if (((uVar18 & 0x18) != 0) &&
                     ((*(byte *)((uVar23 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                    Heap_GenerationalBarrierSlow(uVar23,lVar1,uVar24);
                  }
                }
                local_11c = local_11c + 1;
                *(undefined4 *)(*puVar11 + lVar14) = 0;
              }
              lVar22 = lVar22 + 1;
              iVar20 = iVar20 + 4;
            } while (lVar22 < *(int *)(*puVar11 + 3) >> 1);
          }
          if ((uVar4 < 0x100) || (local_11c != 0)) {
            if (0 < (int)local_11c) {
              uVar7 = (ulong)((int)uVar7 - local_11c);
              lVar22 = 0;
              do {
                pIVar16 = *(Isolate **)this;
                uVar17 = *puVar12 & 0xffffffff00000000 |
                         (ulong)*(uint *)(*puVar12 + (long)(int)lVar22 + 7);
                if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar10 = *(ulong **)(pIVar16 + 0x95a0);
                  if (puVar10 == *(ulong **)(pIVar16 + 0x95a8)) {
                    puVar10 = (ulong *)HandleScope::Extend(pIVar16);
                  }
                  *(ulong **)(pIVar16 + 0x95a0) = puVar10 + 1;
                  *puVar10 = uVar17;
                }
                else {
                  puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                               (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar17)
                  ;
                  uVar17 = *puVar10;
                }
                local_d8 = puVar10;
                if ((*(uint *)(uVar17 + 3) & 1) == 0) {
                  uVar6 = *(uint *)(uVar17 + 3) >> 3;
                }
                else {
                  local_100[0] = uVar17;
                  uVar6 = String::ComputeAndSetHash((String *)local_100);
                }
                lVar14 = FUN_010e31f8(local_d0,&local_d8,uVar6);
                if (((lVar14 == 0) || (*(char *)(lVar14 + 0x10) == '\0')) ||
                   (*(int *)(lVar14 + 8) == 0)) goto LAB_010e080c;
                lVar22 = lVar22 + 4;
                *(undefined4 *)(lVar14 + 8) = 0;
              } while ((ulong)local_11c * 4 - lVar22 != 0);
            }
            iVar20 = (int)uVar7;
            if (uVar4 < 0x100) {
              uVar17 = *puVar11;
              if (1 < *(int *)(uVar17 + 3)) {
                iVar21 = 0;
                lVar22 = 0;
                do {
                  uVar6 = *(uint *)(uVar17 + (long)iVar21 + 7);
                  if ((uVar6 & 1) != 0) {
                    pIVar16 = *(Isolate **)this;
                    uVar17 = uVar17 & 0xffffffff00000000 | (ulong)uVar6;
                    if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0)
                    {
                      puVar10 = *(ulong **)(pIVar16 + 0x95a0);
                      if (puVar10 == *(ulong **)(pIVar16 + 0x95a8)) {
                        puVar10 = (ulong *)HandleScope::Extend(pIVar16);
                      }
                      *(ulong **)(pIVar16 + 0x95a0) = puVar10 + 1;
                      *puVar10 = uVar17;
                    }
                    else {
                      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                                   (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),
                                                    uVar17);
                      uVar17 = *puVar10;
                    }
                    local_d8 = puVar10;
                    if ((*(uint *)(uVar17 + 3) & 1) == 0) {
                      uVar6 = *(uint *)(uVar17 + 3) >> 3;
                    }
                    else {
                      local_100[0] = uVar17;
                      uVar6 = String::ComputeAndSetHash((String *)local_100);
                    }
                    lVar14 = FUN_010e31f8(local_d0,&local_d8,uVar6);
                    if (((lVar14 == 0) || (*(char *)(lVar14 + 0x10) == '\0')) ||
                       (*(int *)(lVar14 + 8) == 0)) goto LAB_010e080c;
                    *(undefined4 *)(lVar14 + 8) = 0;
                    uVar7 = (ulong)((int)uVar7 - 1);
                    uVar17 = *puVar11;
                  }
                  iVar20 = (int)uVar7;
                  lVar22 = lVar22 + 1;
                  iVar21 = iVar21 + 4;
                } while (lVar22 < *(int *)(uVar17 + 3) >> 1);
              }
              if (iVar20 != 0) {
                pFVar19 = *(Factory **)this;
                uVar15 = 0x8c;
LAB_010e05f0:
                puVar10 = (ulong *)0x0;
                goto LAB_010e05f8;
              }
            }
          }
          uVar3 = AddKeysFromJSProxy(this,param_3,puVar8);
        }
        goto LAB_010e0844;
      }
    }
    else {
      lVar22 = GetKeys(puVar10,0,0,0,this[0x28],this[0x29]);
      if (lVar22 != 0) {
        uVar3 = AddKeysFromJSProxy(this,param_3,lVar22);
        goto LAB_010e084c;
      }
    }
  }
  uVar3 = 0;
  goto LAB_010e084c;
LAB_010e080c:
  pFVar19 = *(Factory **)this;
  uVar15 = 0x8b;
LAB_010e05f8:
  puVar9 = (undefined8 *)Factory::NewTypeError(pFVar19,uVar15,puVar10,0,0);
  Isolate::Throw((Isolate *)pFVar19,*puVar9,0);
  uVar3 = 0;
LAB_010e0844:
  Zone::~Zone(aZStack_b0);
LAB_010e084c:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

