
void FUN_0109dfd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x360);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    if (lVar3 != 0) {
      if (*(code **)(lVar3 + 0xa0) != (code *)0x0) {
        (**(code **)(lVar3 + 0xa0))(param_1);
      }
      if (*(code **)(lVar3 + 200) != (code *)0x0) {
        (**(code **)(lVar3 + 200))(param_1);
      }
    }
    if (*(char *)(param_1 + 0x50c) != '\0') {
      if (*(long *)(param_1 + 0x4e8) != 0) {
        FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x4e8);
      }
      *(undefined8 *)(param_1 + 0x500) = 0;
      *(undefined8 *)(param_1 + 0x4f8) = 0;
      *(undefined8 *)(param_1 + 0x4f0) = 0;
    }
    FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x4c8);
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined2 *)(param_1 + 0x120) = 0;
    FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xc0),param_1 + 800);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x328) = 0;
    FT_Stream_ReleaseFrame(uVar2,param_1 + 0x458);
    FT_Stream_ReleaseFrame(uVar2,param_1 + 0x468);
    *(undefined8 *)(param_1 + 0x460) = 0;
    *(undefined8 *)(param_1 + 0x470) = 0;
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x220));
      *(undefined8 *)(param_1 + 0x220) = 0;
      ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x228));
      *(undefined8 *)(param_1 + 0x228) = 0;
      *(undefined1 *)(param_1 + 0x1f0) = 0;
    }
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x378));
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined2 *)(param_1 + 0x372) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x68))(param_1);
    }
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x438));
    *(undefined8 *)(param_1 + 0x438) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
  }
  return;
}

