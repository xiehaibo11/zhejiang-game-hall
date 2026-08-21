
/* v8::internal::Runtime_TypedArraySortFast(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_TypedArraySortFast(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong *puVar6;
  long *plVar7;
  signed *psVar8;
  ulong uVar9;
  ulong uVar10;
  signed *__dest;
  ulong uVar11;
  long lVar12;
  signed *local_78;
  signed *local_70;
  undefined8 uStack_68;
  code *local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar9 = FUN_015b0ea8(param_1,param_2,param_3);
    return uVar9;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if ((uVar9 & 1) == 0) {
LAB_015b0e80:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSTypedArray()");
  }
  uVar10 = uVar9 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) != 0x41b) goto LAB_015b0e80;
  if ((*(uint *)(uVar9 + 0xb) & 1) == 0) {
LAB_015b0e94:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","array->buffer().IsJSArrayBuffer()");
  }
  uVar11 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb);
  lVar12 = *(long *)(uVar9 + 0x1f);
  if (*(short *)(uVar10 + *(uint *)(uVar11 - 1)) != 0x424) goto LAB_015b0e94;
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = puVar2;
    if (puVar3 == puVar2) {
      puVar6 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar11;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
    uVar11 = *puVar6;
  }
  uVar4 = *(uint *)(uVar11 + 0x1b);
  __dest = (signed *)0x0;
  local_70 = (signed *)0x0;
  uStack_68 = 0;
  local_78 = (signed *)0x0;
  if ((uVar4 >> 4 & 1) != 0) {
    uVar9 = *(ulong *)(*param_2 + 0x17);
    if (uVar9 < 0x1fff9) {
      plVar7 = (long *)Factory::NewByteArray((Factory *)param_3,uVar9 & 0xffffffff,0);
      __dest = (signed *)(*plVar7 + 7);
    }
    else {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)&local_78,uVar9);
      __dest = local_78;
    }
    memcpy(__dest,(void *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f)),uVar9);
  }
  local_48 = (code *)*param_2;
  uVar5 = JSTypedArray::type((JSTypedArray *)&local_48);
  switch(uVar5) {
  case 1:
    psVar8 = __dest;
    if ((uVar4 >> 4 & 1) == 0) {
      psVar8 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<signed_char,signed_char>&,signed_char*>
              (psVar8,psVar8 + lVar12,(__less *)&local_48);
    goto joined_r0x015b0d5c;
  case 2:
  case 9:
    psVar8 = __dest;
    if ((uVar4 >> 4 & 1) == 0) {
      psVar8 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<unsigned_char,unsigned_char>&,unsigned_char*>
              ((uchar *)psVar8,(uchar *)(psVar8 + lVar12),(__less *)&local_48);
  default:
    break;
  case 3:
    psVar8 = __dest;
    if ((uVar4 >> 4 & 1) == 0) {
      psVar8 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<short,short>&,short*>
              ((short *)psVar8,(short *)(psVar8 + lVar12 * 2),(__less *)&local_48);
joined_r0x015b0d5c:
    if ((uVar4 >> 4 & 1) == 0) goto LAB_015b0c54;
    goto LAB_015b0c38;
  case 4:
    psVar8 = __dest;
    if ((uVar4 >> 4 & 1) == 0) {
      psVar8 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<unsigned_short,unsigned_short>&,unsigned_short*>
              ((ushort *)psVar8,(ushort *)(psVar8 + lVar12 * 2),(__less *)&local_48);
    break;
  case 5:
    psVar8 = __dest;
    if ((uVar4 >> 4 & 1) == 0) {
      psVar8 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<int,int>&,int*>
              ((int *)psVar8,(int *)(psVar8 + lVar12 * 4),(__less *)&local_48);
    break;
  case 6:
    psVar8 = __dest;
    if ((uVar4 >> 4 & 1) == 0) {
      psVar8 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<unsigned_int,unsigned_int>&,unsigned_int*>
              ((uint *)psVar8,(uint *)(psVar8 + lVar12 * 4),(__less *)&local_48);
    break;
  case 7:
    psVar8 = __dest;
    if ((uVar4 >> 4 & 1) == 0) {
      psVar8 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    local_48 = FUN_015b18f4;
    std::__ndk1::__sort<bool(*&)(float,float),float*>
              ((float *)psVar8,(float *)(psVar8 + lVar12 * 4),(_func_bool_float_float *)&local_48);
    break;
  case 8:
    psVar8 = __dest;
    if ((uVar4 >> 4 & 1) == 0) {
      psVar8 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    local_48 = FUN_015b1960;
    std::__ndk1::__sort<bool(*&)(double,double),v8::internal::UnalignedSlot<double>>
              (psVar8,psVar8 + lVar12 * 8,&local_48);
    break;
  case 10:
    psVar8 = __dest;
    if ((uVar4 >> 4 & 1) == 0) {
      psVar8 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::__sort<std::__ndk1::__less<long,long>&,v8::internal::UnalignedSlot<long>>
              (psVar8,psVar8 + lVar12 * 8,&local_48);
    break;
  case 0xb:
    psVar8 = __dest;
    if ((uVar4 >> 4 & 1) == 0) {
      psVar8 = (signed *)(*(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f));
    }
    std::__ndk1::
    __sort<std::__ndk1::__less<unsigned_long,unsigned_long>&,v8::internal::UnalignedSlot<unsigned_long>>
              (psVar8,psVar8 + lVar12 * 8,&local_48);
  }
  if ((uVar4 >> 4 & 1) != 0) {
LAB_015b0c38:
    uVar9 = *param_2;
    memcpy((void *)(*(long *)(uVar9 + 0x27) + (ulong)*(uint *)(uVar9 + 0x2f)),__dest,
           *(size_t *)(uVar9 + 0x17));
  }
LAB_015b0c54:
  uVar9 = *param_2;
  if (local_78 != (signed *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

