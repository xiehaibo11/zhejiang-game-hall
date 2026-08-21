
/* LOG(char const*, char const*) */

void LOG(char *param_1,char *param_2)

{
  __android_log_print(6,"flipped",param_1,param_2);
  return;
}

