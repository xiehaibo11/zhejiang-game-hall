
char * ENGINE_get_name(ENGINE *e)

{
  return *(char **)(e + 8);
}

