package com.google.gson;

public enum FieldNamingPolicy extends Enum<FieldNamingPolicy> implements FieldNamingStrategy {
    private static final FieldNamingPolicy[] $VALUES = null;
    public static final FieldNamingPolicy IDENTITY = null;
    public static final FieldNamingPolicy LOWER_CASE_WITH_DASHES = null;
    public static final FieldNamingPolicy LOWER_CASE_WITH_DOTS = null;
    public static final FieldNamingPolicy LOWER_CASE_WITH_UNDERSCORES = null;
    public static final FieldNamingPolicy UPPER_CAMEL_CASE = null;
    public static final FieldNamingPolicy UPPER_CAMEL_CASE_WITH_SPACES = null;
    public static final FieldNamingPolicy UPPER_CASE_WITH_UNDERSCORES = null;

    FieldNamingPolicy(String r1, int r2) {
    }

    FieldNamingPolicy(String r1, int r2, 1 r3) {
        this(r1, r2);
    }

    public static FieldNamingPolicy valueOf(String r1) {
        return (FieldNamingPolicy) Enum.valueOf(FieldNamingPolicy.class, r1);
    }

    public static FieldNamingPolicy[] values() {
        return (FieldNamingPolicy[]) $VALUES.clone();
    }

    static {
        final int r1 = 0;
        final String r2 = "IDENTITY";
        IDENTITY = new 1(r2, r1);
        final int r22 = 1;
        final String r3 = "UPPER_CAMEL_CASE";
        UPPER_CAMEL_CASE = new 2(r3, r22);
        final int r32 = 2;
        final String r4 = "UPPER_CAMEL_CASE_WITH_SPACES";
        UPPER_CAMEL_CASE_WITH_SPACES = new 3(r4, r32);
        final int r42 = 3;
        final String r5 = "UPPER_CASE_WITH_UNDERSCORES";
        UPPER_CASE_WITH_UNDERSCORES = new 4(r5, r42);
        final int r52 = 4;
        final String r6 = "LOWER_CASE_WITH_UNDERSCORES";
        LOWER_CASE_WITH_UNDERSCORES = new 5(r6, r52);
        final int r62 = 5;
        final String r7 = "LOWER_CASE_WITH_DASHES";
        LOWER_CASE_WITH_DASHES = new 6(r7, r62);
        final int r72 = 6;
        final String r8 = "LOWER_CASE_WITH_DOTS";
        LOWER_CASE_WITH_DOTS = new 7(r8, r72);
        $VALUES = new FieldNamingPolicy[]{IDENTITY, UPPER_CAMEL_CASE, UPPER_CAMEL_CASE_WITH_SPACES, UPPER_CASE_WITH_UNDERSCORES, LOWER_CASE_WITH_UNDERSCORES, LOWER_CASE_WITH_DASHES, LOWER_CASE_WITH_DOTS};
    }

    static String separateCamelCase(String r5, char r6) {
        StringBuilder r0 = new StringBuilder();
        int r1 = r5.length();
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L11;
        char r3 = r5.charAt(r2);
        if (Character.isUpperCase(r3) == false) goto L9;
        if (r0.length() == 0) goto L9;
        r0.append(r6);
    L9:
        r0.append(r3);
        r2 = r2 + 1;
        goto L3
    L11:
        return r0.toString();
    }

    static String upperCaseFirstLetter(String r5) {
        int r0 = r5.length();
        int r2 = 0;
    L3:
        if (r2 >= r0) goto L16;
        char r3 = r5.charAt(r2);
        if (Character.isLetter(r3) == true) goto L7;
        r2 = r2 + 1;
        goto L3
    L7:
        if (Character.isUpperCase(r3) == false) goto L9;
        return r5;
    L9:
        char r02 = Character.toUpperCase(r3);
        if (r2 != 0) goto L14;
        return r02 + r5.substring(1);
    L14:
        return r5.substring(0, r2) + r02 + r5.substring(r2 + 1);
    L16:
        return r5;
    }
}
