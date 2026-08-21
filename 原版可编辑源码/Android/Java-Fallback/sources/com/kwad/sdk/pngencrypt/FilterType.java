package com.kwad.sdk.pngencrypt;

public enum FilterType extends java.lang.Enum<com.kwad.sdk.pngencrypt.FilterType> {
    private static final com.kwad.sdk.pngencrypt.FilterType[] $VALUES = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_ADAPTIVE_FAST = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_ADAPTIVE_FULL = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_ADAPTIVE_MEDIUM = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_AGGRESSIVE = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_AVERAGE = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_CYCLIC = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_DEFAULT = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_NONE = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_PAETH = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_PRESERVE = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_SUB = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_SUPER_ADAPTIVE = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_UNKNOWN = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_UP = null;
    public static final com.kwad.sdk.pngencrypt.FilterType FILTER_VERYAGGRESSIVE = null;
    private static java.util.HashMap<java.lang.Integer, com.kwad.sdk.pngencrypt.FilterType> byVal;
    public final int val;

    static {
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r1 = 0
            java.lang.String r2 = "FILTER_NONE"
            r0.<init>(r2, r1, r1)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_NONE = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r2 = 1
            java.lang.String r3 = "FILTER_SUB"
            r0.<init>(r3, r2, r2)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_SUB = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r3 = 2
            java.lang.String r4 = "FILTER_UP"
            r0.<init>(r4, r3, r3)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_UP = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r4 = 3
            java.lang.String r5 = "FILTER_AVERAGE"
            r0.<init>(r5, r4, r4)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_AVERAGE = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r5 = 4
            java.lang.String r6 = "FILTER_PAETH"
            r0.<init>(r6, r5, r5)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_PAETH = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r6 = 5
            java.lang.String r7 = "FILTER_DEFAULT"
            r8 = -1
            r0.<init>(r7, r6, r8)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_DEFAULT = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r7 = -2
            r8 = 6
            java.lang.String r9 = "FILTER_AGGRESSIVE"
            r0.<init>(r9, r8, r7)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_AGGRESSIVE = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r9 = -4
            r10 = 7
            java.lang.String r11 = "FILTER_VERYAGGRESSIVE"
            r0.<init>(r11, r10, r9)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_VERYAGGRESSIVE = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r11 = 8
            java.lang.String r12 = "FILTER_ADAPTIVE_FULL"
            r0.<init>(r12, r11, r9)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_ADAPTIVE_FULL = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r9 = 9
            java.lang.String r12 = "FILTER_ADAPTIVE_MEDIUM"
            r13 = -3
            r0.<init>(r12, r9, r13)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_ADAPTIVE_MEDIUM = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r12 = 10
            java.lang.String r13 = "FILTER_ADAPTIVE_FAST"
            r0.<init>(r13, r12, r7)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_ADAPTIVE_FAST = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r7 = 11
            java.lang.String r13 = "FILTER_SUPER_ADAPTIVE"
            r14 = -10
            r0.<init>(r13, r7, r14)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_SUPER_ADAPTIVE = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r13 = 12
            java.lang.String r14 = "FILTER_PRESERVE"
            r15 = -40
            r0.<init>(r14, r13, r15)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_PRESERVE = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r14 = 13
            java.lang.String r15 = "FILTER_CYCLIC"
            r13 = -50
            r0.<init>(r15, r14, r13)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_CYCLIC = r0
            com.kwad.sdk.pngencrypt.FilterType r0 = new com.kwad.sdk.pngencrypt.FilterType
            r13 = 14
            java.lang.String r15 = "FILTER_UNKNOWN"
            r14 = -100
            r0.<init>(r15, r13, r14)
            com.kwad.sdk.pngencrypt.FilterType.FILTER_UNKNOWN = r0
            r14 = 15
            com.kwad.sdk.pngencrypt.FilterType[] r14 = new com.kwad.sdk.pngencrypt.FilterType[r14]
            com.kwad.sdk.pngencrypt.FilterType r15 = com.kwad.sdk.pngencrypt.FilterType.FILTER_NONE
            r14[r1] = r15
            com.kwad.sdk.pngencrypt.FilterType r15 = com.kwad.sdk.pngencrypt.FilterType.FILTER_SUB
            r14[r2] = r15
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_UP
            r14[r3] = r2
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_AVERAGE
            r14[r4] = r2
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_PAETH
            r14[r5] = r2
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_DEFAULT
            r14[r6] = r2
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_AGGRESSIVE
            r14[r8] = r2
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_VERYAGGRESSIVE
            r14[r10] = r2
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_ADAPTIVE_FULL
            r14[r11] = r2
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_ADAPTIVE_MEDIUM
            r14[r9] = r2
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_ADAPTIVE_FAST
            r14[r12] = r2
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_SUPER_ADAPTIVE
            r14[r7] = r2
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_PRESERVE
            r3 = 12
            r14[r3] = r2
            com.kwad.sdk.pngencrypt.FilterType r2 = com.kwad.sdk.pngencrypt.FilterType.FILTER_CYCLIC
            r3 = 13
            r14[r3] = r2
            r14[r13] = r0
            com.kwad.sdk.pngencrypt.FilterType.$VALUES = r14
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.sdk.pngencrypt.FilterType.byVal = r0
            com.kwad.sdk.pngencrypt.FilterType[] r0 = values()
            int r2 = r0.length
        Lf9:
            if (r1 >= r2) goto L10b
            r3 = r0[r1]
            java.util.HashMap<java.lang.Integer, com.kwad.sdk.pngencrypt.FilterType> r4 = com.kwad.sdk.pngencrypt.FilterType.byVal
            int r5 = r3.val
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r4.put(r5, r3)
            int r1 = r1 + 1
            goto Lf9
        L10b:
            return
    }

