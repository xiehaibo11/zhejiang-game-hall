
/* v8::internal::compiler::JSObjectData::GetOwnDataProperty(v8::internal::compiler::JSHeapBroker*,
   v8::internal::Representation, v8::internal::FieldIndex,
   v8::internal::compiler::SerializationPolicy) */

long __thiscall
v8::internal::compiler::JSObjectData::GetOwnDataProperty
          (JSObjectData *this,JSHeapBroker *param_1,undefined1 param_3,ulong param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  basic_ostream *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined2 uVar13;
  locale local_60 [8];
  long lStack_58;
  
  uVar1 = (uint)param_4 >> 0x10 & 0x3ff;
  if ((param_4 & 0x2000) != 0) {
    uVar1 = 0;
  }
  uVar1 = (((uint)param_4 >> 2 & 0x7ff) - ((uint)(param_4 >> 0x1c) & 0x1f)) + uVar1;
  uVar4 = base::hash_value(uVar1);
  uVar8 = *(ulong *)(this + 0x80);
  if (uVar8 != 0) {
    uVar5 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar8 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar8 >> 
                                                  8)),POPCOUNT((char)uVar8))))))));
    uVar13 = NEON_uaddlv(uVar5,1);
    uVar9 = CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar13) & 0xffffffff;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & uVar4;
    }
    else {
      uVar10 = uVar4;
      if (uVar8 <= uVar4) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar4 / uVar8;
        }
        uVar10 = uVar4 - uVar10 * uVar8;
      }
    }
    plVar11 = *(long **)(*(long *)(this + 0x78) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      do {
        uVar12 = plVar11[1];
        if (uVar12 == uVar4) {
          if (*(uint *)(plVar11 + 2) == uVar1) {
            return plVar11[3];
          }
        }
        else {
          if (uVar9 < 2) {
            uVar12 = uVar12 & uVar8 - 1;
          }
          else if (uVar8 <= uVar12) {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar12 / uVar8;
            }
            uVar12 = uVar12 - uVar2 * uVar8;
          }
          if (uVar12 != uVar10) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  if (param_5 != 0) {
    uVar5 = JSObject::FastPropertyAt(*(undefined8 *)this,param_3,param_4);
    ObjectRef::ObjectRef((ObjectRef *)local_60,param_1,uVar5,0);
                    /* WARNING: Could not recover jumptable at 0x0170cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (*(code *)(&UNK_0170cdd4 + (ulong)(byte)(&DAT_01a5d654)[*(uint *)(lStack_58 + 0x70)] * 4
                      ))();
    return lVar6;
  }
  if (param_1[0x74] != (JSHeapBroker)0x0) {
    pbVar7 = (basic_ostream *)JSHeapBroker::Trace(param_1);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,"Missing ",8);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,"knowledge about property with index ",0x24);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar1);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7," on ",4);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,this);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7," (",2);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,"../../src/compiler/js-heap-broker.cc",0x24);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,":",1);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,0x192);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,")",1);
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet(local_60,(id *)&std::__ndk1::ctype<char>::id);
    cVar3 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale(local_60);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7);
  }
  return 0;
}

