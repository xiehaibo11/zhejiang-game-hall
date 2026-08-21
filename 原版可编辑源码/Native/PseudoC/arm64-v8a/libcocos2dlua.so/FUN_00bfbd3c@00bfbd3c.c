
void FUN_00bfbd3c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  do {
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    while( true ) {
      if ((ulong)puVar2[4] < param_2) {
        return;
      }
      *(undefined8 *)(param_1 + 0x40) = *puVar2;
      if ((*(byte *)(puVar2 + 1) & 3 & (*(byte *)(lVar3 + 0x30) ^ 3)) == 0) break;
      if (*(char *)((long)puVar2 + 10) == '\0') {
        lVar1 = puVar2[3];
        *(undefined8 *)(lVar1 + 0x10) = puVar2[2];
        *(long *)(puVar2[2] + 0x18) = lVar1;
      }
      *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + -0x30;
      (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 0x18),puVar2,0x30,0);
      puVar2 = *(undefined8 **)(param_1 + 0x40);
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    lVar1 = puVar2[3];
    *(undefined8 *)(lVar1 + 0x10) = puVar2[2];
    *(long *)(puVar2[2] + 0x18) = lVar1;
    FUN_00c1a220(lVar3,puVar2);
  } while( true );
}

