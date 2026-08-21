
/* v8::internal::ArrayConstructInitializeElements(v8::internal::Handle<v8::internal::JSArray>,
   v8::internal::Arguments*) */

ulong * v8::internal::ArrayConstructInitializeElements(ulong *param_1,ulong *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  double *pdVar8;
  int iVar9;
  ulong uVar10;
  Factory *pFVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  double dVar16;
  
  uVar10 = *param_2;
  iVar9 = (int)uVar10;
  if (iVar9 == 1) {
    uVar15 = *(ulong *)param_2[1];
    if ((uVar15 & 1) == 0) {
      if (-1 < (int)uVar15) {
        dVar16 = (double)(uVar15 >> 1 & 0x7fffffff);
LAB_01078b28:
        if (SUB84(dVar16,0) - 1U < 0x3ffb) {
          bVar2 = *(byte *)((*param_1 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_1 - 1));
          JSArray::Initialize(param_1,(ulong)dVar16 & 0xffffffff,(ulong)dVar16 & 0xffffffff);
          if ((bVar2 < 0x30) && ((bVar2 >> 3 & 1) != 0)) {
            return param_1;
          }
          uVar10 = (ulong)(bVar2 >> 3);
          if ((bVar2 >> 3 < 7) && ((0x55U >> uVar10 & 1) != 0)) {
            uVar10 = 0x7010501030101 >> ((ulong)bVar2 & 0x38);
          }
          JSObject::TransitionElementsKind(param_1,uVar10);
          return param_1;
        }
        if (SUB84(dVar16,0) != 0) {
          JSArray::Initialize(param_1,0,0);
          JSArray::SetLength(param_1,(ulong)dVar16 & 0xffffffff);
          return param_1;
        }
        goto LAB_01078b00;
      }
    }
    else {
      uVar6 = uVar15 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar6 + *(uint *)(uVar15 - 1)) != 0x42) goto LAB_01078c30;
      if (*(short *)(uVar6 + *(uint *)(uVar15 - 1)) == 0x42) {
        dVar16 = *(double *)(uVar15 + 3) + 4503599627370496.0;
        if (((ulong)dVar16 >> 0x20 == 0x43300000) &&
           (*(double *)(uVar15 + 3) == (double)((ulong)dVar16 & 0xffffffff))) goto LAB_01078b28;
      }
    }
    pFVar11 = (Factory *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
    puVar4 = (undefined8 *)Factory::NewRangeError(pFVar11,0xbe,0,0,0);
    Isolate::Throw((Isolate *)pFVar11,*puVar4,0);
    param_1 = (ulong *)0x0;
  }
  else {
    if (iVar9 != 0) {
LAB_01078c30:
      pFVar11 = (Factory *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
      JSObject::EnsureCanContainElements(param_1,param_2,0,uVar10 & 0xffffffff,2);
      bVar2 = *(byte *)((*param_1 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_1 - 1));
      if ((bVar2 & 0xf0) == 0x20) {
        puVar5 = (ulong *)Factory::NewFixedDoubleArray(pFVar11,iVar9);
      }
      else {
        puVar5 = (ulong *)Factory::NewFixedArrayWithHoles(pFVar11,uVar10 & 0xffffffff,0);
      }
      bVar2 = bVar2 >> 3;
      if (5 < bVar2) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar3 = 1 << (ulong)bVar2;
      uVar10 = uVar10 & 0xffffffff;
      if ((uVar3 & 3) == 0) {
        if ((uVar3 & 0xc) == 0) {
          if (0 < iVar9) {
            uVar15 = 0;
            do {
              uVar6 = *(ulong *)(param_2[1] - (uVar15 & 0xffffffff));
              if ((uVar6 & 1) == 0) {
                dVar16 = (double)((int)uVar6 >> 1);
                pdVar8 = (double *)(*puVar5 + (ulong)((int)uVar15 + 7));
LAB_01078e14:
                *pdVar8 = dVar16;
              }
              else {
                dVar16 = *(double *)(uVar6 + 3);
                pdVar8 = (double *)(*puVar5 + (ulong)((int)uVar15 + 7));
                if (!NAN(dVar16)) goto LAB_01078e14;
                *pdVar8 = NAN;
              }
              uVar15 = uVar15 + 8;
            } while (uVar10 * 8 - uVar15 != 0);
          }
        }
        else if (0 < iVar9) {
          uVar12 = *puVar5;
          iVar14 = 0;
          uVar15 = 0;
          uVar6 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
          while( true ) {
            uVar13 = *(ulong *)(param_2[1] - (uVar15 & 0xfffffff8));
            *(int *)(uVar12 + (long)iVar14 + 7) = (int)uVar13;
            if (((uVar6 & 0x40000) != 0 || (uVar6 & 0x18) == 0) && (uVar13 & 1) != 0) {
              uVar7 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
              lVar1 = uVar12 + (long)iVar14 + 7;
              if (((uint)uVar7 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar12,lVar1,uVar13);
                uVar7 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar7 & 0x18) != 0) &&
                 ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar13);
              }
            }
            if (uVar10 * 8 - 8 == uVar15) break;
            uVar12 = *puVar5;
            uVar15 = uVar15 + 8;
            iVar14 = iVar14 + 4;
          }
        }
      }
      else if (0 < iVar9) {
        iVar14 = 0;
        uVar15 = 0;
        do {
          uVar6 = uVar15 & 0xfffffff8;
          uVar15 = uVar15 + 8;
          lVar1 = (long)iVar14;
          iVar14 = iVar14 + 4;
          *(undefined4 *)(*puVar5 + lVar1 + 7) = *(undefined4 *)(param_2[1] - uVar6);
        } while (uVar10 * 8 - uVar15 != 0);
      }
      uVar15 = *param_1;
      uVar10 = *puVar5;
      *(int *)(uVar15 + 7) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar6 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar15,uVar15 + 7,uVar10);
          uVar6 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar15,uVar15 + 7,uVar10);
        }
      }
      *(int *)(*param_1 + 0xb) = iVar9 << 1;
      return param_1;
    }
LAB_01078b00:
    JSArray::Initialize(param_1,4,0);
  }
  return param_1;
}

