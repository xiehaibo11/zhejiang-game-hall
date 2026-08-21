
/* v8::internal::StringToDouble(char const*, int, double) */

void v8::internal::StringToDouble(char *param_1,int param_2,double param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  InternalStringToDouble<unsigned_char_const*,unsigned_char_const*>
            ((uchar *)param_1,(uchar *)(param_1 + sVar1),param_2,param_3);
  return;
}

