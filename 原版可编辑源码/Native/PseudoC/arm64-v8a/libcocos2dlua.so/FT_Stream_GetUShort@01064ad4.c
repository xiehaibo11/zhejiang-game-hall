
undefined2 FT_Stream_GetUShort(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  
                    /* try { // try from 01064ad4 to 01164ae7 has its CatchHandler @ 01064c34 */
  puVar4 = *(undefined1 **)(param_1 + 0x40);
  if (puVar4 + 1 < *(undefined1 **)(param_1 + 0x48)) {
    uVar2 = *puVar4;
                    /* try { // try from 01064ae8 to 01164bff has its CatchHandler @ 01064720 */
    puVar1 = puVar4 + 1;
    puVar4 = puVar4 + 2;
    uVar3 = CONCAT11(uVar2,*puVar1);
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 **)(param_1 + 0x40) = puVar4;
  return uVar3;
}

