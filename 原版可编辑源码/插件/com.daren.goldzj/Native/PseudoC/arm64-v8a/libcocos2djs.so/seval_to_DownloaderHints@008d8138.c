
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* seval_to_DownloaderHints(se::Value const&, cocos2d::network::DownloaderHints*) */

undefined4 seval_to_DownloaderHints(Value *param_1,DownloaderHints *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  long lVar2;
  char *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  Object *this;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((DAT_01d36f70 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_01d36f70), iVar6 != 0)) {
    DAT_01d36f50 = 0;
    DAT_01d36f68 = (char *)0x0;
    DAT_01d36f60 = 0;
    _DAT_01d36f58 = 0;
    __cxa_atexit(cocos2d::network::DownloaderHints::~DownloaderHints,&DAT_01d36f50,
                 &PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d36f70);
  }
  if (param_1[8] != (Value)0x5) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x43f,"seval_to_DownloaderHints");
    __android_log_print(6,"jswrapper","Convert parameter to DownloaderHints failed!");
    uVar5 = 0;
    goto LAB_008d82ec;
  }
  se::Value::Value(aVStack_48);
  this = (Object *)se::Value::toObject(param_1);
  uVar7 = se::Object::getProperty(this,"countOfMaxProcessingTasks",aVStack_48);
  if (((uVar7 & 1) == 0) || (local_40 != '\x02')) {
    *(undefined8 *)param_2 = DAT_01d36f50;
    if (param_2 != (DownloaderHints *)&DAT_01d36f50) {
      uVar7 = DAT_01d36f60;
      pcVar3 = DAT_01d36f68;
      if ((_DAT_01d36f58 & 1) == 0) {
        uVar7 = _DAT_01d36f58 >> 1 & 0x7f;
        pcVar3 = &DAT_01d36f59;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 8),pcVar3,uVar7);
    }
LAB_008d82e0:
    uVar5 = 0;
  }
  else {
    uVar5 = se::Value::toUint32(aVStack_48);
    *(undefined4 *)param_2 = uVar5;
    bVar4 = se::Object::getProperty(this,"timeoutInSeconds",aVStack_48);
    if ((bVar4 & local_40 == '\x02') == 0) {
      *(undefined8 *)param_2 = DAT_01d36f50;
      if (param_2 != (DownloaderHints *)&DAT_01d36f50) {
        uVar7 = DAT_01d36f60;
        pcVar3 = DAT_01d36f68;
        if ((_DAT_01d36f58 & 1) == 0) {
          uVar7 = _DAT_01d36f58 >> 1 & 0x7f;
          pcVar3 = &DAT_01d36f59;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_2 + 8),pcVar3,uVar7);
      }
      goto LAB_008d82e0;
    }
    uVar5 = se::Value::toUint32(aVStack_48);
    *(undefined4 *)(param_2 + 4) = uVar5;
    bVar4 = se::Object::getProperty(this,"tempFileNameSuffix",aVStack_48);
    if ((bVar4 & local_40 == '\x04') == 0) {
      *(undefined8 *)param_2 = DAT_01d36f50;
      if (param_2 != (DownloaderHints *)&DAT_01d36f50) {
        uVar7 = DAT_01d36f60;
        pcVar3 = DAT_01d36f68;
        if ((_DAT_01d36f58 & 1) == 0) {
          uVar7 = _DAT_01d36f58 >> 1 & 0x7f;
          pcVar3 = &DAT_01d36f59;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_2 + 8),pcVar3,uVar7);
      }
      goto LAB_008d82e0;
    }
    pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             se::Value::toString(aVStack_48);
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (param_2 + 8) != pbVar8) {
      uVar7 = *(ulong *)(pbVar8 + 8);
      pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar8 + 0x10);
      if (((byte)*pbVar8 & 1) == 0) {
        pbVar1 = pbVar8 + 1;
        uVar7 = (ulong)((byte)*pbVar8 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 8),(char *)pbVar1,uVar7);
    }
    uVar5 = 1;
  }
  se::Value::~Value(aVStack_48);
LAB_008d82ec:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

