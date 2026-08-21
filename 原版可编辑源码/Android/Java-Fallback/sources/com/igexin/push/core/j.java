package com.igexin.push.core;

public enum j extends java.lang.Enum<com.igexin.push.core.j> {
    public static final com.igexin.push.core.j a = null;
    public static final com.igexin.push.core.j b = null;
    public static final com.igexin.push.core.j c = null;
    public static final com.igexin.push.core.j d = null;
    private static final com.igexin.push.core.j[] e = null;

    static {
            com.igexin.push.core.j r0 = new com.igexin.push.core.j
            r1 = 0
            java.lang.String r2 = "HEARTBEAT_OK"
            r0.<init>(r2, r1)
            com.igexin.push.core.j.a = r0
            com.igexin.push.core.j r0 = new com.igexin.push.core.j
            r2 = 1
            java.lang.String r3 = "HEARTBEAT_TIMEOUT"
            r0.<init>(r3, r2)
            com.igexin.push.core.j.b = r0
            com.igexin.push.core.j r0 = new com.igexin.push.core.j
            r3 = 2
            java.lang.String r4 = "NETWORK_ERROR"
            r0.<init>(r4, r3)
            com.igexin.push.core.j.c = r0
            com.igexin.push.core.j r0 = new com.igexin.push.core.j
            r4 = 3
            java.lang.String r5 = "NETWORK_SWITCH"
            r0.<init>(r5, r4)
            com.igexin.push.core.j.d = r0
            r5 = 4
            com.igexin.push.core.j[] r5 = new com.igexin.push.core.j[r5]
            com.igexin.push.core.j r6 = com.igexin.push.core.j.a
            r5[r1] = r6
            com.igexin.push.core.j r1 = com.igexin.push.core.j.b
            r5[r2] = r1
            com.igexin.push.core.j r1 = com.igexin.push.core.j.c
            r5[r3] = r1
            r5[r4] = r0
            com.igexin.push.core.j.e = r5
            return
    }

    j(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.igexin.push.core.j[] a() {
            com.igexin.push.core.j[] r0 = com.igexin.push.core.j.e
            java.lang.Object r0 = r0.clone()
            com.igexin.push.core.j[] r0 = (com.igexin.push.core.j[]) r0
            return r0
    }
}
