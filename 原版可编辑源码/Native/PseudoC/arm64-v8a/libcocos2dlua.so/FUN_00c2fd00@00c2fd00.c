
void FUN_00c2fd00(long param_1)

{
  uint __status;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 < puVar2) {
    iVar3 = (int)((long)*puVar1 >> 0x2f);
    if (iVar3 + 3U < 2) {
      __status = (uint)(iVar3 == -2);
      goto LAB_00c2fd50;
    }
  }
  __status = FUN_00c29da0(param_1,1,0);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
LAB_00c2fd50:
  if ((puVar1 + 1 < puVar2) && ((uint)((long)puVar1[1] >> 0x2f) < 0xfffffffe)) {
    lua_close(param_1);
  }
                    /* WARNING: Subroutine does not return */
  exit(__status);
}

