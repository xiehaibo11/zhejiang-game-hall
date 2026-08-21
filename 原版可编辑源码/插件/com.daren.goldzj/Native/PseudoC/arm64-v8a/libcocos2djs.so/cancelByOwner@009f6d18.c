
/* universe::core::Service::cancelByOwner(void*) */

void universe::core::Service::cancelByOwner(void *param_1)

{
  void *in_x1;
  
  Computational::eraseByOwner(param_1,in_x1);
  return;
}

