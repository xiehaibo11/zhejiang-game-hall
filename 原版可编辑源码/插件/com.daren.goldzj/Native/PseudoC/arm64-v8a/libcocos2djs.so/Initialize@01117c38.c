
/* v8::internal::JSRegExp::Initialize(v8::internal::Handle<v8::internal::JSRegExp>,
   v8::internal::Handle<v8::internal::String>, v8::base::Flags<v8::internal::JSRegExp::Flag, int>,
   unsigned int) */

ulong * v8::internal::JSRegExp::Initialize
                  (ulong *param_1,long *param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  Isolate *pIVar6;
  long lVar7;
  Isolate *pIVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined2 uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  undefined1 uVar20;
  undefined2 uVar21;
  int iVar22;
  uint uVar23;
  Isolate *pIVar24;
  ulong uVar25;
  undefined1 auVar26 [12];
  ulong local_58;
  
  pIVar24 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  plVar2 = (long *)((ulong)*(uint *)((long)param_1 + 4) << 0x20 | 0x920);
  if (*(int *)(*param_2 + 7) != 0) {
    plVar2 = param_2;
  }
  pIVar6 = (Isolate *)String::Flatten(pIVar24,plVar2,0);
  lVar7 = RegExp::Compile(pIVar24,param_1,pIVar6,param_3,param_4);
  if (lVar7 == 0) {
    return (ulong *)0x0;
  }
  uVar13 = *(ulong *)pIVar6;
  uVar25 = uVar13;
  if (*(int *)(uVar13 + 7) == 0) {
    pIVar8 = pIVar24 + 0x920;
    goto LAB_01118150;
  }
  while( true ) {
    uVar4 = *(ushort *)((uVar25 & 0xffffffff00000000 | (ulong)*(uint *)(uVar25 - 1)) + 7);
    local_58 = uVar13;
    pIVar8 = pIVar6;
    if ((uVar4 & 9) == 0) break;
    if ((uVar4 & 9) == 8) {
      auVar26 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_58);
      if (auVar26._8_4_ < 1) goto joined_r0x01117e68;
      iVar12 = 0;
      iVar15 = 0;
      bVar5 = false;
      goto LAB_01117dfc;
    }
    uVar25 = uVar25 & 0xffffffff00000000 | (ulong)*(uint *)(uVar25 + 0xb);
  }
  auVar26 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_58);
  if (auVar26._8_4_ < 1) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    iVar15 = 0;
    bVar5 = false;
    do {
      uVar4 = *(ushort *)(auVar26._0_8_ + (long)iVar15 * 2);
      if (uVar4 < 0x5c) {
        if (uVar4 < 0x2f) {
          if ((uVar4 == 10) || (uVar4 == 0xd)) {
LAB_01117d28:
            iVar12 = iVar12 + 1;
          }
        }
        else if (uVar4 == 0x2f) {
          if (!bVar5) {
            bVar5 = false;
            goto LAB_01117d28;
          }
        }
        else if (uVar4 == 0x5b) {
          bVar5 = true;
        }
      }
      else if (uVar4 < 0x2028) {
        if (uVar4 == 0x5c) {
          iVar15 = iVar15 + 1;
        }
        else if (uVar4 == 0x5d) {
          bVar5 = false;
        }
      }
      else if ((uVar4 == 0x2028) || (uVar4 == 0x2029)) {
        iVar12 = iVar12 + 5;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < auVar26._8_4_);
  }
  bVar5 = false;
  goto joined_r0x01117e78;
LAB_01117dfc:
  do {
    bVar3 = *(byte *)(auVar26._0_8_ + (long)iVar15);
    if (bVar3 < 0x5b) {
      if ((bVar3 != 10) && (bVar3 != 0xd)) {
        if ((bVar3 != 0x2f) || (bVar5)) goto LAB_01117df0;
        bVar5 = false;
      }
      iVar12 = iVar12 + 1;
    }
    else if (bVar3 == 0x5b) {
      bVar5 = true;
    }
    else if (bVar3 == 0x5d) {
      bVar5 = false;
    }
    else if (bVar3 == 0x5c) {
      iVar15 = iVar15 + 1;
    }
LAB_01117df0:
    iVar15 = iVar15 + 1;
  } while (iVar15 < auVar26._8_4_);
  bVar5 = true;
