
ulong FUN_01595770(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_54;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x201);
  }
  if (DAT_01d473a8 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d473a8 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d473a8;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d473a8 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,"V8.Runtime_Runtime_StringBuilderConcat",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar6 = local_48;
    local_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_50;
    local_50 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_StringBuilderConcat";
    local_98 = pbVar4;
    local_88 = uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar13 = *param_2;
  if (((uVar13 & 1) == 0) ||
     (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x423)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSArray()");
  }
  local_50 = (long *)param_2[-1];
  uVar13 = v8::internal::Object::ToInt32((Object *)&local_50,(int *)&local_54);
  if ((uVar13 & 1) == 0) {
    puVar8 = (undefined8 *)v8::internal::Factory::NewInvalidStringLengthError(param_3);
    uVar11 = *puVar8;
  }
  else {
    uVar13 = param_2[-2];
    if (((uVar13 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsString()");
    }
    uVar13 = *param_2;
    uVar2 = *(uint *)(uVar13 + 0xb);
    if ((uVar2 & 1) == 0) {
      if ((int)uVar2 < 0) {
LAB_01595bec:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","TryNumberToSize(array->length(), &actual_array_length)");
      }
      uVar14 = (ulong)(uVar2 >> 1);
    }
    else {
      dVar16 = *(double *)((uVar13 & 0xffffffff00000000 | (ulong)uVar2) + 3);
      if ((dVar16 < 0.0) || (1.8446744073709552e+19 <= dVar16)) goto LAB_01595bec;
      uVar14 = (ulong)dVar16;
    }
    if ((int)local_54 < 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","array_length >= 0");
    }
    if (uVar14 < local_54) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<size_t>(array_length) <= actual_array_length");
    }
    if (0x2f < *(byte *)((uVar13 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar13 - 1))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","array->HasFastElements()");
    }
    v8::internal::JSObject::ValidateElements();
    bVar3 = *(byte *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1)) + 10);
    if ((bVar3 & 0xf0) != 0x10) {
      uVar12 = 2;
      if (((uint)(bVar3 < 0x30) & (bVar3 & 8) >> 3) != 0) {
        uVar12 = 3;
      }
      v8::internal::JSObject::TransitionElementsKind(param_2,uVar12);
    }
    uVar15 = param_2[-2];
    uVar14 = *param_2;
    uVar13 = uVar14 & 0xffffffff00000000;
    if ((*(byte *)((uVar13 | 10) + (ulong)*(uint *)(uVar14 - 1)) & 0xf0) == 0x10) {
      local_50 = (long *)(CONCAT71(local_50._1_7_,
                                   *(byte *)((uVar15 & 0xffffffff00000000 | 7) +
                                            (ulong)*(uint *)(uVar15 - 1)) >> 3) & 0xffffffffffffff01
                         );
      uVar14 = uVar13 | *(uint *)(uVar14 + 7);
      uVar2 = *(int *)(uVar14 + 3) >> 1;
      if ((int)uVar2 < (int)local_54) {
        local_54 = uVar2;
      }
      if (local_54 == 1) {
        if (((*(uint *)(uVar14 + 7) & 1) != 0) &&
           (uVar9 = uVar13 | *(uint *)(uVar14 + 7),
           *(ushort *)((uVar13 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0x40)) goto LAB_01595a80;
LAB_01595a54:
        iVar5 = v8::internal::StringBuilderConcatLength
                          (*(undefined4 *)(uVar15 + 7),uVar14,local_54,&local_50);
        if (iVar5 != 0) {
          if (iVar5 == -1) goto LAB_01595a6c;
          if (local_50._0_1_ == (Object)0x0) {
            puVar10 = (ulong *)v8::internal::Factory::NewRawTwoByteString(param_3,iVar5,0);
            if (puVar10 == (ulong *)0x0) goto LAB_01595b88;
            v8::internal::StringBuilderConcatHelper<unsigned_short>
                      (param_2[-2],*puVar10 + 0xb,
                       *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7),local_54);
          }
          else {
            puVar10 = (ulong *)v8::internal::Factory::NewRawOneByteString(param_3,iVar5,0);
            if (puVar10 == (ulong *)0x0) {
LAB_01595b88:
              uVar9 = *(ulong *)(param_3 + 0x180);
              goto LAB_01595a80;
            }
            v8::internal::StringBuilderConcatHelper<unsigned_char>
                      (param_2[-2],*puVar10 + 0xb,
                       *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7),local_54);
          }
          uVar9 = *puVar10;
          goto LAB_01595a80;
        }
      }
      else if (local_54 != 0) goto LAB_01595a54;
      uVar9 = *(ulong *)(param_3 + 200);
      goto LAB_01595a80;
    }
LAB_01595a6c:
    uVar11 = *(undefined8 *)(param_3 + 0x748);
  }
  uVar9 = v8::internal::Isolate::Throw((Isolate *)param_3,uVar11,0);
LAB_01595a80:
  *(undefined8 *)(param_3 + 0x95a0) = uVar7;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar9;
}

