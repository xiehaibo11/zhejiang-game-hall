
double FUN_014d8ed4(int param_1,long param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double *pdVar5;
  Isolate *pIVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double local_88 [3];
  double local_70;
  double local_68;
  
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  pdVar5 = (double *)
           v8::internal::JSTypedArray::Validate(param_3,param_2,"%TypedArray%.prototype.copyWithin")
  ;
  if (pdVar5 != (double *)0x0) {
    param_1 = param_1 + -4;
    dVar13 = *(double *)((long)*pdVar5 + 0x1f);
    dVar15 = dVar13;
    if (param_1 < 2) {
      dVar14 = 0.0;
      dVar12 = 0.0;
LAB_014d9154:
      dVar11 = *pdVar5;
      lVar2 = (long)dVar13 - (long)dVar12;
      if ((long)dVar15 - (long)dVar14 <= (long)dVar13 - (long)dVar12) {
        lVar2 = (long)dVar15 - (long)dVar14;
      }
      if ((0 < lVar2) &&
         ((*(uint *)(((ulong)dVar11 & 0xffffffff00000000 | (ulong)*(uint *)((long)dVar11 + 0xb)) +
                    0x1b) >> 2 & 1) == 0)) {
        local_68 = dVar11;
        lVar7 = v8::internal::JSTypedArray::element_size((JSTypedArray *)&local_68);
        lVar1 = *(long *)((long)*pdVar5 + 0x27) + (ulong)*(uint *)((long)*pdVar5 + 0x2f);
        memmove((void *)(lVar1 + lVar7 * (long)dVar12),(void *)(lVar1 + lVar7 * (long)dVar14),
                lVar7 * lVar2);
        dVar11 = *pdVar5;
      }
      goto LAB_014d907c;
    }
    puVar8 = (ulong *)(param_2 + -8);
    if ((*(byte *)puVar8 & 1) != 0) {
      puVar8 = (ulong *)v8::internal::Object::ConvertToInteger(param_3);
    }
    if (puVar8 != (ulong *)0x0) {
      local_70 = dVar13;
      local_68 = 0.0;
      uVar9 = *puVar8;
      if ((uVar9 & 1) == 0) {
        local_88[2] = (double)((long)(uVar9 << 0x20) >> 0x21);
        if ((int)uVar9 < 0) {
          local_88[1] = (double)((long)dVar13 + (long)local_88[2]);
          pdVar10 = &local_68;
          if (-1 < (long)dVar13 + (long)local_88[2]) {
            pdVar10 = local_88 + 1;
          }
        }
        else {
          pdVar10 = &local_70;
          if ((long)local_88[2] <= (long)dVar13) {
            pdVar10 = local_88 + 2;
          }
        }
        dVar12 = *pdVar10;
      }
      else {
        local_88[2] = *(double *)(uVar9 + 3);
        dVar12 = (double)(long)dVar13;
        if (0.0 <= local_88[2]) {
          pdVar10 = local_88 + 1;
          if (local_88[2] <= dVar12) {
            pdVar10 = local_88 + 2;
          }
          local_88[1] = dVar12;
        }
        else {
          local_88[0] = 0.0;
          local_88[1] = local_88[2] + dVar12;
          pdVar10 = local_88;
          if (0.0 <= local_88[2] + dVar12) {
            pdVar10 = local_88 + 1;
          }
        }
        dVar12 = (double)(long)*pdVar10;
      }
      if (param_1 < 3) {
        dVar14 = 0.0;
        goto LAB_014d9154;
      }
      puVar8 = (ulong *)(param_2 + -0x10);
      if ((*(byte *)puVar8 & 1) != 0) {
        puVar8 = (ulong *)v8::internal::Object::ConvertToInteger(param_3);
      }
      if (puVar8 != (ulong *)0x0) {
        local_70 = dVar13;
        local_68 = 0.0;
        uVar9 = *puVar8;
        if ((uVar9 & 1) == 0) {
          local_88[2] = (double)((long)(uVar9 << 0x20) >> 0x21);
          if ((int)uVar9 < 0) {
            local_88[1] = (double)((long)dVar13 + (long)local_88[2]);
            pdVar10 = &local_68;
            if (-1 < (long)dVar13 + (long)local_88[2]) {
              pdVar10 = local_88 + 1;
            }
          }
          else {
            pdVar10 = &local_70;
            if ((long)local_88[2] <= (long)dVar13) {
              pdVar10 = local_88 + 2;
            }
          }
          dVar14 = *pdVar10;
        }
        else {
          local_88[2] = *(double *)(uVar9 + 3);
          dVar14 = (double)(long)dVar13;
          if (0.0 <= local_88[2]) {
            pdVar10 = local_88 + 1;
            if (local_88[2] <= dVar14) {
              pdVar10 = local_88 + 2;
            }
            local_88[1] = dVar14;
          }
          else {
            local_88[0] = 0.0;
            local_88[1] = local_88[2] + dVar14;
            pdVar10 = local_88;
            if (0.0 <= local_88[2] + dVar14) {
              pdVar10 = local_88 + 1;
            }
          }
          dVar14 = (double)(long)*pdVar10;
        }
        pIVar6 = (Isolate *)(param_2 + -0x18);
        if (param_1 < 4) {
          pIVar6 = param_3 + 0xa0;
        }
        if ((*(ulong *)pIVar6 & 1) != 0) {
          if ((int)*(ulong *)pIVar6 == *(int *)(param_3 + 0xa0)) goto LAB_014d9154;
          pIVar6 = (Isolate *)v8::internal::Object::ConvertToInteger(param_3);
        }
        if (pIVar6 != (Isolate *)0x0) {
          local_70 = dVar13;
          local_68 = 0.0;
          uVar9 = *(ulong *)pIVar6;
          if ((uVar9 & 1) == 0) {
            local_88[2] = (double)((long)(uVar9 << 0x20) >> 0x21);
            if ((int)uVar9 < 0) {
              local_88[1] = (double)((long)dVar13 + (long)local_88[2]);
              pdVar10 = &local_68;
              if (-1 < (long)dVar13 + (long)local_88[2]) {
                pdVar10 = local_88 + 1;
              }
              dVar15 = *pdVar10;
            }
            else {
              pdVar10 = &local_70;
              if ((long)local_88[2] <= (long)dVar13) {
                pdVar10 = local_88 + 2;
              }
              dVar15 = *pdVar10;
            }
          }
          else {
            local_88[2] = *(double *)(uVar9 + 3);
            dVar15 = (double)(long)dVar13;
            if (0.0 <= local_88[2]) {
              pdVar10 = local_88 + 1;
              if (local_88[2] <= dVar15) {
                pdVar10 = local_88 + 2;
              }
              local_88[1] = dVar15;
            }
            else {
              local_88[0] = 0.0;
              local_88[1] = local_88[2] + dVar15;
              pdVar10 = local_88;
              if (0.0 <= local_88[2] + dVar15) {
                pdVar10 = local_88 + 1;
              }
            }
            dVar15 = (double)(long)*pdVar10;
          }
          goto LAB_014d9154;
        }
      }
    }
  }
  dVar11 = *(double *)(param_3 + 0x180);
LAB_014d907c:
  *(undefined8 *)(param_3 + 0x95a0) = uVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return dVar11;
}

