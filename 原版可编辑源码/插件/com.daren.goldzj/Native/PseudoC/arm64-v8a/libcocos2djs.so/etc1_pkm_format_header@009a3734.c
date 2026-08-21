
void etc1_pkm_format_header(undefined8 *param_1,int param_2,int param_3)

{
                    /* try { // try from 009a3744 to 00aa374b has its CatchHandler @ 009a3810 */
                    /* try { // try from 009a374c to 00aa375b has its CatchHandler @ 009a3840 */
  *param_1 = 0x3031204d4b50;
  *(char *)((long)param_1 + 0xc) = (char)((uint)param_2 >> 8);
                    /* try { // try from 009a375c to 00aa3763 has its CatchHandler @ 009a3828 */
  *(char *)((long)param_1 + 0xe) = (char)((uint)param_3 >> 8);
                    /* try { // try from 009a3764 to 00aa3793 has its CatchHandler @ 009a3830 */
  *(char *)((long)param_1 + 0xd) = (char)param_2;
  *(char *)(param_1 + 1) = (char)((uint)(param_2 + 3) >> 8);
  *(byte *)((long)param_1 + 9) = (byte)(param_2 + 3) & 0xfc;
  *(char *)((long)param_1 + 10) = (char)((uint)(param_3 + 3) >> 8);
  *(byte *)((long)param_1 + 0xb) = (byte)(param_3 + 3) & 0xfc;
  *(char *)((long)param_1 + 0xf) = (char)param_3;
  return;
}

