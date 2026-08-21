
/* WARNING: Removing unreachable block (ram,0x00e0a6f4) */
/* WARNING: Removing unreachable block (ram,0x00e0a750) */
/* WARNING: Removing unreachable block (ram,0x00e0a7dc) */

undefined8 inflateInit_(long param_1,char *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0xfffffffa;
  }
  else {
    uVar2 = 0xfffffffa;
    if ((param_3 == 0x70) && (*param_2 == '1')) {
      if (param_1 == 0) {
        uVar2 = 0xfffffffe;
      }
      else {
        pcVar4 = *(code **)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (pcVar4 == (code *)0x0) {
          pcVar4 = FUN_00e0edcc;
          *(code **)(param_1 + 0x40) = FUN_00e0edcc;
          *(undefined8 *)(param_1 + 0x50) = 0;
          lVar5 = *(long *)(param_1 + 0x48);
        }
        else {
          lVar5 = *(long *)(param_1 + 0x48);
        }
        if (lVar5 == 0) {
          *(code **)(param_1 + 0x48) = FUN_00e0edd4;
        }
        puVar3 = (undefined8 *)(*pcVar4)(*(undefined8 *)(param_1 + 0x50),1,0x1bf0);
        if (puVar3 == (undefined8 *)0x0) {
          uVar2 = 0xfffffffc;
        }
        else {
          *(undefined8 **)(param_1 + 0x38) = puVar3;
          puVar3[8] = 0;
          *(undefined4 *)(puVar3 + 1) = 1;
          *(undefined4 *)(puVar3 + 6) = 0xf;
          *(undefined8 *)((long)puVar3 + 0x34) = 0;
          *(undefined4 *)((long)puVar3 + 0x3c) = 0;
          puVar3[4] = 0;
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined8 *)(param_1 + 0x30) = 0;
          if (*(uint *)(puVar3 + 1) != 0) {
            *(ulong *)(param_1 + 0x60) = (ulong)(*(uint *)(puVar3 + 1) & 1);
          }
          *(undefined4 *)((long)puVar3 + 0x14) = 0x8000;
          puVar1 = puVar3 + 0xaa;
          puVar3[0x11] = puVar1;
          puVar3[0xc] = puVar1;
          puVar3[0xd] = puVar1;
          *(undefined4 *)(puVar3 + 0x37c) = 1;
          uVar2 = 0;
          *(undefined4 *)((long)puVar3 + 0x1be4) = 0xffffffff;
          *puVar3 = 0;
          *(undefined4 *)((long)puVar3 + 0xc) = 0;
          puVar3[5] = 0;
          puVar3[9] = 0;
          *(undefined4 *)(puVar3 + 10) = 0;
        }
      }
    }
  }
  return uVar2;
}

