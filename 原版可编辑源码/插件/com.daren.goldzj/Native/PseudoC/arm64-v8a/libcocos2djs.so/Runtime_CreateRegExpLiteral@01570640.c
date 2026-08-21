
/* v8::internal::Runtime_CreateRegExpLiteral(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_CreateRegExpLiteral(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  Isolate *pIVar2;
  int *piVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar13 = FUN_015708e0(param_1,param_2,param_3);
    return uVar13;
  }
  pIVar2 = param_3 + 0x95a0;
  puVar5 = *(ulong **)pIVar2;
  puVar6 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsHeapObject()");
  }
  if ((param_2[-1] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSmi()");
  }
  puVar14 = param_2 + -2;
  uVar12 = *puVar14;
  if (((uVar12 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsString()");
  }
  if ((param_2[-3] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsSmi()");
  }
  iVar4 = (int)param_2[-3] >> 1;
  if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x9f) {
    lVar1 = (long)((int)(param_2[-1] >> 1) << 2) + 0x1f;
    uVar7 = *(uint *)(lVar1 + uVar10);
    uVar10 = uVar10 & 0xffffffff00000000 | (ulong)uVar7;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = puVar5;
      if (puVar6 == puVar5) {
        puVar8 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar2 = puVar8 + 1;
      *puVar8 = uVar10;
      if ((uVar7 & 1) != 0) goto LAB_01570804;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
      if ((*puVar8 & 1) != 0) {
LAB_01570804:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!HasBoilerplate(literal_site)");
      }
    }
    pIVar9 = (Isolate *)JSRegExp::New(param_3,puVar14,iVar4,0);
    if (pIVar9 != (Isolate *)0x0) {
      uVar10 = *param_2;
      if ((int)*puVar8 == 0) {
        *(undefined4 *)(uVar10 + lVar1) = 2;
      }
      else {
        uVar12 = *(ulong *)pIVar9;
        piVar3 = (int *)(uVar10 + lVar1);
        *piVar3 = (int)uVar12;
        if (((int)uVar12 != 3) && ((uVar12 & 1) != 0)) {
          uVar11 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,piVar3,uVar12 & 0xfffffffffffffffd);
            uVar11 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar10,piVar3,uVar12 & 0xfffffffffffffffd);
          }
        }
        pIVar9 = (Isolate *)JSRegExp::Copy(pIVar9);
      }
      goto LAB_01570820;
    }
  }
  else {
    pIVar9 = (Isolate *)JSRegExp::New(param_3,puVar14,iVar4,0);
    if (pIVar9 != (Isolate *)0x0) goto LAB_01570820;
  }
  pIVar9 = param_3 + 0x180;
LAB_01570820:
  uVar13 = *(undefined8 *)pIVar9;
  *(ulong **)pIVar2 = puVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar6) {
    *(ulong **)(param_3 + 0x95a8) = puVar6;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar13;
}

