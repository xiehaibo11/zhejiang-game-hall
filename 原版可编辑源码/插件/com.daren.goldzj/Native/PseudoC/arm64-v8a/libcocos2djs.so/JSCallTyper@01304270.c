
/* v8::internal::compiler::Typer::Visitor::JSCallTyper(v8::internal::compiler::Type,
   v8::internal::compiler::Typer*) */

char * v8::internal::compiler::Typer::Visitor::JSCallTyper(int *param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  Zone *pZVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  double dVar12;
  char *pcVar13;
  undefined1 auVar14 [16];
  SharedFunctionInfoRef local_48 [16];
  JSFunctionRef local_38 [16];
  int *local_28;
  
  if (((ulong)param_1 & 1) != 0) {
    return (char *)0xc7f7fff;
  }
  if (*param_1 != 0) {
    return (char *)0xc7f7fff;
  }
  local_28 = param_1;
  lVar3 = Type::AsHeapConstant((Type *)&local_28);
  uVar4 = ObjectRef::IsJSFunction((ObjectRef *)(lVar3 + 8));
  if ((uVar4 & 1) == 0) {
    return (char *)0xc7f7fff;
  }
  lVar3 = Type::AsHeapConstant((Type *)&local_28);
  local_38 = (JSFunctionRef  [16])ObjectRef::AsJSFunction((ObjectRef *)(lVar3 + 8));
  uVar4 = JSFunctionRef::serialized(local_38);
  if ((uVar4 & 1) == 0) {
    if ((*(JSHeapBroker **)(param_2 + 0x20))[0x74] != (JSHeapBroker)0x0) {
      pbVar5 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(param_2 + 0x20));
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"Missing ",8);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"data for function ",0x12);
      pbVar5 = (basic_ostream *)compiler::operator<<(pbVar5,(ObjectRef *)local_38);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," (",2);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"../../src/compiler/typer.cc",0x1b);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,":",1);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,0x60c);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,")",1);
      std::__ndk1::ios_base::getloc();
      plVar6 = (long *)std::__ndk1::locale::use_facet
                                 ((locale *)local_48,(id *)&std::__ndk1::ctype<char>::id);
      cVar1 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
      std::__ndk1::locale::~locale((locale *)local_48);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,cVar1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5);
    }
