package com.loc;

public final class ev {
    com.loc.ew a;
    long b;
    long c;
    int d;
    long e;
    com.amap.api.location.AMapLocation f;
    long g;
    private boolean h;

    public ev() {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.a = r0
            r1 = 0
            r4.b = r1
            r4.c = r1
            r3 = 1
            r4.h = r3
            r3 = 0
            r4.d = r3
            r4.e = r1
            r4.f = r0
            r4.g = r1
            return
    }

    private com.loc.ew b(com.loc.ew r3) {
            r2 = this;
            boolean r0 = com.loc.fz.a(r3)
            if (r0 == 0) goto L29
            boolean r0 = r2.h
            if (r0 == 0) goto L24
            long r0 = r3.getTime()
            boolean r0 = com.loc.fq.a(r0)
            if (r0 == 0) goto L24
            int r0 = r3.getLocationType()
            r1 = 5
            if (r0 == r1) goto L22
            int r0 = r3.getLocationType()
            r1 = 6
            if (r0 != r1) goto L29
        L22:
            r0 = 4
            goto L26
        L24:
            int r0 = r2.d
        L26:
            r3.setLocationType(r0)
        L29:
            return r3
    }

    public final com.amap.api.location.AMapLocation a(com.amap.api.location.AMapLocation r6) {
            r5 = this;
            boolean r0 = com.loc.fz.a(r6)
            if (r0 != 0) goto L7
            return r6
        L7:
            long r0 = com.loc.fz.b()
            long r2 = r5.g
            long r0 = r0 - r2
            long r2 = com.loc.fz.b()
            r5.g = r2
            r2 = 5000(0x1388, double:2.4703E-320)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L1b
            return r6
        L1b:
            com.amap.api.location.AMapLocation r0 = r5.f
            if (r0 != 0) goto L22
            r5.f = r6
            return r6
        L22:
            r1 = 1
            int r0 = r0.getLocationType()
            if (r1 == r0) goto L3a
            com.amap.api.location.AMapLocation r0 = r5.f
            java.lang.String r0 = r0.getProvider()
            java.lang.String r1 = "gps"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 != 0) goto L3a
            r5.f = r6
            return r6
        L3a:
            com.amap.api.location.AMapLocation r0 = r5.f
            double r0 = r0.getAltitude()
            double r2 = r6.getAltitude()
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L59
            com.amap.api.location.AMapLocation r0 = r5.f
            double r0 = r0.getLongitude()
            double r2 = r6.getLongitude()
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L59
            r5.f = r6
            return r6
        L59:
            long r0 = r6.getTime()
            com.amap.api.location.AMapLocation r2 = r5.f
            long r2 = r2.getTime()
            long r0 = r0 - r2
            long r0 = java.lang.Math.abs(r0)
            r2 = 30000(0x7530, double:1.4822E-319)
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 >= 0) goto L71
            r5.f = r6
            return r6
        L71:
            com.amap.api.location.AMapLocation r2 = r5.f
            float r2 = r2.getSpeed()
            float r3 = r6.getSpeed()
            float r2 = r2 + r3
            float r0 = (float) r0
            float r2 = r2 * r0
            r0 = 1157234688(0x44fa0000, float:2000.0)
            float r2 = r2 / r0
            com.amap.api.location.AMapLocation r0 = r5.f
            float r0 = com.loc.fz.a(r6, r0)
            r1 = 1073741824(0x40000000, float:2.0)
            com.amap.api.location.AMapLocation r3 = r5.f
            float r3 = r3.getAccuracy()
            float r4 = r6.getAccuracy()
            float r3 = r3 + r4
            float r3 = r3 * r1
            float r2 = r2 + r3
            r1 = 1161527296(0x453b8000, float:3000.0)
            float r2 = r2 + r1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto La3
            com.amap.api.location.AMapLocation r6 = r5.f
            return r6
        La3:
            r5.f = r6
            return r6
    }

    public final com.loc.ew a(com.loc.ew r21) {
            r20 = this;
            r0 = r20
            r1 = r21
            long r2 = com.loc.fz.b()
            long r4 = r0.e
            long r2 = r2 - r4
            r4 = 30000(0x7530, double:1.4822E-319)
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L1c
            r0.a = r1
            long r1 = com.loc.fz.b()
            r0.e = r1
            com.loc.ew r1 = r0.a
            return r1
        L1c:
            long r2 = com.loc.fz.b()
            r0.e = r2
            com.loc.ew r2 = r0.a
            boolean r2 = com.loc.fz.a(r2)
            if (r2 == 0) goto L176
            boolean r2 = com.loc.fz.a(r21)
            if (r2 != 0) goto L32
            goto L176
        L32:
            long r2 = r21.getTime()
            com.loc.ew r6 = r0.a
            long r6 = r6.getTime()
            r8 = 1133903872(0x43960000, float:300.0)
            int r9 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r9 != 0) goto L4b
            float r2 = r21.getAccuracy()
            int r2 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r2 >= 0) goto L4b
            return r1
        L4b:
            java.lang.String r2 = r21.getProvider()
            java.lang.String r3 = "gps"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L60
            long r2 = com.loc.fz.b()
            r0.b = r2
            r0.a = r1
            return r1
        L60:
            int r2 = r21.c()
            com.loc.ew r3 = r0.a
            int r3 = r3.c()
            if (r2 == r3) goto L75
            long r2 = com.loc.fz.b()
            r0.b = r2
            r0.a = r1
            return r1
        L75:
            java.lang.String r2 = r21.getBuildingId()
            if (r2 == 0) goto L9e
            java.lang.String r2 = r21.getBuildingId()
            com.loc.ew r3 = r0.a
            java.lang.String r3 = r3.getBuildingId()
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L9e
            java.lang.String r2 = r21.getBuildingId()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L9e
            long r2 = com.loc.fz.b()
            r0.b = r2
            r0.a = r1
            return r1
        L9e:
            int r2 = r21.getLocationType()
            r0.d = r2
            com.loc.ew r2 = r0.a
            float r2 = com.loc.fz.a(r1, r2)
            com.loc.ew r3 = r0.a
            float r3 = r3.getAccuracy()
            float r6 = r21.getAccuracy()
            float r7 = r6 - r3
            long r9 = com.loc.fz.b()
            long r11 = r0.b
            long r11 = r9 - r11
            r13 = 1
            r14 = 0
            r15 = 1120403456(0x42c80000, float:100.0)
            r16 = 1133871104(0x43958000, float:299.0)
            int r17 = (r3 > r15 ? 1 : (r3 == r15 ? 0 : -1))
            if (r17 > 0) goto Ld0
            int r17 = (r6 > r16 ? 1 : (r6 == r16 ? 0 : -1))
            if (r17 <= 0) goto Ld0
            r17 = 1
            goto Ld2
        Ld0:
            r17 = 0
        Ld2:
            int r18 = (r3 > r16 ? 1 : (r3 == r16 ? 0 : -1))
            if (r18 <= 0) goto Ldb
            int r19 = (r6 > r16 ? 1 : (r6 == r16 ? 0 : -1))
            if (r19 <= 0) goto Ldb
            goto Ldc
        Ldb:
            r13 = 0
        Ldc:
            r4 = 0
            if (r17 != 0) goto L155
            if (r13 == 0) goto Le3
            goto L155
        Le3:
            int r13 = (r6 > r15 ? 1 : (r6 == r15 ? 0 : -1))
            if (r13 >= 0) goto Lf0
            if (r18 <= 0) goto Lf0
            r0.b = r9
            r0.a = r1
            r0.c = r4
            return r1
        Lf0:
            int r13 = (r6 > r16 ? 1 : (r6 == r16 ? 0 : -1))
            if (r13 > 0) goto Lf6
            r0.c = r4
        Lf6:
            r4 = 1092616192(0x41200000, float:10.0)
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 >= 0) goto L130
            double r4 = (double) r2
            r13 = 4591870180066957722(0x3fb999999999999a, double:0.1)
            int r2 = (r4 > r13 ? 1 : (r4 == r13 ? 0 : -1))
            if (r2 <= 0) goto L130
            r2 = 1084227584(0x40a00000, float:5.0)
            int r2 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r2 <= 0) goto L130
            r2 = -1013579776(0xffffffffc3960000, float:-300.0)
            int r2 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r2 < 0) goto L11b
            com.loc.ew r1 = r0.a
            com.loc.ew r1 = r0.b(r1)
            r0.a = r1
            return r1
        L11b:
            float r3 = r3 / r6
            r2 = 1073741824(0x40000000, float:2.0)
            int r2 = (r3 > r2 ? 1 : (r3 == r2 ? 0 : -1))
            if (r2 < 0) goto L127
            r0.b = r9
            r0.a = r1
            return r1
        L127:
            com.loc.ew r1 = r0.a
            com.loc.ew r1 = r0.b(r1)
            r0.a = r1
            return r1
        L130:
            int r2 = (r7 > r8 ? 1 : (r7 == r8 ? 0 : -1))
            if (r2 < 0) goto L14c
            r2 = 30000(0x7530, double:1.4822E-319)
            int r4 = (r11 > r2 ? 1 : (r11 == r2 ? 0 : -1))
            if (r4 < 0) goto L143
            long r2 = com.loc.fz.b()
            r0.b = r2
            r0.a = r1
            return r1
        L143:
            com.loc.ew r1 = r0.a
            com.loc.ew r1 = r0.b(r1)
            r0.a = r1
            return r1
        L14c:
            long r2 = com.loc.fz.b()
            r0.b = r2
            r0.a = r1
            return r1
        L155:
            long r2 = r0.c
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 != 0) goto L15e
            r0.c = r9
            goto L16d
        L15e:
            long r2 = r9 - r2
            r6 = 30000(0x7530, double:1.4822E-319)
            int r8 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r8 <= 0) goto L16d
            r0.b = r9
            r0.a = r1
            r0.c = r4
            return r1
        L16d:
            com.loc.ew r1 = r0.a
            com.loc.ew r1 = r0.b(r1)
            r0.a = r1
            return r1
        L176:
            long r2 = com.loc.fz.b()
            r0.b = r2
            r0.a = r1
            return r1
    }

    public final void a() {
            r3 = this;
            r0 = 0
            r3.a = r0
            r1 = 0
            r3.b = r1
            r3.c = r1
            r3.f = r0
            r3.g = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }
}