joined_r0x01117e78:
  if (iVar12 != 0) {
    if (bVar5) {
      pIVar8 = (Isolate *)Factory::NewRawOneByteString();
      if (pIVar8 == (Isolate *)0x0) {
        return (ulong *)0x0;
      }
      local_58 = *(ulong *)pIVar6;
      auVar26 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_58);
      iVar12 = auVar26._8_4_;
      if (0 < iVar12) {
        iVar15 = 0;
        bVar5 = false;
        iVar22 = 0;
        lVar7 = *(ulong *)pIVar8 + 0xb;
        do {
          lVar18 = 0;
          iVar16 = iVar22;
          while( true ) {
            bVar3 = *(byte *)(auVar26._0_8_ + (long)iVar15 + lVar18);
            iVar17 = (int)lVar18;
            if (bVar3 == 0x5c) break;
            if (!bVar5 && bVar3 == 0x2f) {
              bVar5 = false;
              *(undefined1 *)(lVar7 + iVar16) = 0x5c;
              iVar16 = iVar16 + 1;
LAB_01117f58:
              iVar17 = iVar15 + iVar17;
              goto LAB_01117f5c;
            }
            if (bVar3 < 0xd) {
              if (bVar3 != 10) goto LAB_01117f58;
              uVar20 = 0x6e;
            }
            else {
              if (bVar3 != 0xd) {
                if (bVar3 != 0x5b) {
                  if (bVar3 == 0x5d) {
                    bVar5 = false;
                  }
                  goto LAB_01117f58;
                }
                iVar17 = iVar15 + iVar17;
                bVar5 = true;
                goto LAB_01117f5c;
              }
              uVar20 = 0x72;
            }
            lVar10 = (long)iVar16;
            lVar18 = lVar18 + 1;
            ((undefined1 *)(lVar7 + lVar10))[1] = uVar20;
            iVar16 = iVar16 + 2;
            *(undefined1 *)(lVar7 + lVar10) = 0x5c;
            if ((long)iVar12 <= iVar15 + lVar18) goto joined_r0x01117e68;
          }
          *(undefined1 *)(lVar7 + iVar16) = 0x5c;
          if ((1 - iVar12) + iVar15 + iVar17 == 0) break;
          iVar17 = iVar17 + iVar15 + 1;
          iVar16 = iVar16 + 1;
LAB_01117f5c:
          iVar15 = iVar17 + 1;
          iVar22 = iVar16 + 1;
          *(undefined1 *)(lVar7 + iVar16) = *(undefined1 *)(auVar26._0_8_ + (long)iVar17);
        } while (iVar15 < iVar12);
      }
    }
    else {
      pIVar8 = (Isolate *)
               Factory::NewRawTwoByteString
                         ((Factory *)pIVar24,*(int *)(*(ulong *)pIVar6 + 7) + iVar12,0);
      if (pIVar8 == (Isolate *)0x0) {
        return (ulong *)0x0;
      }
      local_58 = *(ulong *)pIVar6;
      auVar26 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_58);
      iVar12 = auVar26._8_4_;
      if (0 < iVar12) {
        iVar15 = 0;
        bVar5 = false;
        uVar23 = 0;
        lVar7 = *(ulong *)pIVar8 + 0xb;
        do {
          uVar25 = (ulong)iVar15;
          while( true ) {
            uVar4 = *(ushort *)(auVar26._0_8_ + uVar25 * 2);
            if (uVar4 == 0x5c) break;
            if (!bVar5 && uVar4 == 0x2f) {
              uVar19 = uVar23 + 1;
              bVar5 = false;
              *(undefined2 *)(lVar7 + (long)(int)uVar23 * 2) = 0x5c;
              goto LAB_01118040;
            }
            uVar19 = uVar23;
            if (uVar4 < 0x5d) {
              if (uVar4 == 10) {
                uVar21 = 0x6e;
              }
              else {
                if (uVar4 != 0xd) {
                  if (uVar4 == 0x5b) {
                    bVar5 = true;
                  }
                  goto LAB_01118040;
                }
                uVar21 = 0x72;
              }
              lVar10 = (long)(int)uVar23;
              iVar15 = 2;
              lVar18 = lVar10 + 1;
              uVar11 = 0x5c;
            }
            else {
              if (uVar4 == 0x2028) {
                uVar13 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar23 << 1;
                uVar21 = 0x38;
              }
              else {
                if (uVar4 != 0x2029) {
                  if (uVar4 == 0x5d) {
                    bVar5 = false;
                  }
                  goto LAB_01118040;
                }
                uVar13 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar23 << 1;
                uVar21 = 0x39;
              }
              iVar15 = 6;
              lVar10 = (long)(int)uVar23 + 4;
              *(undefined8 *)(lVar7 + uVar13) = 0x3000320075005c;
              lVar18 = (long)(int)uVar23 + 5;
              uVar11 = 0x32;
            }
            uVar25 = uVar25 + 1;
            uVar23 = uVar23 + iVar15;
            *(undefined2 *)(lVar7 + lVar10 * 2) = uVar11;
            *(undefined2 *)(lVar7 + lVar18 * 2) = uVar21;
            if ((long)iVar12 <= (long)uVar25) goto joined_r0x01117e68;
          }
          *(undefined2 *)(lVar7 + (long)(int)uVar23 * 2) = 0x5c;
          if (iVar12 + -1 == (int)uVar25) break;
          uVar25 = (ulong)((int)uVar25 + 1);
          uVar19 = uVar23 + 1;
LAB_01118040:
          iVar15 = (int)uVar25 + 1;
          uVar23 = uVar19 + 1;
          *(undefined2 *)(lVar7 + (long)(int)uVar19 * 2) =
               *(undefined2 *)(auVar26._0_8_ + (long)(int)uVar25 * 2);
        } while (iVar15 < iVar12);
      }
    }
  }
