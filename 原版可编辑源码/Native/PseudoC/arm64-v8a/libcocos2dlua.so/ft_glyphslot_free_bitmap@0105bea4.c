
void ft_glyphslot_free_bitmap(long param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x128);
  if ((lVar1 == 0) || (uVar2 = *(uint *)(lVar1 + 8), (uVar2 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    if (*(long *)(param_1 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xb8) + 0x10))();
      lVar1 = *(long *)(param_1 + 0x128);
      uVar2 = *(uint *)(lVar1 + 8);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(uint *)(lVar1 + 8) = uVar2 & 0xfffffffe;
  }
  return;
}

