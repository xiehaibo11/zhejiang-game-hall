
void _TIFFDefaultTileSize(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  if ((int)uVar1 < 1) {
    uVar1 = 0x100;
    *param_2 = 0x100;
  }
  uVar2 = *param_3;
  if ((int)uVar2 < 1) {
    uVar2 = 0x100;
    *param_3 = 0x100;
    uVar1 = *param_2;
  }
  if ((uVar1 & 0xf) != 0) {
    uVar2 = uVar1 + 0xf & 0xfffffff0;
    if (0xffffffef < uVar1) {
      uVar2 = 0;
    }
    *param_2 = uVar2;
    uVar2 = *param_3;
  }
  if ((uVar2 & 0xf) != 0) {
    uVar1 = uVar2 + 0xf & 0xfffffff0;
    if (0xffffffef < uVar2) {
      uVar1 = 0;
    }
    *param_3 = uVar1;
  }
  return;
}

