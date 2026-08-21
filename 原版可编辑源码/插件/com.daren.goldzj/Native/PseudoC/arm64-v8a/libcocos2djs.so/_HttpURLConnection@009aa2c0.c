
/* cocos2d::network::HttpURLConnection::~HttpURLConnection() */

void __thiscall cocos2d::network::HttpURLConnection::~HttpURLConnection(HttpURLConnection *this)

{
  HttpURLConnection HVar1;
  long *plVar2;
  
  if (*(long *)(this + 8) != 0) {
    plVar2 = (long *)JniHelper::getEnv();
    (**(code **)(*plVar2 + 0xb0))(plVar2,*(undefined8 *)(this + 8));
  }
  if (((byte)this[0x58] & 1) == 0) {
    HVar1 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    HVar1 = this[0x40];
  }
  if (((byte)HVar1 & 1) == 0) {
    HVar1 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    HVar1 = this[0x28];
  }
  if (((byte)HVar1 & 1) == 0) {
    HVar1 = this[0x10];
  }
  else {
    operator_delete(*(void **)(this + 0x38));
    HVar1 = this[0x10];
  }
  if (((byte)HVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}

