
/* v8::internal::Map::InstallDescriptors(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::Map>,
   v8::internal::InternalIndex, v8::internal::Handle<v8::internal::DescriptorArray>,
   v8::internal::Handle<v8::internal::LayoutDescriptor>) */

void v8::internal::Map::InstallDescriptors
               (Isolate *param_1,long *param_2,long *param_3,long param_4,ulong *param_5)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long local_28;
  
  local_28 = *param_3;
  SetInstanceDescriptors((Map *)&local_28,param_1,*param_5,(int)param_4 + 1);
  *(undefined1 *)(*param_3 + 5) = *(undefined1 *)(*param_2 + 5);
  uVar3 = param_4 * 0xc00000000 + 0x1000000000 >> 0x20;
  if ((*(uint *)(*param_5 + (uVar3 | 3)) >> 2 & 1) == 0) {
    lVar4 = *param_3;
    bVar1 = *(byte *)(lVar4 + 5);
    uVar5 = (uint)bVar1;
    if (bVar1 < 3) {
      iVar6 = 2;
      if (bVar1 != 0) {
        iVar6 = -1;
      }
      uVar5 = iVar6 + uVar5;
      if (2 < uVar5) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "static_cast<unsigned>(unused_in_property_array) < JSObject::kFieldsAdded");
      }
    }
    else if (uVar5 == *(byte *)(lVar4 + 3)) {
      uVar5 = 2;
    }
    else {
      uVar5 = uVar5 + 1;
      if (0xff < uVar5) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
      }
    }
    *(char *)(lVar4 + 5) = (char)uVar5;
  }
  uVar3 = *param_5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + *param_5 + -1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
  }
  if (((*(uint *)(*param_2 + 0xb) >> 0x1c & 1) != 0) ||
     ((uVar3 = *puVar2,
      *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x40 &&
      ((*(byte *)(uVar3 + 7) >> 3 & 1) != 0)))) {
    *(uint *)(*param_3 + 0xb) = *(uint *)(*param_3 + 0xb) | 0x10000000;
  }
  ConnectTransition(param_1,param_2,param_3,puVar2,0);
  return;
}

