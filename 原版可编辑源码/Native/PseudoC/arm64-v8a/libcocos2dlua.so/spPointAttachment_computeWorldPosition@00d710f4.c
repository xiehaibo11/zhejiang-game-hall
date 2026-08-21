
void spPointAttachment_computeWorldPosition(long param_1,long param_2,float *param_3,float *param_4)

{
                    /* try { // try from 00d710f8 to 00e7110f has its CatchHandler @ 00d7146c */
  *param_3 = *(float *)(param_2 + 0x6c) +
             *(float *)(param_1 + 0x48) * *(float *)(param_2 + 100) +
             *(float *)(param_1 + 0x4c) * *(float *)(param_2 + 0x68);
                    /* try { // try from 00d71120 to 00e7112f has its CatchHandler @ 00d71468 */
  *param_4 = *(float *)(param_2 + 0x78) +
             *(float *)(param_1 + 0x48) * *(float *)(param_2 + 0x70) +
             *(float *)(param_1 + 0x4c) * *(float *)(param_2 + 0x74);
                    /* try { // try from 00d71134 to 00e7114b has its CatchHandler @ 00d71464 */
  return;
}

