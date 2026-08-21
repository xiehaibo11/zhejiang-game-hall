
undefined1 FT_Stream_ReadChar(long *param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 local_24 [4];
  
                    /* try { // try from 01064c08 to 01164cbb has its CatchHandler @ 01064720 */
                    /* catch() { ... } // from try @ 01064c00 with catch @ 01064c0c */
                    /* catch() { ... } // from try @ 01064800 with catch @ 01064c10 */
                    /* catch() { ... } // from try @ 010647f8 with catch @ 01064c18 */
  local_24[0] = 0;
                    /* catch() { ... } // from try @ 010647ec with catch @ 01064c20 */
  *param_2 = 0;
                    /* catch() { ... } // from try @ 010647dc with catch @ 01064c24 */
  uVar2 = param_1[2];
  if ((code *)param_1[5] == (code *)0x0) {
                    /* catch() { ... } // from try @ 01064a30 with catch @ 01064c54 */
                    /* catch() { ... } // from try @ 010649bc with catch @ 01064c58
                       catch() { ... } // from try @ 01064a20 with catch @ 01064c58 */
                    /* catch() { ... } // from try @ 0106489c with catch @ 01064c5c */
    if ((ulong)param_1[1] <= uVar2) goto LAB_01064c78;
    local_24[0] = *(undefined1 *)(*param_1 + uVar2);
  }
  else {
                    /* catch() { ... } // from try @ 01064ad4 with catch @ 01064c34 */
    lVar1 = (*(code *)param_1[5])(param_1,uVar2,local_24,1);
    if (lVar1 != 1) {
LAB_01064c78:
      *param_2 = 0x55;
      return 0;
    }
    uVar2 = param_1[2];
  }
  param_1[2] = uVar2 + 1;
  return local_24[0];
}