joined_r0x01117e68:
  if (pIVar8 == (Isolate *)0x0) {
    return (ulong *)0x0;
  }
LAB_01118150:
  uVar13 = *param_1;
  uVar25 = *(ulong *)pIVar8;
  *(int *)(uVar13 + 0xf) = (int)uVar25;
  if ((uVar25 & 1) != 0) {
    uVar14 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar13,uVar13 + 0xf,uVar25);
      uVar14 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0xf,uVar25);
    }
  }
  *(int *)(*param_1 + 0x13) = param_3 << 1;
  uVar13 = *param_1;
  uVar25 = uVar13 & 0xffffffff00000000;
  uVar23 = *(uint *)((uVar25 | *(uint *)(uVar13 - 1)) + 0x13);
  uVar14 = uVar25 | uVar23;
  if ((uVar23 & 1) != 0) {
    do {
      if (*(short *)((uVar25 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar14 + 0x13);
      uVar14 = uVar25 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  if ((((uVar14 & 1) != 0) &&
      (*(short *)((uVar14 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x439)) &&
     (*(uint *)(uVar14 + 0x1b) == *(uint *)(uVar13 - 1))) {
    ((uint *)(uVar13 - 1))[*(byte *)((uVar25 | *(uint *)(uVar13 - 1)) + 4)] = 0;
    return param_1;
  }
  if (*(CanonicalHandleScope **)(pIVar24 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(undefined8 **)(pIVar24 + 0x95a0);
    if (puVar9 == *(undefined8 **)(pIVar24 + 0x95a8)) {
      puVar9 = (undefined8 *)HandleScope::Extend(pIVar24);
    }
    *(undefined8 **)(pIVar24 + 0x95a0) = puVar9 + 1;
    *puVar9 = 0;
  }
  else {
    puVar9 = (undefined8 *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar24 + 0x95b8),0);
  }
  lVar7 = Object::SetProperty(pIVar24,param_1,pIVar24 + 0x7b0,puVar9,0,0);
  if (lVar7 == 0) {
    return (ulong *)0x0;
  }
  return param_1;
}

