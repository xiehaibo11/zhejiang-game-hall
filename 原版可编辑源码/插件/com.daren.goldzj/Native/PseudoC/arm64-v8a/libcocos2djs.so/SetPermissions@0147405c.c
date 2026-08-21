
/* v8::base::PageAllocator::SetPermissions(void*, unsigned long, v8::PageAllocator::Permission) */

void __thiscall
v8::base::PageAllocator::SetPermissions
          (undefined8 param_1_00,undefined8 param_1,undefined8 param_2,undefined4 param_4)

{
  OS::SetPermissions(param_1,param_2,param_4);
  return;
}

