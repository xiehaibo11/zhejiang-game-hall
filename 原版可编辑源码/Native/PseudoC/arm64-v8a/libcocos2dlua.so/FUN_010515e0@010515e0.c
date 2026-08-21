
void FUN_010515e0(undefined1 *param_1,undefined1 *param_2)

{
  FUN_01050ca4();
  *param_2 = param_1[3];
  param_2[1] = param_1[2];
  param_2[2] = param_1[1];
  param_2[3] = *param_1;
  param_2[4] = param_1[7];
  param_2[5] = param_1[6];
                    /* try { // try from 0105162c to 0115163f has its CatchHandler @ 010534fc */
  param_2[6] = param_1[5];
  param_2[7] = param_1[4];
  param_2[8] = param_1[0xb];
                    /* try { // try from 01051644 to 0115166b has its CatchHandler @ 0105356c */
  param_2[9] = param_1[10];
  param_2[10] = param_1[9];
  param_2[0xb] = param_1[8];
  param_2[0xc] = param_1[0xf];
  param_2[0xd] = param_1[0xe];
  param_2[0xe] = param_1[0xd];
  param_2[0xf] = param_1[0xc];
                    /* try { // try from 0105167c to 0115168f has its CatchHandler @ 010534f4 */
  param_2[0x10] = param_1[0x13];
  param_2[0x11] = param_1[0x12];
  param_2[0x12] = param_1[0x11];
                    /* try { // try from 01051694 to 011516bb has its CatchHandler @ 01053544 */
  param_2[0x13] = param_1[0x10];
  return;
}

