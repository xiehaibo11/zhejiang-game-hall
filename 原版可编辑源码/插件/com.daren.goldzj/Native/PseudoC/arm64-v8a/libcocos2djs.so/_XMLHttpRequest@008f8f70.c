
/* XMLHttpRequest::~XMLHttpRequest() */

void __thiscall XMLHttpRequest::~XMLHttpRequest(XMLHttpRequest *this)

{
  ~XMLHttpRequest(this);
  operator_delete(this);
  return;
}

