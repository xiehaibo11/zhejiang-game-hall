
bool etc2_pkm_is_valid(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = memcmp(param_1,"PKM 20",6);
  if (iVar6 == 0) {
    uVar1 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 0xe),*(undefined1 *)((long)param_1 + 0xf)
                          );
    uVar2 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 8),*(undefined1 *)((long)param_1 + 9));
    uVar3 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 0xc),*(undefined1 *)((long)param_1 + 0xd)
                          );
    uVar4 = (uint)CONCAT11(*(undefined1 *)((long)param_1 + 10),*(undefined1 *)((long)param_1 + 0xb))
    ;
                    /* try { // try from 009a3ebc to 00aa3f6b has its CatchHandler @ 009a3ebc
                       catch() { ... } // from try @ 009a3ebc with catch @ 009a3ebc
                       catch() { ... } // from try @ 009a3fa8 with catch @ 009a3ebc */
    bVar5 = uVar4 - uVar1 < 4 &&
            ((((ushort)(CONCAT11(*(undefined1 *)((long)param_1 + 6),
                                 *(undefined1 *)((long)param_1 + 7)) | 2) == 3 && uVar3 <= uVar2) &&
             uVar2 - uVar3 < 4) && uVar1 <= uVar4);
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

