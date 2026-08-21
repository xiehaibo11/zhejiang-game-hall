package com.google.gson;

import java.lang.reflect.Type;

public interface JsonDeserializer<T> {
    T deserialize(JsonElement r1, Type r2, JsonDeserializationContext r3) throws JsonParseException;
}
