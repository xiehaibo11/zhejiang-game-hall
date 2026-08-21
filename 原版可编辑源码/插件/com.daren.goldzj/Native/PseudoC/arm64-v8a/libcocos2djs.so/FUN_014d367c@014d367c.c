
undefined8 FUN_014d367c(int param_1,long param_2,Isolate *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  Isolate *pIVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  Isolate *pIVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  Isolate *pIVar14;
  Isolate *pIVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  long local_58;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  param_1 = param_1 + -4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (param_1 < 2) {
    pIVar10 = param_3 + 0xa0;
LAB_014d36f4:
    pIVar15 = param_3 + 0xa0;
LAB_014d36f8:
    pIVar14 = param_3 + 0xa0;
    pIVar6 = param_3 + 0xa0;
  }
  else {
    pIVar10 = (Isolate *)(param_2 + -8);
    if (param_1 == 2) goto LAB_014d36f4;
    pIVar15 = (Isolate *)(param_2 + -0x10);
    if (param_1 < 4) goto LAB_014d36f8;
    pIVar14 = (Isolate *)(param_2 + -0x18);
    if (param_1 == 4) {
      pIVar6 = param_3 + 0xa0;
    }
    else {
      pIVar6 = (Isolate *)(param_2 + -0x20);
    }
  }
  plVar5 = (long *)v8::internal::ValidateSharedIntegerTypedArray(param_3,pIVar10,1);
  if (plVar5 != (long *)0x0) {
    auVar18 = v8::internal::ValidateAtomicAccess(param_3,plVar5,pIVar15);
    if ((auVar18._0_8_ & 0xff) != 0) {
      local_58 = *plVar5;
      iVar4 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_58);
      if (iVar4 == 10) {
        pIVar14 = (Isolate *)v8::internal::BigInt::FromObject(param_3,pIVar14);
      }
      else if (((byte)*pIVar14 & 1) != 0) {
        pIVar14 = (Isolate *)v8::internal::Object::ConvertToInt32(param_3,pIVar14);
      }
      if (pIVar14 != (Isolate *)0x0) {
        uVar11 = *(ulong *)pIVar6;
        if ((uVar11 & 1) == 0) {
LAB_014d37d8:
          if (pIVar6 == (Isolate *)0x0) goto LAB_014d37f8;
          uVar11 = *(ulong *)pIVar6;
          if ((uVar11 & 1) == 0) {
            dVar17 = (double)((int)uVar11 >> 1);
          }
          else {
            dVar17 = *(double *)(uVar11 + 3);
            if (NAN(dVar17)) goto LAB_014d3770;
          }
          if (dVar17 < 0.0) {
            dVar17 = 0.0;
          }
        }
        else {
          if ((int)uVar11 != *(int *)(param_3 + 0xa0)) {
            if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42
               ) {
              pIVar6 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar6,0);
            }
            goto LAB_014d37d8;
          }
LAB_014d3770:
          uVar11 = *(ulong *)(param_3 + 0x440);
          if ((uVar11 & 1) == 0) {
            dVar17 = (double)((int)uVar11 >> 1);
          }
          else {
            dVar17 = *(double *)(uVar11 + 3);
          }
        }
        if (param_3[0xc728] == (Isolate)0x0) {
          puVar9 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x10,0,0,0);
          uVar7 = v8::internal::Isolate::Throw(param_3,*puVar9,0);
          goto LAB_014d37fc;
        }
        local_58 = *plVar5;
        uVar7 = v8::internal::JSTypedArray::GetBuffer((JSTypedArray *)&local_58);
        local_58 = *plVar5;
        iVar4 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_58);
        lVar12 = *(long *)(*plVar5 + 0xf);
        if (iVar4 == 10) {
          local_58 = *(long *)pIVar14;
          uVar8 = v8::internal::BigInt::AsInt64((BigInt *)&local_58,(bool *)0x0);
          uVar7 = v8::internal::FutexEmulation::WaitJs64
                            (dVar17,param_3,uVar7,lVar12 + auVar18._8_8_ * 8,uVar8);
          goto LAB_014d37fc;
        }
        uVar11 = *(ulong *)pIVar14;
        if ((uVar11 & 1) == 0) {
          iVar4 = (int)uVar11 >> 1;
        }
        else {
          dVar16 = *(double *)(uVar11 + 3);
          if ((((dVar16 < -2147483648.0) || (2147483647.0 < dVar16)) || (ABS(dVar16) == INFINITY))
             || ((NAN(ABS(dVar16)) || (iVar4 = (int)dVar16, dVar16 != (double)(int)dVar16)))) {
            uVar1 = 0xfffffbce;
            if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
              uVar1 = ((uint)((ulong)dVar16 >> 0x34) & 0x7ff) - 0x433;
            }
            if ((int)uVar1 < 0) {
              if ((int)uVar1 < -0x34) goto LAB_014d39c0;
              uVar11 = (ulong)dVar16 & 0xfffffffffffff;
              if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                uVar11 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
              }
              iVar13 = (int)(uVar11 >> ((ulong)-uVar1 & 0x3f));
            }
            else {
              if (0x1f < (int)uVar1) {
LAB_014d39c0:
                iVar4 = 0;
                goto LAB_014d39ec;
              }
              uVar11 = (ulong)dVar16 & 0xfffffffffffff;
              if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                uVar11 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
              }
              iVar13 = (int)(uVar11 << ((ulong)uVar1 & 0x3f));
            }
            iVar4 = -iVar13;
            if (-1 < (long)dVar16) {
              iVar4 = iVar13;
            }
          }
        }
LAB_014d39ec:
        uVar7 = v8::internal::FutexEmulation::WaitJs32
                          (dVar17,param_3,uVar7,lVar12 + auVar18._8_8_ * 4,iVar4);
        goto LAB_014d37fc;
      }
    }
  }
LAB_014d37f8:
  uVar7 = *(undefined8 *)(param_3 + 0x180);
LAB_014d37fc:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

