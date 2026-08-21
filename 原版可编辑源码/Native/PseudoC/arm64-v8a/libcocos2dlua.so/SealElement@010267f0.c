
/* tinyxml2::XMLPrinter::SealElement() */

void __thiscall tinyxml2::XMLPrinter::SealElement(XMLPrinter *this)

{
                    /* try { // try from 010267f4 to 01126807 has its CatchHandler @ 01026888 */
  this[8] = (XMLPrinter)0x0;
  Print((char *)this,">");
  return;
}

