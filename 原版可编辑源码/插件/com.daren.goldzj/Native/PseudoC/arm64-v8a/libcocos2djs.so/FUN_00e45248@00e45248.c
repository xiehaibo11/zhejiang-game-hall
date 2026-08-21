
void FUN_00e45248(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  int local_24;
  
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  lVar8 = *(long *)(param_2 + 0x90);
  local_24 = 0;
  uVar1 = (**(code **)(param_2 + 0x48))(param_2);
  if (-1 < (long)uVar1) {
    uVar2 = *(ulong *)(lVar8 + 8) / 100;
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    if (*(long *)(param_1 + 0x240) == 0) {
      lVar8 = FUN_00e13bcc(uVar6,0x150,0,uVar2,0,&local_24);
      *(long *)(param_1 + 0x240) = lVar8;
      if (local_24 == 0) {
        iVar7 = (int)uVar2;
        *(int *)(param_1 + 0x238) = iVar7;
        if (0 < iVar7) {
          uVar1 = (ulong)iVar7;
          if (uVar1 < 2) {
            uVar2 = 0;
          }
          else {
            uVar2 = uVar1 & 0xfffffffffffffffe;
            puVar3 = (undefined4 *)(lVar8 + 0x154);
            uVar5 = uVar2;
            do {
              *(undefined8 *)(puVar3 + -0x37) = 0x100000007;
              *(undefined8 *)(puVar3 + 0x1d) = 0x100000007;
              uVar5 = uVar5 - 2;
              puVar3[-0x54] = 4;
              *puVar3 = 4;
              *(undefined8 *)(puVar3 + -0x25) = 0xf5c;
              *(undefined8 *)(puVar3 + 0x2f) = 0xf5c;
              *(undefined8 *)(puVar3 + -0x39) = 0x27a000;
              *(undefined8 *)(puVar3 + 0x1b) = 0x27a000;
              puVar3 = puVar3 + 0xa8;
            } while (uVar5 != 0);
            if (uVar1 == uVar2) {
              return;
            }
          }
          puVar4 = (undefined8 *)(lVar8 + uVar2 * 0x150 + 0x70);
          do {
            uVar2 = uVar2 + 1;
            puVar4[1] = 0x100000007;
            *(undefined4 *)((long)puVar4 + -0x6c) = 4;
            puVar4[10] = 0xf5c;
            *puVar4 = 0x27a000;
            puVar4 = puVar4 + 0x2a;
          } while ((long)uVar2 < (long)uVar1);
        }
      }
    }
  }
  return;
}

