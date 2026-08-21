
/* v8::Platform::SystemClockTimeMillis() */

void v8::Platform::SystemClockTimeMillis(void)

{
  base::OS::TimeCurrentMillis();
  return;
}