switchD_01304320_caseD_325:
    return (char *)0xc7f7fff;
  }
  local_48 = (SharedFunctionInfoRef  [16])JSFunctionRef::shared(local_38);
  uVar4 = SharedFunctionInfoRef::HasBuiltinId(local_48);
  if ((uVar4 & 1) == 0) {
    return (char *)0xc7f7fff;
  }
  auVar14 = JSFunctionRef::shared(local_38);
  local_48 = (SharedFunctionInfoRef  [16])auVar14;
  uVar2 = SharedFunctionInfoRef::builtin_id(local_48);
  pcVar13 = (char *)0x45f;
  switch(uVar2) {
  case 0x36:
  case 0x68:
  case 0x14e:
  case 0x14f:
  case 0x150:
  case 0x151:
  case 0x152:
  case 0x153:
  case 0x1c6:
  case 0x1f9:
  case 0x218:
  case 0x219:
  case 0x223:
  case 0x224:
  case 0x225:
  case 0x226:
  case 0x2b4:
  case 0x2dd:
  case 0x2de:
  case 0x2e3:
  case 0x2e4:
  case 0x2e7:
  case 0x36f:
  case 0x372:
  case 0x375:
  case 0x378:
  case 0x3d7:
  case 0x3d8:
    pcVar13 = (char *)0x4021;
    break;
  default:
    goto switchD_01304320_caseD_325;
  case 0xae:
  case 0xaf:
  case 0x1ab:
  case 0x1d0:
  case 0x1d5:
  case 0x1d7:
  case 0x1dd:
  case 0x1df:
  case 0x29e:
  case 0x2bd:
  case 0x2c9:
  case 0x2cb:
  case 0x2d0:
    pcVar13 = (char *)0x47f0001;
    break;
  case 0xb4:
  case 0xcd:
  case 0x144:
  case 0x155:
  case 0x156:
  case 0x179:
  case 0x17b:
  case 0x186:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x1b7:
  case 0x1bf:
  case 0x1c0:
  case 0x1ff:
  case 0x201:
  case 0x21a:
  case 599:
  case 0x259:
  case 0x25b:
  case 0x25d:
  case 0x29a:
  case 0x2ad:
  case 0x2cf:
  case 0x353:
  case 0x35c:
  case 0x373:
    pcVar13 = (char *)0x201;
    break;
  case 0xb8:
  case 0x2a8:
  case 0x2b9:
    pZVar7 = (Zone *)**(undefined8 **)(param_2 + 8);
    dVar12 = 9007199254740991.0;
    goto LAB_01304488;
  case 0xbb:
  case 0xbe:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x1a8);
    break;
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0x178:
  case 0x17d:
  case 0x180:
  case 0x181:
  case 0x182:
  case 0x1ac:
  case 0x1f8:
  case 0x200:
  case 0x203:
  case 0x206:
  case 0x207:
  case 0x231:
  case 0x232:
  case 0x233:
  case 600:
  case 0x25c:
  case 0x36b:
  case 0x36c:
    pcVar13 = (char *)0x20001;
    break;
  case 0xd7:
    pcVar13 = (char *)0x8000001;
    break;
  case 0x109:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x1f8);
    break;
  case 0x10a:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x228);
    break;
  case 0x10b:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x230);
    break;
  case 0x10c:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x200);
    break;
  case 0x10d:
    pZVar7 = (Zone *)**(undefined8 **)(param_2 + 8);
    dVar12 = 999.0;
    goto LAB_01304568;
  case 0x10e:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x208);
    break;
  case 0x10f:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x210);
    break;
  case 0x110:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x218);
    break;
  case 0x111:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x220);
    break;
  case 0x11f:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x1f0);
    break;
  case 0x141:
    pcVar13 = "S0_6HandleIS2_EENS5_INS0_6ObjectEEES8_";
    break;
  case 0x17c:
  case 0x17f:
  case 0x202:
  case 0x205:
  case 0x2ac:
    pcVar13 = (char *)0x101;
    break;
  case 0x185:
  case 0x18a:
  case 0x308:
  case 0x309:
  case 0x30a:
  case 0x30b:
  case 0x30c:
  case 0x30d:
  case 0x30e:
  case 0x30f:
  case 0x310:
  case 0x311:
  case 0x312:
  case 0x314:
  case 0x317:
  case 0x318:
  case 0x31a:
  case 0x31b:
  case 0x31c:
  case 0x31d:
  case 0x31e:
  case 0x321:
  case 0x322:
  case 0x324:
    pcVar13 = (char *)0x1c5f;
    break;
  case 0x18b:
  case 0x304:
  case 0x305:
  case 0x306:
  case 0x307:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x160);
    break;
  case 0x21b:
  case 0x21c:
    pZVar7 = (Zone *)**(undefined8 **)(param_2 + 8);
    dVar12 = 268435440.0;
LAB_01304488:
    pcVar13 = (char *)Type::Range(-1.0,dVar12,pZVar7);
    break;
  case 0x227:
  case 0x379:
    pcVar13 = (char *)0x2001;
    break;
  case 0x23a:
    puVar11 = *(undefined8 **)(param_2 + 8);
    uVar8 = 0x4001;
    goto LAB_013045a4;
  case 0x2e1:
    pZVar7 = (Zone *)**(undefined8 **)(param_2 + 8);
    dVar12 = 65535.0;
LAB_01304568:
    uVar8 = Type::Range(0.0,dVar12,pZVar7);
    puVar11 = *(undefined8 **)(param_2 + 8);
LAB_01304578:
    uVar10 = *puVar11;
    uVar9 = 0x1001;
LAB_013045e8:
    pcVar13 = (char *)Type::Union(uVar8,uVar9,uVar10);
    break;
  case 0x2e2:
    uVar8 = Type::Range(0.0,1114111.0,(Zone *)**(undefined8 **)(param_2 + 8));
    puVar11 = *(undefined8 **)(param_2 + 8);
LAB_013045a4:
    uVar9 = 0x101;
    uVar10 = *puVar11;
    goto LAB_013045e8;
  case 0x303:
  case 0x316:
    puVar11 = *(undefined8 **)(param_2 + 8);
    uVar8 = 0x45f;
    goto LAB_01304578;
  case 0x313:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x140);
    break;
  case 0x319:
    pcVar13 = (char *)0x44b;
    break;
  case 799:
    pcVar13 = *(char **)(*(long *)(param_2 + 0x18) + 0x120);
    break;
  case 0x325:
    break;
  case 0x347:
    uVar9 = 0x81;
    uVar10 = **(undefined8 **)(param_2 + 8);
    uVar8 = 0x4000001;
    goto LAB_013045e8;
  }
  return pcVar13;
}

