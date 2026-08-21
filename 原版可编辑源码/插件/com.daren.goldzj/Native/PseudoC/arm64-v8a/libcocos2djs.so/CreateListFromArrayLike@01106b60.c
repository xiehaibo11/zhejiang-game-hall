
/* v8::internal::Object::CreateListFromArrayLike(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::ElementTypes) */

ulong * v8::internal::Object::CreateListFromArrayLike(Isolate *param_1,ulong *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  Isolate *pIVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  double dVar15;
  int iVar16;
  double dVar17;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  Isolate *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  ulong uStack_80;
  undefined8 local_78;
  
  if ((param_3 == 0) && (uVar11 = *param_2, (uVar11 & 1) != 0)) {
    uVar10 = uVar11 & 0xffffffff00000000;
    if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x423) {
      uVar2 = *(uint *)((uVar10 | *(uint *)(uVar11 - 1)) + 0xf);
      uVar11 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar14 = *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                            + 0x13)) + 0xe7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(param_1 + 0x95a0);
        if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar11 | uVar14;
      }
      else {
        puVar6 = (undefined8 *)
                 CanonicalHandleScope::Lookup
                           (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11 | uVar14);
        uVar14 = (uint)*puVar6;
      }
      if (uVar2 == uVar14) {
        uVar11 = *param_2;
        uVar2 = *(uint *)(uVar11 + 0xb);
        uVar10 = uVar11 & 0xffffffff00000000;
        if ((uVar2 & 1) == 0) {
          if (-1 < (int)uVar2) {
            dVar15 = (double)(ulong)(uVar2 >> 1);
LAB_01106f34:
            if (*(byte *)((uVar10 | 10) + (ulong)*(uint *)(uVar11 - 1)) < 0x30) {
              uVar2 = *(uint *)((uVar10 | *(uint *)(uVar11 - 1)) + 0xf);
              if (uVar2 != *(uint *)(param_1 + 0xb0)) {
                uVar12 = uVar10 | uVar2;
                do {
                  uVar13 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1);
                  if ((*(ushort *)(uVar13 + 7) < 0x412) ||
                     ((*(int *)(uVar12 + 7) != *(int *)(param_1 + 0x168) &&
                      (*(int *)(uVar12 + 7) != *(int *)(param_1 + 1000))))) goto LAB_01106b9c;
                  uVar2 = *(uint *)(uVar13 + 0xf);
                  uVar12 = uVar12 & 0xffffffff00000000 | (ulong)uVar2;
                } while (uVar2 != *(uint *)(param_1 + 0xb0));
              }
              bVar3 = *(byte *)((uVar10 | 10) + (ulong)*(uint *)(uVar11 - 1));
              goto LAB_0110700c;
            }
          }
        }
        else if (*(short *)((uVar10 | 7) + (ulong)*(uint *)((uVar10 | uVar2) - 1)) == 0x42) {
          dVar17 = *(double *)((uVar10 | uVar2) + 3);
          dVar15 = dVar17 + 4503599627370496.0;
          if (((ulong)dVar15 >> 0x20 == 0x43300000) &&
             (dVar17 == (double)((ulong)dVar15 & 0xffffffff))) goto LAB_01106f34;
        }
      }
    }
    else if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x41b) {
      dVar15 = *(double *)(uVar11 + 0x1f);
      if (((ulong)dVar15 < 0x7fffffe) &&
         ((*(uint *)((uVar10 | *(uint *)(uVar11 + 0xb)) + 0x1b) >> 2 & 1) == 0)) {
        bVar3 = *(byte *)((uVar10 | 10) + (ulong)*(uint *)(uVar11 - 1));
LAB_0110700c:
        plVar8 = *(long **)(ElementsAccessor::elements_accessors_ + ((ulong)bVar3 & 0xf8));
        puVar5 = (ulong *)(**(code **)(*plVar8 + 0xf8))(plVar8,param_1,param_2,dVar15);
        if (puVar5 != (ulong *)0x0) {
          return puVar5;
        }
      }
    }
  }
