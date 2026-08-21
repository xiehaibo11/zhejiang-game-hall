
undefined8 FUN_014d993c(int param_1,long param_2,Factory *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  ulong *puVar4;
  long *plVar5;
  Factory *pFVar6;
  ulong *puVar7;
  double dVar8;
  ulong uVar9;
  double *pdVar10;
  undefined8 uVar11;
  double dVar12;
  double local_70 [3];
  double local_58;
  double local_38;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar4 = (ulong *)v8::internal::JSTypedArray::Validate
                              (param_3,param_2,"%TypedArray%.prototype.includes");
  if (puVar4 == (ulong *)0x0) {
LAB_014d9a9c:
    pFVar6 = param_3 + 0x180;
  }
  else {
    if (1 < param_1 + -4) {
      uVar9 = *puVar4;
      dVar12 = *(double *)(uVar9 + 0x1f);
      if (dVar12 != 0.0) {
        if (param_1 + -4 < 3) {
          dVar8 = 0.0;
        }
        else {
          puVar7 = (ulong *)(param_2 + -0x10);
          if ((*(byte *)puVar7 & 1) != 0) {
            puVar7 = (ulong *)v8::internal::Object::ConvertToInteger(param_3);
          }
          if (puVar7 == (ulong *)0x0) goto LAB_014d9a9c;
          local_38 = 0.0;
          local_58 = dVar12;
          uVar9 = *puVar7;
          if ((uVar9 & 1) == 0) {
            local_70[2] = (double)((long)(uVar9 << 0x20) >> 0x21);
            if ((int)uVar9 < 0) {
              local_70[1] = (double)((long)dVar12 + (long)local_70[2]);
              pdVar10 = &local_38;
              if (-1 < (long)dVar12 + (long)local_70[2]) {
                pdVar10 = local_70 + 1;
              }
            }
            else {
              pdVar10 = &local_58;
              if ((long)local_70[2] <= (long)dVar12) {
                pdVar10 = local_70 + 2;
              }
            }
            dVar8 = *pdVar10;
          }
          else {
            local_70[2] = *(double *)(uVar9 + 3);
            dVar8 = (double)(long)dVar12;
            if (0.0 <= local_70[2]) {
              pdVar10 = local_70 + 1;
              if (local_70[2] <= dVar8) {
                pdVar10 = local_70 + 2;
              }
              local_70[1] = dVar8;
            }
            else {
              local_70[0] = 0.0;
              local_70[1] = local_70[2] + dVar8;
              pdVar10 = local_70;
              if (0.0 <= local_70[2] + dVar8) {
                pdVar10 = local_70 + 1;
              }
            }
            dVar8 = (double)(long)*pdVar10;
          }
          uVar9 = *puVar4;
        }
        if ((*(uint *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb)) + 0x1b) >> 2 & 1
            ) == 0) {
          plVar5 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                             ((ulong)*(byte *)((uVar9 & 0xffffffff00000000 | 10) +
                                              (ulong)*(uint *)(uVar9 - 1)) & 0xf8));
          uVar3 = (**(code **)(*plVar5 + 200))(plVar5,param_3,puVar4,param_2 + -8,dVar8,dVar12);
          if ((uVar3 & 0xff) != 0) {
            pFVar6 = (Factory *)v8::internal::Factory::ToBoolean(param_3,0xff < uVar3);
            goto LAB_014d9aa8;
          }
          goto LAB_014d9a9c;
        }
      }
    }
    pFVar6 = param_3 + 0xc0;
  }
LAB_014d9aa8:
  uVar11 = *(undefined8 *)pFVar6;
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  return uVar11;
}

