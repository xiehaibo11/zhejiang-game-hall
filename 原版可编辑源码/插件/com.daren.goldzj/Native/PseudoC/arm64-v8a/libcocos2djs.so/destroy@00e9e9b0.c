
/* std::__ndk1::__tree<std::__ndk1::__value_type<v8::Isolate*,
   std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner> >,
   std::__ndk1::__map_value_compare<v8::Isolate*, std::__ndk1::__value_type<v8::Isolate*,
   std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner> >,
   std::__ndk1::less<v8::Isolate*>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<v8::Isolate*,
   std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner> > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::Isolate*,
   std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner> >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>,std::__ndk1::__map_value_compare<v8::Isolate*,std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>,std::__ndk1::less<v8::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>>>
::destroy(__tree<std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>,std::__ndk1::__map_value_compare<v8::Isolate*,std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>,std::__ndk1::less<v8::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>>>
          *this,__tree_node *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this_00;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    this_00 = *(__shared_weak_count **)(param_1 + 0x30);
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        lVar4 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        __shared_weak_count::__release_weak(this_00);
      }
    }
    operator_delete(param_1);
    return;
  }
  return;
}

