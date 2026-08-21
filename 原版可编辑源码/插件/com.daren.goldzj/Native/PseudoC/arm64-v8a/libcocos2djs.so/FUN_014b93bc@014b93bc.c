
ulong FUN_014b93bc(int param_1,long param_2,Isolate *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  Isolate *pIVar7;
  undefined8 *puVar8;
  ulong uVar9;
  Isolate *pIVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  Isolate *pIVar16;
  uint *puVar17;
  Isolate *pIVar18;
  double dVar19;
  long local_80;
  char *local_70;
  undefined8 uStack_68;
  
  pIVar16 = param_3 + 0xa0;
  puVar17 = (uint *)(param_2 - (param_1 * 8 + -8));
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (*puVar17 == *(uint *)pIVar16) {
    uStack_68 = __strlen_chk("DataView",9);
    local_70 = "DataView";
    lVar6 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_70,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar12 = 0x27;
LAB_014b94f8:
    puVar8 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,uVar12,lVar6,0,0);
  }
  else {
    iVar5 = param_1 + -4;
    pIVar7 = pIVar16;
    pIVar18 = pIVar16;
    if (((1 < iVar5) && (pIVar18 = (Isolate *)(param_2 + -8), iVar5 != 2)) &&
       (pIVar7 = (Isolate *)(param_2 + -0x10), 3 < iVar5)) {
      pIVar10 = (Isolate *)(param_2 + -0x18);
      uVar9 = *(ulong *)pIVar18;
      if ((uVar9 & 1) != 0) goto LAB_014b9484;
LAB_014b94ec:
      uVar12 = 0x2b;
      lVar6 = 0;
      goto LAB_014b94f8;
    }
    uVar9 = *(ulong *)pIVar18;
    pIVar10 = pIVar16;
    if ((uVar9 & 1) == 0) goto LAB_014b94ec;
LAB_014b9484:
    if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x424)
    goto LAB_014b94ec;
    if ((*(uint *)pIVar7 & 0x80000001) != 0) {
      pIVar7 = (Isolate *)v8::internal::Object::ConvertToIndex(param_3,pIVar7,0xc4);
    }
    if (pIVar7 == (Isolate *)0x0) {
LAB_014b9684:
      uVar9 = *(ulong *)(param_3 + 0x180);
      goto LAB_014b9518;
    }
    uVar9 = *(ulong *)pIVar7;
    if ((uVar9 & 1) == 0) {
      dVar19 = (double)((int)uVar9 >> 1);
    }
    else {
      dVar19 = *(double *)(uVar9 + 3);
    }
    uVar9 = (ulong)dVar19;
    uVar15 = *(ulong *)(*(long *)pIVar18 + 0xb);
    local_80 = uVar15 - uVar9;
    if (uVar9 <= uVar15) {
      uVar13 = *(ulong *)pIVar10;
      if (((uVar13 & 1) == 0) || ((uint)uVar13 != *(uint *)pIVar16)) {
        if ((uVar13 & 0x80000001) != 0) {
          pIVar10 = (Isolate *)v8::internal::Object::ConvertToIndex(param_3,pIVar10,0xc3);
        }
        if (pIVar10 == (Isolate *)0x0) goto LAB_014b9684;
        uVar13 = *(ulong *)pIVar10;
        iVar5 = (int)uVar13 >> 1;
        if ((uVar13 & 1) == 0) {
          dVar19 = (double)iVar5;
        }
        else {
          dVar19 = *(double *)(uVar13 + 3);
        }
        if ((double)uVar15 < dVar19 + (double)uVar9) {
          uVar12 = 0xc3;
          pIVar7 = (Isolate *)0x0;
          goto LAB_014b9588;
        }
        if ((uVar13 & 1) == 0) {
          dVar19 = (double)iVar5;
        }
        else {
          dVar19 = *(double *)(uVar13 + 3);
        }
        local_80 = (long)dVar19;
      }
      puVar11 = (ulong *)v8::internal::JSObject::New(param_2 - (param_1 * 8 + -0x10),puVar17,0);
      if (puVar11 != (ulong *)0x0) {
        uVar13 = *puVar11;
        uVar15 = uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1);
        sVar4 = *(short *)(uVar15 + 7);
        if (sVar4 == 0x421) {
          lVar6 = 0xc;
        }
        else {
          iVar5 = v8::internal::JSObject::GetHeaderSize(sVar4,*(char *)(uVar15 + 9) < '\0');
          lVar6 = (long)iVar5;
        }
        puVar1 = (undefined4 *)((uVar13 - 1) + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar13 = *puVar11;
        uVar15 = uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1);
        sVar4 = *(short *)(uVar15 + 7);
        if (sVar4 == 0x421) {
          lVar6 = 0x14;
        }
        else {
          iVar5 = v8::internal::JSObject::GetHeaderSize(sVar4,*(char *)(uVar15 + 9) < '\0');
          lVar6 = (long)(iVar5 + 8);
        }
        puVar1 = (undefined4 *)((uVar13 - 1) + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar13 = *puVar11;
        uVar15 = *(ulong *)pIVar18;
        *(int *)(uVar13 + 0xb) = (int)uVar15;
        if ((uVar15 & 1) != 0) {
          uVar14 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar14 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar13,uVar13 + 0xb,uVar15);
            uVar14 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0xb,uVar15);
          }
        }
        *(long *)(*puVar11 + 0x17) = local_80;
        *(ulong *)(*puVar11 + 0xf) = uVar9;
        *(ulong *)(*puVar11 + 0x1f) = *(long *)(*(long *)pIVar18 + 0x13) + uVar9;
        uVar9 = *puVar11;
        goto LAB_014b9518;
      }
      goto LAB_014b9684;
    }
    uVar12 = 0xc4;
LAB_014b9588:
    puVar8 = (undefined8 *)
             v8::internal::Factory::NewRangeError((Factory *)param_3,uVar12,pIVar7,0,0);
  }
  uVar9 = v8::internal::Isolate::Throw(param_3,*puVar8,0);
LAB_014b9518:
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

