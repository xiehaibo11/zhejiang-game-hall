
/* v8::internal::ArrayLiteral::BuildBoilerplateDescription(v8::internal::Isolate*) */

void __thiscall
v8::internal::ArrayLiteral::BuildBoilerplateDescription(ArrayLiteral *this,Isolate *param_1)

{
  Isolate *pIVar1;
  long lVar2;
  Isolate *pIVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ArrayLiteral *this_00;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong local_68;
  
  if (*(long *)(this + 0x10) == 0) {
    uVar5 = *(uint *)(this + 0xc);
    if ((int)uVar5 < 0) {
      uVar5 = *(uint *)(this + 0x24);
    }
    puVar8 = (ulong *)Factory::NewFixedArrayWithHoles((Factory *)param_1,uVar5,0);
    if ((int)uVar5 < 1) {
      bVar7 = false;
      uVar13 = 0;
    }
    else {
      pIVar1 = param_1 + 0x98;
      lVar17 = 0;
      iVar18 = 0;
      pIVar3 = param_1 + 0x95a0;
      local_68 = 0;
      bVar7 = false;
      do {
        this_00 = *(ArrayLiteral **)(*(long *)(this + 0x18) + lVar17);
        if ((this_00 != (ArrayLiteral *)0x0) && ((*(uint *)(this_00 + 4) + 0x2b & 0x3f) < 3)) {
          uVar12 = *(uint *)(this_00 + 4) & 0x3f;
          if (uVar12 == 0x16) {
            ObjectLiteral::BuildBoilerplateDescription((ObjectLiteral *)this_00,param_1);
          }
          else if (uVar12 == 0x17) {
            BuildBoilerplateDescription(this_00,param_1);
          }
        }
        uVar11 = *(undefined8 *)pIVar3;
        lVar4 = *(long *)(param_1 + 0x95a8);
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
        uVar6 = *(uint *)(this_00 + 4);
        uVar12 = uVar6 & 0x3f;
        if (uVar12 == 0x29) {
          pIVar9 = (Isolate *)Literal::BuildValue((Literal *)this_00,param_1);
          uVar13 = *(ulong *)pIVar9;
          if ((uVar13 & 1) == 0) goto LAB_01497b98;
LAB_01497ba4:
          if ((int)uVar13 != *(int *)(param_1 + 0xa8)) {
            if ((int)uVar13 != *(int *)pIVar1) goto LAB_01497b98;
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
              pIVar9 = (Isolate *)
                       CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
              uVar13 = *(ulong *)pIVar9;
              if ((uVar13 & 1) == 0) goto LAB_01497b9c;
              goto LAB_01497be8;
            }
            pIVar9 = *(Isolate **)pIVar3;
            if (pIVar9 == *(Isolate **)(param_1 + 0x95a8)) {
              pIVar9 = (Isolate *)HandleScope::Extend(param_1);
            }
            uVar12 = 0;
            *(Isolate **)pIVar3 = pIVar9 + 8;
            *(undefined8 *)pIVar9 = 0;
            goto LAB_01497c04;
          }
          bVar7 = true;
        }
        else {
          pIVar9 = pIVar1;
          if (((uVar6 + 0x2b & 0x3f) < 3) &&
             (((uVar12 == 0x16 || (uVar12 == 0x17)) && ((uVar6 >> 8 & 1) != 0)))) {
            pIVar9 = *(Isolate **)(this_00 + 0x10);
          }
          uVar13 = *(ulong *)pIVar9;
          if ((uVar13 & 1) != 0) goto LAB_01497ba4;
LAB_01497b98:
          if ((uVar13 & 1) == 0) {
LAB_01497b9c:
            uVar12 = 0;
          }
          else {
LAB_01497be8:
            uVar12 = 4;
            if (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x42) {
              uVar12 = 2;
            }
          }
LAB_01497c04:
          uVar13 = IsMoreGeneralElementsKindTransition(local_68,uVar12);
          uVar15 = *(ulong *)pIVar9;
          if ((uVar13 & 1) == 0) {
            uVar12 = (uint)local_68;
          }
          local_68 = (ulong)uVar12;
          uVar13 = *puVar8;
          *(int *)(uVar13 + (long)iVar18 + 7) = (int)uVar15;
          if ((uVar15 & 1) != 0) {
            uVar16 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
            lVar2 = uVar13 + (long)iVar18 + 7;
            if (((uint)uVar16 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar13,lVar2,uVar15);
              uVar16 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar16 & 0x18) != 0) &&
               ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar13,lVar2,uVar15);
            }
          }
        }
        *(undefined8 *)pIVar3 = uVar11;
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
        if (*(long *)(param_1 + 0x95a8) != lVar4) {
          *(long *)(param_1 + 0x95a8) = lVar4;
          HandleScope::DeleteExtensions(param_1);
        }
        lVar17 = lVar17 + 8;
        iVar18 = iVar18 + 4;
      } while ((ulong)uVar5 << 3 != lVar17);
      if (bVar7) {
        bVar7 = true;
        uVar13 = 1;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(local_68) {
        case 0:
          break;
        default:
                    /* WARNING: This code block may not be properly labeled as switch case */
          bVar7 = true;
          uVar13 = local_68;
          break;
        case 2:
          uVar13 = 3;
          bVar7 = true;
          break;
        case 4:
          uVar13 = 5;
          bVar7 = true;
          break;
        case 6:
          uVar13 = 7;
          bVar7 = true;
        }
      }
      else {
        bVar7 = true;
        uVar13 = local_68;
      }
    }
    if (((((byte)this[5] & 1) != 0) && ((uint)uVar13 < 4)) &&
       ((bVar7 && ((*(uint *)(this + 8) & 0x7fffffff) == 1)))) {
      uVar16 = *puVar8;
      uVar15 = *(ulong *)(param_1 + 0xe8);
      if ((int)uVar15 == 0) {
        *(undefined4 *)(uVar16 - 1) = 0;
      }
      else {
        Heap::VerifyObjectLayoutChange((Heap *)(uVar16 & 0xffffffff00000000 | 0x8850),uVar16,uVar15)
        ;
        *(int *)(uVar16 - 1) = (int)uVar15;
        if (((uVar15 & 1) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
        {
          Heap_MarkingBarrierSlow(uVar16,0,uVar15);
        }
      }
    }
    if (((uint)uVar13 & 0xfe) == 4) {
      plVar14 = *(long **)(ElementsAccessor::elements_accessors_ + uVar13 * 8);
      puVar10 = (ulong *)Factory::NewFixedDoubleArray((Factory *)param_1,uVar5);
      (**(code **)(*plVar14 + 0xe8))(plVar14,param_1,puVar8,3,puVar10,uVar5);
      puVar8 = puVar10;
    }
    uVar11 = Factory::NewArrayBoilerplateDescription((Factory *)param_1,uVar13,puVar8);
    *(undefined8 *)(this + 0x10) = uVar11;
  }
  return;
}

