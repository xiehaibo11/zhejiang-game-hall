
undefined8 tls_construct_cert_status(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  
  lVar1 = (long)*(int *)(param_1 + 0x280) + 4;
  iVar3 = BUF_MEM_grow(*(BUF_MEM **)(param_1 + 0x78),
                       (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x6c) + lVar1);
  if (iVar3 != 0) {
    puVar2 = (undefined1 *)
             (*(long *)(*(long *)(param_1 + 0x78) + 8) +
             (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x6c));
    *puVar2 = (char)*(undefined4 *)(param_1 + 0x234);
    puVar2[1] = (char)*(undefined2 *)(param_1 + 0x282);
    puVar2[2] = (char)((uint)*(undefined4 *)(param_1 + 0x280) >> 8);
    puVar2[3] = (char)*(undefined4 *)(param_1 + 0x280);
    memcpy(puVar2 + 4,*(void **)(param_1 + 0x278),(long)*(int *)(param_1 + 0x280));
    iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x70))(param_1,0x16,lVar1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  ossl_statem_set_error(param_1);
  return 0;
}