    FilterType(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.val = r3
            return
    }

    public static com.kwad.sdk.pngencrypt.FilterType[] getAllStandard() {
            r0 = 5
            com.kwad.sdk.pngencrypt.FilterType[] r0 = new com.kwad.sdk.pngencrypt.FilterType[r0]
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_NONE
            r2 = 0
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_SUB
            r2 = 1
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_UP
            r2 = 2
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_AVERAGE
            r2 = 3
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_PAETH
            r2 = 4
            r0[r2] = r1
            return r0
    }

    public static com.kwad.sdk.pngencrypt.FilterType[] getAllStandardExceptNone() {
            r0 = 4
            com.kwad.sdk.pngencrypt.FilterType[] r0 = new com.kwad.sdk.pngencrypt.FilterType[r0]
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_SUB
            r2 = 0
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_UP
            r2 = 1
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_AVERAGE
            r2 = 2
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_PAETH
            r2 = 3
            r0[r2] = r1
            return r0
    }

    static com.kwad.sdk.pngencrypt.FilterType[] getAllStandardForFirstRow() {
            r0 = 2
            com.kwad.sdk.pngencrypt.FilterType[] r0 = new com.kwad.sdk.pngencrypt.FilterType[r0]
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_SUB
            r2 = 0
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_NONE
            r2 = 1
            r0[r2] = r1
            return r0
    }

    public static com.kwad.sdk.pngencrypt.FilterType[] getAllStandardNoneLast() {
            r0 = 5
            com.kwad.sdk.pngencrypt.FilterType[] r0 = new com.kwad.sdk.pngencrypt.FilterType[r0]
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_SUB
            r2 = 0
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_UP
            r2 = 1
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_AVERAGE
            r2 = 2
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_PAETH
            r2 = 3
            r0[r2] = r1
            com.kwad.sdk.pngencrypt.FilterType r1 = com.kwad.sdk.pngencrypt.FilterType.FILTER_NONE
            r2 = 4
            r0[r2] = r1
            return r0
    }

    public static com.kwad.sdk.pngencrypt.FilterType getByVal(int r1) {
            java.util.HashMap<java.lang.Integer, com.kwad.sdk.pngencrypt.FilterType> r0 = com.kwad.sdk.pngencrypt.FilterType.byVal
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r1 = r0.get(r1)
            com.kwad.sdk.pngencrypt.FilterType r1 = (com.kwad.sdk.pngencrypt.FilterType) r1
            return r1
    }

    public static boolean isAdaptive(com.kwad.sdk.pngencrypt.FilterType r1) {
            int r1 = r1.val
            r0 = -2
            if (r1 > r0) goto La
            r0 = -4
            if (r1 < r0) goto La
            r1 = 1
            return r1
        La:
            r1 = 0
            return r1
    }

    public static boolean isValidStandard(int r1) {
            if (r1 < 0) goto L7
            r0 = 4
            if (r1 > r0) goto L7
            r1 = 1
            return r1
        L7:
            r1 = 0
            return r1
    }

    public static boolean isValidStandard(com.kwad.sdk.pngencrypt.FilterType r0) {
            if (r0 == 0) goto Lc
            int r0 = r0.val
            boolean r0 = isValidStandard(r0)
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public static com.kwad.sdk.pngencrypt.FilterType valueOf(java.lang.String r1) {
            java.lang.Class<com.kwad.sdk.pngencrypt.FilterType> r0 = com.kwad.sdk.pngencrypt.FilterType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwad.sdk.pngencrypt.FilterType r1 = (com.kwad.sdk.pngencrypt.FilterType) r1
            return r1
    }

    public static com.kwad.sdk.pngencrypt.FilterType[] values() {
            com.kwad.sdk.pngencrypt.FilterType[] r0 = com.kwad.sdk.pngencrypt.FilterType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwad.sdk.pngencrypt.FilterType[] r0 = (com.kwad.sdk.pngencrypt.FilterType[]) r0
            return r0
    }
}
