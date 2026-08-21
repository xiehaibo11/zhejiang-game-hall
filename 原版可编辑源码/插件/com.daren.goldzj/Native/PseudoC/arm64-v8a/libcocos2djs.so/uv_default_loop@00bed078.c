
undefined * uv_default_loop(void)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = DAT_01d3bc58;
  if ((DAT_01d3bc58 == (undefined *)0x0) && (iVar1 = uv_loop_init(&DAT_01d3b908), iVar1 == 0)) {
    DAT_01d3bc58 = &DAT_01d3b908;
    puVar2 = &DAT_01d3b908;
  }
  return puVar2;
}

