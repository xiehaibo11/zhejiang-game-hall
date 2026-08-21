
/* tinyxml2::XMLPrinter::PrintSpace(int) */

void __thiscall tinyxml2::XMLPrinter::PrintSpace(XMLPrinter *this,int param_1)

{
  if (0 < param_1) {
    do {
      Print((char *)this,"    ");
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

