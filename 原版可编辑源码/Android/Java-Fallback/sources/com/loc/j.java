package com.loc;

public final class j {
    static com.loc.fi b;
    static com.loc.az e;
    static long g;
    java.lang.String a;
    com.loc.fi c;
    com.loc.fi d;
    long f;
    boolean h;
    private android.content.Context i;

    static {
            return
    }

    public j(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r2.c = r0
            r2.d = r0
            r0 = 0
            r2.f = r0
            r0 = 0
            r2.h = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.i = r3
            return
    }

    private void e() {
            r5 = this;
            com.loc.fi r0 = com.loc.j.b
            if (r0 == 0) goto L12
            long r0 = com.loc.fz.b()
            long r2 = com.loc.j.g
            long r0 = r0 - r2
            r2 = 180000(0x2bf20, double:8.8932E-319)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L2a
        L12:
            com.loc.fi r0 = r5.f()
            long r1 = com.loc.fz.b()
            com.loc.j.g = r1
            if (r0 == 0) goto L2a
            com.amap.api.location.AMapLocation r1 = r0.a()
            boolean r1 = com.loc.fz.a(r1)
            if (r1 == 0) goto L2a
            com.loc.j.b = r0
        L2a:
            return
    }

    private com.loc.fi f() {
            r7 = this;
            android.content.Context r0 = r7.i
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r7.a()
            com.loc.az r0 = com.loc.j.e     // Catch: java.lang.Throwable -> L8c
            if (r0 != 0) goto Le
            return r1
        Le:
            com.loc.az r0 = com.loc.j.e     // Catch: java.lang.Throwable -> L8c
            java.lang.String r2 = "_id=1"
            java.lang.Class<com.loc.fi> r3 = com.loc.fi.class
            java.util.List r0 = r0.a(r2, r3)     // Catch: java.lang.Throwable -> L8c
            if (r0 == 0) goto L6a
            int r2 = r0.size()     // Catch: java.lang.Throwable -> L8c
            if (r2 <= 0) goto L6a
            r2 = 0
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L8c
            com.loc.fi r0 = (com.loc.fi) r0     // Catch: java.lang.Throwable -> L8c
            java.lang.String r2 = r0.c()     // Catch: java.lang.Throwable -> L8a
            byte[] r2 = com.loc.p.b(r2)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = "UTF-8"
            if (r2 == 0) goto L47
            int r4 = r2.length     // Catch: java.lang.Throwable -> L8a
            if (r4 <= 0) goto L47
            java.lang.String r4 = r7.a     // Catch: java.lang.Throwable -> L8a
            byte[] r2 = com.loc.fg.b(r2, r4)     // Catch: java.lang.Throwable -> L8a
            if (r2 == 0) goto L47
            int r4 = r2.length     // Catch: java.lang.Throwable -> L8a
            if (r4 <= 0) goto L47
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Throwable -> L8a
            r4.<init>(r2, r3)     // Catch: java.lang.Throwable -> L8a
            goto L48
        L47:
            r4 = r1
        L48:
            java.lang.String r2 = r0.b()     // Catch: java.lang.Throwable -> L8a
            byte[] r2 = com.loc.p.b(r2)     // Catch: java.lang.Throwable -> L8a
            if (r2 == 0) goto L65
            int r5 = r2.length     // Catch: java.lang.Throwable -> L8a
            if (r5 <= 0) goto L65
            java.lang.String r5 = r7.a     // Catch: java.lang.Throwable -> L8a
            byte[] r2 = com.loc.fg.b(r2, r5)     // Catch: java.lang.Throwable -> L8a
            if (r2 == 0) goto L65
            int r5 = r2.length     // Catch: java.lang.Throwable -> L8a
            if (r5 <= 0) goto L65
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Throwable -> L8a
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L8a
        L65:
            r0.a(r1)     // Catch: java.lang.Throwable -> L8a
            r1 = r4
            goto L6b
        L6a:
            r0 = r1
        L6b:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L8a
            if (r2 != 0) goto L97
            com.amap.api.location.AMapLocation r2 = new com.amap.api.location.AMapLocation     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = ""
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L8a
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L8a
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L8a
            com.loc.fr.a(r2, r3)     // Catch: java.lang.Throwable -> L8a
            boolean r1 = com.loc.fz.b(r2)     // Catch: java.lang.Throwable -> L8a
            if (r1 == 0) goto L97
            r0.a(r2)     // Catch: java.lang.Throwable -> L8a
            goto L97
        L8a:
            r1 = move-exception
            goto L90
        L8c:
            r0 = move-exception
            r6 = r1
            r1 = r0
            r0 = r6
        L90:
            java.lang.String r2 = "LastLocationManager"
            java.lang.String r3 = "readLastFix"
            com.loc.fr.a(r1, r2, r3)
        L97:
            return r0
    }

