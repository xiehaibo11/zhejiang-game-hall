package com.bianfeng.datafunsdk.timer;

public enum LoopType extends java.lang.Enum<com.bianfeng.datafunsdk.timer.LoopType> {
    public static final com.bianfeng.datafunsdk.timer.LoopType[] $VALUES = null;
    public static final com.bianfeng.datafunsdk.timer.LoopType DINGSHI = null;
    public static final com.bianfeng.datafunsdk.timer.LoopType NONE = null;
    public static final com.bianfeng.datafunsdk.timer.LoopType ZENGDINGSHI = null;

    static {
            com.bianfeng.datafunsdk.timer.LoopType r0 = new com.bianfeng.datafunsdk.timer.LoopType
            r1 = 0
            java.lang.String r2 = "NONE"
            r0.<init>(r2, r1)
            com.bianfeng.datafunsdk.timer.LoopType.NONE = r0
            com.bianfeng.datafunsdk.timer.LoopType r0 = new com.bianfeng.datafunsdk.timer.LoopType
            r2 = 1
            java.lang.String r3 = "DINGSHI"
            r0.<init>(r3, r2)
            com.bianfeng.datafunsdk.timer.LoopType.DINGSHI = r0
            com.bianfeng.datafunsdk.timer.LoopType r0 = new com.bianfeng.datafunsdk.timer.LoopType
            r3 = 2
            java.lang.String r4 = "ZENGDINGSHI"
            r0.<init>(r4, r3)
            com.bianfeng.datafunsdk.timer.LoopType.ZENGDINGSHI = r0
            r4 = 3
            com.bianfeng.datafunsdk.timer.LoopType[] r4 = new com.bianfeng.datafunsdk.timer.LoopType[r4]
            com.bianfeng.datafunsdk.timer.LoopType r5 = com.bianfeng.datafunsdk.timer.LoopType.NONE
            r4[r1] = r5
            com.bianfeng.datafunsdk.timer.LoopType r1 = com.bianfeng.datafunsdk.timer.LoopType.DINGSHI
            r4[r2] = r1
            r4[r3] = r0
            com.bianfeng.datafunsdk.timer.LoopType.$VALUES = r4
            return
    }

    LoopType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.bianfeng.datafunsdk.timer.LoopType valueOf(java.lang.String r1) {
            java.lang.Class<com.bianfeng.datafunsdk.timer.LoopType> r0 = com.bianfeng.datafunsdk.timer.LoopType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.bianfeng.datafunsdk.timer.LoopType r1 = (com.bianfeng.datafunsdk.timer.LoopType) r1
            return r1
    }

    public static com.bianfeng.datafunsdk.timer.LoopType[] values() {
            com.bianfeng.datafunsdk.timer.LoopType[] r0 = com.bianfeng.datafunsdk.timer.LoopType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.bianfeng.datafunsdk.timer.LoopType[] r0 = (com.bianfeng.datafunsdk.timer.LoopType[]) r0
            return r0
    }
}
