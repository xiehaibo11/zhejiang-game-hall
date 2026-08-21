
/* WARNING: Type propagation algorithm not settling */

void png_set_filter(long param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return;
  }
  if ((param_2 != 0) && (((uint)(param_2 == 0x40) & (*(byte *)(param_1 + 0x450) & 4) >> 2) == 0)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Unknown custom filter method");
  }
  uVar3 = 8;
  switch(param_3) {
  case 1:
    uVar3 = 0x10;
    break;
  case 2:
    uVar3 = 0x20;
    break;
  case 3:
    uVar3 = 0x40;
    break;
  case 4:
    uVar3 = 0x80;
    break;
  case 5:
  case 6:
  case 7:
    png_app_error(param_1,"Unknown row filter for method 0");
    uVar3 = 8;
  }
  *(char *)(param_1 + 0x2ae) = (char)uVar3;
  if (*(long *)(param_1 + 0x260) == 0) {
    return;
  }
  if (((uVar3 >> 4 & 1) != 0) && (*(long *)(param_1 + 0x268) == 0)) {
    puVar2 = (undefined1 *)png_malloc(param_1,*(long *)(param_1 + 0x240) + 1);
    uVar3 = (uint)*(byte *)(param_1 + 0x2ae);
    *(undefined1 **)(param_1 + 0x268) = puVar2;
    *puVar2 = 1;
  }
  if (((uVar3 >> 5 & 1) == 0) || (*(long *)(param_1 + 0x270) != 0)) {
    if ((uVar3 >> 6 & 1) != 0) goto LAB_010d6ba4;
  }
  else {
    if (*(long *)(param_1 + 600) == 0) {
      png_warning(param_1,"Can\'t add Up filter after starting");
      bVar1 = *(byte *)(param_1 + 0x2ae);
      uVar3 = bVar1 & 0xffffffdf;
      *(char *)(param_1 + 0x2ae) = (char)uVar3;
    }
    else {
      puVar2 = (undefined1 *)png_malloc(param_1,*(long *)(param_1 + 0x240) + 1);
      bVar1 = *(byte *)(param_1 + 0x2ae);
      uVar3 = (uint)bVar1;
      *(undefined1 **)(param_1 + 0x270) = puVar2;
      *puVar2 = 2;
    }
    if ((bVar1 >> 6 & 1) != 0) {
LAB_010d6ba4:
      if (*(long *)(param_1 + 0x278) == 0) {
        if (*(long *)(param_1 + 600) == 0) {
          png_warning(param_1,"Can\'t add Average filter after starting");
          uVar3 = *(byte *)(param_1 + 0x2ae) & 0xffffffbf;
          bVar1 = (byte)uVar3;
          *(byte *)(param_1 + 0x2ae) = bVar1;
        }
        else {
          puVar2 = (undefined1 *)png_malloc(param_1,*(long *)(param_1 + 0x240) + 1);
          bVar1 = *(byte *)(param_1 + 0x2ae);
          uVar3 = (uint)bVar1;
          *(undefined1 **)(param_1 + 0x278) = puVar2;
          *puVar2 = 3;
        }
        goto joined_r0x010d6c5c;
      }
    }
  }
  bVar1 = (byte)uVar3;
joined_r0x010d6c5c:
  if ((char)bVar1 < '\0') {
    if (*(long *)(param_1 + 0x280) != 0) {
      return;
    }
    if (*(long *)(param_1 + 600) == 0) {
      png_warning(param_1,"Can\'t add Paeth filter after starting");
      bVar1 = *(byte *)(param_1 + 0x2ae) & 0x7f;
      *(byte *)(param_1 + 0x2ae) = bVar1;
    }
    else {
      puVar2 = (undefined1 *)png_malloc(param_1,*(long *)(param_1 + 0x240) + 1);
      bVar1 = *(byte *)(param_1 + 0x2ae);
      *(undefined1 **)(param_1 + 0x280) = puVar2;
      *puVar2 = 4;
    }
    if (bVar1 != 0) {
      return;
    }
  }
  else if (uVar3 != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x2ae) = 8;
  return;
}

