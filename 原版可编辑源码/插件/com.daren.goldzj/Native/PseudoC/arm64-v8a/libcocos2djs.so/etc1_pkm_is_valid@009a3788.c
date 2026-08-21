
bool etc1_pkm_is_valid(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  
                    /* try { // try from 009a3794 to 00aa38ab has its CatchHandler @ 009a368c */
  iVar6 = memcmp(param_1,"PKM 10",6);
  if (iVar6 == 0) {
    uVar1 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 8),*(undefined1 *)((long)param_1 + 9));
    uVar2 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 0xc),*(undefined1 *)((long)param_1 + 0xd)
                          );
    uVar3 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 0xe),*(undefined1 *)((long)param_1 + 0xf)
                          );
    uVar4 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 10),*(undefined1 *)((long)param_1 + 0xb))
    ;
                    /* catch() { ... } // from try @ 009a3744 with catch @ 009a3810 */
    bVar5 = uVar4 - uVar3 < 4 &&
            (((CONCAT11(*(undefined1 *)((long)param_1 + 6),*(undefined1 *)((long)param_1 + 7)) == 0
              && uVar2 <= uVar1) && uVar1 - uVar2 < 4) && uVar3 <= uVar4);
  }
  else {
    bVar5 = false;
  }
                    /* catch() { ... } // from try @ 009a375c with catch @ 009a3828 */
                    /* catch() { ... } // from try @ 009a371c with catch @ 009a382c */
                    /* catch() { ... } // from try @ 009a3764 with catch @ 009a3830 */
  return bVar5;
}

