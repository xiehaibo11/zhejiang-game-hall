
/* spine::SpineExtension::getInstance() */

void spine::SpineExtension::getInstance(void)

{
  if (_instance == 0) {
    _instance = getDefaultExtension();
  }
  return;
}

