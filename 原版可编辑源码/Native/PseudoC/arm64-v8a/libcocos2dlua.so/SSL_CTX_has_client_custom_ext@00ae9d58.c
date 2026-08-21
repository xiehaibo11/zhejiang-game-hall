
bool SSL_CTX_has_client_custom_ext(long param_1,uint param_2)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x120) + 0x1a0);
  if (uVar2 != 0) {
    puVar1 = *(ushort **)(*(long *)(param_1 + 0x120) + 0x198);
    uVar3 = 0;
    do {
      if (*puVar1 == param_2) goto LAB_00ae9d8c;
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 0x18;
    } while (uVar3 < uVar2);
  }
  puVar1 = (ushort *)0x0;
LAB_00ae9d8c:
  return puVar1 != (ushort *)0x0;
}

