package com.xiaomi.push;

public final class ed {
    private static volatile com.xiaomi.push.ed a;
    private int a;
    private android.content.Context a;
    private com.xiaomi.push.eh a;
    private java.lang.String a;
    private java.util.HashMap<com.xiaomi.push.ef, com.xiaomi.push.eg> a;
    private java.lang.String b;

    private ed(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.a = r0
            r2.a = r3
            com.xiaomi.push.ef r3 = com.xiaomi.push.ef.b
            com.xiaomi.push.ej r1 = new com.xiaomi.push.ej
            r1.<init>()
            r0.put(r3, r1)
            java.util.HashMap<com.xiaomi.push.ef, com.xiaomi.push.eg> r3 = r2.a
            com.xiaomi.push.ef r0 = com.xiaomi.push.ef.c
            com.xiaomi.push.ek r1 = new com.xiaomi.push.ek
            r1.<init>()
            r3.put(r0, r1)
            java.util.HashMap<com.xiaomi.push.ef, com.xiaomi.push.eg> r3 = r2.a
            com.xiaomi.push.ef r0 = com.xiaomi.push.ef.a
            com.xiaomi.push.eb r1 = new com.xiaomi.push.eb
            r1.<init>()
            r3.put(r0, r1)
            java.util.HashMap<com.xiaomi.push.ef, com.xiaomi.push.eg> r3 = r2.a
            com.xiaomi.push.ef r0 = com.xiaomi.push.ef.d
            com.xiaomi.push.ei r1 = new com.xiaomi.push.ei
            r1.<init>()
            r3.put(r0, r1)
            return
    }

    public static com.xiaomi.push.ed a(android.content.Context r2) {
            com.xiaomi.push.ed r0 = com.xiaomi.push.ed.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.ed> r0 = com.xiaomi.push.ed.class
            monitor-enter(r0)
            com.xiaomi.push.ed r1 = com.xiaomi.push.ed.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.ed r1 = new com.xiaomi.push.ed     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.ed.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.ed r2 = com.xiaomi.push.ed.a
            return r2
    }

    static void a(com.xiaomi.push.ed r0, com.xiaomi.push.ef r1, android.content.Context r2, com.xiaomi.push.ec r3) {
            r0.a(r1, r2, r3)
            return
    }

    private void a(com.xiaomi.push.ef r2, android.content.Context r3, com.xiaomi.push.ec r4) {
            r1 = this;
            java.util.HashMap<com.xiaomi.push.ef, com.xiaomi.push.eg> r0 = r1.a
            java.lang.Object r2 = r0.get(r2)
            com.xiaomi.push.eg r2 = (com.xiaomi.push.eg) r2
            r2.a(r3, r4)
            return
    }

    public static boolean a(android.content.Context r1) {
            java.lang.String r0 = r1.getPackageName()
            boolean r1 = com.xiaomi.push.service.al.a(r1, r0)
            return r1
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public com.xiaomi.push.eh a() {
            r1 = this;
            com.xiaomi.push.eh r0 = r1.a
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(android.content.Context r8, java.lang.String r9, int r10, java.lang.String r11, java.lang.String r12) {
            r7 = this;
            if (r8 == 0) goto L2d
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 != 0) goto L2d
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 != 0) goto L2d
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            if (r0 == 0) goto L15
            goto L2d
        L15:
            r7.a(r10)
            android.content.Context r10 = r7.a
            com.xiaomi.push.al r10 = com.xiaomi.push.al.a(r10)
            com.xiaomi.push.ee r6 = new com.xiaomi.push.ee
            r0 = r6
            r1 = r7
            r2 = r9
            r3 = r8
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5)
            r10.a(r6)
            return
        L2d:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = ""
            r10.append(r11)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            r10 = 1008(0x3f0, float:1.413E-42)
            java.lang.String r11 = "A receive a incorrect message"
            com.xiaomi.push.dz.a(r8, r9, r10, r11)
            return
    }

    public void a(com.xiaomi.push.ef r2, android.content.Context r3, android.content.Intent r4, java.lang.String r5) {
            r1 = this;
            if (r2 == 0) goto Le
            java.util.HashMap<com.xiaomi.push.ef, com.xiaomi.push.eg> r0 = r1.a
            java.lang.Object r2 = r0.get(r2)
            com.xiaomi.push.eg r2 = (com.xiaomi.push.eg) r2
            r2.a(r3, r4, r5)
            goto L17
        Le:
            r2 = 1008(0x3f0, float:1.413E-42)
            java.lang.String r4 = "null"
            java.lang.String r5 = "A receive a incorrect message with empty type"
            com.xiaomi.push.dz.a(r3, r4, r2, r5)
        L17:
            return
    }

    public void a(com.xiaomi.push.eh r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(java.lang.String r1, java.lang.String r2, int r3, com.xiaomi.push.eh r4) {
            r0 = this;
            r0.a(r1)
            r0.b(r2)
            r0.a(r3)
            r0.a(r4)
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
