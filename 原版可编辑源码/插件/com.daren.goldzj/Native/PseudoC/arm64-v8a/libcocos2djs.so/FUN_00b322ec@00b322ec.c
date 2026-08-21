
void FUN_00b322ec(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = DAT_01d3ac40;
  if ((param_1 < DAT_01d3ac50) || (DAT_01d3ac50 + DAT_01d3ac58 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: WITHIN_FREELIST(list)","crypto/mem_sec.c",0x131);
  }
  if (DAT_01d3ac40 <= param_2) {
    puVar1 = (ulong *)((long)DAT_01d3ac40 + DAT_01d3ac48);
    if (param_2 < puVar1) {
      puVar3 = (ulong *)*param_1;
      *param_2 = (ulong)puVar3;
      if (puVar3 == (ulong *)0x0) {
        param_2[1] = (ulong)param_1;
      }
      else {
        if ((puVar3 < puVar2) || (puVar1 <= puVar3)) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: temp->next == NULL || WITHIN_ARENA(temp->next)",
                      "crypto/mem_sec.c",0x136);
        }
        param_2[1] = (ulong)param_1;
        if ((ulong *)puVar3[1] != param_1) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: (char **)temp->next->p_next == list","crypto/mem_sec.c",
                      0x13a);
        }
        puVar3[1] = (ulong)param_2;
      }
      *param_1 = (ulong)param_2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","crypto/mem_sec.c",0x132);
}

