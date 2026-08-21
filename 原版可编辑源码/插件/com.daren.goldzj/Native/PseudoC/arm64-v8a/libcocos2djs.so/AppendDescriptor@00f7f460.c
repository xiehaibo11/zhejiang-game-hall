
/* v8::internal::Map::AppendDescriptor(v8::internal::Isolate*, v8::internal::Descriptor*) */

void __thiscall v8::internal::Map::AppendDescriptor(Map *this,Isolate *param_1,Descriptor *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong local_38;
  
  uVar2 = *(ulong *)this;
  local_38 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x17);
  uVar4 = *(uint *)(uVar2 + 0xb);
  DescriptorArray::Append((DescriptorArray *)&local_38,param_2);
  uVar4 = (uVar4 >> 10 & 0x3ff) + 1;
  if (0x3fc < uVar4) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "static_cast<unsigned>(number) <= static_cast<unsigned>(kMaxNumberOfDescriptors)");
  }
  *(uint *)(*(long *)this + 0xb) = *(uint *)(*(long *)this + 0xb) & 0xfff003ff | uVar4 * 0x400;
  if ((*(byte *)((local_38 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
    Heap_MarkingBarrierForDescriptorArraySlow(param_1 + 0x8850,*(undefined8 *)this);
  }
  uVar2 = **(ulong **)param_2;
  if ((*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x40) &&
     ((*(byte *)(uVar2 + 7) >> 3 & 1) != 0)) {
    *(uint *)(*(long *)this + 0xb) = *(uint *)(*(long *)this + 0xb) | 0x10000000;
  }
  if (((byte)param_2[0x18] >> 1 & 1) == 0) {
    lVar3 = *(long *)this;
    bVar1 = *(byte *)(lVar3 + 5);
    uVar4 = (uint)bVar1;
    if (bVar1 < 3) {
      iVar5 = 2;
      if (bVar1 != 0) {
        iVar5 = -1;
      }
      uVar4 = iVar5 + uVar4;
      if (2 < uVar4) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "static_cast<unsigned>(unused_in_property_array) < JSObject::kFieldsAdded");
      }
    }
    else if (uVar4 == *(byte *)(lVar3 + 3)) {
      uVar4 = 2;
    }
    else {
      uVar4 = uVar4 + 1;
      if (0xff < uVar4) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
      }
    }
    *(char *)(lVar3 + 5) = (char)uVar4;
  }
  return;
}

