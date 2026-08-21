
/* v8::debug::TypeProfile::ScriptData::Entries() const */

void v8::debug::TypeProfile::ScriptData::Entries(void)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *in_x0;
  vector<v8::debug::TypeProfile::Entry,std::__ndk1::allocator<v8::debug::TypeProfile::Entry>> *in_x8
  ;
  long lVar8;
  long local_58;
  long local_50;
  __shared_weak_count *local_48;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  lVar3 = *(long *)(*in_x0 + 8);
  lVar5 = *(long *)(*in_x0 + 0x10);
  if (lVar3 != lVar5) {
    local_50 = in_x0[1];
    local_48 = (__shared_weak_count *)in_x0[2];
    while( true ) {
      if (local_48 != (__shared_weak_count *)0x0) {
        p_Var1 = local_48 + 8;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar7) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      plVar4 = *(long **)(in_x8 + 8);
      if (plVar4 < *(long **)(in_x8 + 0x10)) {
        *plVar4 = lVar3;
        plVar4[1] = local_50;
        plVar4[2] = (long)local_48;
        *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 0x18;
      }
      else {
        local_58 = lVar3;
        std::__ndk1::
        vector<v8::debug::TypeProfile::Entry,std::__ndk1::allocator<v8::debug::TypeProfile::Entry>>
        ::__push_back_slow_path<v8::debug::TypeProfile::Entry>(in_x8,(Entry *)&local_58);
        p_Var1 = local_48;
        if (local_48 != (__shared_weak_count *)0x0) {
          p_Var2 = local_48 + 8;
          do {
            lVar8 = *(long *)p_Var2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
            if (bVar7) {
              *(long *)p_Var2 = lVar8 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*(long *)local_48 + 0x10))(local_48);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
          }
        }
      }
      lVar3 = lVar3 + 0x20;
      if (lVar3 == lVar5) break;
      local_50 = in_x0[1];
      local_48 = (__shared_weak_count *)in_x0[2];
    }
  }
  return;
}

