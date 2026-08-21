
/* WARNING: Removing unreachable block (ram,0x00ab42d4) */

undefined8 FUN_00ab4250(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar4 = (ulong)*(byte *)(param_1 + 0x2fc);
  if (*(byte *)(param_1 + 0x2fc) == 0) {
    uVar2 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x220);
    uVar7 = 0;
    do {
      lVar1 = param_1 + uVar7 * 8;
      lVar3 = *(long *)(lVar1 + 0x290);
      pcVar5 = *(code **)(lVar3 + 8);
      if (pcVar5 == (code *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*pcVar5)(uVar6,lVar3,param_1,param_2,*(undefined8 *)(lVar1 + 0x2a0),param_3,param_4
                         );
        uVar4 = (ulong)*(byte *)(param_1 + 0x2fc);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  return uVar2;
}

