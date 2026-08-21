
/* v8::internal::NativeRegExpMacroAssembler::StringCharacterPosition(v8::internal::String, int,
   v8::internal::PerThreadAssertScopeDebugOnly<(v8::internal::PerThreadAssertType)0, false> const&)
    */

long v8::internal::NativeRegExpMacroAssembler::StringCharacterPosition(ulong param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  
  uVar2 = param_1 & 0xffffffff00000000;
  uVar3 = uVar2 | 7;
  if ((*(ushort *)(uVar3 + *(uint *)(param_1 - 1)) < 0x40) &&
     ((*(ushort *)(uVar3 + *(uint *)(param_1 - 1)) & 7) == 1)) {
    param_1 = uVar2 | *(uint *)(param_1 + 0xb);
  }
  else if ((*(ushort *)(uVar3 + *(uint *)(param_1 - 1)) < 0x40) &&
          ((*(ushort *)(uVar3 + *(uint *)(param_1 - 1)) & 7) == 3)) {
    param_2 = param_2 + (*(int *)(param_1 + 0xf) >> 1);
    param_1 = uVar2 | *(uint *)(param_1 + 0xb);
  }
  uVar2 = param_1 & 0xffffffff00000000;
  puVar4 = (uint *)(param_1 - 1);
  if ((*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(param_1 - 1)) < 0x40) &&
     ((*(ushort *)((uVar2 | 7) + (ulong)*puVar4) & 7) == 5)) {
    param_1 = uVar2 | *(uint *)(param_1 + 0xb);
    puVar4 = (uint *)(param_1 - 1);
  }
  uVar2 = uVar2 | 7;
  if (((*(ushort *)(uVar2 + *puVar4) < 0x40) && ((*(byte *)(uVar2 + *puVar4) & 7) == 0)) &&
     ((*(byte *)(uVar2 + *puVar4) >> 3 & 1) != 0)) {
    lVar1 = param_1 + (long)param_2 + 0xb;
  }
  else if (((*(ushort *)(uVar2 + *puVar4) < 0x40) && ((*(byte *)(uVar2 + *puVar4) & 7) == 0)) &&
          ((*(byte *)(uVar2 + *puVar4) >> 3 & 1) == 0)) {
    lVar1 = param_1 + (long)param_2 * 2 + 0xb;
  }
  else if (((*(ushort *)(uVar2 + *puVar4) < 0x40) && ((*(ushort *)(uVar2 + *puVar4) & 7) == 2)) &&
          ((*(byte *)(uVar2 + *puVar4) >> 3 & 1) != 0)) {
    lVar1 = (**(code **)(**(long **)(param_1 + 0xb) + 0x30))();
    lVar1 = lVar1 + param_2;
  }
  else {
    lVar1 = (**(code **)(**(long **)(param_1 + 0xb) + 0x30))();
    lVar1 = lVar1 + (long)param_2 * 2;
  }
  return lVar1;
}

