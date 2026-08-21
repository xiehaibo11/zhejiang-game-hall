
/* universe::network::BaseProxy::setAesKey(unsigned char const*, unsigned long) */

void __thiscall
universe::network::BaseProxy::setAesKey(BaseProxy *this,uchar *param_1,ulong param_2)

{
  Encryption::setAesKey((Encryption *)(this + 8),param_1,param_2);
  return;
}