    public final com.amap.api.location.AMapLocation a(com.amap.api.location.AMapLocation r8, java.lang.String r9, long r10) {
            r7 = this;
            if (r8 != 0) goto L3
            return r8
        L3:
            int r0 = r8.getErrorCode()
            if (r0 == 0) goto L80
            int r0 = r8.getLocationType()
            r1 = 1
            if (r0 == r1) goto L80
            int r0 = r8.getErrorCode()
            r2 = 7
            if (r0 != r2) goto L19
            goto L80
        L19:
            r7.e()     // Catch: java.lang.Throwable -> L78
            com.loc.fi r0 = com.loc.j.b     // Catch: java.lang.Throwable -> L78
            if (r0 == 0) goto L77
            com.loc.fi r0 = com.loc.j.b     // Catch: java.lang.Throwable -> L78
            com.amap.api.location.AMapLocation r0 = r0.a()     // Catch: java.lang.Throwable -> L78
            if (r0 != 0) goto L29
            goto L77
        L29:
            r0 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L78
            if (r2 == 0) goto L4b
            long r2 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L78
            com.loc.fi r9 = com.loc.j.b     // Catch: java.lang.Throwable -> L78
            long r4 = r9.d()     // Catch: java.lang.Throwable -> L78
            long r2 = r2 - r4
            r4 = 0
            int r9 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r9 < 0) goto L46
            int r9 = (r2 > r10 ? 1 : (r2 == r10 ? 0 : -1))
            if (r9 > 0) goto L46
            r0 = 1
        L46:
            r9 = 3
            r8.setTrustedLevel(r9)     // Catch: java.lang.Throwable -> L78
            goto L59
        L4b:
            com.loc.fi r10 = com.loc.j.b     // Catch: java.lang.Throwable -> L78
            java.lang.String r10 = r10.b()     // Catch: java.lang.Throwable -> L78
            boolean r0 = com.loc.fz.a(r10, r9)     // Catch: java.lang.Throwable -> L78
            r9 = 2
            r8.setTrustedLevel(r9)     // Catch: java.lang.Throwable -> L78
        L59:
            if (r0 == 0) goto L80
            com.loc.fi r9 = com.loc.j.b     // Catch: java.lang.Throwable -> L78
            com.amap.api.location.AMapLocation r9 = r9.a()     // Catch: java.lang.Throwable -> L78
            r10 = 9
            r9.setLocationType(r10)     // Catch: java.lang.Throwable -> L72
            r9.setFixLastLocation(r1)     // Catch: java.lang.Throwable -> L72
            java.lang.String r8 = r8.getLocationDetail()     // Catch: java.lang.Throwable -> L72
            r9.setLocationDetail(r8)     // Catch: java.lang.Throwable -> L72
            r8 = r9
            goto L80
        L72:
            r8 = move-exception
            r6 = r9
            r9 = r8
            r8 = r6
            goto L79
        L77:
            return r8
        L78:
            r9 = move-exception
        L79:
            java.lang.String r10 = "LastLocationManager"
            java.lang.String r11 = "fixLastLocation"
            com.loc.fr.a(r9, r10, r11)
        L80:
            return r8
    }

    public final void a() {
            r3 = this;
            boolean r0 = r3.h
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.String r0 = r3.a     // Catch: java.lang.Throwable -> L29
            if (r0 != 0) goto L15
            java.lang.String r0 = "MD5"
            java.lang.String r1 = com.loc.o.k()     // Catch: java.lang.Throwable -> L29
            java.lang.String r0 = com.loc.fg.a(r0, r1)     // Catch: java.lang.Throwable -> L29
            r3.a = r0     // Catch: java.lang.Throwable -> L29
        L15:
            com.loc.az r0 = com.loc.j.e     // Catch: java.lang.Throwable -> L29
            if (r0 != 0) goto L31
            java.lang.Class<com.loc.fj> r0 = com.loc.fj.class
            com.loc.ay r0 = com.loc.az.a(r0)     // Catch: java.lang.Throwable -> L29
            com.loc.az r1 = new com.loc.az     // Catch: java.lang.Throwable -> L29
            android.content.Context r2 = r3.i     // Catch: java.lang.Throwable -> L29
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L29
            com.loc.j.e = r1     // Catch: java.lang.Throwable -> L29
            goto L31
        L29:
            r0 = move-exception
            java.lang.String r1 = "LastLocationManager"
            java.lang.String r2 = "<init>:DBOperation"
            com.loc.fr.a(r0, r1, r2)
        L31:
            r0 = 1
            r3.h = r0
            return
    }

    public final boolean a(com.amap.api.location.AMapLocation r6, java.lang.String r7) {
            r5 = this;
            android.content.Context r0 = r5.i
            r1 = 0
            if (r0 == 0) goto L72
            if (r6 != 0) goto L8
            goto L72
        L8:
            boolean r0 = com.loc.fz.a(r6)
            if (r0 == 0) goto L72
            int r0 = r6.getLocationType()
            r2 = 2
            if (r0 == r2) goto L72
            boolean r0 = r6.isMock()
            if (r0 != 0) goto L72
            boolean r0 = r6.isFixLastLocation()
            if (r0 == 0) goto L22
            goto L72
        L22:
            com.loc.fi r0 = new com.loc.fi
            r0.<init>()
            r0.a(r6)
            int r6 = r6.getLocationType()
            r2 = 1
            if (r6 != r2) goto L36
            r6 = 0
            r0.a(r6)
            goto L39
        L36:
            r0.a(r7)
        L39:
            com.loc.j.b = r0     // Catch: java.lang.Throwable -> L6a
            long r6 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L6a
            com.loc.j.g = r6     // Catch: java.lang.Throwable -> L6a
            r5.c = r0     // Catch: java.lang.Throwable -> L6a
            com.loc.fi r6 = r5.d     // Catch: java.lang.Throwable -> L6a
            if (r6 == 0) goto L5c
            com.loc.fi r6 = r5.d     // Catch: java.lang.Throwable -> L6a
            com.amap.api.location.AMapLocation r6 = r6.a()     // Catch: java.lang.Throwable -> L6a
            com.amap.api.location.AMapLocation r7 = r0.a()     // Catch: java.lang.Throwable -> L6a
            float r6 = com.loc.fz.a(r6, r7)     // Catch: java.lang.Throwable -> L6a
            r7 = 1140457472(0x43fa0000, float:500.0)
            int r6 = (r6 > r7 ? 1 : (r6 == r7 ? 0 : -1))
            if (r6 > 0) goto L5c
            return r1
        L5c:
            long r6 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L6a
            long r3 = r5.f     // Catch: java.lang.Throwable -> L6a
            long r6 = r6 - r3
            r3 = 30000(0x7530, double:1.4822E-319)
            int r0 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r0 <= 0) goto L72
            return r2
        L6a:
            r6 = move-exception
            java.lang.String r7 = "LastLocationManager"
            java.lang.String r0 = "setLastFix"
            com.loc.fr.a(r6, r7, r0)
        L72:
            return r1
    }

    public final com.amap.api.location.AMapLocation b() {
            r2 = this;
            r2.e()
            com.loc.fi r0 = com.loc.j.b
            r1 = 0
            if (r0 != 0) goto L9
            return r1
        L9:
            com.amap.api.location.AMapLocation r0 = r0.a()
            boolean r0 = com.loc.fz.a(r0)
            if (r0 != 0) goto L14
            return r1
        L14:
            com.loc.fi r0 = com.loc.j.b
            com.amap.api.location.AMapLocation r0 = r0.a()
            return r0
    }

    public final void c() {
            r3 = this;
            r3.d()     // Catch: java.lang.Throwable -> L10
            r0 = 0
            r3.f = r0     // Catch: java.lang.Throwable -> L10
            r0 = 0
            r3.h = r0     // Catch: java.lang.Throwable -> L10
            r0 = 0
            r3.c = r0     // Catch: java.lang.Throwable -> L10
            r3.d = r0     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r0 = move-exception
            java.lang.String r1 = "LastLocationManager"
            java.lang.String r2 = "destroy"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final void d() {
            r6 = this;
            java.lang.String r0 = "UTF-8"
            r6.a()     // Catch: java.lang.Throwable -> La1
            com.loc.fi r1 = r6.c     // Catch: java.lang.Throwable -> La1
            if (r1 == 0) goto La0
            com.loc.fi r1 = r6.c     // Catch: java.lang.Throwable -> La1
            com.amap.api.location.AMapLocation r1 = r1.a()     // Catch: java.lang.Throwable -> La1
            boolean r1 = com.loc.fz.a(r1)     // Catch: java.lang.Throwable -> La1
            if (r1 == 0) goto La0
            com.loc.az r1 = com.loc.j.e     // Catch: java.lang.Throwable -> La1
            if (r1 == 0) goto La0
            com.loc.fi r1 = r6.c     // Catch: java.lang.Throwable -> La1
            com.loc.fi r2 = r6.d     // Catch: java.lang.Throwable -> La1
            if (r1 == r2) goto La0
            com.loc.fi r1 = r6.c     // Catch: java.lang.Throwable -> La1
            long r1 = r1.d()     // Catch: java.lang.Throwable -> La1
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L2d
            goto La0
        L2d:
            com.loc.fi r1 = r6.c     // Catch: java.lang.Throwable -> La1
            com.amap.api.location.AMapLocation r1 = r1.a()     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r1.toStr()     // Catch: java.lang.Throwable -> La1
            com.loc.fi r2 = r6.c     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = r2.b()     // Catch: java.lang.Throwable -> La1
            com.loc.fi r3 = r6.c     // Catch: java.lang.Throwable -> La1
            r6.d = r3     // Catch: java.lang.Throwable -> La1
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> La1
            r4 = 0
            if (r3 != 0) goto L6d
            byte[] r1 = r1.getBytes(r0)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = r6.a     // Catch: java.lang.Throwable -> La1
            byte[] r1 = com.loc.fg.a(r1, r3)     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = com.loc.p.b(r1)     // Catch: java.lang.Throwable -> La1
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> La1
            if (r3 != 0) goto L6a
            byte[] r0 = r2.getBytes(r0)     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = r6.a     // Catch: java.lang.Throwable -> La1
            byte[] r0 = com.loc.fg.a(r0, r2)     // Catch: java.lang.Throwable -> La1
            java.lang.String r4 = com.loc.p.b(r0)     // Catch: java.lang.Throwable -> La1
        L6a:
            r0 = r4
            r4 = r1
            goto L6e
        L6d:
            r0 = r4
        L6e:
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> La1
            if (r1 != 0) goto La0
            com.loc.fi r1 = new com.loc.fi     // Catch: java.lang.Throwable -> La1
            r1.<init>()     // Catch: java.lang.Throwable -> La1
            r1.b(r4)     // Catch: java.lang.Throwable -> La1
            long r2 = com.loc.fz.b()     // Catch: java.lang.Throwable -> La1
            r1.a(r2)     // Catch: java.lang.Throwable -> La1
            r1.a(r0)     // Catch: java.lang.Throwable -> La1
            com.loc.az r0 = com.loc.j.e     // Catch: java.lang.Throwable -> La1
            java.lang.String r2 = "_id=1"
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> La1
            long r0 = com.loc.fz.b()     // Catch: java.lang.Throwable -> La1
            r6.f = r0     // Catch: java.lang.Throwable -> La1
            com.loc.fi r0 = com.loc.j.b     // Catch: java.lang.Throwable -> La1
            if (r0 == 0) goto La0
            com.loc.fi r0 = com.loc.j.b     // Catch: java.lang.Throwable -> La1
            long r1 = com.loc.fz.b()     // Catch: java.lang.Throwable -> La1
            r0.a(r1)     // Catch: java.lang.Throwable -> La1
        La0:
            return
        La1:
            r0 = move-exception
            java.lang.String r1 = "LastLocationManager"
            java.lang.String r2 = "saveLastFix"
            com.loc.fr.a(r0, r1, r2)
            return
    }
}
