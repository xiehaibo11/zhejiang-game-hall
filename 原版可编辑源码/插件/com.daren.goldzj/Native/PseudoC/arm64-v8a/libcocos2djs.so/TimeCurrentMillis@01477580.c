
/* v8::base::OS::TimeCurrentMillis() */

void v8::base::OS::TimeCurrentMillis(void)

{
  undefined8 local_18;
  
  local_18 = Time::Now();
  Time::ToJsTime((Time *)&local_18);
  return;
}

