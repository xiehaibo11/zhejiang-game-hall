
/* v8::internal::IncrementalMarking::ShouldRetainMap(v8::internal::Map, int) */

uint __thiscall
v8::internal::IncrementalMarking::ShouldRetainMap(undefined8 param_1,ulong param_2,int param_3)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    uVar3 = param_2 & 0xffffffff00000000;
    uVar2 = uVar3 | *(uint *)(param_2 + 0x13);
    if ((*(uint *)(param_2 + 0x13) & 1) != 0) {
      do {
        if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar2 + 0x13);
        uVar2 = uVar3 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar2 - (uVar2 & 0xfffffffffffc0000);
      return *(uint *)(*(long *)((uVar2 & 0xfffffffffffc0000) + 0x10) + (uVar3 >> 7 & 0x1ffffff) * 4
                      ) >> (ulong)((uint)(uVar3 >> 2) & 0x1f) & 1;
    }
  }
  return 0;
}

