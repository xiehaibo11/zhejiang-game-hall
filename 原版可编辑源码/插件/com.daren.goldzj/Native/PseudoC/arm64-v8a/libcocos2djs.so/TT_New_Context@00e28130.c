
undefined8 * TT_New_Context(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_28;
  int local_24;
  
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = (undefined8 *)FUN_00e1388c(uVar2,0x450,&local_28);
    if (local_28 == 0) {
      puVar1[2] = uVar2;
      *(undefined4 *)((long)puVar1 + 0x2f4) = 0x20;
      uVar2 = FUN_00e13bcc(uVar2,0x20,0,0x20,0,&local_24);
      puVar1[0x5f] = uVar2;
      if (local_24 == 0) {
        *(undefined4 *)(puVar1 + 0x60) = 0;
        *(undefined4 *)(puVar1 + 0x57) = 0;
        puVar1[0x58] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        return puVar1;
      }
      uVar2 = puVar1[2];
      *(undefined4 *)(puVar1 + 0x60) = 0;
      FUN_00e139fc(uVar2,puVar1[6]);
      puVar1[6] = 0;
      puVar1[5] = 0;
      FUN_00e139fc(uVar2,puVar1[0x5f]);
      puVar1[0x5f] = 0;
      puVar1[0x5e] = 0;
      FUN_00e139fc(uVar2,puVar1[0x58]);
      puVar1[0x58] = 0;
      *(undefined4 *)(puVar1 + 0x57) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_00e139fc(uVar2,puVar1);
      if (local_24 == 0) {
        return puVar1;
      }
    }
  }
  return (undefined8 *)0x0;
}

