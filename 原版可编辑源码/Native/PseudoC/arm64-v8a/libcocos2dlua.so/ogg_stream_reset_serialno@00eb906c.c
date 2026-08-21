
undefined8 ogg_stream_reset_serialno(long param_1,int param_2)

{
  ogg_stream_reset();
  *(long *)(param_1 + 0x28) = (long)param_2;
  return 0;
}

