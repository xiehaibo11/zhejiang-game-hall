
/* v8::internal::JSDate::JSDateVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::JSDate::JSDateVerify(JSDate *this,Isolate *param_1)

{
  long lVar1;
  
  TorqueGeneratedClassVerifiers::JSDateVerify(*(undefined8 *)this);
  lVar1 = *(long *)this;
  if (((*(uint *)(lVar1 + 0x13) & 1) == 0) && (0xb < (uint)((int)*(uint *)(lVar1 + 0x13) >> 1))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= month && month <= 11");
  }
  if (((*(uint *)(lVar1 + 0x17) & 1) == 0) && (0x1e < ((int)*(uint *)(lVar1 + 0x17) >> 1) - 1U)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","1 <= day && day <= 31");
  }
  if (((*(uint *)(lVar1 + 0x1f) & 1) == 0) && (0x17 < (uint)((int)*(uint *)(lVar1 + 0x1f) >> 1))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= hour && hour <= 23");
  }
  if (((*(uint *)(lVar1 + 0x23) & 1) == 0) && (0x3b < (uint)((int)*(uint *)(lVar1 + 0x23) >> 1))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= min && min <= 59");
  }
  if (((*(uint *)(lVar1 + 0x27) & 1) == 0) && (0x3b < (uint)((int)*(uint *)(lVar1 + 0x27) >> 1))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= sec && sec <= 59");
  }
  if (((*(uint *)(lVar1 + 0x1b) & 1) == 0) && (6 < (uint)((int)*(uint *)(lVar1 + 0x1b) >> 1))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= weekday && weekday <= 6");
  }
  if (((*(uint *)(lVar1 + 0x2b) & 1) == 0) &&
     (*(int *)(*(long *)(param_1 + 0xb638) + 8) >> 1 < (int)*(uint *)(lVar1 + 0x2b) >> 1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "Smi::ToInt(cache_stamp()) <= Smi::ToInt(isolate->date_cache()->stamp())");
  }
  return;
}

