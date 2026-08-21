package com.google.gson.stream;

public enum JsonToken extends java.lang.Enum<com.google.gson.stream.JsonToken> {
    private static final com.google.gson.stream.JsonToken[] $VALUES = null;
    public static final com.google.gson.stream.JsonToken BEGIN_ARRAY = null;
    public static final com.google.gson.stream.JsonToken BEGIN_OBJECT = null;
    public static final com.google.gson.stream.JsonToken BOOLEAN = null;
    public static final com.google.gson.stream.JsonToken END_ARRAY = null;
    public static final com.google.gson.stream.JsonToken END_DOCUMENT = null;
    public static final com.google.gson.stream.JsonToken END_OBJECT = null;
    public static final com.google.gson.stream.JsonToken NAME = null;
    public static final com.google.gson.stream.JsonToken NULL = null;
    public static final com.google.gson.stream.JsonToken NUMBER = null;
    public static final com.google.gson.stream.JsonToken STRING = null;

    static {
            com.google.gson.stream.JsonToken r0 = new com.google.gson.stream.JsonToken
            r1 = 0
            java.lang.String r2 = "BEGIN_ARRAY"
            r0.<init>(r2, r1)
            com.google.gson.stream.JsonToken.BEGIN_ARRAY = r0
            com.google.gson.stream.JsonToken r0 = new com.google.gson.stream.JsonToken
            r2 = 1
            java.lang.String r3 = "END_ARRAY"
            r0.<init>(r3, r2)
            com.google.gson.stream.JsonToken.END_ARRAY = r0
            com.google.gson.stream.JsonToken r0 = new com.google.gson.stream.JsonToken
            r3 = 2
            java.lang.String r4 = "BEGIN_OBJECT"
            r0.<init>(r4, r3)
            com.google.gson.stream.JsonToken.BEGIN_OBJECT = r0
            com.google.gson.stream.JsonToken r0 = new com.google.gson.stream.JsonToken
            r4 = 3
            java.lang.String r5 = "END_OBJECT"
            r0.<init>(r5, r4)
            com.google.gson.stream.JsonToken.END_OBJECT = r0
            com.google.gson.stream.JsonToken r0 = new com.google.gson.stream.JsonToken
            r5 = 4
            java.lang.String r6 = "NAME"
            r0.<init>(r6, r5)
            com.google.gson.stream.JsonToken.NAME = r0
            com.google.gson.stream.JsonToken r0 = new com.google.gson.stream.JsonToken
            r6 = 5
            java.lang.String r7 = "STRING"
            r0.<init>(r7, r6)
            com.google.gson.stream.JsonToken.STRING = r0
            com.google.gson.stream.JsonToken r0 = new com.google.gson.stream.JsonToken
            r7 = 6
            java.lang.String r8 = "NUMBER"
            r0.<init>(r8, r7)
            com.google.gson.stream.JsonToken.NUMBER = r0
            com.google.gson.stream.JsonToken r0 = new com.google.gson.stream.JsonToken
            r8 = 7
            java.lang.String r9 = "BOOLEAN"
            r0.<init>(r9, r8)
            com.google.gson.stream.JsonToken.BOOLEAN = r0
            com.google.gson.stream.JsonToken r0 = new com.google.gson.stream.JsonToken
            r9 = 8
            java.lang.String r10 = "NULL"
            r0.<init>(r10, r9)
            com.google.gson.stream.JsonToken.NULL = r0
            com.google.gson.stream.JsonToken r0 = new com.google.gson.stream.JsonToken
            r10 = 9
            java.lang.String r11 = "END_DOCUMENT"
            r0.<init>(r11, r10)
            com.google.gson.stream.JsonToken.END_DOCUMENT = r0
            r0 = 10
            com.google.gson.stream.JsonToken[] r0 = new com.google.gson.stream.JsonToken[r0]
            com.google.gson.stream.JsonToken r11 = com.google.gson.stream.JsonToken.BEGIN_ARRAY
            r0[r1] = r11
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.END_ARRAY
            r0[r2] = r1
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.BEGIN_OBJECT
            r0[r3] = r1
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.END_OBJECT
            r0[r4] = r1
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NAME
            r0[r5] = r1
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.STRING
            r0[r6] = r1
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NUMBER
            r0[r7] = r1
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.BOOLEAN
            r0[r8] = r1
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL
            r0[r9] = r1
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.END_DOCUMENT
            r0[r10] = r1
            com.google.gson.stream.JsonToken.$VALUES = r0
            return
    }

    JsonToken(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.google.gson.stream.JsonToken valueOf(java.lang.String r1) {
            java.lang.Class<com.google.gson.stream.JsonToken> r0 = com.google.gson.stream.JsonToken.class
            java.lang.Enum r0 = java.lang.Enum.valueOf(r0, r1)
            com.google.gson.stream.JsonToken r0 = (com.google.gson.stream.JsonToken) r0
            return r0
    }

    public static com.google.gson.stream.JsonToken[] values() {
            com.google.gson.stream.JsonToken[] r0 = com.google.gson.stream.JsonToken.$VALUES
            java.lang.Object r0 = r0.clone()
            com.google.gson.stream.JsonToken[] r0 = (com.google.gson.stream.JsonToken[]) r0
            return r0
    }
}
