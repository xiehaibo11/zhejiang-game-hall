
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int OPENSSL_issetugid(void)

{
  __uid_t _Var1;
  __uid_t _Var2;
  __gid_t _Var3;
  __gid_t _Var4;
  uint uVar5;
  
  _Var1 = getuid();
  _Var2 = geteuid();
  if (_Var1 == _Var2) {
    _Var3 = getgid();
    _Var4 = getegid();
    uVar5 = (uint)(_Var3 != _Var4);
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

