
/* WebSocketImpl::send(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall WebSocketImpl::send(WebSocketImpl *this,basic_string *param_1)

{
  mutex *this_00;
  ulong uVar1;
  basic_string bVar2;
  undefined8 *puVar3;
  char *__dest;
  int *piVar4;
  long *plVar5;
  basic_string *__src;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
                    /* try { // try from 009eaf58 to 00aeaf5b has its CatchHandler @ 009eaf98 */
                    /* try { // try from 009eaf5c to 00aeafdb has its CatchHandler @ 009eae30 */
  if (*(int *)(this + 8) == 1) {
    puVar3 = operator_new(0x28,(nothrow_t *)&std::nothrow);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[4] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009eaf58 with catch @ 009eaf98
                        */
    bVar2 = *param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009eae84 with catch @ 009eaf9c
                        */
    uVar8 = *(ulong *)(param_1 + 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009eaeec with catch @ 009eafa4
                        */
    uVar1 = (ulong)((byte)bVar2 >> 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009eaea8 with catch @ 009eafa8
                        */
    if (((byte)bVar2 & 1) != 0) {
      uVar1 = uVar8;
    }
    __dest = malloc(uVar1 + 1);
    *puVar3 = __dest;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009eaea0 with catch @ 009eafb8
                        */
    if (((byte)bVar2 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009eaee0 with catch @ 009eafbc
                       catch(type#1 @ 00000000) { ... } // from try @ 009eaf28 with catch @ 009eafbc
                        */
      __src = param_1 + 1;
      __dest[(byte)bVar2 >> 1] = '\0';
    }
    else {
                    /* try { // try from 009eafdc to 00aeafdf has its CatchHandler @ 009eafe8 */
      __dest[uVar8] = '\0';
                    /* try { // try from 009eafe0 to 00aeafeb has its CatchHandler @ 009eae30 */
      __src = *(basic_string **)(param_1 + 0x10);
    }
    strcpy(__dest,(char *)__src);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009eafdc with catch @ 009eafe8
                        */
                    /* try { // try from 009eafec to 00aeafef has its CatchHandler @ 009eaff8 */
                    /* try { // try from 009eaff0 to 00aeaffb has its CatchHandler @ 009eae30 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009eafec with catch @ 009eaff8
                        */
                    /* try { // try from 009eaffc to 00aeb07f has its CatchHandler @ 009eaffc
                       catch() { ... } // from try @ 009eaffc with catch @ 009eaffc
                       catch() { ... } // from try @ 009eb0ac with catch @ 009eaffc */
    uVar1 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    puVar3[1] = uVar1;
    piVar4 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    *(undefined8 **)(piVar4 + 2) = puVar3;
    *(WebSocketImpl **)(piVar4 + 4) = this;
    puVar3 = DAT_01d38808;
    this_00 = (mutex *)(DAT_01d38808 + 1);
    WsMessage::__id = WsMessage::__id + 1;
    *piVar4 = WsMessage::__id;
    piVar4[1] = 0;
    std::__ndk1::mutex::lock(this_00);
    plVar7 = (long *)*puVar3;
    plVar5 = operator_new(0x18);
    plVar5[1] = (long)plVar7;
    plVar5[2] = (long)piVar4;
    lVar6 = *plVar7;
    *plVar5 = lVar6;
    *(long **)(lVar6 + 8) = plVar5;
    *plVar7 = (long)plVar5;
    plVar7[2] = plVar7[2] + 1;
                    /* try { // try from 009eb080 to 00aeb08b has its CatchHandler @ 009eb134 */
    std::__ndk1::mutex::unlock(this_00);
    return;
  }
  return;
}

