
/* v8::internal::Runtime_ThrowInvalidTypedArrayAlignment(int, unsigned long*,
   v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_ThrowInvalidTypedArrayAlignment(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  char *__s;
  char *local_60;
  size_t sStack_58;
  undefined1 auStack_34 [4];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar9 = FUN_015667e0(param_1,param_2,param_3);
    return uVar9;
  }
  pIVar2 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar2;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if (((uVar10 & 1) == 0) ||
     (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsMap()");
  }
  uVar11 = param_2[-1];
  if (((uVar11 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  uVar5 = (uint)(*(byte *)(uVar10 + 10) >> 3);
  uVar1 = uVar5 + 0xf;
  if (10 < (uVar1 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  __s = (&PTR_s_Uint8Array_01999dd5_0x15_01cc90f0)[(long)((ulong)uVar1 << 0x3b) >> 0x3b];
  sStack_58 = strlen(__s);
  local_60 = __s;
  lVar6 = Factory::NewStringFromOneByte(param_3,&local_60,0);
  if (lVar6 != 0) {
    Factory::TypeAndSizeForElementsKind(uVar5,auStack_34,&local_60);
    uVar10 = -((ulong)local_60 >> 0x1f & 1) & 0xfffffffe00000000 |
             ((ulong)local_60 & 0xffffffff) << 1;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar2;
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar2 = puVar7 + 1;
      *puVar7 = uVar10;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    }
    puVar8 = (undefined8 *)Factory::NewRangeError((Factory *)param_3,0xcd,param_2 + -1,lVar6,puVar7)
    ;
    uVar9 = Isolate::Throw(param_3,*puVar8,0);
    *(long *)pIVar2 = lVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar4) {
      *(long *)(param_3 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

