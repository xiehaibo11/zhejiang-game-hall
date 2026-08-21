
bool etc1_pkm_is_valid(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  
                    /* try { // try from 00fcbe7c to 010cbeaf has its CatchHandler @ 00fcbe7c
                       catch() { ... } // from try @ 00fcbe7c with catch @ 00fcbe7c
                       catch() { ... } // from try @ 00fcbeec with catch @ 00fcbe7c */
  iVar6 = memcmp(param_1,"PKM 10",6);
  if (iVar6 == 0) {
    uVar1 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 10),*(undefined1 *)((long)param_1 + 0xb))
    ;
    uVar2 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 0xe),*(undefined1 *)((long)param_1 + 0xf)
                          );
    bVar5 = false;
                    /* try { // try from 00fcbeb0 to 010cbeeb has its CatchHandler @ 00fcbef8 */
    if ((uVar2 <= uVar1) &&
       (CONCAT11(*(undefined1 *)((long)param_1 + 6),*(undefined1 *)((long)param_1 + 7)) == 0)) {
      uVar3 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 8),*(undefined1 *)((long)param_1 + 9));
      uVar4 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 0xc),
                             *(undefined1 *)((long)param_1 + 0xd));
      if ((uVar4 <= uVar3) && (uVar3 - uVar4 < 4)) {
                    /* try { // try from 00fcbeec to 010cbf0b has its CatchHandler @ 00fcbe7c */
        bVar5 = uVar1 - uVar2 < 4;
      }
    }
  }
  else {
    bVar5 = false;
  }
                    /* catch() { ... } // from try @ 00fcbeb0 with catch @ 00fcbef8 */
  return bVar5;
}

