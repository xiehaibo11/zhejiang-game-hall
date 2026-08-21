
void lws_vfs_file_seek_set(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aa04f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1,param_2 - *(long *)(param_1 + 0x18));
  return;
}

