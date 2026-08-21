
void FUN_0120f8fc(undefined8 *param_1)

{
  Mutex *this;
  
  *param_1 = &PTR_FUN_01cbc468;
  if ((param_1[3] != 0) && (param_1[2] != 0)) {
    this = (Mutex *)param_1[1];
    v8::base::Mutex::Lock(this);
    *(undefined8 *)param_1[2] = 0;
    param_1[2] = 0;
    v8::base::Mutex::Unlock(this);
  }
  operator_delete(param_1);
  return;
}

