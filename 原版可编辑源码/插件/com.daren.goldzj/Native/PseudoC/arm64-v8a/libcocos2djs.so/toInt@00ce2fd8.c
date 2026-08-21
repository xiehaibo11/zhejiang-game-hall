
/* spine::Atlas::toInt(spine::Atlas::Str*) */

void spine::Atlas::toInt(Str *param_1)

{
  strtol(*(char **)param_1,(char **)(param_1 + 8),10);
  return;
}

