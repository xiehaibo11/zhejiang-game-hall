package com.mbridge.msdk.video.dynview.c;

public enum a extends java.lang.Enum<com.mbridge.msdk.video.dynview.c.a> {
    public static final com.mbridge.msdk.video.dynview.c.a a = null;
    public static final com.mbridge.msdk.video.dynview.c.a b = null;
    public static final com.mbridge.msdk.video.dynview.c.a c = null;
    public static final com.mbridge.msdk.video.dynview.c.a d = null;
    public static final com.mbridge.msdk.video.dynview.c.a e = null;
    public static final com.mbridge.msdk.video.dynview.c.a f = null;
    private static final com.mbridge.msdk.video.dynview.c.a[] i = null;
    private int g;
    private java.lang.String h;

    static {
            com.mbridge.msdk.video.dynview.c.a r0 = new com.mbridge.msdk.video.dynview.c.a
            r1 = 0
            java.lang.String r2 = "NOT_FOUND_VIEWOPTION"
            r3 = -1
            java.lang.String r4 = "ViewOption is null"
            r0.<init>(r2, r1, r3, r4)
            com.mbridge.msdk.video.dynview.c.a.a = r0
            com.mbridge.msdk.video.dynview.c.a r0 = new com.mbridge.msdk.video.dynview.c.a
            r2 = 1
            java.lang.String r3 = "NOT_FOUND_CONTEXT"
            r4 = -2
            java.lang.String r5 = "Context is null"
            r0.<init>(r3, r2, r4, r5)
            com.mbridge.msdk.video.dynview.c.a.b = r0
            com.mbridge.msdk.video.dynview.c.a r0 = new com.mbridge.msdk.video.dynview.c.a
            r3 = 2
            java.lang.String r4 = "NOT_FOUND_LAYOUTNAME"
            r5 = -3
            java.lang.String r6 = "layout xml name is null"
            r0.<init>(r4, r3, r5, r6)
            com.mbridge.msdk.video.dynview.c.a.c = r0
            com.mbridge.msdk.video.dynview.c.a r0 = new com.mbridge.msdk.video.dynview.c.a
            r4 = 3
            java.lang.String r5 = "CAMPAIGNEX_IS_NULL"
            r6 = -4
            java.lang.String r7 = "Campaign size only one"
            r0.<init>(r5, r4, r6, r7)
            com.mbridge.msdk.video.dynview.c.a.d = r0
            com.mbridge.msdk.video.dynview.c.a r0 = new com.mbridge.msdk.video.dynview.c.a
            r5 = 4
            java.lang.String r6 = "VIEW_CREATE_ERROR"
            r7 = -5
            java.lang.String r8 = "view create error"
            r0.<init>(r6, r5, r7, r8)
            com.mbridge.msdk.video.dynview.c.a.e = r0
            com.mbridge.msdk.video.dynview.c.a r0 = new com.mbridge.msdk.video.dynview.c.a
            r6 = 5
            java.lang.String r7 = "NOT_FOUND_ROOTVIEW"
            r8 = -6
            java.lang.String r9 = "rootview is null"
            r0.<init>(r7, r6, r8, r9)
            com.mbridge.msdk.video.dynview.c.a.f = r0
            r7 = 6
            com.mbridge.msdk.video.dynview.c.a[] r7 = new com.mbridge.msdk.video.dynview.c.a[r7]
            com.mbridge.msdk.video.dynview.c.a r8 = com.mbridge.msdk.video.dynview.c.a.a
            r7[r1] = r8
            com.mbridge.msdk.video.dynview.c.a r1 = com.mbridge.msdk.video.dynview.c.a.b
            r7[r2] = r1
            com.mbridge.msdk.video.dynview.c.a r1 = com.mbridge.msdk.video.dynview.c.a.c
            r7[r3] = r1
            com.mbridge.msdk.video.dynview.c.a r1 = com.mbridge.msdk.video.dynview.c.a.d
            r7[r4] = r1
            com.mbridge.msdk.video.dynview.c.a r1 = com.mbridge.msdk.video.dynview.c.a.e
            r7[r5] = r1
            r7[r6] = r0
            com.mbridge.msdk.video.dynview.c.a.i = r7
            return
    }

    a(java.lang.String r1, int r2, int r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.g = r3
            r0.h = r4
            return
    }

    public static com.mbridge.msdk.video.dynview.c.a valueOf(java.lang.String r1) {
            java.lang.Class<com.mbridge.msdk.video.dynview.c.a> r0 = com.mbridge.msdk.video.dynview.c.a.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.mbridge.msdk.video.dynview.c.a r1 = (com.mbridge.msdk.video.dynview.c.a) r1
            return r1
    }

    public static com.mbridge.msdk.video.dynview.c.a[] values() {
            com.mbridge.msdk.video.dynview.c.a[] r0 = com.mbridge.msdk.video.dynview.c.a.i
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.video.dynview.c.a[] r0 = (com.mbridge.msdk.video.dynview.c.a[]) r0
            return r0
    }

    public final int a() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }
}