LAB_01106b9c:
  uVar11 = *param_2;
  if (((uVar11 & 1) == 0) ||
     (*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0xa9)) {
    uVar9 = __strlen_chk("CreateListFromArrayLike",0x18);
    local_c8 = "CreateListFromArrayLike";
    uStack_c0 = (undefined4)uVar9;
    local_bc = (undefined4)((ulong)uVar9 >> 0x20);
    pIVar7 = (Isolate *)Factory::NewStringFromOneByte(param_1,&local_c8,0);
    if (pIVar7 == (Isolate *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar9 = 0x19;
LAB_01106c18:
    puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,uVar9,pIVar7,0,0);
    goto LAB_01106c28;
  }
  puVar5 = (ulong *)GetLengthFromArrayLike(param_1,param_2);
  if (puVar5 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  uVar11 = *puVar5;
  if ((uVar11 & 1) == 0) {
    if (-1 < (int)uVar11) {
      bVar4 = false;
      dVar15 = (double)(uVar11 >> 1 & 0x7fffffff);
LAB_01106d58:
      if ((SUB84(dVar15,0) < 0x7fffffe) && (!bVar4)) {
        puVar5 = (ulong *)Factory::NewFixedArray((Factory *)param_1,(ulong)dVar15 & 0xffffffff,0);
        if (SUB84(dVar15,0) == 0) {
          return puVar5;
        }
        iVar16 = 0;
        uVar11 = 0;
        do {
          local_c8 = (char *)CONCAT44(local_c8._4_4_,3);
          local_bc = 0;
          uStack_b8 = 0xc0;
          local_a8 = 0;
          uStack_a0 = 0;
          uStack_90 = 0;
          local_78 = 0xffffffffffffffff;
          local_b0 = param_1;
          local_98 = param_2;
          local_88 = param_2;
          uStack_80 = uVar11;
          LookupIterator::Start<true>((LookupIterator *)&local_c8);
          if (local_c8._4_4_ == 4) {
            pIVar7 = local_b0 + 0xa0;
          }
          else {
            pIVar7 = (Isolate *)GetProperty((LookupIterator *)&local_c8,false);
            if (pIVar7 == (Isolate *)0x0) {
              return (ulong *)0x0;
            }
          }
          if (param_3 == 1) {
            uVar10 = *(ulong *)pIVar7;
            if (((uVar10 & 1) == 0) ||
               (uVar12 = uVar10 & 0xffffffff00000000 | 7,
               0x40 < *(ushort *)(uVar12 + *(uint *)(uVar10 - 1)))) {
              uVar9 = 0x62;
              goto LAB_01106c18;
            }
            if ((*(ushort *)(uVar12 + *(uint *)(uVar10 - 1)) & 0xffe0) == 0x20) {
              pIVar7 = (Isolate *)StringTable::LookupString(param_1,pIVar7);
            }
          }
          uVar12 = *puVar5;
          uVar10 = *(ulong *)pIVar7;
          *(int *)(uVar12 + (long)iVar16 + 7) = (int)uVar10;
          if ((uVar10 & 1) != 0) {
            uVar13 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
            lVar1 = uVar12 + (long)iVar16 + 7;
            if (((uint)uVar13 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar12,lVar1,uVar10);
              uVar13 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar13 & 0x18) != 0) &&
               ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar10);
            }
          }
          uVar11 = uVar11 + 1;
          iVar16 = iVar16 + 4;
          if (((ulong)dVar15 & 0xffffffff) == uVar11) {
            return puVar5;
          }
        } while( true );
      }
    }
  }
  else if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x42) {
    dVar15 = *(double *)(uVar11 + 3) + 4503599627370496.0;
    if ((ulong)dVar15 >> 0x20 == 0x43300000) {
      bVar4 = *(double *)(uVar11 + 3) != (double)((ulong)dVar15 & 0xffffffff);
      goto LAB_01106d58;
    }
  }
  puVar6 = (undefined8 *)Factory::NewRangeError((Factory *)param_1,0xbe,0,0,0);
LAB_01106c28:
  Isolate::Throw(param_1,*puVar6,0);
  return (ulong *)0x0;
}

