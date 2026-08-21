
long ssl_get_ciphers_by_id(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) &&
     ((lVar1 = *(long *)(param_1 + 0x108), lVar1 != 0 ||
      ((*(long *)(param_1 + 0x1b8) != 0 &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x1b8) + 0x10), lVar1 != 0)))))) {
    return lVar1;
  }
  return 0;
}

