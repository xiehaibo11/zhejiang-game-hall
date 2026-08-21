
/* cocos2d::network::SocketIO::connect(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::network::SocketIO::SIODelegate&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

SIOClient *
cocos2d::network::SocketIO::connect
          (basic_string *param_1,SIODelegate *param_2,basic_string *param_3)

{
  long lVar1;
  long lVar2;
  SIOClient *this;
  SIOClientImpl *pSVar3;
  void *__dest;
  ulong uVar4;
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  Uri aUStack_180 [136];
  basic_string abStack_f8 [48];
  byte local_c8;
  undefined7 uStack_c7;
  ulong uStack_c0;
  void *local_b8;
  long local_68;
  
                    /* try { // try from 009e6eec to 00ae6f3f has its CatchHandler @ 009e6eec
                       catch() { ... } // from try @ 009e6eec with catch @ 009e6eec
                       catch() { ... } // from try @ 009e6ff8 with catch @ 009e6eec */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Uri::parse((Uri *)param_1,(basic_string *)param_2);
  if ((_inst == (undefined8 *)0x0) &&
     (_inst = operator_new(0x30,(nothrow_t *)&std::nothrow), _inst != (undefined8 *)0x0)) {
                    /* try { // try from 009e6f40 to 00ae6f4b has its CatchHandler @ 009e7034 */
                    /* try { // try from 009e6f4c to 00ae6f53 has its CatchHandler @ 009e7030 */
    _inst[4] = 0;
    _inst[3] = 0;
                    /* try { // try from 009e6f54 to 00ae6ff7 has its CatchHandler @ 009e703c */
    _inst[2] = 0;
    _inst[1] = 0;
    *_inst = &PTR__SocketIO_01c6bed8;
    *(undefined4 *)(_inst + 5) = 0x3f800000;
  }
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>>>
                      *)(_inst + 1),abStack_f8);
  if (lVar2 == 0) {
    pSVar3 = (SIOClientImpl *)0x0;
  }
  else {
    pSVar3 = *(SIOClientImpl **)(lVar2 + 0x28);
  }
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = (void *)0x0;
  if ((local_c8 & 1) == 0) {
    local_1a0 = CONCAT71(uStack_c7,local_c8);
    local_190 = local_b8;
    uStack_198 = uStack_c0;
    goto LAB_009e7010;
  }
  if (0xffffffffffffffef < uStack_c0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_c0 < 0x17) {
    __dest = (void *)((ulong)&local_1a0 | 1);
    local_1a0 = (ulong)(byte)((int)uStack_c0 << 1);
    if (uStack_c0 != 0) goto LAB_009e6ffc;
  }
  else {
    uVar4 = uStack_c0 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_1a0 = uVar4 | 1;
    uStack_198 = uStack_c0;
                    /* try { // try from 009e6ff8 to 00ae7057 has its CatchHandler @ 009e6eec */
    local_190 = __dest;
LAB_009e6ffc:
    memcpy(__dest,local_b8,uStack_c0);
  }
  *(undefined1 *)((long)__dest + uStack_c0) = 0;
LAB_009e7010:
  uVar4 = local_1a0 >> 1 & 0x7f;
  if ((local_1a0 & 1) != 0) {
    uVar4 = uStack_198;
  }
  if (uVar4 == 0) {
                    /* catch() { ... } // from try @ 009e6f4c with catch @ 009e7030 */
                    /* catch() { ... } // from try @ 009e6f40 with catch @ 009e7034 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_1a0,"/",1);
  }
                    /* catch() { ... } // from try @ 009e6f54 with catch @ 009e703c */
  if (pSVar3 == (SIOClientImpl *)0x0) {
                    /* try { // try from 009e717c to 00ae718b has its CatchHandler @ 009e7468 */
    pSVar3 = operator_new(0x1a0,(nothrow_t *)&std::nothrow);
    if (pSVar3 != (SIOClientImpl *)0x0) {
                    /* try { // try from 009e7190 to 00ae719b has its CatchHandler @ 009e7460 */
      SIOClientImpl::SIOClientImpl(pSVar3,aUStack_180,param_3);
    }
                    /* try { // try from 009e71a8 to 00ae71cf has its CatchHandler @ 009e7480 */
    this = operator_new(0x88,(nothrow_t *)&std::nothrow);
    if (this != (SIOClient *)0x0) {
      SIOClient::SIOClient(this,(basic_string *)&local_1a0,pSVar3,param_2);
    }
                    /* try { // try from 009e71d4 to 00ae71df has its CatchHandler @ 009e7450 */
    Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
    ::insert((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
              *)(pSVar3 + 0x178),(basic_string *)&local_1a0,this);
    SIOClientImpl::handshake(pSVar3);
  }
  else {
    lVar2 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>>>
                        *)(pSVar3 + 0x178),(basic_string *)&local_1a0);
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x28), lVar2 == 0)) {
                    /* try { // try from 009e70e0 to 00ae70eb has its CatchHandler @ 009e74e0 */
                    /* try { // try from 009e70ec to 00ae7103 has its CatchHandler @ 009e74f8 */
      this = operator_new(0x88,(nothrow_t *)&std::nothrow);
      if (this != (SIOClient *)0x0) {
        SIOClient::SIOClient(this,(basic_string *)&local_1a0,pSVar3,param_2);
      }
      Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
      ::insert((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
                *)(pSVar3 + 0x178),(basic_string *)&local_1a0,this);
      SIOClientImpl::connectToEndpoint(pSVar3,(basic_string *)&local_1a0);
    }
    else {
                    /* try { // try from 009e7058 to 00ae70b3 has its CatchHandler @ 009e7058
                       catch() { ... } // from try @ 009e7058 with catch @ 009e7058
                       catch() { ... } // from try @ 009e72ec with catch @ 009e7058
                       catch() { ... } // from try @ 009e73ec with catch @ 009e7058 */
      if (*(char *)(lVar2 + 0x40) != '\0') {
        *(undefined1 *)(lVar2 + 0x40) = 0;
        SIOClientImpl::disconnectFromEndpoint(*(basic_string **)(lVar2 + 0x48));
      }
      pSVar3 = operator_new(0x1a0,(nothrow_t *)&std::nothrow);
      if (pSVar3 != (SIOClientImpl *)0x0) {
        SIOClientImpl::SIOClientImpl(pSVar3,aUStack_180,param_3);
      }
      this = operator_new(0x88,(nothrow_t *)&std::nothrow);
      if (this != (SIOClient *)0x0) {
                    /* try { // try from 009e70b4 to 00ae70cb has its CatchHandler @ 009e74e8 */
        SIOClient::SIOClient(this,(basic_string *)&local_1a0,pSVar3,param_2);
      }
      Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
      ::insert((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
                *)(pSVar3 + 0x178),(basic_string *)&local_1a0,this);
                    /* try { // try from 009e70d4 to 00ae70df has its CatchHandler @ 009e74e4 */
      SIOClientImpl::handshake(pSVar3);
    }
  }
                    /* try { // try from 009e712c to 00ae7133 has its CatchHandler @ 009e74a8 */
  if ((local_1a0 & 1) != 0) {
    operator_delete(local_190);
  }
                    /* try { // try from 009e7138 to 00ae714f has its CatchHandler @ 009e7474 */
  Uri::~Uri(aUStack_180);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009e71e4 to 00ae71eb has its CatchHandler @ 009e7440 */
    __stack_chk_fail();
  }
                    /* try { // try from 009e7154 to 00ae715b has its CatchHandler @ 009e746c */
                    /* try { // try from 009e715c to 00ae717b has its CatchHandler @ 009e7478 */
  return this;
}

