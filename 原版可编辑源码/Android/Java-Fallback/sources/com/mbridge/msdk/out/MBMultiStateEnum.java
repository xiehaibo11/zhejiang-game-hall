package com.mbridge.msdk.out;

public enum MBMultiStateEnum extends java.lang.Enum<com.mbridge.msdk.out.MBMultiStateEnum> {
    private static final com.mbridge.msdk.out.MBMultiStateEnum[] $VALUES = null;
    public static final com.mbridge.msdk.out.MBMultiStateEnum negative = null;
    public static final com.mbridge.msdk.out.MBMultiStateEnum positive = null;
    public static final com.mbridge.msdk.out.MBMultiStateEnum undefined = null;

    static {
            com.mbridge.msdk.out.MBMultiStateEnum r0 = new com.mbridge.msdk.out.MBMultiStateEnum
            r1 = 0
            java.lang.String r2 = "undefined"
            r0.<init>(r2, r1)
            com.mbridge.msdk.out.MBMultiStateEnum.undefined = r0
            com.mbridge.msdk.out.MBMultiStateEnum r0 = new com.mbridge.msdk.out.MBMultiStateEnum
            r2 = 1
            java.lang.String r3 = "positive"
            r0.<init>(r3, r2)
            com.mbridge.msdk.out.MBMultiStateEnum.positive = r0
            com.mbridge.msdk.out.MBMultiStateEnum r0 = new com.mbridge.msdk.out.MBMultiStateEnum
            r3 = 2
            java.lang.String r4 = "negative"
            r0.<init>(r4, r3)
            com.mbridge.msdk.out.MBMultiStateEnum.negative = r0
            r4 = 3
            com.mbridge.msdk.out.MBMultiStateEnum[] r4 = new com.mbridge.msdk.out.MBMultiStateEnum[r4]
            com.mbridge.msdk.out.MBMultiStateEnum r5 = com.mbridge.msdk.out.MBMultiStateEnum.undefined
            r4[r1] = r5
            com.mbridge.msdk.out.MBMultiStateEnum r1 = com.mbridge.msdk.out.MBMultiStateEnum.positive
            r4[r2] = r1
            r4[r3] = r0
            com.mbridge.msdk.out.MBMultiStateEnum.$VALUES = r4
            return
    }

    MBMultiStateEnum(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.mbridge.msdk.out.MBMultiStateEnum valueOf(java.lang.String r1) {
            java.lang.Class<com.mbridge.msdk.out.MBMultiStateEnum> r0 = com.mbridge.msdk.out.MBMultiStateEnum.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.mbridge.msdk.out.MBMultiStateEnum r1 = (com.mbridge.msdk.out.MBMultiStateEnum) r1
            return r1
    }

    public static com.mbridge.msdk.out.MBMultiStateEnum[] values() {
            com.mbridge.msdk.out.MBMultiStateEnum[] r0 = com.mbridge.msdk.out.MBMultiStateEnum.$VALUES
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.out.MBMultiStateEnum[] r0 = (com.mbridge.msdk.out.MBMultiStateEnum[]) r0
            return r0
    }
}
