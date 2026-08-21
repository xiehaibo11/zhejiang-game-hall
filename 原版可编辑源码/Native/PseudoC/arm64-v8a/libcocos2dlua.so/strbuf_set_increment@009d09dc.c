
void strbuf_set_increment(long param_1,int param_2)

{
  if (1 < param_2 + 1U) {
    *(int *)(param_1 + 0x10) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d08d4("BUG: Invalid string increment");
}

