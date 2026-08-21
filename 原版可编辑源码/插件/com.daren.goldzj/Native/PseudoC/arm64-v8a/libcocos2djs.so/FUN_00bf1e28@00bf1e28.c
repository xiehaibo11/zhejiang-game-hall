
void FUN_00bf1e28(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x50);
  **(undefined8 **)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x7c);
  *(undefined8 *)(*(long *)(param_1 + 0x58) + 8) = *(undefined8 *)(param_1 + 0x60);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x70) != param_1 + 0x80) {
      uv__free();
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(long *)(param_1 + 0x58) = lVar3 + 0xd0;
  plVar2 = *(long **)(lVar3 + 0xd8);
  *(long **)(param_1 + 0x60) = plVar2;
  *plVar2 = param_1 + 0x58;
  *(long *)(lVar3 + 0xd8) = param_1 + 0x58;
  uv__io_feed(*(undefined8 *)(lVar3 + 8),lVar3 + 0x88);
  return;
}

