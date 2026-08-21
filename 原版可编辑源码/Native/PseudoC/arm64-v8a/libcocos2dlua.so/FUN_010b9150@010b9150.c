
void FUN_010b9150(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x010b915c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 010b915c to 011b916f has its CatchHandler @ 010b91a8 */
  (**(code **)(*(long *)(*param_1 + 0x300) + 0x10))();
  return;
}

