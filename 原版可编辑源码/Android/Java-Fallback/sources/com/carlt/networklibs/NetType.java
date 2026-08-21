package com.carlt.networklibs;

public enum NetType extends java.lang.Enum<com.carlt.networklibs.NetType> {
    private static final com.carlt.networklibs.NetType[] $VALUES = null;
    public static final com.carlt.networklibs.NetType AUTO = null;
    public static final com.carlt.networklibs.NetType CMNET = null;
    public static final com.carlt.networklibs.NetType CMWAP = null;
    public static final com.carlt.networklibs.NetType NONE = null;
    public static final com.carlt.networklibs.NetType WIFI = null;

    static {
            com.carlt.networklibs.NetType r0 = new com.carlt.networklibs.NetType
            r1 = 0
            java.lang.String r2 = "AUTO"
            r0.<init>(r2, r1)
            com.carlt.networklibs.NetType.AUTO = r0
            com.carlt.networklibs.NetType r0 = new com.carlt.networklibs.NetType
            r2 = 1
            java.lang.String r3 = "WIFI"
            r0.<init>(r3, r2)
            com.carlt.networklibs.NetType.WIFI = r0
            com.carlt.networklibs.NetType r0 = new com.carlt.networklibs.NetType
            r3 = 2
            java.lang.String r4 = "CMNET"
            r0.<init>(r4, r3)
            com.carlt.networklibs.NetType.CMNET = r0
            com.carlt.networklibs.NetType r0 = new com.carlt.networklibs.NetType
            r4 = 3
            java.lang.String r5 = "CMWAP"
            r0.<init>(r5, r4)
            com.carlt.networklibs.NetType.CMWAP = r0
            com.carlt.networklibs.NetType r0 = new com.carlt.networklibs.NetType
            r5 = 4
            java.lang.String r6 = "NONE"
            r0.<init>(r6, r5)
            com.carlt.networklibs.NetType.NONE = r0
            r6 = 5
            com.carlt.networklibs.NetType[] r6 = new com.carlt.networklibs.NetType[r6]
            com.carlt.networklibs.NetType r7 = com.carlt.networklibs.NetType.AUTO
            r6[r1] = r7
            com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.WIFI
            r6[r2] = r1
            com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.CMNET
            r6[r3] = r1
            com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.CMWAP
            r6[r4] = r1
            r6[r5] = r0
            com.carlt.networklibs.NetType.$VALUES = r6
            return
    }

    NetType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.carlt.networklibs.NetType valueOf(java.lang.String r1) {
            java.lang.Class<com.carlt.networklibs.NetType> r0 = com.carlt.networklibs.NetType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.carlt.networklibs.NetType r1 = (com.carlt.networklibs.NetType) r1
            return r1
    }

    public static com.carlt.networklibs.NetType[] values() {
            com.carlt.networklibs.NetType[] r0 = com.carlt.networklibs.NetType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.carlt.networklibs.NetType[] r0 = (com.carlt.networklibs.NetType[]) r0
            return r0
    }
}
