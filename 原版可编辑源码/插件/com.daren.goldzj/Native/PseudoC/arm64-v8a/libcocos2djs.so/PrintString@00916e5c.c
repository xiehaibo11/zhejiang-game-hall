
/* tinyxml2::XMLPrinter::PrintString(char const*, bool) */

void __thiscall tinyxml2::XMLPrinter::PrintString(XMLPrinter *this,char *param_1,bool param_2)

{
  XMLPrinter *pXVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pXVar1 = this + 0x62;
  if (!param_2) {
    pXVar1 = this + 0x22;
  }
  if (this[0x20] != (XMLPrinter)0x0) {
    cVar2 = *param_1;
    pcVar5 = param_1;
    if (cVar2 != '\0') {
      do {
        if (((byte)(cVar2 - 1U) < 0x3f) && (pXVar1[(long)cVar2 & 0xffffffff] != (XMLPrinter)0x0)) {
          if (param_1 < pcVar5) {
            do {
              pcVar4 = param_1 + 1;
              Print((char *)this,"%c",(long)*param_1);
              param_1 = pcVar4;
            } while (pcVar5 != pcVar4);
            cVar2 = *pcVar5;
            param_1 = pcVar5;
          }
          lVar3 = 0;
          switch(cVar2) {
          case '\"':
            break;
          default:
            goto switchD_00916f24_caseD_23;
          case '&':
            lVar3 = 1;
            break;
          case '\'':
            lVar3 = 2;
            break;
          case '<':
            lVar3 = 3;
            break;
          case '>':
            lVar3 = 4;
          }
          Print((char *)this,&DAT_01868b6e,(&PTR_DAT_01c68bc8)[lVar3 * 2]);
switchD_00916f24_caseD_23:
          param_1 = param_1 + 1;
        }
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar5;
      } while (cVar2 != '\0');
      if (this[0x20] == (XMLPrinter)0x0) goto LAB_00916f80;
    }
    if ((long)pcVar5 - (long)param_1 < 1) {
      return;
    }
  }
LAB_00916f80:
  Print((char *)this,"%s",param_1);
  return;
}

