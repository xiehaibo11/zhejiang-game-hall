package com.google.gson;

public enum ToNumberPolicy extends Enum<ToNumberPolicy> implements ToNumberStrategy {
    private static final ToNumberPolicy[] $VALUES = null;
    public static final ToNumberPolicy BIG_DECIMAL = null;
    public static final ToNumberPolicy DOUBLE = null;
    public static final ToNumberPolicy LAZILY_PARSED_NUMBER = null;
    public static final ToNumberPolicy LONG_OR_DOUBLE = null;

    ToNumberPolicy(String r1, int r2) {
    }

    ToNumberPolicy(String r1, int r2, 1 r3) {
        this(r1, r2);
    }

    public static ToNumberPolicy valueOf(String r1) {
        return (ToNumberPolicy) Enum.valueOf(ToNumberPolicy.class, r1);
    }

    public static ToNumberPolicy[] values() {
        return (ToNumberPolicy[]) $VALUES.clone();
    }

    static {
        final int r1 = 0;
        final String r2 = "DOUBLE";
        DOUBLE = new 1(r2, r1);
        final int r22 = 1;
        final String r3 = "LAZILY_PARSED_NUMBER";
        LAZILY_PARSED_NUMBER = new 2(r3, r22);
        final int r32 = 2;
        final String r4 = "LONG_OR_DOUBLE";
        LONG_OR_DOUBLE = new 3(r4, r32);
        final int r42 = 3;
        final String r5 = "BIG_DECIMAL";
        BIG_DECIMAL = new 4(r5, r42);
        $VALUES = new ToNumberPolicy[]{DOUBLE, LAZILY_PARSED_NUMBER, LONG_OR_DOUBLE, BIG_DECIMAL};
    }
}
