
void uv__io_feed(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_2 + 8;
  if (lVar1 != *(long *)(param_2 + 8)) {
    return;
  }
  *(long *)(param_2 + 8) = param_1 + 0x48;
  plVar2 = *(long **)(param_1 + 0x50);
  *(long **)(param_2 + 0x10) = plVar2;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x50) = lVar1;
  return;
}

