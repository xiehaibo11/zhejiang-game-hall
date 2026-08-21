
void FUN_00a53204(long param_1,undefined8 param_2,long param_3)

{
                    /* try { // try from 00a5320c to 00b53223 has its CatchHandler @ 00a53318 */
  if (param_3 != 0) {
    FUN_00a54d8c(param_1 + 0x618,"AUTH %s %s",param_2,param_3);
    return;
  }
  FUN_00a54d8c(param_1 + 0x618,"AUTH %s",param_2);
  return;
}

