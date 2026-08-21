
void fill_fopen_filefunc(undefined8 *param_1)

{
  *param_1 = fopen_file_func;
  param_1[3] = ftell_file_func;
  param_1[4] = fseek_file_func;
  param_1[2] = fwrite_file_func;
  param_1[1] = fread_file_func;
  param_1[7] = 0;
  param_1[6] = ferror_file_func;
  param_1[5] = fclose_file_func;
  return;
}

