
/* v8::internal::SNPrintF(v8::internal::Vector<char>, char const*, ...) */

void v8::internal::SNPrintF(void...)

{
  base::OS::VSNPrintF();
  return;
}

