
ulong FUN_015b0ea8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong *puVar8;
  signed *psVar9;
  ulong uVar10;
  ulong uVar11;
  signed *psVar12;
  ulong uVar13;
  long lVar14;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  signed *local_78;
  signed *local_70;
  undefined8 uStack_68;
  code *local_48;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x27c);
  }
  if (DAT_01d477a8 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d477a8 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d477a8;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d477a8 & 5) != 0) {
    local_78 = (signed *)0x0;
    local_70 = (signed *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,"V8.Runtime_Runtime_TypedArraySortFast",0,0,0,0,0,0,0,
                       &local_78,0);
    psVar12 = local_70;
    local_70 = (signed *)0x0;
    if (psVar12 != (signed *)0x0) {
      (**(code **)(*(long *)psVar12 + 8))();
    }
    psVar12 = local_78;
    local_78 = (signed *)0x0;
    if (psVar12 != (signed *)0x0) {
      (**(code **)(*(long *)psVar12 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_TypedArraySortFast";
    local_b8 = pbVar4;
    local_a8 = uVar7;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if ((uVar10 & 1) == 0) {
LAB_015b13a0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSTypedArray()");
  }
  uVar11 = uVar10 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar11 + *(uint *)(uVar10 - 1)) != 0x41b) goto LAB_015b13a0;
  if ((*(uint *)(uVar10 + 0xb) & 1) == 0) {
LAB_015b13b4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","array->buffer().IsJSArrayBuffer()");
  }
  uVar13 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb);
  lVar14 = *(long *)(uVar10 + 0x1f);
  if (*(short *)(uVar11 + *(uint *)(uVar13 - 1)) != 0x424) goto LAB_015b13b4;
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = puVar1;
    if (puVar2 == puVar1) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar13;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
    uVar13 = *puVar8;
  }
  uVar3 = *(uint *)(uVar13 + 0x1b);
  psVar12 = (signed *)0x0;
  local_70 = (signed *)0x0;
  uStack_68 = 0;
  local_78 = (signed *)0x0;
  if ((uVar3 >> 4 & 1) != 0) {
    uVar10 = *(ulong *)(*param_2 + 0x17);
    if (uVar10 < 0x1fff9) {
      plVar6 = (long *)v8::internal::Factory::NewByteArray((Factory *)param_3,uVar10 & 0xffffffff,0)
      ;
      psVar12 = (signed *)(*plVar6 + 7);
    }
    else {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)&local_78,uVar10);
      psVar12 = local_78;
    }
    memcpy(psVar12,(void *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f)),uVar10);
  }
  local_48 = (code *)*param_2;
  uVar5 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_48);
  switch(uVar5) {
  case 1:
    psVar9 = psVar12;
    if ((uVar3 >> 4 & 1) == 0) {
      psVar9 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<signed_char,signed_char>&,signed_char*>
              (psVar9,psVar9 + lVar14,(__less *)&local_48);
    goto joined_r0x015b1270;
  case 2:
  case 9:
    psVar9 = psVar12;
    if ((uVar3 >> 4 & 1) == 0) {
      psVar9 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<unsigned_char,unsigned_char>&,unsigned_char*>
              ((uchar *)psVar9,(uchar *)(psVar9 + lVar14),(__less *)&local_48);
  default:
    break;
  case 3:
    psVar9 = psVar12;
    if ((uVar3 >> 4 & 1) == 0) {
      psVar9 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<short,short>&,short*>
              ((short *)psVar9,(short *)(psVar9 + lVar14 * 2),(__less *)&local_48);
joined_r0x015b1270:
    if ((uVar3 >> 4 & 1) == 0) goto LAB_015b1130;
    goto LAB_015b1114;
  case 4:
    psVar9 = psVar12;
    if ((uVar3 >> 4 & 1) == 0) {
      psVar9 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<unsigned_short,unsigned_short>&,unsigned_short*>
              ((ushort *)psVar9,(ushort *)(psVar9 + lVar14 * 2),(__less *)&local_48);
    break;
  case 5:
    psVar9 = psVar12;
    if ((uVar3 >> 4 & 1) == 0) {
      psVar9 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<int,int>&,int*>
              ((int *)psVar9,(int *)(psVar9 + lVar14 * 4),(__less *)&local_48);
    break;
  case 6:
    psVar9 = psVar12;
    if ((uVar3 >> 4 & 1) == 0) {
      psVar9 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<unsigned_int,unsigned_int>&,unsigned_int*>
              ((uint *)psVar9,(uint *)(psVar9 + lVar14 * 4),(__less *)&local_48);
    break;
  case 7:
    psVar9 = psVar12;
    if ((uVar3 >> 4 & 1) == 0) {
      psVar9 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    local_48 = FUN_015b18f4;
    std::__ndk1::__sort<bool(*&)(float,float),float*>
              ((float *)psVar9,(float *)(psVar9 + lVar14 * 4),(_func_bool_float_float *)&local_48);
    break;
  case 8:
    psVar9 = psVar12;
    if ((uVar3 >> 4 & 1) == 0) {
      psVar9 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    local_48 = FUN_015b1960;
    std::__ndk1::__sort<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
              (psVar9,psVar9 + lVar14 * 8,&local_48);
    break;
  case 10:
    psVar9 = psVar12;
    if ((uVar3 >> 4 & 1) == 0) {
      psVar9 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
              (psVar9,psVar9 + lVar14 * 8,&local_48);
    break;
  case 0xb:
    psVar9 = psVar12;
    if ((uVar3 >> 4 & 1) == 0) {
      psVar9 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::
    __sort<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
              (psVar9,psVar9 + lVar14 * 8,&local_48);
  }
  if ((uVar3 >> 4 & 1) != 0) {
LAB_015b1114:
    uVar10 = *param_2;
    memcpy((void *)(*(long *)(uVar10 + 0x27) + (ulong)*(uint *)(uVar10 + 0x2f)),psVar12,
           *(size_t *)(uVar10 + 0x17));
  }
LAB_015b1130:
  uVar10 = *param_2;
  if (local_78 != (signed *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  *(ulong **)(param_3 + 0x95a0) = puVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
    *(ulong **)(param_3 + 0x95a8) = puVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar10;
}

