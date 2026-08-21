
undefined8 FUN_011c8774(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  Factory *pFVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  ushort uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  Factory *pFVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong *puVar17;
  double dVar18;
  byte **local_100;
  byte *local_f8;
  char *local_f0;
  undefined8 local_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  Factory *local_a0;
  ulong *local_98;
  undefined8 local_90;
  ulong *local_88;
  undefined8 local_80;
  ulong *local_78;
  ulong local_70;
  undefined8 local_68;
  ulong local_48;
  
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x1ae);
  }
  if (DAT_01d3fa40 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fa40 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d3fa40;
  local_100 = (byte **)0x0;
  if ((*DAT_01d3fa40 & 5) != 0) {
    local_b8 = (long *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar4,"V8.Runtime_Runtime_ObjectHasOwnProperty",0,0,0,0,0,0,0,
                       &local_b8,0);
    plVar7 = (long *)CONCAT44(uStack_ac,local_b0);
    local_b0 = 0;
    uStack_ac = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_b8;
    local_b8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_100 = &local_f8;
    local_f0 = "V8.Runtime_Runtime_ObjectHasOwnProperty";
    local_f8 = pbVar4;
    local_e8 = uVar8;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar17 = param_2 + -1;
  uVar12 = *puVar17;
  if ((uVar12 & 1) != 0) {
    uVar14 = uVar12 & 0xffffffff00000000 | 7;
    if ((((*(short *)(uVar14 + *(uint *)(uVar12 - 1)) == 0x42) &&
         (dVar18 = *(double *)(uVar12 + 3), 0.0 <= dVar18)) && (dVar18 <= 9007199254740991.0)) &&
       (dVar18 == (double)(ulong)(long)dVar18)) {
      puVar17 = (ulong *)0x0;
      local_48 = (long)dVar18;
      goto LAB_011c88b8;
    }
    if (0x40 < *(ushort *)(uVar14 + *(uint *)(uVar12 - 1))) goto LAB_011c891c;
LAB_011c892c:
    if (puVar17 != (ulong *)0x0) {
      uVar12 = *puVar17;
      if (*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) < 0x40) {
        uVar6 = *(uint *)(uVar12 + 3);
        local_b8 = (long *)uVar12;
        if ((uVar6 & 0xc0000003) == 0) {
          local_48 = (ulong)(uVar6 >> 3) & 0xffffff;
          goto LAB_011c88b8;
        }
        if ((uVar6 & 5) == 4) goto LAB_011c896c;
        uVar6 = v8::internal::String::SlowAsIntegerIndex((String *)&local_b8,&local_48);
        uVar12 = *param_2;
      }
      else {
LAB_011c896c:
        uVar6 = 0;
        uVar12 = *param_2;
      }
      goto joined_r0x011c8974;
    }
LAB_011c89c4:
    uVar16 = *(undefined8 *)(param_3 + 0x180);
    goto LAB_011c8ac0;
  }
  if ((int)uVar12 < 0) {
LAB_011c891c:
    puVar17 = (ulong *)v8::internal::Object::ConvertToName(param_3,puVar17);
    goto LAB_011c892c;
  }
  puVar17 = (ulong *)0x0;
  local_48 = uVar12 >> 1 & 0x7fffffff;
LAB_011c88b8:
  uVar6 = 1;
  uVar12 = *param_2;
joined_r0x011c8974:
  if ((uVar12 & 1) != 0) {
    pFVar9 = (Factory *)(uVar12 & 0xffffffff00000000);
    uVar14 = (ulong)pFVar9 | 7;
    if (*(short *)(uVar14 + *(uint *)(uVar12 - 1)) != 0xac) {
      if (0xa9 < *(ushort *)(uVar14 + *(uint *)(uVar12 - 1))) {
        local_b8._4_4_ = (uint)((ulong)local_b8 >> 0x20);
        local_a0 = param_3;
        local_88 = param_2;
        local_78 = param_2;
        if ((uVar6 & 1) == 0) {
          local_b8 = (long *)((ulong)local_b8._4_4_ << 0x20);
          uStack_ac = 0;
          uStack_a8 = 0xc0;
          local_98 = puVar17;
          local_a0 = pFVar9;
          if ((*(ushort *)((*puVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar17 - 1)) &
              0xffe0) == 0x20) {
            local_98 = (ulong *)v8::internal::StringTable::LookupString(pFVar9,puVar17);
          }
          local_90 = 0;
          local_80 = 0;
          local_68 = 0xffffffffffffffff;
          local_70 = 0xffffffffffffffff;
          v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_b8);
        }
        else {
          local_b8 = (long *)((ulong)local_b8._4_4_ << 0x20);
          local_98 = (ulong *)0x0;
          local_90 = 0;
          local_80 = 0;
          uStack_ac = 0;
          uStack_a8 = 0xc0;
          local_68 = 0xffffffffffffffff;
          puVar10 = local_98;
          local_70 = local_48;
          if (((0xfffffffe < local_48) && (*(short *)(uVar14 + *(uint *)(uVar12 - 1)) != 0x41b)) &&
             (puVar10 = (ulong *)v8::internal::Factory::SizeToString(param_3,local_48,true),
             (*(ushort *)((*puVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar10 - 1)) &
             0xffe0) == 0x20)) {
            puVar10 = (ulong *)v8::internal::StringTable::LookupString(param_3);
          }
          local_98 = puVar10;
          v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_b8);
        }
        uVar5 = v8::internal::JSReceiver::HasProperty((LookupIterator *)&local_b8);
        if ((uVar5 & 0xff) == 0) {
          uVar16 = *(undefined8 *)(param_3 + 0x180);
          goto LAB_011c8ac0;
        }
        if (0xff < uVar5) {
          uVar16 = *(undefined8 *)(param_3 + 0xb8);
          goto LAB_011c8ac0;
        }
        uVar12 = *param_2;
        pFVar9 = (Factory *)(uVar12 & 0xffffffff00000000);
        uVar14 = (ulong)pFVar9 | (ulong)*(uint *)(uVar12 - 1);
        if (*(short *)(uVar14 + 7) != 0xab) {
          bVar3 = *(byte *)(uVar14 + 9);
          if (local_48 < 0xffffffff && ((uVar6 ^ 0xffffffff) & 1) == 0) {
            bVar3 = bVar3 >> 3;
          }
          else {
            bVar3 = bVar3 >> 2;
          }
          if ((bVar3 & 1) == 0) goto LAB_011c8abc;
        }
        if ((uVar6 & 1) == 0) {
          if (*(short *)(((ulong)pFVar9 | 7) + (ulong)*(uint *)(*puVar17 - 1)) == 0x40) {
            uVar6 = ~*(uint *)(*puVar17 + 7) & 1;
          }
          else {
            uVar6 = 1;
          }
          local_b8 = (long *)CONCAT44(local_b8._4_4_,uVar6);
          uStack_ac = 0;
          uStack_a8 = 0xc0;
          local_a0 = pFVar9;
          if ((*(ushort *)((*puVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar17 - 1)) &
              0xffe0) == 0x20) {
            puVar17 = (ulong *)v8::internal::StringTable::LookupString(pFVar9,puVar17);
          }
          local_90 = 0;
          local_80 = 0;
          local_68 = 0xffffffffffffffff;
          local_70 = 0xffffffffffffffff;
          local_98 = puVar17;
          local_88 = param_2;
          local_78 = param_2;
          v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_b8);
        }
        else {
          local_98 = (ulong *)0x0;
          local_90 = 0;
          local_80 = 0;
          local_b8 = (long *)CONCAT44(local_b8._4_4_,1);
          uStack_ac = 0;
          uStack_a8 = 0xc0;
          local_70 = local_48;
          local_68 = 0xffffffffffffffff;
          local_a0 = param_3;
          puVar17 = local_98;
          local_88 = param_2;
          local_78 = param_2;
          if (((0xfffffffe < local_48) &&
              (*(short *)(((ulong)pFVar9 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x41b)) &&
             (puVar17 = (ulong *)v8::internal::Factory::SizeToString(param_3,local_48,true),
             (*(ushort *)((*puVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar17 - 1)) &
             0xffe0) == 0x20)) {
            puVar17 = (ulong *)v8::internal::StringTable::LookupString(param_3);
          }
          local_98 = puVar17;
          v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_b8);
        }
        uVar5 = v8::internal::JSReceiver::HasProperty((LookupIterator *)&local_b8);
        pFVar9 = param_3 + 0xb8;
        if (uVar5 < 0x100) {
          pFVar9 = param_3 + 0xc0;
        }
        pFVar1 = param_3 + 0x180;
        if ((uVar5 & 0xff) != 0) {
          pFVar1 = pFVar9;
        }
        uVar16 = *(undefined8 *)pFVar1;
        goto LAB_011c8ac0;
      }
      if (*(short *)(uVar14 + *(uint *)(uVar12 - 1)) == 0xa9) {
        if (puVar17 == (ulong *)0x0) {
          puVar17 = (ulong *)v8::internal::Factory::SizeToString(param_3,local_48,true);
        }
        goto LAB_011c8994;
      }
      if (0x3f < *(ushort *)(uVar14 + *(uint *)(uVar12 - 1))) {
        if (((int)uVar12 == *(int *)(param_3 + 0xb0)) || ((int)uVar12 == *(int *)(param_3 + 0xa0)))
        {
          puVar11 = (undefined8 *)v8::internal::Factory::NewTypeError(param_3,0xae,0,0,0);
          uVar16 = v8::internal::Isolate::Throw((Isolate *)param_3,*puVar11,0);
          goto LAB_011c8ac0;
        }
        goto LAB_011c8abc;
      }
      if ((uVar6 & 1) == 0) {
        uVar14 = *puVar17;
        uVar12 = *(ulong *)(param_3 + 0x7b8);
        if (((int)uVar12 == (int)uVar14) ||
           ((((uVar15 = uVar14 & 0xffffffff00000000 | 7,
              0x1f < *(ushort *)(uVar15 + *(uint *)(uVar14 - 1)) ||
              (0x1f < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))
              ) && (*(short *)(uVar15 + *(uint *)(uVar14 - 1)) != 0x40)) &&
            ((*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x40
             && (local_b8 = (long *)uVar14,
                uVar12 = v8::internal::String::SlowEquals((String *)&local_b8), (uVar12 & 1) != 0)))
            ))) goto LAB_011c8cb0;
LAB_011c8de4:
        lVar13 = -0x8790;
      }
      else {
        if ((ulong)(long)*(int *)(uVar12 + 7) <= local_48) goto LAB_011c8de4;
LAB_011c8cb0:
        lVar13 = -0x8798;
      }
      uVar16 = *(undefined8 *)(param_3 + lVar13 + 0x8850);
      goto LAB_011c8ac0;
    }
    if (puVar17 != (ulong *)0x0) {
LAB_011c8994:
      uVar5 = v8::internal::JSReceiver::HasOwnProperty(param_2,puVar17);
      if ((uVar5 & 0xff) != 0) {
        lVar13 = 0xb8;
        if (uVar5 < 0x100) {
          lVar13 = 0xc0;
        }
        uVar16 = *(undefined8 *)(param_3 + lVar13);
        goto LAB_011c8ac0;
      }
      goto LAB_011c89c4;
    }
  }
LAB_011c8abc:
  uVar16 = *(undefined8 *)(param_3 + 0xc0);
LAB_011c8ac0:
  *(undefined8 *)(param_3 + 0x95a0) = uVar8;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  if ((local_100 != (byte **)0x0) && (*local_f8 != 0)) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_f8,local_f0,local_e8);
  }
  if (local_e0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  return uVar16;
}

