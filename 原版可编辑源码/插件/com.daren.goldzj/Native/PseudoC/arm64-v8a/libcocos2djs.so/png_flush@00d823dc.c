
void png_flush(long param_1)

{
  if (*(code **)(param_1 + 0x2d8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d823e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x2d8))();
    return;
  }
  return;
}

