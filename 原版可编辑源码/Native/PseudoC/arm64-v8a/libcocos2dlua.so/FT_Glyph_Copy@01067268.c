
int FT_Glyph_Copy(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_44;
  
  if (((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) && (param_1[1] != 0)) {
    *param_2 = 0;
    puVar4 = (undefined8 *)param_1[1];
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*param_1;
      puVar2 = (undefined8 *)ft_mem_alloc(*puVar5,*puVar4,&local_44);
      if (local_44 != 0) {
        return local_44;
      }
      *puVar2 = puVar5;
      puVar2[1] = puVar4;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar4 + 1);
      uVar3 = param_1[3];
      puVar2[4] = param_1[4];
      puVar2[3] = uVar3;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 2);
      if (((code *)puVar4[4] != (code *)0x0) &&
         (iVar1 = (*(code *)puVar4[4])(param_1,puVar2), iVar1 != 0)) {
        uVar3 = *(undefined8 *)*puVar2;
        if (*(code **)(puVar2[1] + 0x18) != (code *)0x0) {
          (**(code **)(puVar2[1] + 0x18))(puVar2);
        }
        ft_mem_free(uVar3,puVar2);
        return iVar1;
      }
      *param_2 = puVar2;
      return 0;
    }
  }
  return 6;
}

