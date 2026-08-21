
/* v8::internal::Runtime::GetInternalProperties(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::Runtime::GetInternalProperties(Isolate *param_1,ulong *param_2)

{
  long lVar1;
  Isolate *pIVar2;
  char *pcVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  CanonicalHandleScope *this;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  char *local_70;
  size_t sStack_68;
  
  local_70 = (char *)*param_2;
  if (((ulong)local_70 & 1) == 0) {
LAB_011be97c:
    Factory::NewJSArray((Factory *)param_1,3,0,0,1,0);
    return;
  }
  uVar14 = (ulong)local_70 & 0xffffffff00000000;
  uVar13 = uVar14 | 7;
  pIVar2 = param_1 + 0x95a0;
  if (*(short *)(uVar13 + *(uint *)(local_70 + -1)) == 0x438) {
    puVar7 = (ulong *)Factory::NewFixedArray((Factory *)param_1,6,0);
    sStack_68 = __strlen_chk("[[TargetFunction]]",0x13);
    local_70 = "[[TargetFunction]]";
    puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
    if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
    uVar14 = *puVar7;
    uVar13 = *puVar8;
    *(int *)(uVar14 + 7) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar13);
        uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar13);
      }
    }
    uVar13 = *param_2;
    uVar14 = *puVar7;
    uVar11 = *(uint *)(uVar13 + 0xb);
    *(uint *)(uVar14 + 0xb) = uVar11;
    if ((uVar11 & 1) != 0) {
      uVar13 = uVar13 & 0xffffffff00000000;
      uVar16 = uVar13 | uVar11;
      uVar13 = uVar13 | (ulong)uVar11 & 0xfffffffffffc0000;
      uVar12 = *(ulong *)(uVar13 + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xb,uVar16);
        uVar12 = *(ulong *)(uVar13 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xb,uVar16);
      }
    }
    sStack_68 = __strlen_chk("[[BoundThis]]",0xe);
    local_70 = "[[BoundThis]]";
    puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
    if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
    uVar14 = *puVar7;
    uVar13 = *puVar8;
    *(int *)(uVar14 + 0xf) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xf,uVar13);
        uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xf,uVar13);
      }
    }
    uVar13 = *param_2;
    uVar14 = *puVar7;
    uVar11 = *(uint *)(uVar13 + 0xf);
    *(uint *)(uVar14 + 0x13) = uVar11;
    if ((uVar11 & 1) != 0) {
      uVar13 = uVar13 & 0xffffffff00000000;
      uVar16 = uVar13 | uVar11;
      uVar13 = uVar13 | (ulong)uVar11 & 0xfffffffffffc0000;
      uVar12 = *(ulong *)(uVar13 + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x13,uVar16);
        uVar12 = *(ulong *)(uVar13 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x13,uVar16);
      }
    }
    sStack_68 = __strlen_chk("[[BoundArgs]]",0xe);
    local_70 = "[[BoundArgs]]";
    puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
    if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
    uVar14 = *puVar7;
    uVar13 = *puVar8;
    *(int *)(uVar14 + 0x17) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
        uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
      }
    }
    uVar13 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x13);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)pIVar2;
      if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar2 = puVar8 + 1;
      *puVar8 = uVar13;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
    }
    plVar9 = (long *)Factory::CopyFixedArray((Factory *)param_1,puVar8);
    puVar8 = (ulong *)Factory::NewJSArrayWithElements(param_1,plVar9,3,*(int *)(*plVar9 + 3) >> 1,0)
    ;
LAB_011bf0d0:
    uVar13 = *puVar7;
    uVar14 = *puVar8;
    *(int *)(uVar13 + 0x1b) = (int)uVar14;
    if ((uVar14 & 1) == 0) goto LAB_011bfa98;
    uVar12 = uVar14 & 0xfffffffffffc0000;
    uVar16 = *(ulong *)(uVar12 + 8);
    lVar1 = uVar13 + 0x1b;
    uVar11 = (uint)uVar16;
joined_r0x011bfae4:
    if ((uVar11 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar13,lVar1,uVar14);
      uVar16 = *(ulong *)(uVar12 | 8);
    }
    if ((uVar16 & 0x18) == 0) goto LAB_011bfa98;
    bVar5 = *(byte *)((uVar13 & 0xfffffffffffc0000) + 8);
  }
  else {
    if (*(ushort *)(uVar13 + *(uint *)(local_70 + -1)) - 0x412 < 3) {
      uVar11 = *(ushort *)((uVar14 | *(uint *)(local_70 + -1)) + 7) - 0x412;
      if (4 < uVar11) {
LAB_011bfaec:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      puVar7 = (ulong *)Factory::NewFixedArray((Factory *)param_1,6,0);
      sStack_68 = __strlen_chk("[[IteratorHasMore]]",0x14);
      local_70 = "[[IteratorHasMore]]";
      puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
      if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
      uVar14 = *puVar7;
      uVar13 = *puVar8;
      *(int *)(uVar14 + 7) = (int)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar13);
          uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar13);
        }
      }
      local_70 = (char *)*param_2;
      uVar14 = *puVar7;
      uVar13 = OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap>::
               HasMore((OrderedHashTableIterator<v8::internal::JSMapIterator,v8::internal::OrderedHashMap>
                        *)&local_70);
LAB_011bee50:
      lVar1 = 0xb8;
      if ((uVar13 & 1) == 0) {
        lVar1 = 0xc0;
      }
      uVar13 = *(ulong *)(param_1 + lVar1);
      *(int *)(uVar14 + 0xb) = (int)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xb,uVar13);
          uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xb,uVar13);
        }
      }
      sStack_68 = __strlen_chk("[[IteratorIndex]]",0x12);
      local_70 = "[[IteratorIndex]]";
      puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
      if (puVar8 == (ulong *)0x0) {
LAB_011bf070:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      uVar14 = *puVar7;
      uVar13 = *puVar8;
      *(int *)(uVar14 + 0xf) = (int)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xf,uVar13);
          uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xf,uVar13);
        }
      }
      uVar13 = *param_2;
      uVar14 = *puVar7;
      uVar4 = *(uint *)(uVar13 + 0xf);
      *(uint *)(uVar14 + 0x13) = uVar4;
      if ((uVar4 & 1) != 0) {
        uVar13 = uVar13 & 0xffffffff00000000;
        uVar16 = uVar13 | uVar4;
        uVar13 = uVar13 | (ulong)uVar4 & 0xfffffffffffc0000;
        uVar12 = *(ulong *)(uVar13 + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x13,uVar16);
          uVar12 = *(ulong *)(uVar13 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x13,uVar16);
        }
      }
      sStack_68 = __strlen_chk("[[IteratorKind]]",0x11);
      local_70 = "[[IteratorKind]]";
      puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
      if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
      uVar14 = *puVar7;
      uVar13 = *puVar8;
      pcVar15 = (&PTR_DAT_01cb78f8)[(short)uVar11];
      *(int *)(uVar14 + 0x17) = (int)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
          uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
        }
      }
      sStack_68 = strlen(pcVar15);
      local_70 = pcVar15;
      puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
      if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
      goto LAB_011bf0d0;
    }
    if (*(ushort *)(uVar13 + *(uint *)(local_70 + -1)) - 0x415 < 2) {
      uVar11 = *(ushort *)((uVar14 | *(uint *)(local_70 + -1)) + 7) - 0x412;
      if (4 < uVar11) goto LAB_011bfaec;
      puVar7 = (ulong *)Factory::NewFixedArray((Factory *)param_1,6,0);
      sStack_68 = __strlen_chk("[[IteratorHasMore]]",0x14);
      local_70 = "[[IteratorHasMore]]";
      puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
      if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
      uVar14 = *puVar7;
      uVar13 = *puVar8;
      *(int *)(uVar14 + 7) = (int)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar13);
          uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar13);
        }
      }
      local_70 = (char *)*param_2;
      uVar14 = *puVar7;
      uVar13 = OrderedHashTableIterator<v8::internal::JSSetIterator,v8::internal::OrderedHashSet>::
               HasMore((OrderedHashTableIterator<v8::internal::JSSetIterator,v8::internal::OrderedHashSet>
                        *)&local_70);
      goto LAB_011bee50;
    }
    if (2 < *(ushort *)(uVar13 + *(uint *)(local_70 + -1)) - 0x417) {
      if (*(short *)(uVar13 + *(uint *)(local_70 + -1)) != 0x42d) {
        if (*(short *)(uVar13 + *(uint *)(local_70 + -1)) == 0xa9) {
          puVar7 = (ulong *)Factory::NewFixedArray((Factory *)param_1,6,0);
          sStack_68 = __strlen_chk("[[Handler]]",0xc);
          local_70 = "[[Handler]]";
          puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
          if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
          uVar14 = *puVar7;
          uVar13 = *puVar8;
          *(int *)(uVar14 + 7) = (int)uVar13;
          if ((uVar13 & 1) != 0) {
            uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar12 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar13);
              uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar12 & 0x18) != 0) &&
               ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar13);
            }
          }
          uVar13 = *param_2;
          uVar14 = *puVar7;
          uVar11 = *(uint *)(uVar13 + 0xb);
          *(uint *)(uVar14 + 0xb) = uVar11;
          if ((uVar11 & 1) != 0) {
            uVar13 = uVar13 & 0xffffffff00000000;
            uVar16 = uVar13 | uVar11;
            uVar13 = uVar13 | (ulong)uVar11 & 0xfffffffffffc0000;
            uVar12 = *(ulong *)(uVar13 + 8);
            if (((uint)uVar12 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xb,uVar16);
              uVar12 = *(ulong *)(uVar13 | 8);
            }
            if (((uVar12 & 0x18) != 0) &&
               ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xb,uVar16);
            }
          }
          sStack_68 = __strlen_chk("[[Target]]",0xb);
          local_70 = "[[Target]]";
          puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
          if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
          uVar14 = *puVar7;
          uVar13 = *puVar8;
          *(int *)(uVar14 + 0xf) = (int)uVar13;
          if ((uVar13 & 1) != 0) {
            uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar12 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xf,uVar13);
              uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar12 & 0x18) != 0) &&
               ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xf,uVar13);
            }
          }
          uVar13 = *param_2;
          uVar14 = *puVar7;
          uVar11 = *(uint *)(uVar13 + 7);
          *(uint *)(uVar14 + 0x13) = uVar11;
          if ((uVar11 & 1) != 0) {
            uVar13 = uVar13 & 0xffffffff00000000;
            uVar16 = uVar13 | uVar11;
            uVar13 = uVar13 | (ulong)uVar11 & 0xfffffffffffc0000;
            uVar12 = *(ulong *)(uVar13 + 8);
            if (((uint)uVar12 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x13,uVar16);
              uVar12 = *(ulong *)(uVar13 | 8);
            }
            if (((uVar12 & 0x18) != 0) &&
               ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x13,uVar16);
            }
          }
          sStack_68 = __strlen_chk("[[IsRevoked]]",0xe);
          local_70 = "[[IsRevoked]]";
          puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
          if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
          uVar14 = *puVar7;
          uVar13 = *puVar8;
          *(int *)(uVar14 + 0x17) = (int)uVar13;
          if ((uVar13 & 1) != 0) {
            uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar12 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
              uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar12 & 0x18) != 0) &&
               ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
            }
          }
          uVar13 = *puVar7;
          uVar14 = *param_2 & 0xffffffff00000000;
          lVar1 = 0xb8;
          if (0xa8 < *(ushort *)
                      ((uVar14 | 7) + (ulong)*(uint *)((uVar14 | *(uint *)(*param_2 + 0xb)) - 1))) {
            lVar1 = 0xc0;
          }
          uVar14 = *(ulong *)(param_1 + lVar1);
          *(int *)(uVar13 + 0x1b) = (int)uVar14;
          if ((uVar14 & 1) == 0) goto LAB_011bfa98;
          goto LAB_011bf438;
        }
        if (*(short *)(uVar13 + *(uint *)(local_70 + -1)) != 0x411) goto LAB_011be97c;
        puVar7 = (ulong *)Factory::NewFixedArray((Factory *)param_1,2,0);
        sStack_68 = __strlen_chk("[[PrimitiveValue]]",0x13);
        local_70 = "[[PrimitiveValue]]";
        puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
        if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
        uVar14 = *puVar7;
        uVar13 = *puVar8;
        *(int *)(uVar14 + 7) = (int)uVar13;
        if ((uVar13 & 1) != 0) {
          uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar13);
            uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar13);
          }
        }
        uVar12 = *param_2;
        uVar13 = *puVar7;
        uVar11 = *(uint *)(uVar12 + 0xb);
        *(uint *)(uVar13 + 0xb) = uVar11;
        if ((uVar11 & 1) == 0) goto LAB_011bfa98;
        uVar12 = uVar12 & 0xffffffff00000000;
        uVar14 = uVar12 | uVar11;
        uVar12 = uVar12 | (ulong)uVar11 & 0xfffffffffffc0000;
        uVar16 = *(ulong *)(uVar12 + 8);
        lVar1 = uVar13 + 0xb;
        uVar11 = (uint)uVar16;
        goto joined_r0x011bf9b4;
      }
      JSPromise::status((JSPromise *)&local_70);
      pcVar15 = (char *)JSPromise::Status();
      puVar7 = (ulong *)Factory::NewFixedArray((Factory *)param_1,4,0);
      sStack_68 = __strlen_chk("[[PromiseStatus]]",0x12);
      local_70 = "[[PromiseStatus]]";
      puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
      if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
      uVar14 = *puVar7;
      uVar13 = *puVar8;
      *(int *)(uVar14 + 7) = (int)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar13);
          uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar13);
        }
      }
      sStack_68 = strlen(pcVar15);
      local_70 = pcVar15;
      puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
      if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
      uVar14 = *puVar7;
      uVar13 = *puVar8;
      *(int *)(uVar14 + 0xb) = (int)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xb,uVar13);
          uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xb,uVar13);
        }
      }
      local_70 = (char *)*param_2;
      iVar6 = JSPromise::status((JSPromise *)&local_70);
      if (iVar6 == 0) {
        uVar13 = *(ulong *)(param_1 + 0xa0);
        this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
        if (this != (CanonicalHandleScope *)0x0) goto LAB_011bf9c8;
LAB_011bf9d8:
        puVar8 = *(ulong **)pIVar2;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar8 + 1;
        *puVar8 = uVar13;
      }
      else {
        uVar13 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
        this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
        if (this == (CanonicalHandleScope *)0x0) goto LAB_011bf9d8;
LAB_011bf9c8:
        puVar8 = (ulong *)CanonicalHandleScope::Lookup(this,uVar13);
      }
      sStack_68 = __strlen_chk("[[PromiseValue]]",0x11);
      local_70 = "[[PromiseValue]]";
      puVar10 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
      if (puVar10 == (ulong *)0x0) goto LAB_011bf070;
      uVar14 = *puVar7;
      uVar13 = *puVar10;
      *(int *)(uVar14 + 0xf) = (int)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xf,uVar13);
          uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xf,uVar13);
        }
      }
      uVar13 = *puVar7;
      uVar14 = *puVar8;
      *(int *)(uVar13 + 0x13) = (int)uVar14;
      if ((uVar14 & 1) == 0) goto LAB_011bfa98;
      uVar12 = uVar14 & 0xfffffffffffc0000;
      uVar16 = *(ulong *)(uVar12 + 8);
      lVar1 = uVar13 + 0x13;
      uVar11 = (uint)uVar16;
      goto joined_r0x011bfae4;
    }
    pcVar15 = "running";
    if ((*(uint *)(local_70 + 0x1f) & 0xfffffffe) != 0xfffffffc) {
      pcVar15 = "suspended";
    }
    pcVar3 = "closed";
    if (*(uint *)(local_70 + 0x1f) < 0xfffffffe) {
      pcVar3 = pcVar15;
    }
    puVar7 = (ulong *)Factory::NewFixedArray((Factory *)param_1,6,0);
    sStack_68 = __strlen_chk("[[GeneratorStatus]]",0x14);
    local_70 = "[[GeneratorStatus]]";
    puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
    if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
    uVar14 = *puVar7;
    uVar13 = *puVar8;
    *(int *)(uVar14 + 7) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar13);
        uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar13);
      }
    }
    sStack_68 = __strlen_chk(pcVar3,10);
    local_70 = pcVar3;
    puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
    if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
    uVar14 = *puVar7;
    uVar13 = *puVar8;
    *(int *)(uVar14 + 0xb) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xb,uVar13);
        uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xb,uVar13);
      }
    }
    sStack_68 = __strlen_chk("[[GeneratorFunction]]",0x16);
    local_70 = "[[GeneratorFunction]]";
    puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
    if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
    uVar14 = *puVar7;
    uVar13 = *puVar8;
    *(int *)(uVar14 + 0xf) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xf,uVar13);
        uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xf,uVar13);
      }
    }
    uVar13 = *param_2;
    uVar14 = *puVar7;
    uVar11 = *(uint *)(uVar13 + 0xb);
    *(uint *)(uVar14 + 0x13) = uVar11;
    if ((uVar11 & 1) != 0) {
      uVar13 = uVar13 & 0xffffffff00000000;
      uVar16 = uVar13 | uVar11;
      uVar13 = uVar13 | (ulong)uVar11 & 0xfffffffffffc0000;
      uVar12 = *(ulong *)(uVar13 + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x13,uVar16);
        uVar12 = *(ulong *)(uVar13 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x13,uVar16);
      }
    }
    sStack_68 = __strlen_chk("[[GeneratorReceiver]]",0x16);
    local_70 = "[[GeneratorReceiver]]";
    puVar8 = (ulong *)Factory::NewStringFromOneByte(param_1,&local_70,0);
    if (puVar8 == (ulong *)0x0) goto LAB_011bf070;
    uVar14 = *puVar7;
    uVar13 = *puVar8;
    *(int *)(uVar14 + 0x17) = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar12 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
        uVar12 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x17,uVar13);
      }
    }
    uVar14 = *param_2;
    uVar13 = *puVar7;
    uVar11 = *(uint *)(uVar14 + 0x13);
    *(uint *)(uVar13 + 0x1b) = uVar11;
    if ((uVar11 & 1) == 0) goto LAB_011bfa98;
    uVar14 = uVar14 & 0xffffffff00000000 | (ulong)uVar11;
LAB_011bf438:
    uVar12 = uVar14 & 0xfffffffffffc0000;
    uVar16 = *(ulong *)(uVar12 + 8);
    lVar1 = uVar13 + 0x1b;
    uVar11 = (uint)uVar16;
joined_r0x011bf9b4:
    if ((uVar11 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar13,lVar1,uVar14);
      uVar16 = *(ulong *)(uVar12 | 8);
    }
    if ((uVar16 & 0x18) == 0) goto LAB_011bfa98;
    bVar5 = *(byte *)((uVar13 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar5 & 0x18) == 0) {
    Heap_GenerationalBarrierSlow(uVar13,lVar1,uVar14);
  }
LAB_011bfa98:
  Factory::NewJSArrayWithElements(param_1,puVar7,3,*(int *)(*puVar7 + 3) >> 1,0);
  return;
}

