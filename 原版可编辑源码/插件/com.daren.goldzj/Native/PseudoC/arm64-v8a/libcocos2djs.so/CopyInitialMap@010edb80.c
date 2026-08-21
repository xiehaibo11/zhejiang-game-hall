
/* v8::internal::Map::CopyInitialMap(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, int, int, int) */

long * v8::internal::Map::CopyInitialMap
                 (undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long local_38;
  
  plVar2 = (long *)RawCopy();
  lVar3 = *plVar2;
  if (*(ushort *)(lVar3 + 7) < 0xaa) {
    if (param_5 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == value");
    }
    *(undefined1 *)(lVar3 + 5) = 0;
  }
  else {
    if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 <= value");
    }
    uVar1 = (((uint)*(byte *)(lVar3 + 3) - param_5) - (uint)*(byte *)(lVar3 + 4)) +
            (uint)*(byte *)(lVar3 + 4);
    if (0xff < uVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
    }
    *(char *)(lVar3 + 5) = (char)uVar1;
  }
  uVar4 = *param_2;
  if ((*(uint *)(uVar4 + 0xb) >> 10 & 0x3ff) != 0) {
    uVar1 = *(uint *)(uVar4 + 0x17);
    *(uint *)(*plVar2 + 0xb) = *(uint *)(*plVar2 + 0xb) & 0xffbfffff;
    local_38 = *plVar2;
    SetInstanceDescriptors((Map *)&local_38,param_1,uVar4 & 0xffffffff00000000 | (ulong)uVar1);
  }
  return plVar2;
}

