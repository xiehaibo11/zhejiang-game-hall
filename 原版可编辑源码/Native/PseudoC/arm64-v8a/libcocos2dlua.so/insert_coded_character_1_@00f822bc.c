
/* void rapidxml::xml_sax3_parser<char>::insert_coded_character<1>(char*&, unsigned long) */

void rapidxml::xml_sax3_parser<char>::insert_coded_character<1>(char **param_1,ulong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  
  if (param_2 < 0x80) {
    lVar4 = 1;
  }
  else {
    uVar3 = (uint)param_2;
    bVar1 = (byte)param_2;
    if (param_2 < 0x800) {
      param_2 = (ulong)((uint)(param_2 >> 6) & 0x3ffffff | 0xffffffc0);
      (*param_1)[1] = bVar1 & 0x3f | 0x80;
      lVar4 = 2;
    }
    else if (param_2 >> 0x10 == 0) {
      (*param_1)[2] = bVar1 & 0x3f | 0x80;
      param_2 = (ulong)((uint)(param_2 >> 0xc) & 0xfffff | 0xffffffe0);
      (*param_1)[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      lVar4 = 3;
    }
    else {
      if (0x10 < param_2 >> 0x10) {
        puVar2 = (undefined8 *)__cxa_allocate_exception(0x18);
        puVar2[2] = *param_1;
        *puVar2 = &PTR__bad_exception_017221f8;
        puVar2[1] = "invalid numeric character entity";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&parse_error::typeinfo,std::bad_exception::~bad_exception);
      }
      (*param_1)[3] = bVar1 & 0x3f | 0x80;
      (*param_1)[2] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      param_2 = (ulong)((uint)(param_2 >> 0x12) & 0x3fff | 0xfffffff0);
      (*param_1)[1] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
      lVar4 = 4;
    }
  }
  **param_1 = (char)param_2;
  *param_1 = *param_1 + lVar4;
  return;
}

