
undefined8 FUN_0090fb48(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  WebSocket *this;
  uchar *__s;
  size_t sVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  size_t local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0090fb7c to 00a0fb97 has its CatchHandler @ 0090fcf8 */
  iVar2 = tolua_isusertype(param_1,1,"cc.WebSocket",0,auStack_48);
                    /* try { // try from 0090fbb0 to 00a0fbc7 has its CatchHandler @ 0090fcec */
  if (((iVar2 == 0) || (iVar2 = tolua_isstring(param_1,2,0,auStack_48), iVar2 == 0)) ||
     (iVar2 = tolua_isnoobj(param_1,3,auStack_48), iVar2 == 0)) {
                    /* try { // try from 0090fc30 to 00a0fc3f has its CatchHandler @ 0090fcf0 */
    tolua_error(param_1,"#ferror in function \'sendString\'.",auStack_48);
  }
  else {
    this = (WebSocket *)tolua_tousertype(param_1,1,0);
    local_50 = 0;
                    /* try { // try from 0090fbd8 to 00a0fbeb has its CatchHandler @ 0090fce8 */
    __s = (uchar *)lua_tolstring(param_1,2,&local_50);
    if (__s != (uchar *)0x0) {
      sVar3 = strlen((char *)__s);
      if (sVar3 == local_50) {
                    /* try { // try from 0090fbfc to 00a0fc13 has its CatchHandler @ 0090fcf4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_68,(char *)__s);
        cocos2d::network::WebSocket::send(this,(basic_string *)local_68);
        if (((byte)local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
      }
      else {
        cocos2d::network::WebSocket::send(this,__s,(uint)local_50);
      }
    }
  }
                    /* try { // try from 0090fc40 to 00a0fd13 has its CatchHandler @ 0090fb20 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

