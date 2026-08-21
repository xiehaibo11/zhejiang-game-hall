
undefined8
FUN_010e2a38(undefined8 *param_1,undefined8 *param_2,ulong *param_3,KeyAccumulator *param_4,
            int param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  double dVar7;
  ulong *puVar8;
  Logger *this;
  Isolate *this_00;
  long lVar9;
  PropertyCallbackArguments local_120 [8];
  long local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  long local_f8;
  undefined8 local_d0;
  byte local_c4 [4];
  RuntimeCallStats *local_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_88;
  
  this_00 = *(Isolate **)param_4;
  v8::internal::PropertyCallbackArguments::PropertyCallbackArguments
            (local_120,this_00,*param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0x1f),
             *param_1,*param_2,0x100000001);
  if (((*(uint *)(*param_3 + 0x17) & 1) == 0) ||
     (*(uint *)(*param_3 + 0x17) != *(uint *)(this_00 + 0xa0))) {
    this = *(Logger **)(local_f8 + 0x9558);
    uVar2 = v8::internal::Logger::is_logging(this);
    if (param_5 == 0) {
      if ((uVar2 & 1) != 0) {
        v8::internal::Logger::ApiObjectAccess(this,"interceptor-indexed-enumerator",local_100);
      }
      lStack_b8 = 0;
      local_c0 = (RuntimeCallStats *)0x0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      local_a0 = 0;
      if (v8::internal::TracingFlags::runtime_stats != 0) {
        lVar4 = *(long *)(local_f8 + 0x9520);
        uVar3 = 0x90;
        goto LAB_010e2ea4;
      }
    }
    else {
      if ((uVar2 & 1) != 0) {
        v8::internal::Logger::ApiObjectAccess(this,"interceptor-named-enumerator",local_100);
      }
      lStack_b8 = 0;
      local_c0 = (RuntimeCallStats *)0x0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      local_a0 = 0;
      if (v8::internal::TracingFlags::runtime_stats != 0) {
        lVar4 = *(long *)(local_f8 + 0x9520);
        uVar3 = 0x9f;
LAB_010e2ea4:
        local_c0 = (RuntimeCallStats *)(lVar4 + 0x58a0);
        local_a0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_b8 = 0;
        v8::internal::RuntimeCallStats::Enter(local_c0,(ulong)&local_c0 | 8,uVar3);
      }
    }
    puVar8 = (ulong *)v8::internal::PropertyCallbackArguments::CallPropertyEnumerator
                                (local_120,param_3);
    if (local_c0 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_c0,(RuntimeCallTimer *)((ulong)&local_c0 | 8));
    }
  }
  else {
    puVar8 = (ulong *)0x0;
  }
  if (*(int *)(this_00 + 0x2c20) == *(int *)(this_00 + 0xa8)) {
    if (puVar8 == (ulong *)0x0) {
      uVar3 = 0x101;
    }
    else {
      if ((((byte)param_4[0x24] >> 1 & 1) == 0) ||
         (((*(uint *)(*param_3 + 0xb) & 1) != 0 &&
          (*(uint *)(*param_3 + 0xb) == *(uint *)(this_00 + 0xa0))))) {
        plVar1 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                           ((ulong)*(byte *)((*puVar8 & 0xffffffff00000000 | 10) +
                                            (ulong)*(uint *)(*puVar8 - 1)) & 0xf8));
        uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,puVar8,param_4,param_5 == 0);
        if ((uVar2 & 1) == 0) {
          uVar3 = 0;
          goto LAB_010e2e38;
        }
      }
      else {
        uVar2 = *puVar8;
        plVar1 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                           ((ulong)*(byte *)((uVar2 & 0xffffffff00000000 | 10) +
                                            (ulong)*(uint *)(uVar2 - 1)) & 0xf8));
        lVar4 = (**(code **)(*plVar1 + 0xb8))
                          (plVar1,uVar2,uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 7));
        if (lVar4 != 0) {
          lVar9 = 0;
          do {
            uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,*puVar8,lVar9);
            if ((uVar2 & 1) != 0) {
              v8::internal::PropertyCallbackArguments::PropertyCallbackArguments
                        ((PropertyCallbackArguments *)&local_c0,*(undefined8 *)param_4,
                         *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0x1f),*param_1,
                         *param_2,0x100000001);
              puVar5 = (ulong *)(**(code **)(*plVar1 + 0x28))(plVar1,puVar8,lVar9);
              uVar2 = *puVar5;
              if (param_5 == 0) {
                if ((uVar2 & 1) == 0) {
                  if ((int)(uint)uVar2 < 0) goto LAB_010e2ec0;
                  dVar7 = (double)(ulong)((uint)uVar2 >> 1);
                }
                else {
                  if (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) !=
                      0x42) {
LAB_010e2ec0:
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("Check failed: %s.","element->ToUint32(&number)");
                  }
                  dVar7 = *(double *)(uVar2 + 3) + 4503599627370496.0;
                  if (((ulong)dVar7 >> 0x20 != 0x43300000) ||
                     (*(double *)(uVar2 + 3) != (double)((ulong)dVar7 & 0xffffffff)))
                  goto LAB_010e2ec0;
                }
                puVar6 = (undefined8 *)
                         v8::internal::PropertyCallbackArguments::CallIndexedQuery
                                   ((PropertyCallbackArguments *)&local_c0,param_3,dVar7);
              }
              else {
                if (((uVar2 & 1) == 0) ||
                   (0x40 < *(ushort *)
                            ((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)))) {
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("Check failed: %s.","element->IsName()");
                }
                puVar6 = (undefined8 *)
                         v8::internal::PropertyCallbackArguments::CallNamedQuery
                                   ((PropertyCallbackArguments *)&local_c0,param_3,puVar5);
              }
              if (puVar6 != (undefined8 *)0x0) {
                local_d0 = *puVar6;
                uVar2 = v8::internal::Object::ToInt32((Object *)&local_d0,(int *)local_c4);
                if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("Check failed: %s.","attributes->ToInt32(&value)");
                }
                if (((local_c4[0] >> 1 & 1) == 0) &&
                   (uVar2 = v8::internal::KeyAccumulator::AddKey(param_4,puVar5,0), (uVar2 & 1) == 0
                   )) {
                  uVar3 = 0;
                  *(undefined8 *)(lStack_b8 + 0xb790) = uStack_b0;
                  goto LAB_010e2e38;
                }
              }
              local_c0 = (RuntimeCallStats *)&PTR__Relocatable_01cacc40;
              local_88 = 0x1baddead0baddeaf;
              *(undefined8 *)(lStack_b8 + 0xb790) = uStack_b0;
            }
            lVar9 = lVar9 + 1;
          } while (lVar4 != lVar9);
        }
      }
      uVar3 = 0x101;
    }
  }
  else {
    v8::internal::Isolate::PromoteScheduledException(this_00);
    uVar3 = 0;
  }
LAB_010e2e38:
  *(undefined8 *)(local_118 + 0xb790) = uStack_110;
  return uVar3;
}

