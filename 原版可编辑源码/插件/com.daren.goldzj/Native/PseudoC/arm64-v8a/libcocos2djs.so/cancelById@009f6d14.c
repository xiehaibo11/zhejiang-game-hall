
/* universe::core::Service::cancelById(unsigned int) */

void universe::core::Service::cancelById(uint param_1)

{
  uint in_w1;
  
  Computational::eraseById((Computational *)(ulong)param_1,in_w1);
  return;
}

