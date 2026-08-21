package com.tkay.expressad.video.dynview.c;

public enum b extends java.lang.Enum<com.tkay.expressad.video.dynview.c.b> implements com.tkay.expressad.video.dynview.c.a {
    public static final com.tkay.expressad.video.dynview.c.b a = null;
    public static final com.tkay.expressad.video.dynview.c.b b = null;
    public static final com.tkay.expressad.video.dynview.c.b c = null;
    public static final com.tkay.expressad.video.dynview.c.b d = null;
    public static final com.tkay.expressad.video.dynview.c.b e = null;
    public static final com.tkay.expressad.video.dynview.c.b f = null;
    private static final com.tkay.expressad.video.dynview.c.b[] i = null;
    private int g;
    private java.lang.String h;

    static {
            com.tkay.expressad.video.dynview.c.b r0 = new com.tkay.expressad.video.dynview.c.b
            r1 = 0
            java.lang.String r2 = "NOT_FOUND_VIEWOPTION"
            r3 = -1
            java.lang.String r4 = "ViewOption is null"
            r0.<init>(r2, r1, r3, r4)
            com.tkay.expressad.video.dynview.c.b.a = r0
            com.tkay.expressad.video.dynview.c.b r0 = new com.tkay.expressad.video.dynview.c.b
            r2 = 1
            java.lang.String r3 = "NOT_FOUND_CONTEXT"
            r4 = -2
            java.lang.String r5 = "Context is null"
            r0.<init>(r3, r2, r4, r5)
            com.tkay.expressad.video.dynview.c.b.b = r0
            com.tkay.expressad.video.dynview.c.b r0 = new com.tkay.expressad.video.dynview.c.b
            r3 = 2
            java.lang.String r4 = "NOT_FOUND_LAYOUTNAME"
            r5 = -3
            java.lang.String r6 = "layout xml name is null"
            r0.<init>(r4, r3, r5, r6)
            com.tkay.expressad.video.dynview.c.b.c = r0
            com.tkay.expressad.video.dynview.c.b r0 = new com.tkay.expressad.video.dynview.c.b
            r4 = 3
            java.lang.String r5 = "CAMPAIGNEX_IS_NULL"
            r6 = -4
            java.lang.String r7 = "Campaign size only one"
            r0.<init>(r5, r4, r6, r7)
            com.tkay.expressad.video.dynview.c.b.d = r0
            com.tkay.expressad.video.dynview.c.b r0 = new com.tkay.expressad.video.dynview.c.b
            r5 = 4
            java.lang.String r6 = "VIEW_CREATE_ERROR"
            r7 = -5
            java.lang.String r8 = "view create error"
            r0.<init>(r6, r5, r7, r8)
            com.tkay.expressad.video.dynview.c.b.e = r0
            com.tkay.expressad.video.dynview.c.b r0 = new com.tkay.expressad.video.dynview.c.b
            r6 = 5
            java.lang.String r7 = "NOT_FOUND_ROOTVIEW"
            r8 = -6
            java.lang.String r9 = "rootview is null"
            r0.<init>(r7, r6, r8, r9)
            com.tkay.expressad.video.dynview.c.b.f = r0
            r7 = 6
            com.tkay.expressad.video.dynview.c.b[] r7 = new com.tkay.expressad.video.dynview.c.b[r7]
            com.tkay.expressad.video.dynview.c.b r8 = com.tkay.expressad.video.dynview.c.b.a
            r7[r1] = r8
            com.tkay.expressad.video.dynview.c.b r1 = com.tkay.expressad.video.dynview.c.b.b
            r7[r2] = r1
            com.tkay.expressad.video.dynview.c.b r1 = com.tkay.expressad.video.dynview.c.b.c
            r7[r3] = r1
            com.tkay.expressad.video.dynview.c.b r1 = com.tkay.expressad.video.dynview.c.b.d
            r7[r4] = r1
            com.tkay.expressad.video.dynview.c.b r1 = com.tkay.expressad.video.dynview.c.b.e
            r7[r5] = r1
            r7[r6] = r0
            com.tkay.expressad.video.dynview.c.b.i = r7
            return
    }

    b(java.lang.String r1, int r2, int r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.g = r3
            r0.h = r4
            return
    }

    public static com.tkay.expressad.video.dynview.c.b valueOf(java.lang.String r1) {
            java.lang.Class<com.tkay.expressad.video.dynview.c.b> r0 = com.tkay.expressad.video.dynview.c.b.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.tkay.expressad.video.dynview.c.b r1 = (com.tkay.expressad.video.dynview.c.b) r1
            return r1
    }

    public static com.tkay.expressad.video.dynview.c.b[] values() {
            com.tkay.expressad.video.dynview.c.b[] r0 = com.tkay.expressad.video.dynview.c.b.i
            java.lang.Object r0 = r0.clone()
            com.tkay.expressad.video.dynview.c.b[] r0 = (com.tkay.expressad.video.dynview.c.b[]) r0
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
