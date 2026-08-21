package com.mbridge.msdk.dycreator.bus;

public enum ThreadMode extends java.lang.Enum<com.mbridge.msdk.dycreator.bus.ThreadMode> {
    public static final com.mbridge.msdk.dycreator.bus.ThreadMode Async = null;
    public static final com.mbridge.msdk.dycreator.bus.ThreadMode BackgroundThread = null;
    public static final com.mbridge.msdk.dycreator.bus.ThreadMode MainThread = null;
    public static final com.mbridge.msdk.dycreator.bus.ThreadMode PostThread = null;
    private static final com.mbridge.msdk.dycreator.bus.ThreadMode[] a = null;

    static {
            com.mbridge.msdk.dycreator.bus.ThreadMode r0 = new com.mbridge.msdk.dycreator.bus.ThreadMode
            r1 = 0
            java.lang.String r2 = "PostThread"
            r0.<init>(r2, r1)
            com.mbridge.msdk.dycreator.bus.ThreadMode.PostThread = r0
            com.mbridge.msdk.dycreator.bus.ThreadMode r0 = new com.mbridge.msdk.dycreator.bus.ThreadMode
            r2 = 1
            java.lang.String r3 = "MainThread"
            r0.<init>(r3, r2)
            com.mbridge.msdk.dycreator.bus.ThreadMode.MainThread = r0
            com.mbridge.msdk.dycreator.bus.ThreadMode r0 = new com.mbridge.msdk.dycreator.bus.ThreadMode
            r3 = 2
            java.lang.String r4 = "BackgroundThread"
            r0.<init>(r4, r3)
            com.mbridge.msdk.dycreator.bus.ThreadMode.BackgroundThread = r0
            com.mbridge.msdk.dycreator.bus.ThreadMode r0 = new com.mbridge.msdk.dycreator.bus.ThreadMode
            r4 = 3
            java.lang.String r5 = "Async"
            r0.<init>(r5, r4)
            com.mbridge.msdk.dycreator.bus.ThreadMode.Async = r0
            r5 = 4
            com.mbridge.msdk.dycreator.bus.ThreadMode[] r5 = new com.mbridge.msdk.dycreator.bus.ThreadMode[r5]
            com.mbridge.msdk.dycreator.bus.ThreadMode r6 = com.mbridge.msdk.dycreator.bus.ThreadMode.PostThread
            r5[r1] = r6
            com.mbridge.msdk.dycreator.bus.ThreadMode r1 = com.mbridge.msdk.dycreator.bus.ThreadMode.MainThread
            r5[r2] = r1
            com.mbridge.msdk.dycreator.bus.ThreadMode r1 = com.mbridge.msdk.dycreator.bus.ThreadMode.BackgroundThread
            r5[r3] = r1
            r5[r4] = r0
            com.mbridge.msdk.dycreator.bus.ThreadMode.a = r5
            return
    }

    ThreadMode(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.mbridge.msdk.dycreator.bus.ThreadMode valueOf(java.lang.String r1) {
            java.lang.Class<com.mbridge.msdk.dycreator.bus.ThreadMode> r0 = com.mbridge.msdk.dycreator.bus.ThreadMode.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.mbridge.msdk.dycreator.bus.ThreadMode r1 = (com.mbridge.msdk.dycreator.bus.ThreadMode) r1
            return r1
    }

    public static com.mbridge.msdk.dycreator.bus.ThreadMode[] values() {
            com.mbridge.msdk.dycreator.bus.ThreadMode[] r0 = com.mbridge.msdk.dycreator.bus.ThreadMode.a
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.dycreator.bus.ThreadMode[] r0 = (com.mbridge.msdk.dycreator.bus.ThreadMode[]) r0
            return r0
    }
}
