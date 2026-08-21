
void png_convert_from_time_t(short *param_1,time_t param_2)

{
  tm *ptVar1;
  time_t local_18;
  
  local_18 = param_2;
  ptVar1 = gmtime(&local_18);
  *param_1 = (short)ptVar1->tm_year + 0x76c;
  *(char *)(param_1 + 1) = (char)ptVar1->tm_mon + '\x01';
  *(char *)((long)param_1 + 3) = (char)ptVar1->tm_mday;
  *(char *)(param_1 + 2) = (char)ptVar1->tm_hour;
  *(char *)((long)param_1 + 5) = (char)ptVar1->tm_min;
  *(char *)(param_1 + 3) = (char)ptVar1->tm_sec;
  return;
}

