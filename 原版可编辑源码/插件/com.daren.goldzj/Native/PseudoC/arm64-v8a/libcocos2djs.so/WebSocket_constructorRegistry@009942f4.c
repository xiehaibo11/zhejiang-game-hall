
/* WebSocket_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void WebSocket_constructorRegistry(FunctionCallbackInfo *param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  Value *pVVar6;
  Value *pVVar7;
  void *pvVar8;
  Object *this;
  long *plVar9;
  Object *pOVar10;
  ulong uVar11;
  Object *pOVar12;
  WebSocket *this_00;
  Ref *pRVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  WebSocket *pWVar19;
  Delegate *pDVar20;
  ulong *puVar21;
  Value *local_140;
  Value *local_138;
  undefined8 local_130;
  HandleScope aHStack_128 [28];
  uint local_10c;
  ulong *local_108;
  ulong *local_100;
  ulong *local_f8;
  State aSStack_f0 [40];
  Value aVStack_c8 [16];
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  
  lVar2 = tpidr_el0;
  lVar14 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00994324 to 00a9432b has its CatchHandler @ 00994620 */
  __jsbInvocationCount = __jsbInvocationCount + 1;
                    /* try { // try from 00994340 to 00a94347 has its CatchHandler @ 009945f8 */
  v8::HandleScope::HandleScope(aHStack_128,*(Isolate **)(*(long *)param_1 + 8));
  local_140 = (Value *)0x0;
  local_138 = (Value *)0x0;
  local_130 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_140,10);
                    /* try { // try from 0099435c to 00a94363 has its CatchHandler @ 009945d4 */
  se::internal::jsToSeArgs(param_1,(vector *)&local_140);
                    /* try { // try from 00994370 to 00a9439b has its CatchHandler @ 009945d8 */
  this = (Object *)se::Object::_createJSObject(__jsb_WebSocket_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,WebSocket_finalizeRegistry);
  se::State::State(aSStack_f0,this,(vector *)&local_140);
  plVar9 = (long *)se::State::args(aSStack_f0);
  uVar16 = (ulong)(plVar9[1] - *plVar9) >> 4;
  iVar15 = (int)uVar16;
  if (iVar15 - 1U < 3) {
    local_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    uVar16 = seval_to_std_string((Value *)*plVar9,(basic_string *)&local_88);
    if ((uVar16 & 1) == 0) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                          ,0x126,"WebSocket_constructor");
      __android_log_print(6,"jswrapper","Error processing url argument");
