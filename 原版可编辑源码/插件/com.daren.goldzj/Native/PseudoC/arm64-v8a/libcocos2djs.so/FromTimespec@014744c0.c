
/* v8::base::TimeDelta::FromTimespec(timespec) */

long __thiscall v8::base::TimeDelta::FromTimespec(TimeDelta *this,timespec param_1)

{
  return param_1.tv_sec / 1000 + (long)this * 1000000;
}

