
void FUN_009b6788(undefined8 param_1,undefined8 param_2,float *param_3,char param_4)

{
  if (param_4 == '\x01') {
    glUniform1i(param_1,*param_3);
    return;
  }
  glUniform1i(param_1,(int)*param_3);
  return;
}

