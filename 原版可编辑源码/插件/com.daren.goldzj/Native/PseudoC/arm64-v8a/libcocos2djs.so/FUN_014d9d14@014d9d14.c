
ulong FUN_014d9d14(int param_1,long param_2,Factory *param_3)

{
  Factory *pFVar1;
  Factory *pFVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  double dVar9;
  ulong uVar10;
  double *pdVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double local_80 [3];
  double local_68;
  double local_58;
  
  pFVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pFVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar5 = (ulong *)v8::internal::JSTypedArray::Validate
                              (param_3,param_2,"%TypedArray%.prototype.indexOf");
  if (puVar5 == (ulong *)0x0) {
LAB_014d9e94:
    uVar10 = *(ulong *)(param_3 + 0x180);
  }
  else {
    uVar10 = *puVar5;
    dVar12 = *(double *)(uVar10 + 0x1f);
    if (dVar12 != 0.0) {
      if (param_1 + -4 < 3) {
        dVar9 = 0.0;
      }
      else {
        puVar7 = (ulong *)(param_2 + -0x10);
        if ((*(byte *)puVar7 & 1) != 0) {
          puVar7 = (ulong *)v8::internal::Object::ConvertToInteger(param_3);
        }
        if (puVar7 == (ulong *)0x0) goto LAB_014d9e94;
        local_58 = 0.0;
        local_68 = dVar12;
        uVar10 = *puVar7;
        if ((uVar10 & 1) == 0) {
          local_80[2] = (double)((long)(uVar10 << 0x20) >> 0x21);
          if ((int)uVar10 < 0) {
            local_80[1] = (double)((long)dVar12 + (long)local_80[2]);
            pdVar11 = &local_58;
            if (-1 < (long)dVar12 + (long)local_80[2]) {
              pdVar11 = local_80 + 1;
            }
          }
          else {
            pdVar11 = &local_68;
            if ((long)local_80[2] <= (long)dVar12) {
              pdVar11 = local_80 + 2;
            }
          }
          dVar9 = *pdVar11;
        }
        else {
          local_80[2] = *(double *)(uVar10 + 3);
          dVar9 = (double)(long)dVar12;
          if (0.0 <= local_80[2]) {
            pdVar11 = local_80 + 1;
            if (local_80[2] <= dVar9) {
              pdVar11 = local_80 + 2;
            }
            local_80[1] = dVar9;
          }
          else {
            local_80[0] = 0.0;
            local_80[1] = local_80[2] + dVar9;
            pdVar11 = local_80;
            if (0.0 <= local_80[2] + dVar9) {
              pdVar11 = local_80 + 1;
            }
          }
          dVar9 = (double)(long)*pdVar11;
        }
        uVar10 = *puVar5;
      }
      if ((*(uint *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb)) + 0x1b) >> 2 & 1
          ) == 0) {
        plVar6 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                           ((ulong)*(byte *)((uVar10 & 0xffffffff00000000 | 10) +
                                            (ulong)*(uint *)(uVar10 - 1)) & 0xf8));
        pFVar2 = (Factory *)(param_2 + -8);
        if (param_1 + -4 < 2) {
          pFVar2 = param_3 + 0xa0;
        }
        auVar13 = (**(code **)(*plVar6 + 0xd0))(plVar6,param_3,puVar5,pFVar2,dVar9,dVar12);
        lVar8 = auVar13._8_8_;
        if ((auVar13._0_8_ & 0xff) != 0) {
          if ((lVar8 == auVar13._8_4_) && (lVar8 + 0x40000000U >> 0x1f == 0)) {
            if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar5 = *(ulong **)pFVar1;
              if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
                puVar5 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_3);
              }
              *(ulong **)pFVar1 = puVar5 + 1;
              *puVar5 = lVar8 << 1;
            }
            else {
              puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_3 + 0x95b8),lVar8 << 1);
            }
          }
          else {
            puVar5 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                        (param_3);
            *(double *)(*puVar5 + 3) = (double)lVar8;
          }
          uVar10 = *puVar5;
          goto LAB_014d9ee0;
        }
        goto LAB_014d9e94;
      }
    }
    uVar10 = 0xfffffffffffffffe;
  }
LAB_014d9ee0:
  *(long *)pFVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  return uVar10;
}

