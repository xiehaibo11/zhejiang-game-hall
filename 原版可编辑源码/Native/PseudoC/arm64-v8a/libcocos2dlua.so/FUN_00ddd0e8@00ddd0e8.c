
void FUN_00ddd0e8(undefined8 *param_1)

{
  void *pvVar1;
  
                    /* try { // try from 00ddd0ec to 00edd0f3 has its CatchHandler @ 00ddd240 */
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
                    /* try { // try from 00ddd0f4 to 00edd0fb has its CatchHandler @ 00ddd23c */
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* try { // try from 00ddd0fc to 00edd103 has its CatchHandler @ 00ddd238 */
  return;
}

