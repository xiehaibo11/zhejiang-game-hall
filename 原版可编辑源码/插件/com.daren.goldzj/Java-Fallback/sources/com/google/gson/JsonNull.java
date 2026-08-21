package com.google.gson;

public final class JsonNull extends JsonElement {
    public static final JsonNull INSTANCE = null;

    @Override
    public JsonElement deepCopy() {
        return deepCopy();
    }

    static {
        INSTANCE = new JsonNull();
    }

    @Deprecated
    public JsonNull() {
    }

    @Override
    public JsonNull deepCopy() {
        return INSTANCE;
    }

    public int hashCode() {
        return JsonNull.class.hashCode();
    }

    public boolean equals(Object r1) {
        return r1 instanceof JsonNull;
    }
}
