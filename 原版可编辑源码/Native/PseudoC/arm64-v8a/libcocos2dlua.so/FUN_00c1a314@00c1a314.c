
void FUN_00c1a314(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  puVar1 = (undefined8 *)(**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 0x18),0,0,param_2);
  if (puVar1 != (undefined8 *)0x0) {
    *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + param_2;
    *puVar1 = *(undefined8 *)(lVar2 + 0x38);
    *(undefined8 **)(lVar2 + 0x38) = puVar1;
    *(byte *)(puVar1 + 1) = *(byte *)(lVar2 + 0x30) & 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfac84(param_1);
}

