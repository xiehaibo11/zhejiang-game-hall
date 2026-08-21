
/* v8::platform::DefaultPlatform::CurrentClockTimeMillis() */

void v8::platform::DefaultPlatform::CurrentClockTimeMillis(void)

{
  base::OS::TimeCurrentMillis();
  return;
}

