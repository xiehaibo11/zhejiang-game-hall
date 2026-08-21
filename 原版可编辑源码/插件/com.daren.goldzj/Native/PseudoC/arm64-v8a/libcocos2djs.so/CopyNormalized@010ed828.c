
/* v8::internal::Map::CopyNormalized(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::PropertyNormalizationMode) */

long * v8::internal::Map::CopyNormalized(Isolate *param_1,long *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long local_28;
  
  lVar6 = *param_2;
  iVar4 = (uint)*(byte *)(lVar6 + 3) - (uint)*(byte *)(lVar6 + 4);
  iVar3 = iVar4 * 4;
  if (param_3 != 0) {
    iVar3 = 0;
  }
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = iVar4;
  }
  plVar5 = (long *)RawCopy(param_1,param_2,(uint)*(byte *)(lVar6 + 3) * 4 - iVar3,iVar2);
  lVar6 = *plVar5;
  if (*(ushort *)(lVar6 + 7) < 0xaa) {
    *(undefined1 *)(lVar6 + 5) = 0;
  }
  else {
    uVar1 = ((uint)*(byte *)(lVar6 + 3) - (uint)*(byte *)(lVar6 + 4)) + (uint)*(byte *)(lVar6 + 4);
    if (0xff < uVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
    }
    *(char *)(lVar6 + 5) = (char)uVar1;
  }
  *(uint *)(*plVar5 + 0xb) = *(uint *)(*plVar5 + 0xb) | 0x2200000;
  *(uint *)(*plVar5 + 0xb) = *(uint *)(*plVar5 + 0xb) & 0xfbffffff;
  *(uint *)(*plVar5 + 0xb) = *(uint *)(*plVar5 + 0xb) | 0x10000000;
  *(uint *)(*plVar5 + 0xb) = *(uint *)(*plVar5 + 0xb) & 0x1fffffff;
  if (FLAG_verify_heap != '\0') {
    local_28 = *plVar5;
    DictionaryMapVerify((Map *)&local_28,param_1);
  }
  return plVar5;
}

