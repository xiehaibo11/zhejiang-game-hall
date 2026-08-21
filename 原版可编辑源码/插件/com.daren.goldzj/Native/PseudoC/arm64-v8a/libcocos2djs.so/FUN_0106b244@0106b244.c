
bool FUN_0106b244(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = v8::internal::GetPlatformPageAllocator();
  uVar1 = v8::internal::AllocatePages(uVar1,0,**(undefined8 **)(param_1 + 0x10),0x10000,0);
  **(undefined8 **)(param_1 + 8) = uVar1;
  return **(long **)(param_1 + 8) != 0;
}

