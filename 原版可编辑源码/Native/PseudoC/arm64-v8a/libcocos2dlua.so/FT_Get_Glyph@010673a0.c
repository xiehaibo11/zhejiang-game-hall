
int FT_Get_Glyph(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int local_44;
  
  if (param_1 == (undefined8 *)0x0) {
    iVar1 = 0x25;
  }
  else if (param_2 == (undefined8 *)0x0) {
    iVar1 = 6;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x12);
    puVar5 = (undefined8 *)*param_1;
    if (iVar1 == 0x62697473) {
      puVar6 = &ft_bitmap_glyph_class;
    }
    else if (iVar1 == 0x6f75746c) {
      puVar6 = &ft_outline_glyph_class;
    }
    else {
      lVar2 = FT_Lookup_Renderer(puVar5,iVar1,0);
      if (lVar2 == 0) {
        return 0x12;
      }
      puVar6 = (undefined8 *)(lVar2 + 0x28);
    }
    puVar3 = (undefined8 *)ft_mem_alloc(*puVar5,*puVar6,&local_44);
    iVar1 = local_44;
    if (local_44 == 0) {
      *puVar3 = puVar5;
      puVar3[1] = puVar6;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar6 + 1);
      lVar2 = param_1[0x10];
      puVar3[4] = param_1[0x11] << 10;
      puVar3[3] = lVar2 << 10;
      iVar1 = (*(code *)puVar6[2])(puVar3,param_1);
      if (iVar1 == 0) {
        *param_2 = puVar3;
      }
      else {
        uVar4 = *(undefined8 *)*puVar3;
        if (*(code **)(puVar3[1] + 0x18) != (code *)0x0) {
          (**(code **)(puVar3[1] + 0x18))(puVar3);
        }
        ft_mem_free(uVar4,puVar3);
      }
    }
  }
  return iVar1;
}

