package com.kuaishou.weapon.p0;

public class u implements java.lang.Runnable {
    public static final int a = 1;
    public static final int b = 2;
    public static final int c = 4;
    public static final int d = 0;
    public static final int e = 8;
    public static final int f = 1;
    public static final int g = 3;
    public static final int h = 4;
    private static long o;
    java.util.List<java.lang.Integer> i;
    private android.content.Context j;
    private com.kuaishou.weapon.p0.q k;
    private com.kuaishou.weapon.p0.t l;
    private java.io.File m;
    private com.kuaishou.weapon.p0.dp n;
    private int p;
    private int q;
    private boolean r;
    private java.util.Map<java.lang.Integer, com.kuaishou.weapon.p0.u.a> s;

    class a {
        int a;
        final com.kuaishou.weapon.p0.u b;

        public a(com.kuaishou.weapon.p0.u r1, int r2) {
                r0 = this;
                r0.b = r1
                r0.<init>()
                r0.a = r2
                return
        }
    }

    static {
            return
    }

    public u(android.content.Context r3, int r4, boolean r5) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.p = r0
            r2.q = r0
            r2.r = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.i = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.s = r0
            r2.j = r3
            com.kuaishou.weapon.p0.q r0 = com.kuaishou.weapon.p0.q.a(r3)
            r2.k = r0
            com.kuaishou.weapon.p0.t r0 = com.kuaishou.weapon.p0.t.a(r3)
            r2.l = r0
            com.kuaishou.weapon.p0.dp r0 = com.kuaishou.weapon.p0.dp.a(r3)
            r2.n = r0
            java.io.File r0 = new java.io.File
            java.io.File r3 = r3.getFilesDir()
            java.lang.String r1 = ".tmp"
            r0.<init>(r3, r1)
            r2.m = r0
            r2.p = r4
            r2.r = r5
            return
    }

    private void a(com.kuaishou.weapon.p0.s r20) {
            r19 = this;
            r0 = r19
            r1 = r20
            java.lang.String r2 = "-"
            java.lang.String r4 = r1.j     // Catch: java.lang.Throwable -> L255
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L255
            if (r4 != 0) goto L24a
            java.lang.String r4 = r1.j     // Catch: java.lang.Throwable -> L255
            int r4 = r4.length()     // Catch: java.lang.Throwable -> L255
            r5 = 10
            if (r4 >= r5) goto L1a
            goto L24a
        L1a:
            java.io.File r4 = r0.m     // Catch: java.lang.Throwable -> L255
            boolean r4 = r4.exists()     // Catch: java.lang.Throwable -> L255
            if (r4 != 0) goto L27
            java.io.File r4 = r0.m     // Catch: java.lang.Throwable -> L255
            r4.mkdir()     // Catch: java.lang.Throwable -> L255
        L27:
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L255
            java.io.File r5 = r0.m     // Catch: java.lang.Throwable -> L255
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L255
            r6.<init>()     // Catch: java.lang.Throwable -> L255
            int r7 = r1.a     // Catch: java.lang.Throwable -> L255
            r6.append(r7)     // Catch: java.lang.Throwable -> L255
            r6.append(r2)     // Catch: java.lang.Throwable -> L255
            java.lang.String r7 = r1.d     // Catch: java.lang.Throwable -> L255
            r6.append(r7)     // Catch: java.lang.Throwable -> L255
            java.lang.String r7 = ".tmp"
            r6.append(r7)     // Catch: java.lang.Throwable -> L255
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L255
            r4.<init>(r5, r6)     // Catch: java.lang.Throwable -> L255
            java.io.File r5 = new java.io.File     // Catch: java.lang.Throwable -> L255
            java.io.File r6 = r0.m     // Catch: java.lang.Throwable -> L255
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L255
            r7.<init>()     // Catch: java.lang.Throwable -> L255
            int r8 = r1.a     // Catch: java.lang.Throwable -> L255
            r7.append(r8)     // Catch: java.lang.Throwable -> L255
            r7.append(r2)     // Catch: java.lang.Throwable -> L255
            java.lang.String r2 = r1.d     // Catch: java.lang.Throwable -> L255
            r7.append(r2)     // Catch: java.lang.Throwable -> L255
            java.lang.String r2 = ".zip"
            r7.append(r2)     // Catch: java.lang.Throwable -> L255
            java.lang.String r2 = r7.toString()     // Catch: java.lang.Throwable -> L255
            r5.<init>(r6, r2)     // Catch: java.lang.Throwable -> L255
            android.content.Context r2 = r0.j     // Catch: java.lang.Throwable -> L255
            com.kuaishou.weapon.p0.l r2 = com.kuaishou.weapon.p0.l.a(r2)     // Catch: java.lang.Throwable -> L255
            java.lang.String r6 = r1.i     // Catch: java.lang.Throwable -> L255
            boolean r2 = r2.a(r6, r4)     // Catch: java.lang.Throwable -> L255
            if (r2 != 0) goto L85
            android.content.Context r2 = r0.j     // Catch: java.lang.Throwable -> L255
            com.kuaishou.weapon.p0.l r2 = com.kuaishou.weapon.p0.l.a(r2)     // Catch: java.lang.Throwable -> L255
            java.lang.String r6 = r1.i     // Catch: java.lang.Throwable -> L255
            boolean r2 = r2.a(r6, r4)     // Catch: java.lang.Throwable -> L255
        L85:
            java.lang.String r6 = "len"
            java.lang.String r9 = "m"
            java.lang.String r10 = "pv"
            java.lang.String r11 = "pk"
            java.lang.String r12 = "1002001"
            java.lang.String r13 = "T"
            java.lang.String r14 = "l"
            java.lang.String r15 = "e"
            if (r2 == 0) goto L125
            boolean r16 = r5.exists()     // Catch: java.lang.Throwable -> L255
            if (r16 == 0) goto La0
            r5.delete()     // Catch: java.lang.Throwable -> L255
        La0:
            java.lang.String r7 = "a3NyaXNrY3RsYnVzaW5zc3Z4cHprd3NwYWlvcXBrc3M="
            java.lang.String r8 = "utf-8"
            byte[] r7 = r7.getBytes(r8)     // Catch: java.lang.Throwable -> L255
            r8 = 2
            byte[] r7 = com.kuaishou.weapon.p0.c.a(r7, r8)     // Catch: java.lang.Throwable -> L255
            java.lang.String r8 = r4.getAbsolutePath()     // Catch: java.lang.Throwable -> L255
            java.lang.String r3 = r5.getAbsolutePath()     // Catch: java.lang.Throwable -> L255
            int r3 = com.kuaishou.weapon.p0.b.c(r8, r3, r7)     // Catch: java.lang.Throwable -> L255
            if (r3 == 0) goto L113
            boolean r2 = r5.exists()     // Catch: java.lang.Throwable -> L255
            if (r2 == 0) goto Lc6
            long r7 = r5.length()     // Catch: java.lang.Throwable -> L255
            goto Lc8
        Lc6:
            r7 = -1
        Lc8:
            boolean r2 = r5.exists()     // Catch: java.lang.Throwable -> L255
            if (r2 == 0) goto Ld1
            r5.delete()     // Catch: java.lang.Throwable -> L255
        Ld1:
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L255
            r2.<init>()     // Catch: java.lang.Throwable -> L255
            r17 = r5
            java.lang.String r5 = com.kuaishou.weapon.p0.cj.p     // Catch: java.lang.Throwable -> L255
            r2.put(r15, r5)     // Catch: java.lang.Throwable -> L255
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L255
            r5.<init>()     // Catch: java.lang.Throwable -> L255
            r18 = r15
            int r15 = r1.a     // Catch: java.lang.Throwable -> L255
            r5.append(r15)     // Catch: java.lang.Throwable -> L255
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L255
            r2.put(r11, r5)     // Catch: java.lang.Throwable -> L255
            java.lang.String r5 = r1.d     // Catch: java.lang.Throwable -> L255
            r2.put(r10, r5)     // Catch: java.lang.Throwable -> L255
            java.lang.String r5 = r1.j     // Catch: java.lang.Throwable -> L255
            r2.put(r9, r5)     // Catch: java.lang.Throwable -> L255
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L255
            r5.<init>()     // Catch: java.lang.Throwable -> L255
            r5.append(r7)     // Catch: java.lang.Throwable -> L255
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L255
            r2.put(r6, r5)     // Catch: java.lang.Throwable -> L255
            r2.put(r14, r13)     // Catch: java.lang.Throwable -> L255
            android.content.Context r5 = r0.j     // Catch: java.lang.Throwable -> L255
            com.kuaishou.weapon.p0.bg.a(r5, r12, r2)     // Catch: java.lang.Throwable -> L255
            r2 = 0
            goto L117
        L113:
            r17 = r5
            r18 = r15
        L117:
            if (r3 != 0) goto L122
            boolean r3 = r4.exists()     // Catch: java.lang.Throwable -> L255
            if (r3 == 0) goto L122
            r4.delete()     // Catch: java.lang.Throwable -> L255
        L122:
            r7 = r18
            goto L169
        L125:
            r17 = r5
            r18 = r15
            java.util.HashMap r3 = new java.util.HashMap     // Catch: java.lang.Throwable -> L255
            r3.<init>()     // Catch: java.lang.Throwable -> L255
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L255
            r5.<init>()     // Catch: java.lang.Throwable -> L255
            int r7 = r1.a     // Catch: java.lang.Throwable -> L255
            r5.append(r7)     // Catch: java.lang.Throwable -> L255
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L255
            r3.put(r11, r5)     // Catch: java.lang.Throwable -> L255
            java.lang.String r5 = r1.d     // Catch: java.lang.Throwable -> L255
            r3.put(r10, r5)     // Catch: java.lang.Throwable -> L255
            java.lang.String r5 = r1.j     // Catch: java.lang.Throwable -> L255
            r3.put(r9, r5)     // Catch: java.lang.Throwable -> L255
            java.lang.String r5 = "download fail"
            r7 = r18
            r3.put(r7, r5)     // Catch: java.lang.Throwable -> L255
            r3.put(r14, r13)     // Catch: java.lang.Throwable -> L255
            android.content.Context r5 = r0.j     // Catch: java.lang.Throwable -> L255
            com.kuaishou.weapon.p0.bg.a(r5, r12, r3)     // Catch: java.lang.Throwable -> L255
            java.util.Map<java.lang.Integer, com.kuaishou.weapon.p0.u$a> r3 = r0.s     // Catch: java.lang.Throwable -> L255
            int r5 = r1.a     // Catch: java.lang.Throwable -> L255
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L255
            com.kuaishou.weapon.p0.u$a r8 = new com.kuaishou.weapon.p0.u$a     // Catch: java.lang.Throwable -> L255
            r9 = 3
            r8.<init>(r0, r9)     // Catch: java.lang.Throwable -> L255
            r3.put(r5, r8)     // Catch: java.lang.Throwable -> L255
        L169:
            java.lang.String r3 = com.kuaishou.weapon.p0.f.a(r17)     // Catch: java.lang.Throwable -> L255
            if (r2 == 0) goto L1ed
            java.lang.String r5 = r1.j     // Catch: java.lang.Throwable -> L255
            boolean r5 = r5.equals(r3)     // Catch: java.lang.Throwable -> L255
            if (r5 == 0) goto L1ed
            java.lang.String r2 = r17.getAbsolutePath()     // Catch: java.lang.Throwable -> L255
            java.lang.Boolean r3 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L255
            com.kuaishou.weapon.p0.dn.a(r2, r3)     // Catch: java.lang.Throwable -> L255
            java.lang.String r2 = r17.getAbsolutePath()     // Catch: java.lang.Throwable -> L255
            r1.e = r2     // Catch: java.lang.Throwable -> L255
            com.kuaishou.weapon.p0.q r2 = r0.k     // Catch: java.lang.Throwable -> L255
            r3 = 0
            boolean r2 = r2.a(r1, r3, r3)     // Catch: java.lang.Throwable -> L255
            if (r2 == 0) goto L1bf
            java.util.Map<java.lang.Integer, com.kuaishou.weapon.p0.u$a> r2 = r0.s     // Catch: java.lang.Throwable -> L255
            r3 = 1
            if (r2 == 0) goto L1b2
            java.util.Map<java.lang.Integer, com.kuaishou.weapon.p0.u$a> r2 = r0.s     // Catch: java.lang.Throwable -> L255
            int r4 = r1.a     // Catch: java.lang.Throwable -> L255
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L255
            boolean r2 = r2.containsKey(r4)     // Catch: java.lang.Throwable -> L255
            if (r2 != 0) goto L1b2
            java.util.Map<java.lang.Integer, com.kuaishou.weapon.p0.u$a> r2 = r0.s     // Catch: java.lang.Throwable -> L255
            int r4 = r1.a     // Catch: java.lang.Throwable -> L255
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L255
            com.kuaishou.weapon.p0.u$a r5 = new com.kuaishou.weapon.p0.u$a     // Catch: java.lang.Throwable -> L255
            r5.<init>(r0, r3)     // Catch: java.lang.Throwable -> L255
            r2.put(r4, r5)     // Catch: java.lang.Throwable -> L255
        L1b2:
            com.kuaishou.weapon.p0.dp r2 = r0.n     // Catch: java.lang.Throwable -> L255
            java.lang.String r4 = "wlpauct2"
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L255
            r2.a(r4, r5, r3)     // Catch: java.lang.Throwable -> L255
            goto L249
        L1bf:
            java.util.Map<java.lang.Integer, com.kuaishou.weapon.p0.u$a> r2 = r0.s     // Catch: java.lang.Throwable -> L255
            if (r2 == 0) goto L1e2
            java.util.Map<java.lang.Integer, com.kuaishou.weapon.p0.u$a> r2 = r0.s     // Catch: java.lang.Throwable -> L255
            int r3 = r1.a     // Catch: java.lang.Throwable -> L255
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L255
            boolean r2 = r2.containsKey(r3)     // Catch: java.lang.Throwable -> L255
            if (r2 != 0) goto L1e2
            java.util.Map<java.lang.Integer, com.kuaishou.weapon.p0.u$a> r2 = r0.s     // Catch: java.lang.Throwable -> L255
            int r3 = r1.a     // Catch: java.lang.Throwable -> L255
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L255
            com.kuaishou.weapon.p0.u$a r4 = new com.kuaishou.weapon.p0.u$a     // Catch: java.lang.Throwable -> L255
            r5 = 4
            r4.<init>(r0, r5)     // Catch: java.lang.Throwable -> L255
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L255
        L1e2:
            com.kuaishou.weapon.p0.q r2 = r0.k     // Catch: java.lang.Throwable -> L255
            int r3 = r1.a     // Catch: java.lang.Throwable -> L255
            java.lang.String r4 = r1.d     // Catch: java.lang.Throwable -> L255
            r5 = 0
            r2.a(r3, r4, r5)     // Catch: java.lang.Throwable -> L255
            goto L25f
        L1ed:
            boolean r5 = r4.exists()     // Catch: java.lang.Throwable -> L255
            if (r5 == 0) goto L1fb
            long r8 = r4.length()     // Catch: java.lang.Throwable -> L255
            r4.delete()     // Catch: java.lang.Throwable -> L255
            goto L1fd
        L1fb:
            r8 = -1
        L1fd:
            com.kuaishou.weapon.p0.q r4 = r0.k     // Catch: java.lang.Throwable -> L255
            int r5 = r1.a     // Catch: java.lang.Throwable -> L255
            java.lang.String r10 = r1.d     // Catch: java.lang.Throwable -> L255
            r11 = 0
            r4.a(r5, r10, r11)     // Catch: java.lang.Throwable -> L255
            java.util.HashMap r4 = new java.util.HashMap     // Catch: java.lang.Throwable -> L255
            r4.<init>()     // Catch: java.lang.Throwable -> L255
            java.lang.String r5 = com.kuaishou.weapon.p0.cj.q     // Catch: java.lang.Throwable -> L255
            r4.put(r7, r5)     // Catch: java.lang.Throwable -> L255
            java.lang.String r5 = "ret"
            if (r2 == 0) goto L218
            java.lang.String r2 = "1"
            goto L21a
        L218:
            java.lang.String r2 = "0"
        L21a:
            r4.put(r5, r2)     // Catch: java.lang.Throwable -> L255
            java.lang.String r2 = "am"
            java.lang.String r5 = r1.j     // Catch: java.lang.Throwable -> L255
            r4.put(r2, r5)     // Catch: java.lang.Throwable -> L255
            java.lang.String r2 = "acm"
            r4.put(r2, r3)     // Catch: java.lang.Throwable -> L255
            java.lang.String r2 = "p"
            java.lang.String r3 = r17.getAbsolutePath()     // Catch: java.lang.Throwable -> L255
            r4.put(r2, r3)     // Catch: java.lang.Throwable -> L255
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L255
            r2.<init>()     // Catch: java.lang.Throwable -> L255
            r2.append(r8)     // Catch: java.lang.Throwable -> L255
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L255
            r4.put(r6, r2)     // Catch: java.lang.Throwable -> L255
            r4.put(r14, r13)     // Catch: java.lang.Throwable -> L255
            android.content.Context r2 = r0.j     // Catch: java.lang.Throwable -> L255
            com.kuaishou.weapon.p0.bg.a(r2, r12, r4)     // Catch: java.lang.Throwable -> L255
        L249:
            return
        L24a:
            com.kuaishou.weapon.p0.q r2 = r0.k     // Catch: java.lang.Throwable -> L255
            int r3 = r1.a     // Catch: java.lang.Throwable -> L255
            java.lang.String r4 = r1.d     // Catch: java.lang.Throwable -> L255
            r5 = 0
            r2.a(r3, r4, r5)     // Catch: java.lang.Throwable -> L255
            return
        L255:
            com.kuaishou.weapon.p0.q r2 = r0.k
            int r3 = r1.a
            java.lang.String r1 = r1.d
            r4 = 0
            r2.a(r3, r1, r4)
        L25f:
            return
    }

    public org.json.JSONObject a() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld5
            r0.<init>()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r1 = com.kuaishou.weapon.p0.ct.a     // Catch: java.lang.Exception -> Ld5
            r0.append(r1)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r1 = com.kuaishou.weapon.p0.ct.g     // Catch: java.lang.Exception -> Ld5
            r0.append(r1)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Ld5
            android.content.Context r1 = r6.j     // Catch: java.lang.Exception -> Ld5
            java.lang.String r1 = com.kuaishou.weapon.p0.cu.a(r1)     // Catch: java.lang.Exception -> Ld5
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Ld5
            if (r2 != 0) goto L33
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld5
            r2.<init>()     // Catch: java.lang.Exception -> Ld5
            r2.append(r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r0 = "?"
            r2.append(r0)     // Catch: java.lang.Exception -> Ld5
            r2.append(r1)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> Ld5
        L33:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ld5
            r1.<init>()     // Catch: java.lang.Exception -> Ld5
            android.content.Context r2 = r6.j     // Catch: java.lang.Exception -> Ld5
            org.json.JSONObject r2 = com.kuaishou.weapon.p0.cu.c(r2)     // Catch: java.lang.Exception -> Ld5
            if (r2 == 0) goto L54
            com.kuaishou.weapon.p0.bm r3 = new com.kuaishou.weapon.p0.bm     // Catch: java.lang.Exception -> Ld5
            android.content.Context r4 = r6.j     // Catch: java.lang.Exception -> Ld5
            r3.<init>(r4)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r2 = r3.c(r2)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r3 = "data"
            r1.put(r3, r2)     // Catch: java.lang.Exception -> Ld5
        L54:
            android.content.Context r2 = r6.j     // Catch: java.lang.Exception -> Ld5
            com.kuaishou.weapon.p0.l r2 = com.kuaishou.weapon.p0.l.a(r2)     // Catch: java.lang.Exception -> Ld5
            com.kuaishou.weapon.p0.m r3 = new com.kuaishou.weapon.p0.m     // Catch: java.lang.Exception -> Ld5
            r3.<init>(r0, r1)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r0 = com.kuaishou.weapon.p0.WeaponHI.cookieData     // Catch: java.lang.Exception -> Ld5
            r3.a(r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r0 = com.kuaishou.weapon.p0.WeaponHI.encryENV     // Catch: java.lang.Exception -> Ld5
            r3.b(r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r0 = r2.a(r3)     // Catch: java.lang.Exception -> Ld5
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ld5
            r1.<init>(r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r0 = "result"
            r2 = 0
            int r0 = r1.optInt(r0, r2)     // Catch: java.lang.Exception -> Ld5
            r3 = 1
            if (r0 != r3) goto Lc7
            java.lang.String r0 = "antispamPluginManageRsp"
            java.lang.String r0 = r1.getString(r0)     // Catch: java.lang.Exception -> Ld5
            com.kuaishou.weapon.p0.bm r1 = new com.kuaishou.weapon.p0.bm     // Catch: java.lang.Exception -> Ld5
            android.content.Context r4 = r6.j     // Catch: java.lang.Exception -> Ld5
            r1.<init>(r4)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r0 = r1.a(r0)     // Catch: java.lang.Exception -> Ld5
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> Ld5
            if (r1 == 0) goto La3
            int r0 = r6.q     // Catch: java.lang.Exception -> Ld5
            if (r0 != 0) goto L9b
            r0 = 8
            r6.q = r0     // Catch: java.lang.Exception -> Ld5
        L9b:
            android.accounts.NetworkErrorException r0 = new android.accounts.NetworkErrorException     // Catch: java.lang.Exception -> Ld5
            java.lang.String r1 = "kuaishou risk pluginloader response is null"
            r0.<init>(r1)     // Catch: java.lang.Exception -> Ld5
            throw r0     // Catch: java.lang.Exception -> Ld5
        La3:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ld5
            r1.<init>(r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r0 = "status"
            int r0 = r1.optInt(r0, r2)     // Catch: java.lang.Exception -> Ld5
            if (r0 != r3) goto Lb7
            java.lang.String r0 = "plugin"
            org.json.JSONObject r0 = r1.optJSONObject(r0)     // Catch: java.lang.Exception -> Ld5
            return r0
        Lb7:
            com.kuaishou.weapon.p0.dp r0 = r6.n     // Catch: java.lang.Exception -> Ld5
            if (r0 == 0) goto Ld5
            com.kuaishou.weapon.p0.dp r0 = r6.n     // Catch: java.lang.Exception -> Ld5
            java.lang.String r1 = "wlpauct2"
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Ld5
            r0.a(r1, r4, r3)     // Catch: java.lang.Exception -> Ld5
            goto Ld5
        Lc7:
            r1 = -7
            if (r0 != r1) goto Ld5
            android.content.Context r0 = r6.j     // Catch: java.lang.Exception -> Ld5
            com.kuaishou.weapon.p0.dp r0 = com.kuaishou.weapon.p0.dp.a(r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r1 = "plc001_t_re"
            r0.a(r1, r3, r2)     // Catch: java.lang.Exception -> Ld5
        Ld5:
            r0 = 0
            return r0
    }

    @Override
    public void run() {
            r18 = this;
            r1 = r18
            java.lang.Class<com.kuaishou.weapon.p0.u> r2 = com.kuaishou.weapon.p0.u.class
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L31d
            int r0 = r1.p     // Catch: java.lang.Throwable -> L31a
            r3 = 1
            if (r0 == r3) goto L2b
            int r0 = r1.p     // Catch: java.lang.Throwable -> L31a
            r4 = 2
            if (r0 == r4) goto L2b
            int r0 = r1.p     // Catch: java.lang.Throwable -> L31a
            r4 = 4
            if (r0 == r4) goto L2b
            boolean r0 = r1.r     // Catch: java.lang.Throwable -> L31a
            if (r0 != 0) goto L2b
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L31a
            long r6 = com.kuaishou.weapon.p0.u.o     // Catch: java.lang.Throwable -> L31a
            long r4 = r4 - r6
            r6 = 300000(0x493e0, double:1.482197E-318)
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 >= 0) goto L2b
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L31a
            com.kuaishou.weapon.p0.WeaponHI.iD()
            return
        L2b:
            com.kuaishou.weapon.p0.t r0 = r1.l     // Catch: java.lang.Throwable -> L31a
            r0.d()     // Catch: java.lang.Throwable -> L31a
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L31a
            com.kuaishou.weapon.p0.u.o = r4     // Catch: java.lang.Throwable -> L31a
            com.kuaishou.weapon.p0.dp r0 = r1.n     // Catch: java.lang.Throwable -> L31a
            java.lang.String r4 = "wlpauct2"
            long r4 = r0.a(r4)     // Catch: java.lang.Throwable -> L31a
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L31a
            long r6 = r6 - r4
            com.kuaishou.weapon.p0.dp r0 = r1.n     // Catch: java.lang.Throwable -> L31a
            java.lang.String r4 = "plc001_pd_ptip_pi"
            r5 = 6
            int r0 = r0.a(r4, r5)     // Catch: java.lang.Throwable -> L31a
            long r4 = (long) r0     // Catch: java.lang.Throwable -> L31a
            r8 = 3600000(0x36ee80, double:1.7786363E-317)
            long r4 = r4 * r8
            long r6 = r6 - r4
            r4 = 0
            int r0 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r0 <= 0) goto L30b
            com.kuaishou.weapon.p0.t r0 = r1.l     // Catch: java.lang.Throwable -> L31a
            java.util.List r0 = r0.a()     // Catch: java.lang.Throwable -> L31a
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L31a
            r4.<init>()     // Catch: java.lang.Throwable -> L31a
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L31a
            r5.<init>()     // Catch: java.lang.Throwable -> L31a
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L31a
            r6.<init>()     // Catch: java.lang.Throwable -> L31a
            java.util.ArrayList r7 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L31a
            r7.<init>()     // Catch: java.lang.Throwable -> L31a
            org.json.JSONObject r8 = r18.a()     // Catch: java.lang.Throwable -> L31a
            if (r8 == 0) goto L303
            r9 = 0
            android.content.Context r10 = r1.j     // Catch: java.lang.Throwable -> L198
            boolean r10 = com.kuaishou.weapon.p0.dm.b(r10)     // Catch: java.lang.Throwable -> L198
            java.util.Iterator r11 = r8.keys()     // Catch: java.lang.Throwable -> L198
            java.util.HashSet r12 = new java.util.HashSet     // Catch: java.lang.Throwable -> L198
            r12.<init>()     // Catch: java.lang.Throwable -> L198
            r13 = r9
        L89:
            boolean r14 = r11.hasNext()     // Catch: java.lang.Throwable -> L198
            if (r14 == 0) goto L181
            java.lang.Object r14 = r11.next()     // Catch: java.lang.Throwable -> L198
            java.lang.String r14 = (java.lang.String) r14     // Catch: java.lang.Throwable -> L198
            r15 = 3
            if (r10 == 0) goto Ld5
            java.lang.String r3 = "64"
            boolean r3 = r14.endsWith(r3)     // Catch: java.lang.Throwable -> L198
            if (r3 == 0) goto Ld5
            int r3 = r14.length()     // Catch: java.lang.Throwable -> L198
            if (r3 <= r15) goto Ld2
            int r3 = r14.length()     // Catch: java.lang.Throwable -> L198
            int r3 = r3 - r15
            java.lang.String r3 = r14.substring(r9, r3)     // Catch: java.lang.Throwable -> L198
            r12.add(r3)     // Catch: java.lang.Throwable -> L198
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L198
            r3.<init>()     // Catch: java.lang.Throwable -> L198
            int r13 = r14.length()     // Catch: java.lang.Throwable -> L198
            int r13 = r13 - r15
            java.lang.String r13 = r14.substring(r9, r13)     // Catch: java.lang.Throwable -> L198
            r3.append(r13)     // Catch: java.lang.Throwable -> L198
            java.lang.String r13 = ".32"
            r3.append(r13)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L198
        Lcc:
            r12.add(r3)     // Catch: java.lang.Throwable -> L198
            r3 = 1
            r13 = 1
            goto L89
        Ld2:
            r13 = 1
            goto L17e
        Ld5:
            if (r10 != 0) goto L10c
            java.lang.String r3 = "32"
            boolean r3 = r14.endsWith(r3)     // Catch: java.lang.Throwable -> L198
            if (r3 == 0) goto L10c
            int r3 = r14.length()     // Catch: java.lang.Throwable -> L198
            if (r3 <= r15) goto Ld2
            int r3 = r14.length()     // Catch: java.lang.Throwable -> L198
            int r3 = r3 - r15
            java.lang.String r3 = r14.substring(r9, r3)     // Catch: java.lang.Throwable -> L198
            r12.add(r3)     // Catch: java.lang.Throwable -> L198
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L198
            r3.<init>()     // Catch: java.lang.Throwable -> L198
            int r13 = r14.length()     // Catch: java.lang.Throwable -> L198
            int r13 = r13 - r15
            java.lang.String r13 = r14.substring(r9, r13)     // Catch: java.lang.Throwable -> L198
            r3.append(r13)     // Catch: java.lang.Throwable -> L198
            java.lang.String r13 = ".64"
            r3.append(r13)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L198
            goto Lcc
        L10c:
            if (r10 == 0) goto L143
            java.lang.String r3 = "v8"
            boolean r3 = r14.endsWith(r3)     // Catch: java.lang.Throwable -> L198
            if (r3 == 0) goto L143
            int r3 = r14.length()     // Catch: java.lang.Throwable -> L198
            if (r3 <= r15) goto Ld2
            int r3 = r14.length()     // Catch: java.lang.Throwable -> L198
            int r3 = r3 - r15
            java.lang.String r3 = r14.substring(r9, r3)     // Catch: java.lang.Throwable -> L198
            r12.add(r3)     // Catch: java.lang.Throwable -> L198
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L198
            r3.<init>()     // Catch: java.lang.Throwable -> L198
            int r13 = r14.length()     // Catch: java.lang.Throwable -> L198
            int r13 = r13 - r15
            java.lang.String r13 = r14.substring(r9, r13)     // Catch: java.lang.Throwable -> L198
            r3.append(r13)     // Catch: java.lang.Throwable -> L198
            java.lang.String r13 = ".v7"
            r3.append(r13)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L198
            goto Lcc
        L143:
            if (r10 != 0) goto L17e
            java.lang.String r3 = "v7"
            boolean r3 = r14.endsWith(r3)     // Catch: java.lang.Throwable -> L198
            if (r3 == 0) goto L17e
            int r3 = r14.length()     // Catch: java.lang.Throwable -> L198
            if (r3 <= r15) goto Ld2
            int r3 = r14.length()     // Catch: java.lang.Throwable -> L198
            int r3 = r3 - r15
            java.lang.String r3 = r14.substring(r9, r3)     // Catch: java.lang.Throwable -> L198
            r12.add(r3)     // Catch: java.lang.Throwable -> L198
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L198
            r3.<init>()     // Catch: java.lang.Throwable -> L198
            int r13 = r14.length()     // Catch: java.lang.Throwable -> L198
            int r13 = r13 - r15
            java.lang.String r13 = r14.substring(r9, r13)     // Catch: java.lang.Throwable -> L198
            r3.append(r13)     // Catch: java.lang.Throwable -> L198
            java.lang.String r13 = ".v8"
            r3.append(r13)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L198
            r12.add(r3)     // Catch: java.lang.Throwable -> L198
            goto Ld2
        L17e:
            r3 = 1
            goto L89
        L181:
            if (r13 == 0) goto L197
            java.util.Iterator r3 = r12.iterator()     // Catch: java.lang.Throwable -> L198
        L187:
            boolean r10 = r3.hasNext()     // Catch: java.lang.Throwable -> L198
            if (r10 == 0) goto L197
            java.lang.Object r10 = r3.next()     // Catch: java.lang.Throwable -> L198
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Throwable -> L198
            r8.remove(r10)     // Catch: java.lang.Throwable -> L198
            goto L187
        L197:
            r9 = r13
        L198:
            java.util.Iterator r3 = r8.keys()     // Catch: java.lang.Throwable -> L31a
        L19c:
            boolean r10 = r3.hasNext()     // Catch: java.lang.Throwable -> L31a
            if (r10 == 0) goto L261
            java.lang.Object r10 = r3.next()     // Catch: java.lang.Throwable -> L31a
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Throwable -> L31a
            org.json.JSONObject r11 = r8.optJSONObject(r10)     // Catch: java.lang.Throwable -> L31a
            com.kuaishou.weapon.p0.s r11 = com.kuaishou.weapon.p0.o.a(r11)     // Catch: java.lang.Throwable -> L31a
            if (r11 == 0) goto L19c
            if (r9 == 0) goto L1db
            boolean r12 = r11.y     // Catch: java.lang.Throwable -> L31a
            if (r12 != 0) goto L1db
            java.lang.String r12 = "32"
            boolean r12 = r10.endsWith(r12)     // Catch: java.lang.Throwable -> L31a
            if (r12 != 0) goto L1d8
            java.lang.String r12 = "64"
            boolean r12 = r10.endsWith(r12)     // Catch: java.lang.Throwable -> L31a
            if (r12 != 0) goto L1d8
            java.lang.String r12 = "v7"
            boolean r12 = r10.endsWith(r12)     // Catch: java.lang.Throwable -> L31a
            if (r12 != 0) goto L1d8
            java.lang.String r12 = "v8"
            boolean r12 = r10.endsWith(r12)     // Catch: java.lang.Throwable -> L31a
            if (r12 == 0) goto L1db
        L1d8:
            r12 = 1
            r11.y = r12     // Catch: java.lang.Throwable -> L31a
        L1db:
            boolean r12 = r11.v     // Catch: java.lang.Throwable -> L31a
            if (r12 == 0) goto L1e2
            r7.add(r10)     // Catch: java.lang.Throwable -> L31a
        L1e2:
            boolean r10 = r11.y     // Catch: java.lang.Throwable -> L31a
            if (r10 != 0) goto L1e9
            r6.add(r11)     // Catch: java.lang.Throwable -> L31a
        L1e9:
            int r10 = r0.indexOf(r11)     // Catch: java.lang.Throwable -> L31a
            if (r10 < 0) goto L24d
            boolean r12 = r11.y     // Catch: java.lang.Throwable -> L31a
            if (r12 == 0) goto L24d
            java.lang.Object r12 = r0.get(r10)     // Catch: java.lang.Throwable -> L31a
            com.kuaishou.weapon.p0.s r12 = (com.kuaishou.weapon.p0.s) r12     // Catch: java.lang.Throwable -> L31a
            java.lang.String r13 = r11.d     // Catch: java.lang.Throwable -> L31a
            java.lang.String r14 = r12.d     // Catch: java.lang.Throwable -> L31a
            boolean r13 = com.kuaishou.weapon.p0.dn.b(r13, r14)     // Catch: java.lang.Throwable -> L31a
            if (r13 == 0) goto L226
            int r13 = r11.x     // Catch: java.lang.Throwable -> L31a
            int r12 = r12.x     // Catch: java.lang.Throwable -> L31a
            if (r13 == r12) goto L212
            com.kuaishou.weapon.p0.t r12 = r1.l     // Catch: java.lang.Throwable -> L31a
            int r13 = r11.a     // Catch: java.lang.Throwable -> L31a
            int r14 = r11.x     // Catch: java.lang.Throwable -> L31a
            r12.c(r13, r14)     // Catch: java.lang.Throwable -> L31a
        L212:
            com.kuaishou.weapon.p0.t r12 = r1.l     // Catch: java.lang.Throwable -> L31a
            int r13 = r11.a     // Catch: java.lang.Throwable -> L31a
            boolean r12 = r12.d(r13)     // Catch: java.lang.Throwable -> L31a
            if (r12 != 0) goto L21f
            r5.add(r11)     // Catch: java.lang.Throwable -> L31a
        L21f:
            r17 = r3
            r15 = r8
            r16 = r9
            r3 = 1
            goto L249
        L226:
            com.kuaishou.weapon.p0.dp r13 = r1.n     // Catch: java.lang.Throwable -> L31a
            java.lang.String r14 = "wlpauct2"
            r15 = r8
            r16 = r9
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L31a
            r17 = r3
            r3 = 1
            r13.a(r14, r8, r3)     // Catch: java.lang.Throwable -> L31a
            int r8 = r11.x     // Catch: java.lang.Throwable -> L31a
            int r9 = r12.x     // Catch: java.lang.Throwable -> L31a
            if (r8 == r9) goto L246
            com.kuaishou.weapon.p0.t r8 = r1.l     // Catch: java.lang.Throwable -> L31a
            int r9 = r11.a     // Catch: java.lang.Throwable -> L31a
            int r12 = r11.x     // Catch: java.lang.Throwable -> L31a
            r8.c(r9, r12)     // Catch: java.lang.Throwable -> L31a
        L246:
            r4.add(r11)     // Catch: java.lang.Throwable -> L31a
        L249:
            r0.remove(r10)     // Catch: java.lang.Throwable -> L31a
            goto L25a
        L24d:
            r17 = r3
            r15 = r8
            r16 = r9
            r3 = 1
            boolean r8 = r11.y     // Catch: java.lang.Throwable -> L31a
            if (r8 == 0) goto L25a
            r5.add(r11)     // Catch: java.lang.Throwable -> L31a
        L25a:
            r8 = r15
            r9 = r16
            r3 = r17
            goto L19c
        L261:
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L31a
        L265:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> L31a
            if (r3 == 0) goto L290
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> L31a
            com.kuaishou.weapon.p0.s r3 = (com.kuaishou.weapon.p0.s) r3     // Catch: java.lang.Throwable -> L31a
            java.lang.String r8 = r3.c     // Catch: java.lang.Throwable -> L31a
            boolean r8 = r7.contains(r8)     // Catch: java.lang.Throwable -> L31a
            if (r8 != 0) goto L265
            java.util.List<java.lang.Integer> r8 = r1.i     // Catch: java.lang.Throwable -> L31a
            if (r8 == 0) goto L288
            java.util.List<java.lang.Integer> r8 = r1.i     // Catch: java.lang.Throwable -> L31a
            int r9 = r3.a     // Catch: java.lang.Throwable -> L31a
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L31a
            r8.add(r9)     // Catch: java.lang.Throwable -> L31a
        L288:
            com.kuaishou.weapon.p0.q r8 = r1.k     // Catch: java.lang.Throwable -> L31a
            java.lang.String r3 = r3.c     // Catch: java.lang.Throwable -> L31a
            r8.a(r3)     // Catch: java.lang.Throwable -> L31a
            goto L265
        L290:
            java.util.Iterator r0 = r6.iterator()     // Catch: java.lang.Throwable -> L31a
        L294:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> L31a
            if (r3 == 0) goto L2bf
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> L31a
            com.kuaishou.weapon.p0.s r3 = (com.kuaishou.weapon.p0.s) r3     // Catch: java.lang.Throwable -> L31a
            java.lang.String r6 = r3.c     // Catch: java.lang.Throwable -> L31a
            boolean r6 = r7.contains(r6)     // Catch: java.lang.Throwable -> L31a
            if (r6 != 0) goto L294
            java.util.List<java.lang.Integer> r6 = r1.i     // Catch: java.lang.Throwable -> L31a
            if (r6 == 0) goto L2b7
            java.util.List<java.lang.Integer> r6 = r1.i     // Catch: java.lang.Throwable -> L31a
            int r8 = r3.a     // Catch: java.lang.Throwable -> L31a
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L31a
            r6.add(r8)     // Catch: java.lang.Throwable -> L31a
        L2b7:
            com.kuaishou.weapon.p0.q r6 = r1.k     // Catch: java.lang.Throwable -> L31a
            java.lang.String r3 = r3.c     // Catch: java.lang.Throwable -> L31a
            r6.a(r3)     // Catch: java.lang.Throwable -> L31a
            goto L294
        L2bf:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L31a
            r0.<init>()     // Catch: java.lang.Throwable -> L31a
            int r3 = r5.size()     // Catch: java.lang.Throwable -> L31a
            if (r3 == 0) goto L2cd
            r0.addAll(r5)     // Catch: java.lang.Throwable -> L31a
        L2cd:
            int r3 = r4.size()     // Catch: java.lang.Throwable -> L31a
            if (r3 == 0) goto L2d6
            r0.addAll(r4)     // Catch: java.lang.Throwable -> L31a
        L2d6:
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L31a
        L2da:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> L31a
            if (r3 == 0) goto L315
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> L31a
            com.kuaishou.weapon.p0.s r3 = (com.kuaishou.weapon.p0.s) r3     // Catch: java.lang.Throwable -> L31a
            if (r3 == 0) goto L2da
            boolean r6 = r4.contains(r3)     // Catch: java.lang.Throwable -> L31a
            if (r6 == 0) goto L2f9
            com.kuaishou.weapon.p0.q r6 = r1.k     // Catch: java.lang.Throwable -> L31a
            int r7 = r3.a     // Catch: java.lang.Throwable -> L31a
            java.lang.String r3 = r3.d     // Catch: java.lang.Throwable -> L31a
            r8 = 0
            r6.a(r7, r3, r8)     // Catch: java.lang.Throwable -> L31a
            goto L2da
        L2f9:
            boolean r6 = r5.contains(r3)     // Catch: java.lang.Throwable -> L31a
            if (r6 == 0) goto L2da
            r1.a(r3)     // Catch: java.lang.Throwable -> L31a
            goto L2da
        L303:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Throwable -> L31a
            java.lang.String r3 = "pluginJsonObject is null "
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L31a
            throw r0     // Catch: java.lang.Throwable -> L31a
        L30b:
            com.kuaishou.weapon.p0.q r0 = r1.k     // Catch: java.lang.Throwable -> L31a
            r0.c()     // Catch: java.lang.Throwable -> L31a
            com.kuaishou.weapon.p0.t r0 = r1.l     // Catch: java.lang.Throwable -> L31a
            r0.b()     // Catch: java.lang.Throwable -> L31a
        L315:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L31a
            com.kuaishou.weapon.p0.WeaponHI.iD()
            return
        L31a:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L31a
            throw r0     // Catch: java.lang.Throwable -> L31d
        L31d:
            com.kuaishou.weapon.p0.q r0 = r1.k     // Catch: java.lang.Throwable -> L32b
            r0.c()     // Catch: java.lang.Throwable -> L32b
            com.kuaishou.weapon.p0.t r0 = r1.l     // Catch: java.lang.Throwable -> L32b
            r0.b()     // Catch: java.lang.Throwable -> L32b
            com.kuaishou.weapon.p0.WeaponHI.iD()
            return
        L32b:
            r0 = move-exception
            com.kuaishou.weapon.p0.WeaponHI.iD()
            throw r0
    }
}
