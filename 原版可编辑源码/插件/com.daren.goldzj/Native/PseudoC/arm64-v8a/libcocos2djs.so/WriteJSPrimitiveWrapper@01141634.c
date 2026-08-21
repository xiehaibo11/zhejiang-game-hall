
/* v8::internal::ValueSerializer::WriteJSPrimitiveWrapper(v8::internal::Handle<v8::internal::JSPrimitiveWrapper>)
    */

undefined8 __thiscall
v8::internal::ValueSerializer::WriteJSPrimitiveWrapper(ValueSerializer *this,ulong *param_2)

{
  size_t sVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  ValueSerializer VVar5;
  void *pvVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  size_t local_48;
  
  uVar4 = *(uint *)(*param_2 + 0xb);
  uVar11 = *param_2 & 0xffffffff00000000;
  uVar13 = uVar11 | uVar4;
  if ((uVar4 & 1) == 0) {
LAB_01141664:
    lVar2 = *(long *)(this + 0x18);
    uVar11 = lVar2 + 1;
    if (*(ulong *)(this + 0x20) < uVar11) {
      local_48 = 0;
      uVar12 = *(ulong *)(this + 0x20) * 2;
      if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
        uVar12 = uVar11;
      }
      if (*(long **)(this + 8) == (long *)0x0) {
        pvVar6 = realloc(*(void **)(this + 0x10),uVar12 + 0x40);
        local_48 = uVar12 + 0x40;
      }
      else {
        pvVar6 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
      }
      if (pvVar6 != (void *)0x0) {
        *(void **)(this + 0x10) = pvVar6;
        *(size_t *)(this + 0x20) = local_48;
        goto LAB_01141680;
      }
      this[0x29] = (ValueSerializer)0x1;
      if ((uVar4 & 1) != 0) goto LAB_0114189c;
LAB_01141690:
      dVar14 = (double)((int)uVar4 >> 1);
    }
    else {
      pvVar6 = *(void **)(this + 0x10);
LAB_01141680:
      *(ulong *)(this + 0x18) = uVar11;
      *(undefined1 *)((long)pvVar6 + lVar2) = 0x6e;
      if ((uVar4 & 1) == 0) goto LAB_01141690;
LAB_0114189c:
      dVar14 = *(double *)(uVar13 + 3);
    }
    lVar2 = *(long *)(this + 0x18);
    uVar11 = lVar2 + 8;
    if (*(ulong *)(this + 0x20) < uVar11) {
      local_48 = 0;
      uVar13 = *(ulong *)(this + 0x20) * 2;
      plVar3 = *(long **)(this + 8);
      if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
        uVar13 = uVar11;
      }
      sVar1 = uVar13 + 0x40;
      if (plVar3 == (long *)0x0) {
        pvVar6 = realloc(*(void **)(this + 0x10),sVar1);
        local_48 = sVar1;
      }
      else {
        pvVar6 = (void *)(**(code **)(*plVar3 + 0x30))
                                   (plVar3,*(void **)(this + 0x10),sVar1,&local_48);
      }
      if (pvVar6 == (void *)0x0) {
LAB_0114197c:
        this[0x29] = (ValueSerializer)0x1;
        VVar5 = this[0x29];
        goto joined_r0x01141754;
      }
      *(void **)(this + 0x10) = pvVar6;
      *(size_t *)(this + 0x20) = local_48;
    }
    else {
      pvVar6 = *(void **)(this + 0x10);
    }
    *(ulong *)(this + 0x18) = uVar11;
    *(double *)((long)pvVar6 + lVar2) = dVar14;
    VVar5 = this[0x29];
  }
  else if (uVar4 == *(uint *)(*(long *)this + 0xb8)) {
    uVar10 = 0x79;
LAB_011416c4:
    lVar2 = *(long *)(this + 0x18);
    uVar11 = lVar2 + 1;
    if (*(ulong *)(this + 0x20) < uVar11) {
      local_48 = 0;
      uVar13 = *(ulong *)(this + 0x20) * 2;
      plVar3 = *(long **)(this + 8);
      if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
        uVar13 = uVar11;
      }
      sVar1 = uVar13 + 0x40;
      if (plVar3 == (long *)0x0) {
        pvVar6 = realloc(*(void **)(this + 0x10),sVar1);
        local_48 = sVar1;
      }
      else {
        pvVar6 = (void *)(**(code **)(*plVar3 + 0x30))
                                   (plVar3,*(void **)(this + 0x10),sVar1,&local_48);
      }
      if (pvVar6 != (void *)0x0) {
        *(void **)(this + 0x10) = pvVar6;
        *(size_t *)(this + 0x20) = local_48;
        goto LAB_011416dc;
      }
      goto LAB_0114197c;
    }
    pvVar6 = *(void **)(this + 0x10);
