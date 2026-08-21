
undefined8 FUN_015935cc(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  double dVar15;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long *local_58;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x207);
  }
  if (DAT_01d47368 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47368 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47368;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47368 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar3,"V8.Runtime_Runtime_StringIncludes",0,0,0,0,0,0,0,
                       &local_60,0);
    plVar6 = local_58;
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_60;
    local_60 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_StringIncludes";
    local_a8 = pbVar3;
    local_98 = uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar13 = *param_2;
  if ((uVar13 & 1) == 0) {
LAB_015936f8:
    puVar8 = (ulong *)v8::internal::Object::ConvertToString(param_3,param_2);
LAB_01593708:
    if (puVar8 != (ulong *)0x0) {
      puVar11 = param_2 + -1;
      uVar4 = v8::internal::RegExpUtils::IsRegExp(param_3,puVar11);
      if ((uVar4 & 0xff) != 0) {
        if (0xff < uVar4) {
          local_60 = (long *)0x1a4e5ec;
          local_58 = (long *)0x19;
          lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
          if (lVar9 == 0) {
LAB_01593978:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          uVar12 = 0x34;
          goto LAB_015937ac;
        }
        uVar13 = *puVar11;
        if (((uVar13 & 1) == 0) ||
           (0x3f < *(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)))) {
          puVar11 = (ulong *)v8::internal::Object::ConvertToString(param_3,puVar11);
        }
        if (puVar11 != (ulong *)0x0) {
          param_2 = param_2 + -2;
          if ((*param_2 & 1) != 0) {
            param_2 = (ulong *)v8::internal::Object::ConvertToInteger(param_3,param_2);
          }
          if (param_2 != (ulong *)0x0) {
            uVar13 = *param_2;
            if ((uVar13 & 1) == 0) {
              uVar14 = 0;
              if (1 < (int)uVar13) {
                uVar14 = (int)uVar13 >> 1;
              }
            }
            else if (1.0 <= *(double *)(uVar13 + 3)) {
              dVar15 = (double)NEON_fminnm(*(double *)(uVar13 + 3),0x41efffffffe00000);
              uVar14 = (int)dVar15;
            }
            else {
              uVar14 = 0;
            }
            uVar1 = *(uint *)(*puVar8 + 7);
            if (uVar14 <= *(uint *)(*puVar8 + 7)) {
              uVar1 = uVar14;
            }
            iVar5 = v8::internal::String::IndexOf(param_3,puVar8,puVar11,uVar1);
            puVar10 = (undefined8 *)v8::internal::Factory::ToBoolean((Factory *)param_3,iVar5 != -1)
            ;
            uVar12 = *puVar10;
            goto LAB_01593864;
          }
        }
      }
    }
    uVar12 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
    if (((int)uVar13 != *(int *)(param_3 + 0xb0)) && ((int)uVar13 != *(int *)(param_3 + 0xa0))) {
      puVar8 = param_2;
      if (0x3f < *(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)))
      goto LAB_015936f8;
      goto LAB_01593708;
    }
    local_58 = (long *)__strlen_chk("String.prototype.includes",0x1a);
    local_60 = (long *)0x1a4e5ec;
    lVar9 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar9 == 0) goto LAB_01593978;
    uVar12 = 0x1a;
LAB_015937ac:
    puVar10 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,uVar12,lVar9,0,0)
    ;
    uVar12 = v8::internal::Isolate::Throw(param_3,*puVar10,0);
  }
LAB_01593864:
  *(undefined8 *)(param_3 + 0x95a0) = uVar7;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar12;
}

