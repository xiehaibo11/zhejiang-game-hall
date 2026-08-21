
/* v8::internal::Map::CopyWithField(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::FieldType>,
   v8::internal::PropertyAttributes, v8::internal::PropertyConstness, v8::internal::Representation,
   v8::internal::TransitionFlag) */

void v8::internal::Map::CopyWithField
               (Isolate *param_1,ulong *param_2,undefined8 param_3,ulong *param_4,undefined4 param_5
               ,undefined4 param_6,undefined1 param_7,undefined4 param_8)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_98;
  ulong *puStack_90;
  ulong local_88 [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar5 = *param_2;
  if ((~*(uint *)(uVar5 + 0xb) & 0xff000) == 0) {
    plVar4 = (long *)0x0;
    goto LAB_010e98a0;
  }
  uVar9 = (ulong)(*(uint *)(uVar5 + 0xb) >> 10) & 0x3ff;
  lVar8 = uVar9 + 1;
  lVar10 = uVar9 * 0xc00000000 + 0x400000000;
  do {
    lVar8 = lVar8 + -1;
    if (lVar8 < 1) {
      iVar7 = 0;
      goto LAB_010e973c;
    }
    uVar6 = *(uint *)((lVar10 >> 0x20 | 3U) +
                     (uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x17)));
    lVar10 = lVar10 + -0xc00000000;
  } while ((uVar6 >> 2 & 1) != 0);
  iVar7 = (uVar6 >> 0x14 & 0x3ff) + 1;
LAB_010e973c:
  uVar2 = *(ushort *)(uVar5 + 7);
  if (uVar2 - 0x422 < 2) {
LAB_010e9770:
    param_4 = (ulong *)FieldType::Any(param_1);
    param_7 = 4;
  }
  else {
    if (uVar2 == 0x427) {
      param_6 = 0;
      goto LAB_010e9770;
    }
    if (uVar2 == 0x411) goto LAB_010e9770;
  }
  local_88[0] = *param_4;
  uVar5 = FieldType::IsClass((FieldType *)local_88);
  if ((uVar5 & 1) == 0) {
    local_98 = 1;
  }
  else {
    local_88[0] = *param_4;
    uVar5 = FieldType::AsClass((FieldType *)local_88);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_4 = *(ulong **)(param_1 + 0x95a0);
      if (param_4 == *(ulong **)(param_1 + 0x95a8)) {
        param_4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = param_4 + 1;
      *param_4 = uVar5;
    }
    else {
      param_4 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    local_98 = 0;
  }
  puStack_90 = param_4;
  Descriptor::DataField((Descriptor *)local_88,param_3,iVar7,param_5,param_6,param_7,&local_98);
  plVar4 = (long *)CopyAddDescriptor(param_1,param_2,local_88,param_8);
  lVar8 = *plVar4;
  bVar1 = *(byte *)(lVar8 + 5);
  uVar6 = (uint)bVar1;
  if (bVar1 < 3) {
    iVar7 = 2;
    if (bVar1 != 0) {
      iVar7 = -1;
    }
    uVar6 = iVar7 + uVar6;
    if (2 < uVar6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "static_cast<unsigned>(unused_in_property_array) < JSObject::kFieldsAdded");
    }
  }
  else if (uVar6 == *(byte *)(lVar8 + 3)) {
    uVar6 = 2;
  }
  else {
    uVar6 = uVar6 + 1;
    if (0xff < uVar6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
    }
  }
  *(char *)(lVar8 + 5) = (char)uVar6;
LAB_010e98a0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar4);
  }
  return;
}

