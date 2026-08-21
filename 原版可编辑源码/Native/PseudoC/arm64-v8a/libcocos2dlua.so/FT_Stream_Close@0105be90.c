
void FT_Stream_Close(long param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x30) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0105be9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x30))();
    return;
  }
  return;
}

