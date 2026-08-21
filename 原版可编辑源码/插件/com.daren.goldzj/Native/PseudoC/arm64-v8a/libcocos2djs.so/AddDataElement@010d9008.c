
/* v8::internal::JSObject::AddDataElement(v8::internal::Handle<v8::internal::JSObject>, unsigned
   int, v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes) */

void v8::internal::JSObject::AddDataElement(ulong *param_1,uint param_2,ulong *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  Factory *this;
  ulong uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  ulong local_68;
  
  uVar6 = *param_1;
  this = (Factory *)(uVar6 & 0xffffffff00000000);
  uVar15 = (ulong)this | 7;
  if (*(short *)(uVar15 + *(uint *)(uVar6 - 1)) == 0x423) {
    uVar14 = *(uint *)(uVar6 + 0xb);
    if ((uVar14 & 1) == 0) {
      if ((int)uVar14 < 0) goto LAB_010d9568;
      dVar18 = (double)(ulong)(uVar14 >> 1);
    }
    else {
      if (*(short *)(uVar15 + *(uint *)(((ulong)this | (ulong)uVar14) - 1)) != 0x42) {
LAB_010d9568:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","JSArray::cast(*object).length().ToArrayLength(&old_length)");
      }
      dVar17 = *(double *)(((ulong)this | (ulong)uVar14) + 3);
      dVar18 = dVar17 + 4503599627370496.0;
      if (((ulong)dVar18 >> 0x20 != 0x43300000) || (dVar17 != (double)((ulong)dVar18 & 0xffffffff)))
      goto LAB_010d9568;
    }
  }
  else {
    dVar18 = 0.0;
  }
  uVar9 = (ulong)this | 10;
  bVar1 = *(byte *)(uVar9 + *(uint *)(uVar6 - 1)) >> 3;
  uVar14 = (uint)bVar1;
  uVar8 = (ulong)this | (ulong)*(uint *)(uVar6 + 7);
  if ((byte)(bVar1 - 0xd) < 2) {
    uVar5 = 0xe;
    uVar10 = (ulong)this | (ulong)*(uint *)(uVar8 + 0xb);
    if (param_4 != 0) goto LAB_010d910c;
LAB_010d9124:
    if (*(short *)(uVar15 + *(uint *)(uVar10 - 1)) != 0x7b) {
      uVar13 = *(int *)(uVar10 + 3) >> 1;
      local_68 = uVar6;
      if (uVar13 <= param_2) {
        if (0x3ff < param_2 - uVar13) goto LAB_010d910c;
        uVar13 = param_2 + (param_2 + 1 >> 1) + 0x11;
        if ((500 < uVar13) &&
           (((5000 < uVar13 || ((uVar6 & 1) == 0)) ||
            ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)))) {
          iVar2 = GetFastElementsUsage((JSObject *)&local_68);
          iVar2 = base::bits::RoundUpToPowerOfTwo32(iVar2 + (iVar2 >> 1));
          if (iVar2 < 5) {
            iVar2 = 4;
          }
          if ((uint)(iVar2 * 9) <= uVar13) goto LAB_010d9110;
        }
      }
      goto LAB_010d9114;
    }
    uVar13 = 0;
    if ((0x3ffffffe < param_2) || (uVar13 = 0, (*(uint *)(uVar10 + 0x13) & 3) == 2))
    goto LAB_010d9110;
    if (*(short *)(uVar15 + *(uint *)(uVar6 - 1)) == 0x423) {
      if ((*(uint *)(uVar6 + 0xb) & 1) != 0) goto LAB_010d910c;
      uVar13 = (int)*(uint *)(uVar6 + 0xb) >> 1;
    }
    else {
      if (*(short *)(uVar15 + *(uint *)(uVar6 - 1)) == 0x422) goto LAB_010d910c;
      uVar13 = 1;
      if ((*(uint *)(uVar10 + 0x13) & 1) == 0) {
        uVar13 = ((uint)((int)*(uint *)(uVar10 + 0x13) >> 1) >> 1) + 1;
      }
    }
    if (uVar13 <= param_2 + 1) {
      uVar13 = param_2 + 1;
    }
    if (((*(uint *)(uVar10 + 0xf) & 0xfffffffe) + ((int)*(uint *)(uVar10 + 0xf) >> 1)) * 2 < uVar13)
    goto LAB_010d9110;
    uVar5 = *(ushort *)(((ulong)this | (ulong)*(uint *)(uVar6 - 1)) + 7) - 0x411;
    uVar14 = 3;
    if ((0x12 < uVar5) || ((1 << (ulong)(uVar5 & 0x1f) & 0x60001U) == 0)) goto LAB_010d9114;
    if ((byte)((*(byte *)(uVar9 + *(uint *)(uVar6 - 1)) >> 3) - 0xd) < 2) {
      uVar14 = 0xd;
      uVar6 = *param_3;
      goto joined_r0x010d94bc;
    }
    if ((byte)((*(byte *)(uVar9 + *(uint *)(uVar6 - 1)) >> 3) - 0xf) < 2) {
      uVar14 = 0xf;
      uVar6 = *param_3;
      goto joined_r0x010d94bc;
    }
    if ((int)*(uint *)(uVar8 + 0xf) >> 1 != 0) {
      lVar7 = (long)((ulong)*(uint *)(uVar8 + 0xf) << 0x20) >> 0x21;
      uVar14 = 1;
      lVar11 = 0x1400000000;
      lVar12 = 0x1000000000;
      do {
        uVar5 = *(uint *)((lVar12 >> 0x20) + uVar8 + 7);
        if ((((uVar5 & 1) == 0) ||
            (*(short *)(uVar15 + *(uint *)(((ulong)this | (ulong)uVar5) - 1)) == 0x42)) &&
           (uVar5 = *(uint *)((lVar11 >> 0x20) + uVar8 + 7), (uVar5 & 1) != 0)) {
          uVar14 = 3;
          if ((FLAG_unbox_double_arrays == '\0') ||
             (*(short *)(uVar15 + *(uint *)(((ulong)this | (ulong)uVar5) - 1)) != 0x42)) break;
          uVar14 = 5;
        }
        lVar7 = lVar7 + -1;
        lVar11 = lVar11 + 0xc00000000;
        lVar12 = lVar12 + 0xc00000000;
      } while (lVar7 != 0);
      goto LAB_010d9114;
    }
    uVar14 = 1;
    uVar6 = *param_3;
    if ((uVar6 & 1) == 0) goto LAB_010d911c;
LAB_010d92a4:
    uVar5 = 4;
    if (*(short *)(uVar15 + *(uint *)(uVar6 - 1)) != 0x42) {
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 0x10;
    if (1 < (byte)(bVar1 - 0xf)) {
      uVar5 = 0xc;
    }
    uVar10 = uVar8;
    if (param_4 == 0) goto LAB_010d9124;
LAB_010d910c:
    uVar13 = 0;
LAB_010d9110:
    uVar14 = uVar5;
LAB_010d9114:
    uVar6 = *param_3;
joined_r0x010d94bc:
    if ((uVar6 & 1) != 0) goto LAB_010d92a4;
LAB_010d911c:
    uVar5 = 0;
  }
  if (((uVar14 < 6) && ((uVar14 & 1) != 0)) ||
     ((SUB84(dVar18,0) < param_2 || (*(short *)(uVar15 + *(uint *)(*param_1 - 1)) != 0x423)))) {
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    else if (uVar5 == 2) {
      uVar5 = 3;
    }
    else if (uVar5 == 4) {
      uVar5 = 5;
    }
    uVar16 = 1;
    switch(uVar14) {
    case 0:
      break;
    default:
      goto switchD_010d9368_caseD_1;
    case 2:
      uVar16 = 3;
      break;
    case 4:
      uVar16 = 5;
      break;
    case 6:
      uVar16 = 7;
    }
  }
  else {
switchD_010d9368_caseD_1:
    uVar16 = uVar14;
  }
  uVar6 = IsMoreGeneralElementsKindTransition(uVar16,uVar5);
  if ((uVar6 & 1) == 0) {
    uVar5 = uVar16;
  }
  plVar3 = *(long **)(ElementsAccessor::elements_accessors_ + (ulong)uVar5 * 8);
  (**(code **)(*plVar3 + 0x88))(plVar3,param_1,param_2,param_3,param_4,uVar13);
  if ((SUB84(dVar18,0) <= param_2) && (*(short *)(uVar15 + *(uint *)(*param_1 - 1)) == 0x423)) {
    puVar4 = (ulong *)Factory::NewNumberFromUint(this,param_2 + 1);
    uVar15 = *param_1;
    uVar6 = *puVar4;
    *(int *)(uVar15 + 0xb) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar8 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar15,uVar15 + 0xb,uVar6);
        uVar8 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0xb,uVar6);
        return;
      }
    }
  }
  return;
}

