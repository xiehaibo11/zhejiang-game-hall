
void lws_vfs_file_seek_end(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01042c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))
            (param_1,*(long *)(param_1 + 0x20) + param_2 + *(long *)(param_1 + 0x18));
  return;
}