LAB_00994a10:
      bVar3 = false;
    }
    else {
      pOVar10 = (Object *)se::State::thisObject(aSStack_f0);
      if (iVar15 < 2) {
        this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
        if (this_00 == (WebSocket *)0x0) {
          pWVar19 = (WebSocket *)0x0;
        }
        else {
          cocos2d::network::WebSocket::WebSocket(this_00);
          pWVar19 = this_00;
        }
                    /* try { // try from 00994508 to 00a9455b has its CatchHandler @ 00994654 */
        pRVar13 = operator_new(0x28,(nothrow_t *)&std::nothrow);
        if (pRVar13 == (Ref *)0x0) {
          pDVar20 = (Delegate *)0x10;
        }
        else {
          cocos2d::Ref::Ref(pRVar13);
          pDVar20 = (Delegate *)(pRVar13 + 0x10);
          *(undefined ***)pDVar20 = &PTR__JSB_WebSocketDelegate_01c6a5b0;
          *(undefined ***)pRVar13 = &PTR__JSB_WebSocketDelegate_01c6a570;
          se::Value::Value((Value *)(pRVar13 + 0x18));
        }
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
                    /* try { // try from 0099455c to 00a946ab has its CatchHandler @ 0099418c */
        uVar16 = cocos2d::network::WebSocket::init
                           (pWVar19,pDVar20,(basic_string *)&local_88,(vector *)0x0,
                            (basic_string *)&local_a0);
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((uVar16 & 1) == 0) {
          cocos2d::Ref::release((Ref *)pWVar19);
          cocos2d::Ref::release(pRVar13);
                    /* catch() { ... } // from try @ 0099435c with catch @ 009945d4 */
                    /* catch() { ... } // from try @ 00994370 with catch @ 009945d8
                       catch() { ... } // from try @ 00994480 with catch @ 009945d8 */
          __android_log_print(6,"jswrapper",
                              "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 366): WebSocket init failed!\n"
                             );
          goto LAB_00994a10;
        }
        se::Value::Value((Value *)&local_a0,pOVar10,true);
        se::Value::operator=((Value *)(pRVar13 + 0x18),(Value *)&local_a0);
        se::Value::~Value((Value *)&local_a0);
        cocos2d::Ref::retain((Ref *)pWVar19);
        cocos2d::Ref::retain(pRVar13);
      }
      else {
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = (void *)0x0;
        local_108 = (ulong *)0x0;
        local_100 = (ulong *)0x0;
        local_f8 = (ulong *)0x0;
        cVar1 = *(char *)(*plVar9 + 0x18);
        if (cVar1 == '\x05') {
          pOVar12 = (Object *)se::Value::toObject((Value *)(*plVar9 + 0x10));
          uVar16 = se::Object::isArray(pOVar12);
          if ((uVar16 & 1) != 0) {
                    /* catch() { ... } // from try @ 00994340 with catch @ 009945f8 */
                    /* catch() { ... } // from try @ 0099427c with catch @ 009945fc */
            pOVar12 = (Object *)se::Value::toObject((Value *)(*plVar9 + 0x10));
                    /* catch() { ... } // from try @ 00994290 with catch @ 00994600
                       catch() { ... } // from try @ 00994428 with catch @ 00994600 */
            local_10c = 0;
            uVar16 = se::Object::getArrayLength(pOVar12,&local_10c);
            if ((uVar16 & 1) == 0) {
                    /* catch() { ... } // from try @ 00994778 with catch @ 0099498c */
                    /* catch() { ... } // from try @ 00994788 with catch @ 00994990
                       catch() { ... } // from try @ 00994870 with catch @ 00994990 */
              __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                                  ,0x13b,"WebSocket_constructor");
              __android_log_print(6,"jswrapper","getArrayLength failed!");
              goto LAB_009949ac;
            }
            se::Value::Value(aVStack_c8);
                    /* catch() { ... } // from try @ 00994324 with catch @ 00994620 */
            if (local_10c != 0) {
                    /* catch() { ... } // from try @ 00994260 with catch @ 00994624 */
              uVar18 = 0;
              do {
                uVar16 = se::Object::getArrayElement(pOVar12,uVar18,aVStack_c8);
                if ((uVar16 & 1) != 0) {
                  local_b8 = 0;
                  uStack_b0 = 0;
                  local_a8 = (void *)0x0;
                  uVar11 = seval_to_std_string(aVStack_c8,(basic_string *)&local_b8);
                  pvVar8 = local_a8;
                  uVar16 = uStack_b0;
                  puVar4 = local_100;
                  if ((uVar11 & 1) == 0) {
                    __android_log_print(6,"jswrapper",
                                        "jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                                        ,0x145,"WebSocket_constructor");
                    /* try { // try from 00994918 to 00a94a37 has its CatchHandler @ 009946ac */
                    __android_log_print(6,"jswrapper","Error processing protocol object");
                    bVar3 = true;
                  }
                  else {
                    if (local_100 == local_f8) {
                      std::__ndk1::
                      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      ::
                      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                                  *)&local_108,(basic_string *)&local_b8);
                    }
                    else {
                      local_100[1] = 0;
                      local_100[2] = 0;
                      *local_100 = 0;
                      if ((local_b8 & 1) == 0) {
                    /* try { // try from 009948dc to 00a94917 has its CatchHandler @ 009949e0 */
                        local_100[2] = (ulong)local_a8;
                        local_100[1] = uStack_b0;
                        *local_100 = local_b8;
                      }
                      else {
                        if (0xffffffffffffffef < uStack_b0) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_length_error();
                        }
                    /* try { // try from 0099481c to 00a9485f has its CatchHandler @ 009949b0 */
                        if (uStack_b0 < 0x17) {
                          pbVar17 = (byte *)((long)local_100 + 1);
                          *(byte *)local_100 = (byte)((int)uStack_b0 << 1);
                          if (uStack_b0 != 0) goto LAB_0099485c;
                        }
                        else {
                          uVar11 = uStack_b0 + 0x10 & 0xfffffffffffffff0;
                          pbVar17 = operator_new(uVar11);
                          puVar4[1] = uVar16;
                          puVar4[2] = (ulong)pbVar17;
                          *puVar4 = uVar11 | 1;
LAB_0099485c:
                          memcpy(pbVar17,pvVar8,uVar16);
                        }
                        pbVar17[uVar16] = 0;
                      }
                    /* try { // try from 00994870 to 00a948b3 has its CatchHandler @ 00994990 */
                      local_100 = local_100 + 3;
                    }
                    bVar3 = false;
                  }
                  if ((local_b8 & 1) != 0) {
                    operator_delete(local_a8);
                  }
                  if (bVar3) {
                    se::Value::~Value(aVStack_c8);
                    goto LAB_009949ac;
                  }
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < local_10c);
            }
            se::Value::~Value(aVStack_c8);
          }
joined_r0x00994960:
          if ((2 < iVar15) &&
             (uVar16 = seval_to_std_string((Value *)(*plVar9 + 0x20),(basic_string *)&local_a0),
             (uVar16 & 1) == 0)) {
                    /* try { // try from 009947b0 to 00a94817 has its CatchHandler @ 009949e0 */
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                                ,0x14d,"WebSocket_constructor");
            __android_log_print(6,"jswrapper","Error processing caFilePath");
            goto LAB_009949ac;
          }
                    /* try { // try from 009946ac to 00a946ff has its CatchHandler @ 009946ac
                       catch() { ... } // from try @ 009946ac with catch @ 009946ac
                       catch() { ... } // from try @ 00994918 with catch @ 009946ac */
          this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
          if (this_00 == (WebSocket *)0x0) {
            pWVar19 = (WebSocket *)0x0;
          }
          else {
            cocos2d::network::WebSocket::WebSocket(this_00);
            pWVar19 = this_00;
          }
          pRVar13 = operator_new(0x28,(nothrow_t *)&std::nothrow);
          if (pRVar13 == (Ref *)0x0) {
            pDVar20 = (Delegate *)0x10;
          }
          else {
            cocos2d::Ref::Ref(pRVar13);
                    /* try { // try from 00994700 to 00a94717 has its CatchHandler @ 009949d0 */
            pDVar20 = (Delegate *)(pRVar13 + 0x10);
            *(undefined ***)pDVar20 = &PTR__JSB_WebSocketDelegate_01c6a5b0;
            *(undefined ***)pRVar13 = &PTR__JSB_WebSocketDelegate_01c6a570;
            se::Value::Value((Value *)(pRVar13 + 0x18));
          }
                    /* try { // try from 00994720 to 00a9472b has its CatchHandler @ 009949cc */
                    /* try { // try from 0099472c to 00a94737 has its CatchHandler @ 009949c8 */
          uVar16 = cocos2d::network::WebSocket::init
                             (pWVar19,pDVar20,(basic_string *)&local_88,(vector *)&local_108,
                              (basic_string *)&local_a0);
          if ((uVar16 & 1) == 0) {
            cocos2d::Ref::release((Ref *)pWVar19);
                    /* try { // try from 00994788 to 00a9479b has its CatchHandler @ 00994990 */
            cocos2d::Ref::release(pRVar13);
            __android_log_print(6,"jswrapper",
                                "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 348): WebSocket init failed!\n"
                               );
            goto LAB_009949b0;
          }
                    /* try { // try from 00994738 to 00a9474f has its CatchHandler @ 009949e0 */
          se::Value::Value((Value *)&local_b8,pOVar10,true);
          se::Value::operator=((Value *)(pRVar13 + 0x18),(Value *)&local_b8);
          se::Value::~Value((Value *)&local_b8);
          cocos2d::Ref::retain((Ref *)pWVar19);
          cocos2d::Ref::retain(pRVar13);
                    /* try { // try from 0099476c to 00a94773 has its CatchHandler @ 009949b0 */
          bVar3 = false;
          puVar4 = local_108;
        }
        else {
          if (cVar1 != '\x04') goto joined_r0x00994960;
          uStack_b0 = 0;
          local_a8 = (void *)0x0;
          local_b8 = 0;
                    /* try { // try from 00994428 to 00a9446b has its CatchHandler @ 00994600 */
          uVar11 = seval_to_std_string((Value *)(*plVar9 + 0x10),(basic_string *)&local_b8);
          pvVar8 = local_a8;
          uVar16 = uStack_b0;
          puVar4 = local_100;
          if ((uVar11 & 1) == 0) {
                    /* catch() { ... } // from try @ 00994210 with catch @ 0099463c */
                    /* catch() { ... } // from try @ 00994204 with catch @ 00994640 */
                    /* catch() { ... } // from try @ 009941e4 with catch @ 00994644 */
                    /* catch() { ... } // from try @ 0099421c with catch @ 00994654
                       catch() { ... } // from try @ 009942d0 with catch @ 00994654
                       catch() { ... } // from try @ 00994508 with catch @ 00994654 */
            __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                                ,0x133,"WebSocket_constructor");
            __android_log_print(6,"jswrapper","Error processing protocol string");
            bVar3 = true;
          }
          else {
            if (local_100 == local_f8) {
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)&local_108,(basic_string *)&local_b8);
            }
            else {
              local_100[1] = 0;
              local_100[2] = 0;
              *local_100 = 0;
              if ((local_b8 & 1) == 0) {
                local_100[2] = (ulong)local_a8;
                local_100[1] = uStack_b0;
                *local_100 = local_b8;
              }
              else {
                if (0xffffffffffffffef < uStack_b0) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uStack_b0 < 0x17) {
                  pbVar17 = (byte *)((long)local_100 + 1);
                  *(byte *)local_100 = (byte)((int)uStack_b0 << 1);
                  if (uStack_b0 != 0) goto LAB_00994bec;
                }
                else {
                  uVar11 = uStack_b0 + 0x10 & 0xfffffffffffffff0;
                  pbVar17 = operator_new(uVar11);
                  puVar4[1] = uVar16;
                  puVar4[2] = (ulong)pbVar17;
                  *puVar4 = uVar11 | 1;
LAB_00994bec:
                    /* try { // try from 00994bf8 to 00a94cdb has its CatchHandler @ 00994a38 */
                  memcpy(pbVar17,pvVar8,uVar16);
                }
                pbVar17[uVar16] = 0;
              }
              local_100 = local_100 + 3;
            }
            bVar3 = false;
          }
          if ((local_b8 & 1) != 0) {
            operator_delete(local_a8);
          }
          if (!bVar3) goto joined_r0x00994960;
