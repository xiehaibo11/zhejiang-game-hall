
void FUN_008574dc(undefined8 param_1,float *param_2)

{
  Service *this;
  float fVar1;
  
  fVar1 = *param_2;
  this = (Service *)universe::core::Service::getInstance();
  universe::core::Service::tick(this,fVar1);
  return;
}

