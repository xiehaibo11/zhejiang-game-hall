
/* cocos2d::network::HttpClient::decreaseThreadCountAndMayDeleteThis() */

void __thiscall cocos2d::network::HttpClient::decreaseThreadCountAndMayDeleteThis(HttpClient *this)

{
  int iVar1;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0x68));
  iVar1 = *(int *)(this + 100);
  *(int *)(this + 100) = iVar1 + -1;
  std::__ndk1::mutex::unlock((mutex *)(this + 0x68));
  if ((this != (HttpClient *)0x0) && (iVar1 + -1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00e999b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))(this);
    return;
  }
  return;
}

