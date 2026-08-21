package com.sigmob.sdk.base.common;

public enum af extends java.lang.Enum<com.sigmob.sdk.base.common.af> {
    public static final com.sigmob.sdk.base.common.af a = null;
    public static final com.sigmob.sdk.base.common.af b = null;
    public static final com.sigmob.sdk.base.common.af c = null;
    public static final com.sigmob.sdk.base.common.af d = null;
    public static final com.sigmob.sdk.base.common.af e = null;
    public static final com.sigmob.sdk.base.common.af f = null;
    public static final com.sigmob.sdk.base.common.af g = null;
    private static final com.sigmob.sdk.base.common.af[] i = null;
    private final boolean h;








    static {
            com.sigmob.sdk.base.common.af$1 r0 = new com.sigmob.sdk.base.common.af$1
            r1 = 0
            java.lang.String r2 = "IGNORE_ABOUT_SCHEME"
            r0.<init>(r2, r1, r1)
            com.sigmob.sdk.base.common.af.a = r0
            com.sigmob.sdk.base.common.af$2 r0 = new com.sigmob.sdk.base.common.af$2
            r2 = 1
            java.lang.String r3 = "MINI_PROGRAM"
            r0.<init>(r3, r2, r1)
            com.sigmob.sdk.base.common.af.b = r0
            com.sigmob.sdk.base.common.af$3 r0 = new com.sigmob.sdk.base.common.af$3
            r3 = 2
            java.lang.String r4 = "FOLLOW_DEEP_LINK"
            r0.<init>(r4, r3, r2)
            com.sigmob.sdk.base.common.af.c = r0
            com.sigmob.sdk.base.common.af$4 r0 = new com.sigmob.sdk.base.common.af$4
            r4 = 3
            java.lang.String r5 = "MARKET_SCHEME"
            r0.<init>(r5, r4, r1)
            com.sigmob.sdk.base.common.af.d = r0
            com.sigmob.sdk.base.common.af$5 r0 = new com.sigmob.sdk.base.common.af$5
            r5 = 4
            java.lang.String r6 = "DOWNLOAD_APK"
            r0.<init>(r6, r5, r2)
            com.sigmob.sdk.base.common.af.e = r0
            com.sigmob.sdk.base.common.af$6 r0 = new com.sigmob.sdk.base.common.af$6
            r6 = 5
            java.lang.String r7 = "OPEN_WITH_BROWSER"
            r0.<init>(r7, r6, r2)
            com.sigmob.sdk.base.common.af.f = r0
            com.sigmob.sdk.base.common.af$7 r0 = new com.sigmob.sdk.base.common.af$7
            r7 = 6
            java.lang.String r8 = "NOOP"
            r0.<init>(r8, r7, r1)
            com.sigmob.sdk.base.common.af.g = r0
            r8 = 7
            com.sigmob.sdk.base.common.af[] r8 = new com.sigmob.sdk.base.common.af[r8]
            com.sigmob.sdk.base.common.af r9 = com.sigmob.sdk.base.common.af.a
            r8[r1] = r9
            com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.b
            r8[r2] = r1
            com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.c
            r8[r3] = r1
            com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.d
            r8[r4] = r1
            com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.e
            r8[r5] = r1
            com.sigmob.sdk.base.common.af r1 = com.sigmob.sdk.base.common.af.f
            r8[r6] = r1
            r8[r7] = r0
            com.sigmob.sdk.base.common.af.i = r8
            return
    }

    af(java.lang.String r1, int r2, boolean r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.h = r3
            return
    }

    af(java.lang.String r1, int r2, boolean r3, com.sigmob.sdk.base.common.af.1 r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public static com.sigmob.sdk.base.common.af valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.sdk.base.common.af> r0 = com.sigmob.sdk.base.common.af.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.sdk.base.common.af r1 = (com.sigmob.sdk.base.common.af) r1
            return r1
    }

    public static com.sigmob.sdk.base.common.af[] values() {
            com.sigmob.sdk.base.common.af[] r0 = com.sigmob.sdk.base.common.af.i
            java.lang.Object r0 = r0.clone()
            com.sigmob.sdk.base.common.af[] r0 = (com.sigmob.sdk.base.common.af[]) r0
            return r0
    }

    public abstract java.lang.String a(com.sigmob.sdk.base.models.BaseAdUnit r1);

    protected abstract void a(android.content.Context r1, android.net.Uri r2, com.sigmob.sdk.base.common.ag r3, com.sigmob.sdk.base.models.BaseAdUnit r4) throws java.lang.Exception;

    public void a(com.sigmob.sdk.base.common.ag r3, android.content.Context r4, android.net.Uri r5, boolean r6, com.sigmob.sdk.base.models.BaseAdUnit r7) throws java.lang.Exception {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Ad event URL: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            boolean r0 = r2.h
            if (r0 == 0) goto L23
            if (r6 == 0) goto L1b
            goto L23
        L1b:
            java.lang.Exception r3 = new java.lang.Exception
            java.lang.String r4 = "Attempted to handle action without user interaction."
            r3.<init>(r4)
            throw r3
        L23:
            r2.a(r4, r5, r3, r7)
            return
    }

    public abstract boolean a(android.net.Uri r1);
}