LAB_009949ac:
          this_00 = (WebSocket *)0x0;
LAB_009949b0:
                    /* catch() { ... } // from try @ 0099476c with catch @ 009949b0
                       catch() { ... } // from try @ 0099481c with catch @ 009949b0 */
          bVar3 = true;
          puVar4 = local_108;
        }
        local_108 = puVar4;
        puVar21 = local_100;
        if (puVar4 != (ulong *)0x0) {
          while (puVar5 = puVar21, puVar5 != puVar4) {
            puVar21 = puVar5 + -3;
                    /* catch() { ... } // from try @ 00994720 with catch @ 009949cc */
                    /* catch() { ... } // from try @ 00994700 with catch @ 009949d0 */
            if ((*puVar21 & 1) != 0) {
              operator_delete((void *)puVar5[-1]);
            }
          }
          local_100 = puVar4;
          operator_delete(local_108);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if (bVar3) goto LAB_00994a10;
      }
      se::Object::setProperty(pOVar10,"url",(Value *)*plVar9);
      se::Object::setProperty(pOVar10,"URL",(Value *)*plVar9);
      se::Value::Value((Value *)&local_a0,"");
      se::Object::setProperty(pOVar10,"protocol",(Value *)&local_a0);
      se::Value::~Value((Value *)&local_a0);
      se::Object::setPrivateData(pOVar10,this_00);
      se::Object::root(pOVar10);
      bVar3 = true;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if (bVar3) goto LAB_00994a54;
  }
  else {
                    /* try { // try from 00994480 to 00a944c3 has its CatchHandler @ 009945d8 */
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp, 386): wrong number of arguments: %d, was expecting 1<= and <=3\n"
                        ,uVar16 & 0xffffffff);
  }
                    /* try { // try from 00994a38 to 00a94a8b has its CatchHandler @ 00994a38
                       catch() { ... } // from try @ 00994a38 with catch @ 00994a38
                       catch() { ... } // from try @ 00994bf8 with catch @ 00994a38 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "WebSocket_constructor",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_websocket.cpp"
                      ,0x185);
LAB_00994a54:
  se::Value::Value((Value *)&local_88);
  uVar16 = se::Object::getProperty(this,"_ctor",(Value *)&local_88);
  if ((uVar16 & 1) != 0) {
    pOVar10 = (Object *)se::Value::toObject((Value *)&local_88);
    se::Object::call(pOVar10,(vector *)&local_140,this,(Value *)0x0);
  }
                    /* try { // try from 00994a8c to 00a94aa3 has its CatchHandler @ 00994c74 */
  se::Value::~Value((Value *)&local_88);
  se::State::~State(aSStack_f0);
  pVVar7 = local_140;
  pVVar6 = local_138;
  if (local_140 != (Value *)0x0) {
                    /* try { // try from 00994aac to 00a94ab7 has its CatchHandler @ 00994c70 */
    while (pVVar6 != pVVar7) {
                    /* try { // try from 00994ab8 to 00a94ac3 has its CatchHandler @ 00994c6c */
      se::Value::~Value(pVVar6 + -0x10);
      pVVar6 = pVVar6 + -0x10;
    }
    local_138 = pVVar7;
    operator_delete(local_140);
  }
  v8::HandleScope::~HandleScope(aHStack_128);
  if (*(long *)(lVar2 + 0x28) != lVar14) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

