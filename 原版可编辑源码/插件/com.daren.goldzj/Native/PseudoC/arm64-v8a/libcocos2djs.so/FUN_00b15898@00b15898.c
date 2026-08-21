
uint FUN_00b15898(long param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  iVar1 = bn_get_top(*(undefined8 *)(param_1 + 8));
  if ((((iVar1 == 4) && (iVar1 = bn_get_top(*(undefined8 *)(param_1 + 0x10)), iVar1 == 4)) &&
      (puVar2 = (ulong *)bn_get_words(*(undefined8 *)(param_1 + 8)),
      uVar3 = puVar2[1] ^ 0x75ba95fc5fedb601 | *puVar2 ^ 0x79e730d418a9143c |
              puVar2[2] ^ 0x79fb732b77622510 | puVar2[3] ^ 0x18905f76a53755c6,
      -1 < (long)(uVar3 | -uVar3))) &&
     (puVar2 = (ulong *)bn_get_words(*(undefined8 *)(param_1 + 0x10)),
     uVar3 = puVar2[1] ^ 0x8b4ab8e4ba19e45c | *puVar2 ^ 0xddf25357ce95560a |
             puVar2[2] ^ 0xd2e88688dd21f325 | puVar2[3] ^ 0x8571ff1825885d85,
     -1 < (long)(uVar3 | -uVar3))) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = (ulong *)bn_get_words(uVar4);
    iVar1 = bn_get_top(uVar4);
    if (iVar1 == 4) {
      uVar3 = puVar2[1] ^ 0xffffffff00000000 | *puVar2 ^ 1 | puVar2[2] ^ 0xffffffffffffffff |
              puVar2[3] ^ 0xfffffffe;
      return ((uint)(uVar3 >> 0x20) | (uint)(-uVar3 >> 0x20)) >> 0x1f ^ 1;
    }
  }
  return 0;
}

