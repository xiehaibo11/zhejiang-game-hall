
/* cocos2d::network::DownloadTaskAndroid::~DownloadTaskAndroid() */

void __thiscall
cocos2d::network::DownloadTaskAndroid::~DownloadTaskAndroid(DownloadTaskAndroid *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this_00;
  
                    /* try { // try from 009a86ec to 00aa8703 has its CatchHandler @ 009a88d4 */
  this_00 = *(__shared_weak_count **)(this + 0x18);
  *(undefined ***)this = &PTR__DownloadTaskAndroid_01c6a968;
                    /* try { // try from 009a870c to 00aa8717 has its CatchHandler @ 009a88d0 */
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar4 = *(long *)p_Var1;
                    /* try { // try from 009a8718 to 00aa8723 has its CatchHandler @ 009a88cc */
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
                    /* try { // try from 009a8724 to 00aa8857 has its CatchHandler @ 009a88e4 */
    if (lVar4 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
      return;
    }
  }
  return;
}

