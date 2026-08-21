
uint FUN_015e17e0(WasmModule *param_1,char param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 == '\x01') {
    if ((*param_3 >> 4 & 1) == 0) {
      uVar3 = 2;
      uVar6 = 3;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x130);
      uVar3 = 2;
      uVar6 = 3;
      if ((lVar7 != 0) &&
         (uVar5 = (ulong)(uint)(param_4 - *(int *)(param_1 + 0x3c)),
         uVar8 = (*(long *)(param_1 + 0x138) - lVar7) * -0x5555555555555555,
         uVar5 <= uVar8 && uVar8 - uVar5 != 0)) {
        lVar7 = lVar7 + uVar5 * 3;
        bVar1 = *(byte *)(lVar7 + 1);
        if (3 < bVar1) {
LAB_015e18c4:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        bVar2 = *(byte *)(lVar7 + 2);
        if (3 < bVar2) goto LAB_015e18c4;
        uVar3 = 0x3020102 >> (ulong)((bVar1 & 3) << 3);
        uVar6 = 3;
        switch(bVar2) {
        case 1:
        case 2:
          uVar6 = (uint)bVar2;
        }
      }
    }
    uVar4 = uVar3;
    if ((char)uVar3 <= (char)uVar6) {
      uVar4 = uVar6;
    }
  }
  else {
    if (param_2 != '\0') goto LAB_015e18c4;
    uVar3 = v8::internal::wasm::WasmCompilationUnit::GetDefaultExecutionTier(param_1);
    uVar4 = uVar3;
  }
  return uVar3 & 0xff | (uVar4 & 0xff) << 8;
}

