
/* LOG(char const*, int) */

void LOG(char *param_1,int param_2)

{
  __android_log_print(6,"flipped",param_1,param_2);
  return;
}

