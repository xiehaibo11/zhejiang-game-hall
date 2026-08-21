
/* WebSocketImpl::send(unsigned char const*, unsigned int) */

void __thiscall WebSocketImpl::send(WebSocketImpl *this,uchar *param_1,uint param_2)

{
  mutex *this_00;
  undefined8 *puVar1;
  undefined1 *__dest;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong __size;
  
                    /* try { // try from 009eb0a4 to 00aeb0ab has its CatchHandler @ 009eb148 */
                    /* try { // try from 009eb0ac to 00aeb17b has its CatchHandler @ 009eaffc */
  if (*(int *)(this + 8) == 1) {
    puVar1 = operator_new(0x28,(nothrow_t *)&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[4] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
    }
    if (param_2 == 0) {
      __dest = malloc(1);
                    /* catch() { ... } // from try @ 009eb080 with catch @ 009eb134 */
      __size = 0;
      *__dest = 0;
    }
    else {
      __size = (ulong)param_2;
      __dest = malloc(__size);
      memcpy(__dest,param_1,__size);
    }
    *puVar1 = __dest;
    puVar1[1] = __size;
                    /* catch() { ... } // from try @ 009eb0a4 with catch @ 009eb148 */
    piVar2 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    *(undefined8 **)(piVar2 + 2) = puVar1;
    *(WebSocketImpl **)(piVar2 + 4) = this;
    puVar1 = DAT_01d38808;
    this_00 = (mutex *)(DAT_01d38808 + 1);
    WsMessage::__id = WsMessage::__id + 1;
    *piVar2 = WsMessage::__id;
    piVar2[1] = 1;
    std::__ndk1::mutex::lock(this_00);
    plVar5 = (long *)*puVar1;
    plVar3 = operator_new(0x18);
    plVar3[1] = (long)plVar5;
    plVar3[2] = (long)piVar2;
    lVar4 = *plVar5;
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    *plVar5 = (long)plVar3;
    plVar5[2] = plVar5[2] + 1;
    std::__ndk1::mutex::unlock(this_00);
    return;
  }
  return;
}

