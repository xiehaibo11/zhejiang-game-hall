
undefined8 uv_shutdown(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(uint *)(param_2 + 0x58) & 0x5b) == 0x40) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 8) + 0x20;
    uVar1 = *(uint *)(param_2 + 0x58);
    lVar3 = *(long *)(param_2 + 8);
    *(undefined4 *)(param_1 + 8) = 4;
    plVar2 = *(long **)(lVar3 + 0x28);
    *(long **)(param_1 + 0x18) = plVar2;
    *plVar2 = param_1 + 0x10;
    *(long *)(*(long *)(param_2 + 8) + 0x28) = param_1 + 0x10;
    *(long *)(param_1 + 0x40) = param_2;
    *(undefined8 *)(param_1 + 0x48) = param_3;
    *(long *)(param_2 + 0x80) = param_1;
    *(uint *)(param_2 + 0x58) = uVar1 | 8;
    uv__io_start(*(undefined8 *)(param_2 + 8),param_2 + 0x88);
    return 0;
  }
  return 0xffffff95;
}

