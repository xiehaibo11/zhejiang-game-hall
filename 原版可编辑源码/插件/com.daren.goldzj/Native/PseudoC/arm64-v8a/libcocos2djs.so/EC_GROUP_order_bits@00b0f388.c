
void EC_GROUP_order_bits(long *param_1)

{
  if (*(code **)(*param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0f394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: group->meth->group_order_bits != NULL","crypto/ec/ec_lib.c",0x148);
}

