
void FUN_00d90f0c(long *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  jpeg_destroy(param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}

