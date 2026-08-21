
void fill_fopen_filefunc(undefined8 *param_1)

{
                    /* try { // try from 00a0d150 to 00b0d15f has its CatchHandler @ 00a0d27c */
  *param_1 = fopen_file_func;
  param_1[3] = ftell_file_func;
  param_1[4] = fseek_file_func;
                    /* try { // try from 00a0d178 to 00b0d17f has its CatchHandler @ 00a0d2e4 */
                    /* try { // try from 00a0d180 to 00b0d197 has its CatchHandler @ 00a0d2c4 */
  param_1[2] = fwrite_file_func;
  param_1[1] = fread_file_func;
  param_1[7] = 0;
  param_1[6] = ferror_file_func;
  param_1[5] = fclose_file_func;
  return;
}

