
/* v8::internal::ElementsAccessor::Concat(v8::internal::Isolate*, v8::internal::Arguments*, unsigned
   int, unsigned int) */

ulong * v8::internal::ElementsAccessor::Concat
                  (Isolate *param_1,Arguments *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  double dVar13;
  
  if (param_3 == 0) {
    bVar9 = 0;
    uVar2 = 0;
    goto switchD_0107fb70_caseD_0;
  }
  iVar11 = 0;
  uVar6 = 0;
  bVar9 = 0;
  uVar10 = 0;
  uVar12 = param_3;
  do {
    bVar1 = *(byte *)((*(ulong *)(*(long *)(param_2 + 8) - (long)iVar11) & 0xffffffff00000000 | 10)
                     + (ulong)*(uint *)(*(ulong *)(*(long *)(param_2 + 8) - (long)iVar11) - 1));
    uVar5 = (uint)(bVar1 >> 3);
    bVar9 = bVar9 | (bVar1 & 0xf0) == 0x20;
    if (uVar10 == 0) {
      uVar10 = (uint)(bVar1 < 0x30) & (bVar1 & 8) >> 3;
    }
    else {
      uVar10 = 1;
    }
    uVar2 = IsMoreGeneralElementsKindTransition(uVar6,uVar5);
    if ((uVar2 & 1) == 0) {
      uVar5 = (uint)uVar6;
    }
    uVar6 = (ulong)uVar5;
    uVar12 = uVar12 - 1;
    iVar11 = iVar11 + 8;
  } while (uVar12 != 0);
  if (uVar10 == 0) {
switchD_0107fb70_caseD_1:
    uVar2 = uVar6;
  }
  else {
    uVar2 = 1;
    switch(uVar6) {
    case 0:
      break;
    default:
      goto switchD_0107fb70_caseD_1;
    case 2:
      uVar2 = 3;
      break;
    case 4:
      uVar2 = 5;
      break;
    case 6:
      uVar2 = 7;
    }
  }
switchD_0107fb70_caseD_0:
  puVar3 = (ulong *)Factory::NewJSArray((Factory *)param_1,uVar2,param_4,param_4,
                                        bVar9 & ((uint)uVar2 & 0xfe) != 4,0);
  if (param_4 != 0) {
    uVar6 = *puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(param_1 + 0x95a0);
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar6;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    }
    if (param_3 != 0) {
      iVar11 = 0;
      iVar7 = 0;
      plVar8 = *(long **)(elements_accessors_ + uVar2 * 8);
      do {
        uVar2 = *(ulong *)(*(long *)(param_2 + 8) - (long)iVar11);
        uVar10 = *(uint *)(uVar2 + 0xb);
        uVar6 = uVar2 & 0xffffffff00000000;
        if ((uVar10 & 1) == 0) {
          if (-1 < (int)uVar10) {
            uVar10 = uVar10 >> 1;
            dVar13 = (double)(ulong)uVar10;
joined_r0x0107fcb0:
            if (uVar10 != 0) {
              (**(code **)(*plVar8 + 0x128))
                        (plVar8,uVar2,0,*(byte *)((uVar6 | 10) + (ulong)*(uint *)(uVar2 - 1)) >> 3,
                         puVar4,iVar7,(ulong)dVar13 & 0xffffffff);
              iVar7 = SUB84(dVar13,0) + iVar7;
            }
          }
        }
        else if ((*(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar10) - 1)) == 0x42) &&
                (dVar13 = *(double *)((uVar6 | uVar10) + 3) + 4503599627370496.0,
                (ulong)dVar13 >> 0x20 == 0x43300000)) {
          uVar10 = SUB84(dVar13,0);
          goto joined_r0x0107fcb0;
        }
        param_3 = param_3 - 1;
        iVar11 = iVar11 + 8;
      } while (param_3 != 0);
    }
  }
  return puVar3;
}

