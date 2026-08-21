
char FUN_00e3f2d4(char *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  puVar4 = *(undefined1 **)(param_1 + 8);
  if (puVar4 != (undefined1 *)0x0) {
    if (*param_1 == '\x03') {
      if (param_2 - *(int *)(param_1 + 0x14) < *(uint *)(param_1 + 0x18)) {
        return param_1[0x1c];
      }
      pcVar3 = puVar4 + 2;
      uVar5 = (uint)CONCAT11(*puVar4,puVar4[1]);
      do {
        if (param_2 < uVar5) {
          return '\0';
        }
        uVar1 = (uint)CONCAT11(pcVar3[1],pcVar3[2]);
        if (param_2 < uVar1) {
          cVar2 = *pcVar3;
          *(uint *)(param_1 + 0x14) = uVar5;
          *(uint *)(param_1 + 0x18) = uVar1 - uVar5;
          param_1[0x1c] = cVar2;
          return cVar2;
        }
        pcVar3 = pcVar3 + 3;
        uVar5 = uVar1;
      } while (pcVar3 < puVar4 + *(uint *)(param_1 + 0x10));
    }
    else if (*param_1 == '\0') {
      return puVar4[param_2];
    }
  }
  return '\0';
}

