
/* cocostudio::timeline::Frame::apply(float) */

void cocostudio::timeline::Frame::apply(float param_1)

{
  long *in_x0;
  
  if ((char)in_x0[5] != '\0') {
    if ((*(int *)((long)in_x0 + 0x2c) != 0) && (*(int *)((long)in_x0 + 0x2c) != 10000)) {
      param_1 = (float)(**(code **)(*in_x0 + 0x98))();
    }
                    /* WARNING: Could not recover jumptable at 0x00ca5efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_x0 + 0x90))(param_1);
    return;
  }
  return;
}

