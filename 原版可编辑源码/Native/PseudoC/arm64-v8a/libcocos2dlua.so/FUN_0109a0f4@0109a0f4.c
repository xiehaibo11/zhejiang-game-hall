
undefined2 FUN_0109a0f4(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = param_2 - (uint)CONCAT11(*(undefined1 *)(lVar2 + 6),*(undefined1 *)(lVar2 + 7));
  if (uVar1 < CONCAT11(*(undefined1 *)(lVar2 + 8),*(undefined1 *)(lVar2 + 9))) {
    lVar2 = lVar2 + (ulong)(uVar1 * 2);
    return CONCAT11(*(undefined1 *)(lVar2 + 10),*(undefined1 *)(lVar2 + 0xb));
  }
  return 0;
}

