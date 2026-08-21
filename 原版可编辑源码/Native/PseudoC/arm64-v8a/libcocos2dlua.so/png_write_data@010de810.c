
void png_write_data(long param_1)

{
  if (*(code **)(param_1 + 0x130) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x010de818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x130))();
    return;
  }
                    /* try { // try from 010de824 to 011de893 has its CatchHandler @ 010de824
                       catch() { ... } // from try @ 010de824 with catch @ 010de824
                       catch() { ... } // from try @ 010de898 with catch @ 010de824 */
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Call to NULL write function");
}

