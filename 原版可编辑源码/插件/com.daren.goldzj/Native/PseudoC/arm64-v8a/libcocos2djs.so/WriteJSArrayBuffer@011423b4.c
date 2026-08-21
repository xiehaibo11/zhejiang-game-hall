
/* v8::internal::ValueSerializer::WriteJSArrayBuffer(v8::internal::Handle<v8::internal::JSArrayBuffer>)
    */

undefined8 __thiscall
v8::internal::ValueSerializer::WriteJSArrayBuffer(ValueSerializer *this,ulong *param_2)

{
  size_t __size;
  ValueSerializer VVar1;
  uint *puVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  Isolate *this_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  size_t sVar11;
  uint uVar12;
  size_t local_48;
  
  if ((*(uint *)(*param_2 + 0x1b) >> 4 & 1) == 0) {
    puVar2 = (uint *)IdentityMapBase::FindEntry((IdentityMapBase *)(this + 0xc0),*param_2);
    if (puVar2 != (uint *)0x0) {
      lVar8 = *(long *)(this + 0x18);
      uVar7 = lVar8 + 1;
      if (*(ulong *)(this + 0x20) < uVar7) {
        local_48 = 0;
        uVar9 = *(ulong *)(this + 0x20) * 2;
        plVar4 = *(long **)(this + 8);
        if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
          uVar9 = uVar7;
        }
        sVar11 = uVar9 + 0x40;
        if (plVar4 == (long *)0x0) {
          pvVar3 = realloc(*(void **)(this + 0x10),sVar11);
          local_48 = sVar11;
        }
        else {
          pvVar3 = (void *)(**(code **)(*plVar4 + 0x30))
                                     (plVar4,*(void **)(this + 0x10),sVar11,&local_48);
        }
        if (pvVar3 != (void *)0x0) {
          *(void **)(this + 0x10) = pvVar3;
          *(size_t *)(this + 0x20) = local_48;
          goto LAB_01142410;
        }
        this[0x29] = (ValueSerializer)0x1;
      }
      else {
        pvVar3 = *(void **)(this + 0x10);
LAB_01142410:
        *(ulong *)(this + 0x18) = uVar7;
        *(undefined1 *)((long)pvVar3 + lVar8) = 0x74;
      }
      uVar12 = *puVar2;
      goto LAB_01142498;
    }
    if ((*(uint *)(*param_2 + 0x1b) >> 2 & 1) == 0) {
      uVar7 = *(ulong *)(*param_2 + 0xb);
      if (uVar7 >> 0x20 != 0) goto LAB_011424c8;
      lVar8 = *(long *)(this + 0x18);
      uVar9 = lVar8 + 1;
      if (*(ulong *)(this + 0x20) < uVar9) {
        local_48 = 0;
        uVar10 = *(ulong *)(this + 0x20) * 2;
        plVar4 = *(long **)(this + 8);
        if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
          uVar10 = uVar9;
        }
        sVar11 = uVar10 + 0x40;
        if (plVar4 == (long *)0x0) {
          pvVar3 = realloc(*(void **)(this + 0x10),sVar11);
          local_48 = sVar11;
        }
        else {
          pvVar3 = (void *)(**(code **)(*plVar4 + 0x30))
                                     (plVar4,*(void **)(this + 0x10),sVar11,&local_48);
        }
        if (pvVar3 != (void *)0x0) {
          *(void **)(this + 0x10) = pvVar3;
          *(size_t *)(this + 0x20) = local_48;
          goto LAB_01142538;
        }
        this[0x29] = (ValueSerializer)0x1;
      }
      else {
        pvVar3 = *(void **)(this + 0x10);
LAB_01142538:
        *(ulong *)(this + 0x18) = uVar9;
        *(undefined1 *)((long)pvVar3 + lVar8) = 0x42;
      }
      WriteVarint<unsigned_int>(this,(uint)uVar7);
      lVar8 = *(long *)(this + 0x18);
      sVar11 = (size_t)(double)uVar7;
      pvVar3 = *(void **)(*param_2 + 0x13);
      uVar7 = lVar8 + sVar11;
      if (*(ulong *)(this + 0x20) < uVar7) {
        local_48 = 0;
        uVar9 = *(ulong *)(this + 0x20) * 2;
        plVar4 = *(long **)(this + 8);
        if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
          uVar9 = uVar7;
        }
        __size = uVar9 + 0x40;
        if (plVar4 == (long *)0x0) {
          pvVar5 = realloc(*(void **)(this + 0x10),__size);
          local_48 = __size;
        }
        else {
          pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))
                                     (plVar4,*(void **)(this + 0x10),__size,&local_48);
        }
        if (pvVar5 != (void *)0x0) {
          *(void **)(this + 0x10) = pvVar5;
          *(size_t *)(this + 0x20) = local_48;
          *(ulong *)(this + 0x18) = uVar7;
          goto joined_r0x01142570;
        }
        this[0x29] = (ValueSerializer)0x1;
        VVar1 = this[0x29];
      }
      else {
        pvVar5 = *(void **)(this + 0x10);
        *(ulong *)(this + 0x18) = uVar7;
joined_r0x01142570:
        if (sVar11 != 0) {
          memcpy((void *)((long)pvVar5 + lVar8),pvVar3,sVar11);
        }
        VVar1 = this[0x29];
      }
      goto joined_r0x011424a0;
    }
    lVar8 = *(long *)this;
    uVar6 = 0x16a;
  }
  else {
    plVar4 = *(long **)(this + 8);
    if (plVar4 == (long *)0x0) {
LAB_011424c8:
      uVar6 = 0x168;
      goto LAB_011424f4;
    }
    uVar7 = (**(code **)(*plVar4 + 0x20))(plVar4,*(undefined8 *)this,param_2);
    this_00 = *(Isolate **)this;
    if (*(int *)(this_00 + 0x2c20) != *(int *)(this_00 + 0xa8)) {
      Isolate::PromoteScheduledException(this_00);
      return 0;
    }
    lVar8 = *(long *)(this + 0x18);
    uVar9 = lVar8 + 1;
    if (*(ulong *)(this + 0x20) < uVar9) {
      local_48 = 0;
      uVar10 = *(ulong *)(this + 0x20) * 2;
      if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
        uVar10 = uVar9;
      }
      if (*(long **)(this + 8) == (long *)0x0) {
        pvVar3 = realloc(*(void **)(this + 0x10),uVar10 + 0x40);
        local_48 = uVar10 + 0x40;
      }
      else {
        pvVar3 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
      }
      if (pvVar3 != (void *)0x0) {
        *(void **)(this + 0x10) = pvVar3;
        *(size_t *)(this + 0x20) = local_48;
        goto LAB_0114247c;
      }
      this[0x29] = (ValueSerializer)0x1;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
LAB_0114247c:
      *(ulong *)(this + 0x18) = uVar9;
      *(undefined1 *)((long)pvVar3 + lVar8) = 0x75;
    }
    if ((uVar7 & 0xff) == 0) {
      v8::V8::FromJustIsNothing();
    }
    uVar12 = (uint)(uVar7 >> 0x20);
LAB_01142498:
    WriteVarint<unsigned_int>(this,uVar12);
    VVar1 = this[0x29];
joined_r0x011424a0:
    if (VVar1 == (ValueSerializer)0x0) {
      return 0x101;
    }
    lVar8 = *(long *)this;
    uVar6 = 0x169;
  }
  param_2 = (ulong *)(lVar8 + 200);
LAB_011424f4:
  ThrowDataCloneError(this,uVar6,param_2);
  return 0;
}

