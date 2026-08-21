
/* v8::internal::GlobalHandles::CreateTraced(unsigned long, unsigned long*, bool) */

void v8::internal::GlobalHandles::CreateTraced(ulong param_1,ulong *param_2,bool param_3)

{
  uint in_w3;
  
  CreateTraced((GlobalHandles *)param_1,param_2,param_3,in_w3 & 1);
  return;
}

