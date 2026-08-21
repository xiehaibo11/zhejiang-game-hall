
ulong FUN_014da14c(int param_1,long param_2,Factory *param_3)

{
  Factory *pFVar1;
  Factory *pFVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  double *pdVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double local_88 [3];
  double local_70 [2];
  
  pFVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pFVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar5 = (ulong *)v8::internal::JSTypedArray::Validate
                              (param_3,param_2,"%TypedArray%.prototype.lastIndexOf");
  if (puVar5 == (ulong *)0x0) {
LAB_014da2d4:
    uVar9 = *(ulong *)(param_3 + 0x180);
  }
  else {
    dVar12 = *(double *)(*puVar5 + 0x1f);
    if (dVar12 != 0.0) {
      dVar10 = (double)((long)dVar12 + -1);
      if (2 < param_1 + -4) {
        puVar7 = (ulong *)(param_2 + -0x10);
        if ((*(byte *)puVar7 & 1) != 0) {
          puVar7 = (ulong *)v8::internal::Object::ConvertToInteger(param_3);
        }
        if (puVar7 == (ulong *)0x0) goto LAB_014da2d4;
        local_70[0] = dVar12;
        local_70[1] = -NAN;
        uVar9 = *puVar7;
        if ((uVar9 & 1) == 0) {
          local_88[2] = (double)((long)(uVar9 << 0x20) >> 0x21);
          if ((int)uVar9 < 0) {
            local_88[1] = (double)((long)dVar12 + (long)local_88[2]);
            pdVar11 = local_70 + 1;
            if (-2 < (long)dVar12 + (long)local_88[2]) {
              pdVar11 = local_88 + 1;
            }
          }
          else {
            pdVar11 = local_70;
            if ((long)local_88[2] <= (long)dVar12) {
              pdVar11 = local_88 + 2;
            }
          }
          dVar10 = *pdVar11;
        }
        else {
          local_88[2] = *(double *)(uVar9 + 3);
          dVar10 = (double)(long)dVar12;
          if (0.0 <= local_88[2]) {
            pdVar11 = local_88 + 1;
            if (local_88[2] <= dVar10) {
              pdVar11 = local_88 + 2;
            }
            local_88[1] = dVar10;
          }
          else {
            local_88[0] = -1.0;
            local_88[1] = local_88[2] + dVar10;
            pdVar11 = local_88;
            if (-1.0 <= local_88[2] + dVar10) {
              pdVar11 = local_88 + 1;
            }
          }
          dVar10 = (double)(long)*pdVar11;
        }
        if ((long)dVar12 <= (long)dVar10) {
          dVar10 = (double)((long)dVar12 + -1);
        }
      }
      if (-1 < (long)dVar10) {
        uVar9 = *puVar5;
        if ((*(uint *)((uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb)) + 0x1b) >> 2 & 1
            ) == 0) {
          plVar6 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                             ((ulong)*(byte *)((uVar9 & 0xffffffff00000000 | 10) +
                                              (ulong)*(uint *)(uVar9 - 1)) & 0xf8));
          pFVar2 = (Factory *)(param_2 + -8);
          if (param_1 + -4 < 2) {
            pFVar2 = param_3 + 0xa0;
          }
          auVar13 = (**(code **)(*plVar6 + 0xd8))(plVar6,puVar5,pFVar2,dVar10);
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
                                            (*(CanonicalHandleScope **)(param_3 + 0x95b8),lVar8 << 1
                                            );
              }
            }
            else {
              puVar5 = (ulong *)v8::internal::Factory::
                                NewHeapNumber<(v8::internal::AllocationType)0>(param_3);
              *(double *)(*puVar5 + 3) = (double)lVar8;
            }
            uVar9 = *puVar5;
            goto LAB_014da320;
          }
          goto LAB_014da2d4;
        }
      }
    }
    uVar9 = 0xfffffffffffffffe;
  }
LAB_014da320:
  *(long *)pFVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  return uVar9;
}

