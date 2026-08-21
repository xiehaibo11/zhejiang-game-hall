
/* WebSocketImpl::init(cocos2d::network::WebSocket::Delegate const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
WebSocketImpl::init(WebSocketImpl *this,Delegate *param_1,basic_string *param_2,vector *param_3,
                   basic_string *param_4)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  mutex *this_01;
  basic_string *pbVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  void *pvVar5;
  char *__dest;
  char *pcVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  size_t sVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *local_88;
  code *local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x38);
  *(Delegate **)(this + 0xb8) = param_1;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar18 = *(ulong *)(param_2 + 8);
    pbVar1 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar1 = param_2 + 1;
      uVar18 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar1,uVar18);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x138) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4) {
    uVar18 = *(ulong *)(param_4 + 8);
    pbVar1 = *(basic_string **)(param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pbVar1 = param_4 + 1;
      uVar18 = (ulong)((byte)*param_4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x138),(char *)pbVar1,uVar18);
  }
  if (((byte)*this_00 & 1) == 0) {
    if ((byte)*this_00 >> 1 == 0) {
LAB_009eab78:
      uVar10 = 0;
      goto LAB_009eacb0;
    }
  }
  else if (*(long *)(this + 0x40) == 0) goto LAB_009eab78;
  if (param_3 != (vector *)0x0) {
    lVar11 = *(long *)param_3;
    lVar17 = *(long *)(param_3 + 8);
    if (lVar11 != lVar17) {
      lVar15 = lVar17 - lVar11 >> 3;
      sVar13 = lVar15 * 0x5555555555555568 + 0x38;
      pvVar5 = malloc(sVar13);
      *(void **)(this + 0x70) = pvVar5;
      memset(pvVar5,0,sVar13);
      if (lVar17 - lVar11 != 0) {
        *(code **)((long)pvVar5 + 8) = WebSocketCallbackWrapper::onSocketCallback;
        if (lVar17 != lVar11) {
          uVar16 = lVar15 * -0x5555555555555555;
          lVar17 = 0;
          uVar18 = 0;
          lVar15 = 0x20;
          do {
            if ((*(byte *)(lVar11 + lVar17) & 1) == 0) {
              uVar14 = (ulong)(*(byte *)(lVar11 + lVar17) >> 1);
            }
            else {
              uVar14 = *(ulong *)(lVar11 + lVar17 + 8);
            }
            __dest = malloc(uVar14 + 1);
            __dest[uVar14] = '\0';
            if ((*(byte *)(lVar11 + lVar17) & 1) == 0) {
              pcVar6 = (char *)(lVar11 + lVar17 + 1);
            }
            else {
              pcVar6 = *(char **)(lVar11 + lVar17 + 0x10);
            }
            pcVar6 = strcpy(__dest,pcVar6);
            piVar8 = (int *)(*(long *)(this + 0x70) + lVar15);
            *(char **)(piVar8 + -8) = __dest;
            DAT_01d38888 = DAT_01d38888 + 1;
            *piVar8 = DAT_01d38888;
            piVar8[-2] = 0x10000;
            piVar8[-1] = 0;
            piVar8[-4] = 0;
            piVar8[-3] = 0;
            piVar8[2] = 0;
            piVar8[3] = 0;
            sVar13 = strlen(pcVar6);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(this + 0x78),__dest,sVar13);
            if (uVar18 < uVar16 - 1) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)(this + 0x78),",",1);
            }
            uVar18 = uVar18 + 1;
            if (uVar16 <= uVar18) goto LAB_009eab5c;
            lVar11 = *(long *)param_3;
            lVar2 = *(long *)(param_3 + 8);
            lVar17 = lVar17 + 0x18;
            *(code **)(*(long *)(this + 0x70) + lVar15 + 0x20) =
                 WebSocketCallbackWrapper::onSocketCallback;
            uVar14 = (lVar2 - lVar11 >> 3) * -0x5555555555555555;
            lVar15 = lVar15 + 0x38;
          } while (uVar18 <= uVar14 && uVar14 - uVar18 != 0);
        }
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
    }
  }
LAB_009eab5c:
  if (DAT_01d38808 == (undefined8 *)0x0) {
    puVar7 = operator_new(0x40,(nothrow_t *)&std::nothrow);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar7 + 7) = 0;
      puVar7[6] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[1] = 0;
      pvVar5 = operator_new(0x18,(nothrow_t *)&std::nothrow);
      if (pvVar5 != (void *)0x0) {
        *(void **)pvVar5 = pvVar5;
        *(void **)((long)pvVar5 + 8) = pvVar5;
        *(undefined8 *)((long)pvVar5 + 0x10) = 0;
      }
      *puVar7 = pvVar5;
    }
                    /* try { // try from 009eabcc to 00aeabd7 has its CatchHandler @ 009eace4 */
    bVar4 = false;
    DAT_01d38808 = puVar7;
  }
  else {
    bVar4 = true;
  }
  puVar7 = DAT_01d38808;
                    /* try { // try from 009eabd8 to 00aeabe7 has its CatchHandler @ 009eaccc */
  piVar8 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  piVar8[2] = 0;
  piVar8[3] = 0;
  *(WebSocketImpl **)(piVar8 + 4) = this;
  this_01 = (mutex *)(puVar7 + 1);
                    /* try { // try from 009eabfc to 00aeac0b has its CatchHandler @ 009eacc8 */
  WsMessage::__id = WsMessage::__id + 1;
  *piVar8 = WsMessage::__id;
  piVar8[1] = 2;
                    /* try { // try from 009eac0c to 00aeac1f has its CatchHandler @ 009eacb8 */
  std::__ndk1::mutex::lock(this_01);
  plVar12 = (long *)*puVar7;
  plVar9 = operator_new(0x18);
                    /* try { // try from 009eac20 to 00aeae2f has its CatchHandler @ 009e93e4 */
  plVar9[1] = (long)plVar12;
  plVar9[2] = (long)piVar8;
  lVar11 = *plVar12;
  *plVar9 = lVar11;
  *(long **)(lVar11 + 8) = plVar9;
  *plVar12 = (long)plVar9;
  plVar12[2] = plVar12[2] + 1;
  std::__ndk1::mutex::unlock(this_01);
  puVar7 = DAT_01d38808;
  if (bVar4) {
    uVar10 = 1;
  }
  else {
    pvVar5 = operator_new(8,(nothrow_t *)&std::nothrow);
    if (pvVar5 != (void *)0x0) {
      local_88 = puVar7;
      uStack_78 = 0;
      local_80 = WsThreadHelper::wsThreadEntryFunc;
      FUN_009e9988(pvVar5,&local_80,&local_88);
    }
    uVar10 = 1;
    puVar7[6] = pvVar5;
  }
LAB_009eacb0:
                    /* catch() { ... } // from try @ 009eac0c with catch @ 009eacb8 */
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 009eabfc with catch @ 009eacc8 */
                    /* catch() { ... } // from try @ 009eabd8 with catch @ 009eaccc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

