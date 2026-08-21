
undefined8 FUN_01075fc8(long *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ushort local_48 [2];
  ushort local_44 [2];
  short local_38 [2];
  short local_34 [2];
  
                    /* try { // try from 01075fd8 to 01175fdb has its CatchHandler @ 01075fec */
                    /* try { // try from 01075fdc to 01176023 has its CatchHandler @ 01075f5c */
  lVar4 = param_1[6];
  lVar5 = *param_1;
                    /* catch() { ... } // from try @ 01075fd8 with catch @ 01075fec */
  local_34[0] = 0;
  local_38[0] = 0;
  local_44[0] = 0;
  local_48[0] = 0;
  uVar3 = FT_Stream_Pos(lVar4);
  (**(code **)(*(long *)(lVar5 + 0x360) + 0xe0))(lVar5,0,param_2,local_34,local_44);
  if (*(char *)(lVar5 + 0x1f0) == '\0') {
    if (*(short *)(lVar5 + 600) == -1) {
      sVar1 = *(short *)(lVar5 + 0x198);
      local_38[0] = sVar1 - (short)param_1[0xb];
      sVar2 = *(short *)(lVar5 + 0x19a);
    }
    else {
      sVar1 = *(short *)(lVar5 + 0x2b2);
      local_38[0] = sVar1 - (short)param_1[0xb];
      sVar2 = *(short *)(lVar5 + 0x2b4);
    }
    local_48[0] = sVar1 - sVar2;
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x360) + 0xe0))(lVar5,1,param_2,local_38,local_48);
  }
  uVar3 = FT_Stream_Seek(lVar4,uVar3);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
    *(int *)(param_1 + 0xc) = (int)local_34[0];
    *(uint *)((long)param_1 + 100) = (uint)local_44[0];
    *(int *)(param_1 + 0x27) = (int)local_38[0];
    *(uint *)((long)param_1 + 0x13c) = (uint)local_48[0];
    if (*(char *)((long)param_1 + 0x6c) == '\0') {
      *(undefined1 *)((long)param_1 + 0x6c) = 1;
      *(uint *)(param_1 + 0xd) = (uint)local_44[0];
    }
  }
                    /* try { // try from 010760e0 to 0117611b has its CatchHandler @ 010760e0
                       catch() { ... } // from try @ 010760e0 with catch @ 010760e0
                       catch() { ... } // from try @ 01076158 with catch @ 010760e0 */
  return uVar3;
}

