
/* v8::base::OS::AllocatePageSize() */

void v8::base::OS::AllocatePageSize(void)

{
  sysconf(0x27);
  return;
}

