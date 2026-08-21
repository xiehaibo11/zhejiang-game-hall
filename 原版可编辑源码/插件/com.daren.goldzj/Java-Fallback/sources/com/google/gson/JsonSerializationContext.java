package com.google.gson;

import java.lang.reflect.Type;

public interface JsonSerializationContext {
    JsonElement serialize(Object r1);

    JsonElement serialize(Object r1, Type r2);
}
