package com.igexin.push.c;

public enum d extends java.lang.Enum<com.igexin.push.c.d> {
    public static final com.igexin.push.c.d a = null;
    public static final com.igexin.push.c.d b = null;
    public static final com.igexin.push.c.d c = null;
    private static final com.igexin.push.c.d[] e = null;
    private int d;

    static {
            com.igexin.push.c.d r0 = new com.igexin.push.c.d
            r1 = 0
            java.lang.String r2 = "NORMAL"
            r0.<init>(r2, r1, r1)
            com.igexin.push.c.d.a = r0
            com.igexin.push.c.d r0 = new com.igexin.push.c.d
            r2 = 1
            java.lang.String r3 = "BACKUP"
            r0.<init>(r3, r2, r2)
            com.igexin.push.c.d.b = r0
            com.igexin.push.c.d r0 = new com.igexin.push.c.d
            r3 = 2
            java.lang.String r4 = "TRY_NORMAL"
            r0.<init>(r4, r3, r3)
            com.igexin.push.c.d.c = r0
            r4 = 3
            com.igexin.push.c.d[] r4 = new com.igexin.push.c.d[r4]
            com.igexin.push.c.d r5 = com.igexin.push.c.d.a
            r4[r1] = r5
            com.igexin.push.c.d r1 = com.igexin.push.c.d.b
            r4[r2] = r1
            r4[r3] = r0
            com.igexin.push.c.d.e = r4
            return
    }

    d(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = -1
            r0.d = r1
            r0.d = r3
            return
    }

    public static com.igexin.push.c.d a(int r5) {
            com.igexin.push.c.d[] r0 = a()
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L14
            r3 = r0[r2]
            int r4 = r3.b()
            if (r4 != r5) goto L11
            return r3
        L11:
            int r2 = r2 + 1
            goto L6
        L14:
            r5 = 0
            return r5
    }

    public static com.igexin.push.c.d[] a() {
            com.igexin.push.c.d[] r0 = com.igexin.push.c.d.e
            java.lang.Object r0 = r0.clone()
            com.igexin.push.c.d[] r0 = (com.igexin.push.c.d[]) r0
            return r0
    }

    public int b() {
            r1 = this;
            int r0 = r1.d
            return r0
    }
}
