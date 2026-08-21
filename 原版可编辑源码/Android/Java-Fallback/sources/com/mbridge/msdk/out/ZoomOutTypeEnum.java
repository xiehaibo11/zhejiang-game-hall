package com.mbridge.msdk.out;

public enum ZoomOutTypeEnum extends java.lang.Enum<com.mbridge.msdk.out.ZoomOutTypeEnum> {
    private static final com.mbridge.msdk.out.ZoomOutTypeEnum[] $VALUES = null;
    public static final com.mbridge.msdk.out.ZoomOutTypeEnum BigView = null;
    public static final com.mbridge.msdk.out.ZoomOutTypeEnum FloatBall = null;
    public static final com.mbridge.msdk.out.ZoomOutTypeEnum MediumView = null;
    public static final com.mbridge.msdk.out.ZoomOutTypeEnum SmallView = null;
    private int index;

    static {
            com.mbridge.msdk.out.ZoomOutTypeEnum r0 = new com.mbridge.msdk.out.ZoomOutTypeEnum
            r1 = 0
            r2 = 1
            java.lang.String r3 = "FloatBall"
            r0.<init>(r3, r1, r2)
            com.mbridge.msdk.out.ZoomOutTypeEnum.FloatBall = r0
            com.mbridge.msdk.out.ZoomOutTypeEnum r0 = new com.mbridge.msdk.out.ZoomOutTypeEnum
            r3 = 4
            java.lang.String r4 = "BigView"
            r0.<init>(r4, r2, r3)
            com.mbridge.msdk.out.ZoomOutTypeEnum.BigView = r0
            com.mbridge.msdk.out.ZoomOutTypeEnum r0 = new com.mbridge.msdk.out.ZoomOutTypeEnum
            r4 = 3
            r5 = 2
            java.lang.String r6 = "MediumView"
            r0.<init>(r6, r5, r4)
            com.mbridge.msdk.out.ZoomOutTypeEnum.MediumView = r0
            com.mbridge.msdk.out.ZoomOutTypeEnum r0 = new com.mbridge.msdk.out.ZoomOutTypeEnum
            java.lang.String r6 = "SmallView"
            r0.<init>(r6, r4, r5)
            com.mbridge.msdk.out.ZoomOutTypeEnum.SmallView = r0
            com.mbridge.msdk.out.ZoomOutTypeEnum[] r3 = new com.mbridge.msdk.out.ZoomOutTypeEnum[r3]
            com.mbridge.msdk.out.ZoomOutTypeEnum r6 = com.mbridge.msdk.out.ZoomOutTypeEnum.FloatBall
            r3[r1] = r6
            com.mbridge.msdk.out.ZoomOutTypeEnum r1 = com.mbridge.msdk.out.ZoomOutTypeEnum.BigView
            r3[r2] = r1
            com.mbridge.msdk.out.ZoomOutTypeEnum r1 = com.mbridge.msdk.out.ZoomOutTypeEnum.MediumView
            r3[r5] = r1
            r3[r4] = r0
            com.mbridge.msdk.out.ZoomOutTypeEnum.$VALUES = r3
            return
    }

    ZoomOutTypeEnum(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.index = r3
            return
    }

    public static com.mbridge.msdk.out.ZoomOutTypeEnum valueOf(java.lang.String r1) {
            java.lang.Class<com.mbridge.msdk.out.ZoomOutTypeEnum> r0 = com.mbridge.msdk.out.ZoomOutTypeEnum.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.mbridge.msdk.out.ZoomOutTypeEnum r1 = (com.mbridge.msdk.out.ZoomOutTypeEnum) r1
            return r1
    }

    public static com.mbridge.msdk.out.ZoomOutTypeEnum[] values() {
            com.mbridge.msdk.out.ZoomOutTypeEnum[] r0 = com.mbridge.msdk.out.ZoomOutTypeEnum.$VALUES
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.out.ZoomOutTypeEnum[] r0 = (com.mbridge.msdk.out.ZoomOutTypeEnum[]) r0
            return r0
    }

    public final int getIndex() {
            r1 = this;
            int r0 = r1.index
            return r0
    }
}
