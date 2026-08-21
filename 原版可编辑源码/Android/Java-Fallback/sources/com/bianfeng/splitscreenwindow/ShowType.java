package com.bianfeng.splitscreenwindow;

public enum ShowType extends java.lang.Enum<com.bianfeng.splitscreenwindow.ShowType> {
    private static final com.bianfeng.splitscreenwindow.ShowType[] $VALUES = null;
    public static final com.bianfeng.splitscreenwindow.ShowType ACTIVITY_LAND = null;
    public static final com.bianfeng.splitscreenwindow.ShowType ACTIVITY_PORTRAIT = null;
    public static final com.bianfeng.splitscreenwindow.ShowType FENPING_LAND = null;
    public static final com.bianfeng.splitscreenwindow.ShowType FENPING_PORTRAIT = null;
    public static final com.bianfeng.splitscreenwindow.ShowType QUANPING_LAND = null;
    public static final com.bianfeng.splitscreenwindow.ShowType QUANPING_PORTRAIT = null;

    static {
            com.bianfeng.splitscreenwindow.ShowType r0 = new com.bianfeng.splitscreenwindow.ShowType
            java.lang.String r1 = "ACTIVITY_PORTRAIT"
            r2 = 0
            r0.<init>(r1, r2)
            com.bianfeng.splitscreenwindow.ShowType.ACTIVITY_PORTRAIT = r0
            com.bianfeng.splitscreenwindow.ShowType r0 = new com.bianfeng.splitscreenwindow.ShowType
            java.lang.String r1 = "ACTIVITY_LAND"
            r3 = 1
            r0.<init>(r1, r3)
            com.bianfeng.splitscreenwindow.ShowType.ACTIVITY_LAND = r0
            com.bianfeng.splitscreenwindow.ShowType r0 = new com.bianfeng.splitscreenwindow.ShowType
            java.lang.String r1 = "QUANPING_PORTRAIT"
            r4 = 2
            r0.<init>(r1, r4)
            com.bianfeng.splitscreenwindow.ShowType.QUANPING_PORTRAIT = r0
            com.bianfeng.splitscreenwindow.ShowType r0 = new com.bianfeng.splitscreenwindow.ShowType
            java.lang.String r1 = "FENPING_PORTRAIT"
            r5 = 3
            r0.<init>(r1, r5)
            com.bianfeng.splitscreenwindow.ShowType.FENPING_PORTRAIT = r0
            com.bianfeng.splitscreenwindow.ShowType r0 = new com.bianfeng.splitscreenwindow.ShowType
            java.lang.String r1 = "QUANPING_LAND"
            r6 = 4
            r0.<init>(r1, r6)
            com.bianfeng.splitscreenwindow.ShowType.QUANPING_LAND = r0
            com.bianfeng.splitscreenwindow.ShowType r0 = new com.bianfeng.splitscreenwindow.ShowType
            java.lang.String r1 = "FENPING_LAND"
            r7 = 5
            r0.<init>(r1, r7)
            com.bianfeng.splitscreenwindow.ShowType.FENPING_LAND = r0
            r1 = 6
            com.bianfeng.splitscreenwindow.ShowType[] r1 = new com.bianfeng.splitscreenwindow.ShowType[r1]
            com.bianfeng.splitscreenwindow.ShowType r8 = com.bianfeng.splitscreenwindow.ShowType.ACTIVITY_PORTRAIT
            r1[r2] = r8
            com.bianfeng.splitscreenwindow.ShowType r2 = com.bianfeng.splitscreenwindow.ShowType.ACTIVITY_LAND
            r1[r3] = r2
            com.bianfeng.splitscreenwindow.ShowType r2 = com.bianfeng.splitscreenwindow.ShowType.QUANPING_PORTRAIT
            r1[r4] = r2
            com.bianfeng.splitscreenwindow.ShowType r2 = com.bianfeng.splitscreenwindow.ShowType.FENPING_PORTRAIT
            r1[r5] = r2
            com.bianfeng.splitscreenwindow.ShowType r2 = com.bianfeng.splitscreenwindow.ShowType.QUANPING_LAND
            r1[r6] = r2
            r1[r7] = r0
            com.bianfeng.splitscreenwindow.ShowType.$VALUES = r1
            return
    }

    ShowType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.bianfeng.splitscreenwindow.ShowType valueOf(java.lang.String r1) {
            java.lang.Class<com.bianfeng.splitscreenwindow.ShowType> r0 = com.bianfeng.splitscreenwindow.ShowType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.bianfeng.splitscreenwindow.ShowType r1 = (com.bianfeng.splitscreenwindow.ShowType) r1
            return r1
    }

    public static com.bianfeng.splitscreenwindow.ShowType[] values() {
            com.bianfeng.splitscreenwindow.ShowType[] r0 = com.bianfeng.splitscreenwindow.ShowType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.bianfeng.splitscreenwindow.ShowType[] r0 = (com.bianfeng.splitscreenwindow.ShowType[]) r0
            return r0
    }
}
