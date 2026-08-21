
/* v8::internal::ValueSerializer::WriteString(v8::internal::Handle<v8::internal::String>) */

void __thiscall v8::internal::ValueSerializer::WriteString(ValueSerializer *this,undefined8 param_2)

{
  size_t *psVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  size_t local_48;
  
  psVar1 = (size_t *)String::Flatten(*(undefined8 *)this,param_2,0);
  local_48 = *psVar1;
  auVar8 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_48);
  iVar3 = auVar8._8_4_;
  if (auVar8._12_4_ != 2) {
    if (auVar8._12_4_ != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar7 = *(long *)(this + 0x18);
    uVar5 = lVar7 + 1;
    if (*(ulong *)(this + 0x20) < uVar5) {
      local_48 = 0;
      uVar4 = *(ulong *)(this + 0x20) * 2;
      if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
        uVar4 = uVar5;
      }
      if (*(long **)(this + 8) == (long *)0x0) {
        pvVar2 = realloc(*(void **)(this + 0x10),uVar4 + 0x40);
        local_48 = uVar4 + 0x40;
      }
      else {
        pvVar2 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
      }
      if (pvVar2 == (void *)0x0) {
        this[0x29] = (ValueSerializer)0x1;
        goto LAB_0114018c;
      }
      *(void **)(this + 0x10) = pvVar2;
      *(size_t *)(this + 0x20) = local_48;
    }
    else {
      pvVar2 = *(void **)(this + 0x10);
    }
    *(ulong *)(this + 0x18) = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar7) = 0x22;
LAB_0114018c:
    WriteOneByteString(this,auVar8._0_8_,(long)iVar3);
    return;
  }
  lVar7 = *(long *)(this + 0x18);
  uVar6 = iVar3 << 1;
  uVar5 = lVar7 + 1;
  do {
    uVar6 = uVar6 >> 7;
    uVar5 = uVar5 + 1;
  } while (uVar6 != 0);
  uVar4 = lVar7 + 1;
  if ((uVar5 & 1) != 0) {
    if (*(ulong *)(this + 0x20) < uVar4) {
      local_48 = 0;
      uVar5 = *(ulong *)(this + 0x20) * 2;
      if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
        uVar5 = uVar4;
      }
      if (*(long **)(this + 8) == (long *)0x0) {
        pvVar2 = realloc(*(void **)(this + 0x10),uVar5 + 0x40);
        local_48 = uVar5 + 0x40;
      }
      else {
        pvVar2 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
      }
      if (pvVar2 != (void *)0x0) {
        *(void **)(this + 0x10) = pvVar2;
        *(size_t *)(this + 0x20) = local_48;
        goto LAB_011401dc;
      }
      this[0x29] = (ValueSerializer)0x1;
    }
    else {
      pvVar2 = *(void **)(this + 0x10);
LAB_011401dc:
      *(ulong *)(this + 0x18) = uVar4;
      *(undefined1 *)((long)pvVar2 + lVar7) = 0;
    }
    lVar7 = *(long *)(this + 0x18);
    uVar4 = lVar7 + 1;
  }
  if (*(ulong *)(this + 0x20) < uVar4) {
    local_48 = 0;
    uVar5 = *(ulong *)(this + 0x20) * 2;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar2 = realloc(*(void **)(this + 0x10),uVar5 + 0x40);
      local_48 = uVar5 + 0x40;
    }
    else {
      pvVar2 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar2 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      goto LAB_01140214;
    }
    *(void **)(this + 0x10) = pvVar2;
    *(size_t *)(this + 0x20) = local_48;
  }
  else {
    pvVar2 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar4;
  *(undefined1 *)((long)pvVar2 + lVar7) = 99;
LAB_01140214:
  WriteTwoByteString(this,auVar8._0_8_,(long)iVar3);
  return;
}

