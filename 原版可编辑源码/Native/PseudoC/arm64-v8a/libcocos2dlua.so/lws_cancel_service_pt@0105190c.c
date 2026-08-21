
void lws_cancel_service_pt(long param_1)

{
  ssize_t sVar1;
  undefined1 local_14 [4];
  
                    /* try { // try from 01051910 to 01151933 has its CatchHandler @ 01053920 */
  local_14[0] = 0;
  sVar1 = write(*(int *)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 +
                        0x7c4),local_14,1);
  if (sVar1 != 1) {
    _lws_log(1,"Cannot write to dummy pipe");
  }
                    /* try { // try from 01051954 to 01151967 has its CatchHandler @ 010537fc */
  return;
}

