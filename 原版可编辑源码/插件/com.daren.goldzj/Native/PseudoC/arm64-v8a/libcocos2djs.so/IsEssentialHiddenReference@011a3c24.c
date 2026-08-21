
/* v8::internal::V8HeapExplorer::IsEssentialHiddenReference(v8::internal::Object, int) */

undefined8 __thiscall
v8::internal::V8HeapExplorer::IsEssentialHiddenReference
          (undefined8 param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  
  if ((param_2 & 1) != 0) {
    uVar1 = param_2 & 0xffffffff00000000 | 7;
    if ((param_3 == 0x18) && (*(short *)(uVar1 + *(uint *)(param_2 - 1)) == 0x55)) {
      return 0;
    }
    if ((param_3 == 4) && (*(short *)(uVar1 + *(uint *)(param_2 - 1)) == 0x9b)) {
      return 0;
    }
    if ((param_3 == 0x420) && ((ushort)(*(short *)(uVar1 + *(uint *)(param_2 - 1)) - 0x88U) < 10)) {
      return 0;
    }
  }
  return 1;
}

