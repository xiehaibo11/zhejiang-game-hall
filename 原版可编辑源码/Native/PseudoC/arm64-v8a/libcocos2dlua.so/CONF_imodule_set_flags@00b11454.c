
void CONF_imodule_set_flags(CONF_IMODULE *md,ulong flags)

{
  *(ulong *)(md + 0x18) = flags;
  return;
}

