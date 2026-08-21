
ulong FUN_014d9430(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  long *plVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  double dVar10;
  double *pdVar11;
  double dVar12;
  ulong uVar13;
  double local_88 [3];
  double local_70;
  double dStack_68;
  
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar5 = (ulong *)v8::internal::JSTypedArray::Validate
                              (param_3,param_2,"%TypedArray%.prototype.fill");
  if (puVar5 != (ulong *)0x0) {
    param_1 = param_1 + -4;
    pIVar1 = param_3 + 0xa0;
    bVar4 = *(byte *)((*puVar5 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*puVar5 - 1));
    pIVar6 = (Isolate *)(param_2 + -8);
    if (param_1 < 2) {
      pIVar6 = pIVar1;
    }
    if ((bVar4 & 0xf0) == 0xd0) {
      pIVar6 = (Isolate *)v8::internal::BigInt::FromObject(param_3,pIVar6);
    }
    else {
      uVar13 = *(ulong *)pIVar6;
      if (((uVar13 & 1) != 0) &&
         (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x42)) {
        pIVar6 = (Isolate *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pIVar6,0);
      }
    }
    if (pIVar6 != (Isolate *)0x0) {
      dVar12 = *(double *)(*puVar5 + 0x1f);
      if (param_1 < 3) {
LAB_014d953c:
        dVar10 = 0.0;
LAB_014d9540:
        uVar13 = *puVar5;
        if (((long)dVar10 < (long)dVar12) &&
           ((*(uint *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xb)) + 0x1b) >> 2 &
            1) == 0)) {
          plVar7 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                             (ulong)(bVar4 >> 3) * 8);
          uVar13 = (**(code **)(*plVar7 + 0xc0))(plVar7,puVar5,pIVar6,dVar10,dVar12);
        }
        goto LAB_014d965c;
      }
      puVar9 = (ulong *)(param_2 + -0x10);
      if ((*puVar9 & 1) != 0) {
        if ((int)*puVar9 == *(int *)pIVar1) goto LAB_014d953c;
        puVar9 = (ulong *)v8::internal::Object::ConvertToInteger(param_3);
      }
      if (puVar9 != (ulong *)0x0) {
        local_70 = dVar12;
        dStack_68 = 0.0;
        uVar13 = *puVar9;
        if ((uVar13 & 1) == 0) {
          local_88[2] = (double)((long)(uVar13 << 0x20) >> 0x21);
          if ((int)uVar13 < 0) {
            local_88[1] = (double)((long)dVar12 + (long)local_88[2]);
            pdVar11 = &dStack_68;
            if (-1 < (long)dVar12 + (long)local_88[2]) {
              pdVar11 = local_88 + 1;
            }
          }
          else {
            pdVar11 = &local_70;
            if ((long)local_88[2] <= (long)dVar12) {
              pdVar11 = local_88 + 2;
            }
          }
          dVar10 = *pdVar11;
        }
        else {
          local_88[2] = *(double *)(uVar13 + 3);
          dVar10 = (double)(long)dVar12;
          if (0.0 <= local_88[2]) {
            pdVar11 = local_88 + 1;
            if (local_88[2] <= dVar10) {
              pdVar11 = local_88 + 2;
            }
            local_88[1] = dVar10;
          }
          else {
            local_88[0] = 0.0;
            local_88[1] = local_88[2] + dVar10;
            pdVar11 = local_88;
            if (0.0 <= local_88[2] + dVar10) {
              pdVar11 = local_88 + 1;
            }
          }
          dVar10 = (double)(long)*pdVar11;
        }
        pIVar8 = (Isolate *)(param_2 + -0x18);
        if (param_1 < 4) {
          pIVar8 = pIVar1;
        }
        if ((*(ulong *)pIVar8 & 1) != 0) {
          if ((int)*(ulong *)pIVar8 == *(int *)pIVar1) goto LAB_014d9540;
          pIVar8 = (Isolate *)v8::internal::Object::ConvertToInteger(param_3);
        }
        if (pIVar8 != (Isolate *)0x0) {
          local_70 = dVar12;
          dStack_68 = 0.0;
          uVar13 = *(ulong *)pIVar8;
          if ((uVar13 & 1) == 0) {
            local_88[2] = (double)((long)(uVar13 << 0x20) >> 0x21);
            if ((int)uVar13 < 0) {
              local_88[1] = (double)((long)dVar12 + (long)local_88[2]);
              pdVar11 = &dStack_68;
              if (-1 < (long)dVar12 + (long)local_88[2]) {
                pdVar11 = local_88 + 1;
              }
              dVar12 = *pdVar11;
            }
            else {
              pdVar11 = &local_70;
              if ((long)local_88[2] <= (long)dVar12) {
                pdVar11 = local_88 + 2;
              }
              dVar12 = *pdVar11;
            }
          }
          else {
            local_88[2] = *(double *)(uVar13 + 3);
            dVar12 = (double)(long)dVar12;
            if (0.0 <= local_88[2]) {
              pdVar11 = local_88 + 1;
              if (local_88[2] <= dVar12) {
                pdVar11 = local_88 + 2;
              }
              local_88[1] = dVar12;
            }
            else {
              local_88[0] = 0.0;
              local_88[1] = local_88[2] + dVar12;
              pdVar11 = local_88;
              if (0.0 <= local_88[2] + dVar12) {
                pdVar11 = local_88 + 1;
              }
            }
            dVar12 = (double)(long)*pdVar11;
          }
          goto LAB_014d9540;
        }
      }
    }
  }
  uVar13 = *(ulong *)(param_3 + 0x180);
LAB_014d965c:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar13;
}

