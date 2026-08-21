
/* universe::core::Computational::pushFront(std::__ndk1::unique_ptr<universe::core::Provided,
   std::__ndk1::default_delete<universe::core::Provided> >) */

void __thiscall universe::core::Computational::pushFront(Computational *this,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(*param_2 + 0x18) = 0x7fffffff;
  std::__ndk1::mutex::lock((mutex *)(this + 0x18));
  puVar1 = operator_new(0x18);
  lVar2 = *param_2;
  *param_2 = 0;
  puVar1[2] = lVar2;
  puVar3 = *(undefined8 **)(this + 8);
  *puVar1 = this;
  puVar1[1] = puVar3;
  *puVar3 = puVar1;
  *(undefined8 **)(this + 8) = puVar1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  std::__ndk1::mutex::unlock((mutex *)(this + 0x18));
  std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0x40));
  return;
}