LAB_011416dc:
    *(ulong *)(this + 0x18) = uVar11;
    *(undefined1 *)((long)pvVar6 + lVar2) = uVar10;
    VVar5 = this[0x29];
  }
  else {
    if (uVar4 == *(uint *)(*(long *)this + 0xc0)) {
      uVar10 = 0x78;
      goto LAB_011416c4;
    }
    uVar11 = uVar11 | 7;
    if (*(short *)(uVar11 + *(uint *)(uVar13 - 1)) == 0x42) goto LAB_01141664;
    if (*(short *)(uVar11 + *(uint *)(uVar13 - 1)) == 0x41) {
      lVar2 = *(long *)(this + 0x18);
      uVar11 = lVar2 + 1;
      if (*(ulong *)(this + 0x20) < uVar11) {
        local_48 = 0;
        uVar12 = *(ulong *)(this + 0x20) * 2;
        plVar3 = *(long **)(this + 8);
        if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
          uVar12 = uVar11;
        }
        sVar1 = uVar12 + 0x40;
        if (plVar3 == (long *)0x0) {
          pvVar6 = realloc(*(void **)(this + 0x10),sVar1);
          local_48 = sVar1;
        }
        else {
          pvVar6 = (void *)(**(code **)(*plVar3 + 0x30))
                                     (plVar3,*(void **)(this + 0x10),sVar1,&local_48);
        }
        if (pvVar6 != (void *)0x0) {
          *(void **)(this + 0x10) = pvVar6;
          *(size_t *)(this + 0x20) = local_48;
          goto LAB_01141738;
        }
        this[0x29] = (ValueSerializer)0x1;
      }
      else {
        pvVar6 = *(void **)(this + 0x10);
LAB_01141738:
        *(ulong *)(this + 0x18) = uVar11;
        *(undefined1 *)((long)pvVar6 + lVar2) = 0x7a;
      }
      WriteBigIntContents(this,uVar13);
      VVar5 = this[0x29];
    }
    else {
      if (0x3f < *(ushort *)(uVar11 + *(uint *)(uVar13 - 1))) {
        uVar9 = 0x168;
        goto LAB_011418d8;
      }
      lVar2 = *(long *)(this + 0x18);
      uVar11 = lVar2 + 1;
      if (*(ulong *)(this + 0x20) < uVar11) {
        local_48 = 0;
        uVar12 = *(ulong *)(this + 0x20) * 2;
        plVar3 = *(long **)(this + 8);
        if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
          uVar12 = uVar11;
        }
        sVar1 = uVar12 + 0x40;
        if (plVar3 == (long *)0x0) {
          pvVar6 = realloc(*(void **)(this + 0x10),sVar1);
          local_48 = sVar1;
        }
        else {
          pvVar6 = (void *)(**(code **)(*plVar3 + 0x30))
                                     (plVar3,*(void **)(this + 0x10),sVar1,&local_48);
        }
        if (pvVar6 != (void *)0x0) {
          *(void **)(this + 0x10) = pvVar6;
          *(size_t *)(this + 0x20) = local_48;
          goto LAB_01141788;
        }
        this[0x29] = (ValueSerializer)0x1;
      }
      else {
        pvVar6 = *(void **)(this + 0x10);
LAB_01141788:
        *(ulong *)(this + 0x18) = uVar11;
        *(undefined1 *)((long)pvVar6 + lVar2) = 0x73;
      }
      pIVar7 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar13;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar13);
      }
      WriteString(this,puVar8);
      VVar5 = this[0x29];
    }
  }
joined_r0x01141754:
  if (VVar5 == (ValueSerializer)0x0) {
    return 0x101;
  }
  uVar9 = 0x169;
  param_2 = (ulong *)(*(long *)this + 200);
LAB_011418d8:
  ThrowDataCloneError(this,uVar9,param_2);
  return 0;
}

