
void FUN_00b4076c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = DAT_017849c0;
  if ((param_1 < DAT_017849d0) || (DAT_017849d0 + DAT_017849d8 <= param_1)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: WITHIN_FREELIST(list)","crypto/mem_sec.c",0x131);
  }
  if (DAT_017849c0 <= param_2) {
    puVar1 = (ulong *)((long)DAT_017849c0 + DAT_017849c8);
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

