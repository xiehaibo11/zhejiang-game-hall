
/* void rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::ParseValue<0u, rapidjson::EncodedInputStream<rapidjson::UTF8<char>,
   rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>
   >(rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>&,
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&) */

void __thiscall
rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
ParseValue<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
          (GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator> *this,
          EncodedInputStream *param_1,GenericDocument *param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)**(undefined8 **)param_1;
  if (pcVar1 != (char *)(*(undefined8 **)param_1)[2]) {
    iVar2 = (int)*pcVar1;
    switch(iVar2) {
    case 0x5b:
      ParseArray<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                (this,param_1,param_2);
      return;
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
      break;
    case 0x66:
      ParseFalse<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                (this,param_1,param_2);
      return;
    case 0x6e:
      ParseNull<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                (this,param_1,param_2);
      return;
    case 0x74:
      ParseTrue<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                (this,param_1,param_2);
      return;
    case 0x7b:
      ParseObject<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                (this,param_1,param_2);
      return;
    default:
      if (iVar2 == 0x22) {
        ParseString<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                  ((EncodedInputStream *)this,(GenericDocument *)param_1,SUB81(param_2,0));
        return;
      }
    }
  }
  ParseNumber<0u,rapidjson::EncodedInputStream<rapidjson::UTF8<char>,rapidjson::MemoryStream>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
            (this,param_1,param_2);
  return;
}

