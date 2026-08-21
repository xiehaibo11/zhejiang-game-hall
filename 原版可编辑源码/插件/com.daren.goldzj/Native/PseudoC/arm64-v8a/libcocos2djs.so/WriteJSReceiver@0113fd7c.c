
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::ValueSerializer::WriteJSReceiver(v8::internal::Handle<v8::internal::JSReceiver>) */

undefined2 __thiscall
v8::internal::ValueSerializer::WriteJSReceiver(ValueSerializer *this,ulong *param_2)

{
  size_t __size;
  long *plVar1;
  byte bVar2;
  ValueSerializer VVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  Isolate *this_00;
  size_t local_58;
  
  piVar8 = (int *)IdentityMapBase::GetEntry((IdentityMapBase *)(this + 0x70),*param_2);
  iVar7 = *piVar8;
  if (iVar7 != 0) {
    lVar14 = *(long *)(this + 0x18);
    uVar13 = lVar14 + 1;
    if (*(ulong *)(this + 0x20) < uVar13) {
      local_58 = 0;
      uVar12 = *(ulong *)(this + 0x20) * 2;
      plVar1 = *(long **)(this + 8);
      if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
        uVar12 = uVar13;
      }
      __size = uVar12 + 0x40;
      if (plVar1 == (long *)0x0) {
        pvVar9 = realloc(*(void **)(this + 0x10),__size);
        local_58 = __size;
      }
      else {
        pvVar9 = (void *)(**(code **)(*plVar1 + 0x30))
                                   (plVar1,*(void **)(this + 0x10),__size,&local_58);
      }
      if (pvVar9 != (void *)0x0) {
        *(void **)(this + 0x10) = pvVar9;
        *(size_t *)(this + 0x20) = local_58;
        goto LAB_0113fdd0;
      }
      this[0x29] = (ValueSerializer)0x1;
    }
    else {
      pvVar9 = *(void **)(this + 0x10);
LAB_0113fdd0:
      *(ulong *)(this + 0x18) = uVar13;
      *(undefined1 *)((long)pvVar9 + lVar14) = 0x5e;
    }
    WriteVarint<unsigned_int>(this,iVar7 - 1);
    if (this[0x29] == (ValueSerializer)0x0) {
      return 0x101;
    }
    uVar10 = 0x169;
    param_2 = (ulong *)(*(long *)this + 200);
LAB_0113fe7c:
    ThrowDataCloneError(this,uVar10,param_2);
    return 0;
  }
  iVar7 = *(int *)(this + 0xb8);
  *(int *)(this + 0xb8) = iVar7 + 1;
  *piVar8 = iVar7 + 1;
  uVar13 = *param_2;
  uVar4 = *(ushort *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 7);
  if ((uVar4 < 0x410) ||
     ((*(byte *)((uVar13 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar13 - 1)) >> 1 & 1) != 0))
  {
    uVar10 = 0x168;
    goto LAB_0113fe7c;
  }
  lVar14 = *(long *)this;
  uVar13 = GetCurrentStackPosition();
  this_00 = *(Isolate **)this;
  if (uVar13 < *(ulong *)(lVar14 + 0x58)) {
    Isolate::StackOverflow(this_00);
    return 0;
  }
  uVar10 = *(undefined8 *)(this_00 + 0x95a0);
  lVar14 = *(long *)(this_00 + 0x95a8);
  *(int *)(this_00 + 0x95b0) = *(int *)(this_00 + 0x95b0) + 1;
  switch(uVar4) {
  case 0x410:
switchD_0113fed8_caseD_410:
    uVar5 = WriteHostObject(this,param_2);
    break;
  case 0x411:
    uVar5 = WriteJSPrimitiveWrapper(this,param_2);
    break;
  default:
    goto switchD_0113fed8_caseD_412;
  case 0x41a:
  case 0x41b:
    uVar5 = WriteJSArrayBufferView(this,*param_2);
    break;
  case 0x41c:
    uVar5 = WriteJSMap(this,param_2);
    break;
  case 0x41d:
    uVar5 = WriteJSSet(this,param_2);
    break;
  case 0x420:
  case 0x421:
    uVar13 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
    bVar2 = *(byte *)(uVar13 + 3);
    if (bVar2 != 0) {
      if (*(short *)(uVar13 + 7) == 0x421) {
        iVar7 = 0xc;
      }
      else {
        iVar7 = JSObject::GetHeaderSize(*(short *)(uVar13 + 7),*(char *)(uVar13 + 9) < '\0');
      }
      if (2 < (((int)((uint)bVar2 * 4 - iVar7) >> 2) - (uint)*(byte *)(uVar13 + 3)) +
              (uint)*(byte *)(uVar13 + 4) + 1) goto switchD_0113fed8_caseD_410;
    }
    uVar5 = WriteJSObject(this,param_2);
    break;
  case 0x423:
    uVar5 = WriteJSArray(this,param_2);
    break;
  case 0x424:
    uVar5 = WriteJSArrayBuffer(this,param_2);
    break;
  case 0x428:
    WriteJSDate(this,*param_2);
    VVar3 = this[0x29];
    goto joined_r0x0113ffb8;
  case 0x429:
    uVar5 = WriteJSError(this,param_2);
    break;
  case 0x42e:
    WriteJSRegExp(this,param_2);
    VVar3 = this[0x29];
joined_r0x0113ffb8:
    if (VVar3 == (ValueSerializer)0x0) {
      uVar5 = 0x101;
      break;
    }
    uVar11 = 0x169;
    param_2 = (ulong *)(*(long *)this + 200);
    goto LAB_01140008;
  case 0x435:
    uVar6 = wasm::WasmFeatures::FromIsolate(*(Isolate **)this);
    if ((uVar6 >> 1 & 1) != 0) {
      uVar5 = WriteWasmMemory(this,param_2);
      break;
    }
    goto switchD_0113fed8_caseD_412;
  case 0x436:
    uVar6 = wasm::WasmFeatures::FromIsolate(*(Isolate **)this);
    if ((FLAG_wasm_disable_structured_cloning == '\0') || ((uVar6 >> 1 & 1) != 0)) {
      uVar5 = WriteWasmModule(this,param_2);
      break;
    }
switchD_0113fed8_caseD_412:
    uVar11 = 0x168;
LAB_01140008:
    ThrowDataCloneError(this,uVar11,param_2);
    uVar5 = 0;
  }
  *(undefined8 *)(this_00 + 0x95a0) = uVar10;
  *(int *)(this_00 + 0x95b0) = *(int *)(this_00 + 0x95b0) + -1;
  if (*(long *)(this_00 + 0x95a8) != lVar14) {
    *(long *)(this_00 + 0x95a8) = lVar14;
    HandleScope::DeleteExtensions(this_00);
  }
  return uVar5;
}

