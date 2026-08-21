
void CONF_imodule_set_flags(CONF_IMODULE *md,ulong flags)

{
                    /* try { // try from 00b01fd4 to 00c02027 has its CatchHandler @ 00b01e74 */
  *(ulong *)(md + 0x18) = flags;
  return;
}

