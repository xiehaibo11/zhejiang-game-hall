
/* tinyxml2::XMLPrinter::VisitExit(tinyxml2::XMLElement const&) */

undefined8 tinyxml2::XMLPrinter::VisitExit(XMLElement *param_1)

{
  CloseElement((XMLPrinter *)param_1);
  return 1;
}

