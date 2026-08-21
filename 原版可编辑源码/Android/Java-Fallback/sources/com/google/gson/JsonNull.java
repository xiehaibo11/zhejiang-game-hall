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

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r1 == r2) goto L9
            boolean r0 = r2 instanceof com.google.gson.JsonNull
            if (r0 == 0) goto L7
            goto L9
        L7:
            r0 = 0
            goto La
        L9:
            r0 = 1
        La:
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.Class<com.google.gson.JsonNull> r0 = com.google.gson.JsonNull.class
            int r0 = r0.hashCode()
            return r0
    }
}
