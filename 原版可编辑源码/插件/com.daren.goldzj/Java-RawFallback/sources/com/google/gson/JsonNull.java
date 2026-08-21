package com.google.gson;

public final class JsonNull extends com.google.gson.JsonElement {
    public static final com.google.gson.JsonNull INSTANCE = null;

    static {
            com.google.gson.JsonNull r0 = new com.google.gson.JsonNull
            r0.<init>()
            com.google.gson.JsonNull.INSTANCE = r0
            return
    }

    @java.lang.Deprecated
    public JsonNull() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.google.gson.JsonElement deepCopy() {
            r1 = this;
            com.google.gson.JsonNull r0 = r1.deepCopy()
            return r0
    }

    @Override
    public com.google.gson.JsonNull deepCopy() {
            r1 = this;
            com.google.gson.JsonNull r0 = com.google.gson.JsonNull.INSTANCE
            return r0
    }

    public boolean equals(java.lang.Object r1) {
            r0 = this;
            boolean r1 = r1 instanceof com.google.gson.JsonNull
            return r1
    }

    public int hashCode() {
            r1 = this;
            java.lang.Class<com.google.gson.JsonNull> r0 = com.google.gson.JsonNull.class
            int r0 = r0.hashCode()
            return r0
    }
}
