package com.google.gson;

public enum LongSerializationPolicy extends java.lang.Enum<com.google.gson.LongSerializationPolicy> {
    private static final com.google.gson.LongSerializationPolicy[] $VALUES = null;
    public static final com.google.gson.LongSerializationPolicy DEFAULT = null;
    public static final com.google.gson.LongSerializationPolicy STRING = null;



    static {
            com.google.gson.LongSerializationPolicy$1 r0 = new com.google.gson.LongSerializationPolicy$1
            r1 = 0
            java.lang.String r2 = "DEFAULT"
            r0.<init>(r2, r1)
            com.google.gson.LongSerializationPolicy.DEFAULT = r0
            com.google.gson.LongSerializationPolicy$2 r0 = new com.google.gson.LongSerializationPolicy$2
            r2 = 1
            java.lang.String r3 = "STRING"
            r0.<init>(r3, r2)
            com.google.gson.LongSerializationPolicy.STRING = r0
            r0 = 2
            com.google.gson.LongSerializationPolicy[] r0 = new com.google.gson.LongSerializationPolicy[r0]
            com.google.gson.LongSerializationPolicy r3 = com.google.gson.LongSerializationPolicy.DEFAULT
            r0[r1] = r3
            com.google.gson.LongSerializationPolicy r1 = com.google.gson.LongSerializationPolicy.STRING
            r0[r2] = r1
            com.google.gson.LongSerializationPolicy.$VALUES = r0
            return
    }

    LongSerializationPolicy(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    LongSerializationPolicy(java.lang.String r1, int r2, com.google.gson.LongSerializationPolicy.1 r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.google.gson.LongSerializationPolicy valueOf(java.lang.String r1) {
            java.lang.Class<com.google.gson.LongSerializationPolicy> r0 = com.google.gson.LongSerializationPolicy.class
            java.lang.Enum r0 = java.lang.Enum.valueOf(r0, r1)
            com.google.gson.LongSerializationPolicy r0 = (com.google.gson.LongSerializationPolicy) r0
            return r0
    }

    public static com.google.gson.LongSerializationPolicy[] values() {
            com.google.gson.LongSerializationPolicy[] r0 = com.google.gson.LongSerializationPolicy.$VALUES
            java.lang.Object r0 = r0.clone()
            com.google.gson.LongSerializationPolicy[] r0 = (com.google.gson.LongSerializationPolicy[]) r0
            return r0
    }

    public abstract com.google.gson.JsonElement serialize(java.lang.Long r1);
}
