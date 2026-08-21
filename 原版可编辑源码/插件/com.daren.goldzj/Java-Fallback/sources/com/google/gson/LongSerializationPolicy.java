package com.google.gson;

public enum LongSerializationPolicy extends Enum<LongSerializationPolicy> {
    private static final LongSerializationPolicy[] $VALUES = null;
    public static final LongSerializationPolicy DEFAULT = null;
    public static final LongSerializationPolicy STRING = null;

    public abstract JsonElement serialize(Long r1);

    LongSerializationPolicy(String r1, int r2) {
    }

    LongSerializationPolicy(String r1, int r2, 1 r3) {
        this(r1, r2);
    }

    public static LongSerializationPolicy valueOf(String r1) {
        return (LongSerializationPolicy) Enum.valueOf(LongSerializationPolicy.class, r1);
    }

    public static LongSerializationPolicy[] values() {
        return (LongSerializationPolicy[]) $VALUES.clone();
    }

    static {
        final int r1 = 0;
        final String r2 = "DEFAULT";
        DEFAULT = new 1(r2, r1);
        final int r22 = 1;
        final String r3 = "STRING";
        STRING = new 2(r3, r22);
        $VALUES = new LongSerializationPolicy[]{DEFAULT, STRING};
    }
}
