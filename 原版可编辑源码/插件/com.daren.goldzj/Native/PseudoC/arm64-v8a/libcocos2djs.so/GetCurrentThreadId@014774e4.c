
/* v8::base::OS::GetCurrentThreadId() */

void v8::base::OS::GetCurrentThreadId(void)

{
  syscall(0xb2);
  return;
}

