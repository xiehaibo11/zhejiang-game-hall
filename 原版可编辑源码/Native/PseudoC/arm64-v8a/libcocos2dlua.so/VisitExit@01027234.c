
/* tinyxml2::XMLPrinter::VisitExit(tinyxml2::XMLElement const&) */

undefined8 tinyxml2::XMLPrinter::VisitExit(XMLElement *param_1)

{
  CloseElement((XMLPrinter *)param_1);
                    /* try { // try from 01027244 to 0112727b has its CatchHandler @ 01027244
                       catch() { ... } // from try @ 01027244 with catch @ 01027244
                       catch() { ... } // from try @ 010272a8 with catch @ 01027244 */
  return 1;
}

