
undefined8 FUN_0106b2f0(long param_1)

{
  undefined8 uVar1;
  
  if (**(long **)(param_1 + 8) != 0) {
    uVar1 = v8::internal::GetPlatformPageAllocator();
    uVar1 = v8::internal::SetPermissions
                      (uVar1,**(undefined8 **)(param_1 + 0x10),**(undefined8 **)(param_1 + 8),2);
    return uVar1;
  }
  return 1;
}

