
void FUN_010b5ae0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 010b58bc with catch @ 010b5aec */
                    /* catch() { ... } // from try @ 010b59a0 with catch @ 010b5af0 */
    *(undefined8 *)(lVar1 + 0xe8) = puVar2[4];
                    /* catch() { ... } // from try @ 010b5a88 with catch @ 010b5af4 */
    uVar3 = puVar2[2];
                    /* catch() { ... } // from try @ 010b57a0 with catch @ 010b5af8 */
    *(undefined8 *)(lVar1 + 0xe0) = puVar2[3];
    *(undefined8 *)(lVar1 + 0xd8) = uVar3;
    uVar3 = *puVar2;
    *(undefined8 *)(lVar1 + 0xd0) = puVar2[1];
    *(undefined8 *)(lVar1 + 200) = uVar3;
  }
  return;
}

