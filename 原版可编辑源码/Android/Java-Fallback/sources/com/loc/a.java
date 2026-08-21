package com.loc;

public final class a {
    private static boolean A;
    com.loc.fx a;
    android.content.Context b;
    android.app.PendingIntent c;
    java.lang.String d;
    com.amap.api.fence.GeoFenceListener e;
    volatile int f;
    java.util.ArrayList<com.amap.api.fence.GeoFence> g;
    com.loc.a.c h;
    java.lang.Object i;
    java.lang.Object j;
    com.loc.a.a k;
    com.loc.a.b l;
    volatile boolean m;
    volatile boolean n;
    volatile boolean o;
    com.loc.b p;
    com.loc.c q;
    com.amap.api.location.AMapLocationClient r;
    volatile com.amap.api.location.AMapLocation s;
    long t;
    com.amap.api.location.AMapLocationClientOption u;
    int v;
    com.amap.api.location.AMapLocationListener w;
    final int x;
    volatile boolean y;
    private java.lang.Object z;


    class a extends android.os.Handler {
        final com.loc.a a;

        public a(com.loc.a r1, android.os.Looper r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r2) {
                r1 = this;
                int r0 = r2.what     // Catch: java.lang.Throwable -> L82
                switch(r0) {
                    case 0: goto L79;
                    case 1: goto L6f;
                    case 2: goto L65;
                    case 3: goto L5b;
                    case 4: goto L51;
                    case 5: goto L4b;
                    case 6: goto L41;
                    case 7: goto L3b;
                    case 8: goto L31;
                    case 9: goto L27;
                    case 10: goto L21;
                    case 11: goto L17;
                    case 12: goto Ld;
                    case 13: goto L7;
                    default: goto L5;
                }     // Catch: java.lang.Throwable -> L82
            L5:
                goto L82
            L7:
                com.loc.a r2 = r1.a     // Catch: java.lang.Throwable -> L82
                r2.g()     // Catch: java.lang.Throwable -> L82
                goto L82
            Ld:
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L82
                android.os.Bundle r2 = r2.getData()     // Catch: java.lang.Throwable -> L82
                r0.g(r2)     // Catch: java.lang.Throwable -> L82
                return
            L17:
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L82
                android.os.Bundle r2 = r2.getData()     // Catch: java.lang.Throwable -> L82
                r0.h(r2)     // Catch: java.lang.Throwable -> L82
                return
            L21:
                com.loc.a r2 = r1.a     // Catch: java.lang.Throwable -> L82
                r2.c()     // Catch: java.lang.Throwable -> L82
                return
            L27:
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L82
                android.os.Bundle r2 = r2.getData()     // Catch: java.lang.Throwable -> L82
                r0.a(r2)     // Catch: java.lang.Throwable -> L82
                return
            L31:
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L82
                android.os.Bundle r2 = r2.getData()     // Catch: java.lang.Throwable -> L82
                r0.j(r2)     // Catch: java.lang.Throwable -> L82
                return
            L3b:
                com.loc.a r2 = r1.a     // Catch: java.lang.Throwable -> L82
                r2.d()     // Catch: java.lang.Throwable -> L82
                return
            L41:
                com.loc.a r2 = r1.a     // Catch: java.lang.Throwable -> L82
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L82
                com.amap.api.location.AMapLocation r0 = r0.s     // Catch: java.lang.Throwable -> L82
                r2.a(r0)     // Catch: java.lang.Throwable -> L82
                return
            L4b:
                com.loc.a r2 = r1.a     // Catch: java.lang.Throwable -> L82
                r2.e()     // Catch: java.lang.Throwable -> L82
                return
            L51:
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L82
                android.os.Bundle r2 = r2.getData()     // Catch: java.lang.Throwable -> L82
                r0.f(r2)     // Catch: java.lang.Throwable -> L82
                return
            L5b:
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L82
                android.os.Bundle r2 = r2.getData()     // Catch: java.lang.Throwable -> L82
                r0.d(r2)     // Catch: java.lang.Throwable -> L82
                return
            L65:
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L82
                android.os.Bundle r2 = r2.getData()     // Catch: java.lang.Throwable -> L82
                r0.e(r2)     // Catch: java.lang.Throwable -> L82
                return
            L6f:
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L82
                android.os.Bundle r2 = r2.getData()     // Catch: java.lang.Throwable -> L82
                r0.c(r2)     // Catch: java.lang.Throwable -> L82
                return
            L79:
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L82
                android.os.Bundle r2 = r2.getData()     // Catch: java.lang.Throwable -> L82
                r0.b(r2)     // Catch: java.lang.Throwable -> L82
            L82:
                return
        }
    }

    static class b extends android.os.HandlerThread {
        public b(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void run() {
                r0 = this;
                super.run()     // Catch: java.lang.Throwable -> L3
            L3:
                return
        }
    }

    class c extends android.os.Handler {
        final com.loc.a a;

        public c(com.loc.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public c(com.loc.a r1, android.os.Looper r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r2) {
                r1 = this;
                android.os.Bundle r0 = r2.getData()     // Catch: java.lang.Throwable -> L33
                int r2 = r2.what     // Catch: java.lang.Throwable -> L33
                switch(r2) {
                    case 1000: goto L2e;
                    case 1001: goto L1b;
                    case 1002: goto La;
                    default: goto L9;
                }
            L9:
                goto L33
            La:
                java.lang.String r2 = "location_errorcode"
                int r2 = r0.getInt(r2)     // Catch: java.lang.Throwable -> L16
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L16
                r0.c(r2)     // Catch: java.lang.Throwable -> L16
                return
            L16:
                r2 = move-exception
                r2.printStackTrace()     // Catch: java.lang.Throwable -> L33
                goto L33
            L1b:
                java.lang.String r2 = "geoFence"
                android.os.Parcelable r2 = r0.getParcelable(r2)     // Catch: java.lang.Throwable -> L29
                com.amap.api.fence.GeoFence r2 = (com.amap.api.fence.GeoFence) r2     // Catch: java.lang.Throwable -> L29
                com.loc.a r0 = r1.a     // Catch: java.lang.Throwable -> L29
                r0.b(r2)     // Catch: java.lang.Throwable -> L29
                return
            L29:
                r2 = move-exception
                r2.printStackTrace()     // Catch: java.lang.Throwable -> L33
                return
            L2e:
                com.loc.a r2 = r1.a     // Catch: java.lang.Throwable -> L33
                r2.i(r0)     // Catch: java.lang.Throwable -> L33
            L33:
                return
        }
    }

    static {
            return
    }

    public a(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.a = r0
            r4.b = r0
            r4.c = r0
            r4.d = r0
            r4.e = r0
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r4.z = r1
            r1 = 1
            r4.f = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r4.g = r1
            r4.h = r0
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r4.i = r1
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r4.j = r1
            r4.k = r0
            r4.l = r0
            r1 = 0
            r4.m = r1
            r4.n = r1
            r4.o = r1
            r4.p = r0
            r4.q = r0
            r4.r = r0
            r4.s = r0
            r2 = 0
            r4.t = r2
            r4.u = r0
            r4.v = r1
            com.loc.a$1 r0 = new com.loc.a$1
            r0.<init>(r4)
            r4.w = r0
            r0 = 3
            r4.x = r0
            r4.y = r1
            android.content.Context r5 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> L60
            r4.b = r5     // Catch: java.lang.Throwable -> L60
            r4.j()     // Catch: java.lang.Throwable -> L60
            return
        L60:
            r5 = move-exception
            java.lang.String r0 = "GeoFenceManger"
            java.lang.String r1 = "<init>"
            com.loc.fr.a(r5, r0, r1)
            return
    }

    private static float a(com.amap.api.location.AMapLocation r6, java.util.List<com.amap.api.fence.GeoFence> r7) {
            r0 = 2139095039(0x7f7fffff, float:3.4028235E38)
            if (r6 == 0) goto L75
            int r1 = r6.getErrorCode()
            if (r1 != 0) goto L75
            if (r7 == 0) goto L75
            boolean r1 = r7.isEmpty()
            if (r1 != 0) goto L75
            com.amap.api.location.DPoint r1 = new com.amap.api.location.DPoint
            double r2 = r6.getLatitude()
            double r4 = r6.getLongitude()
            r1.<init>(r2, r4)
            java.util.Iterator r6 = r7.iterator()
        L24:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto L75
            java.lang.Object r7 = r6.next()
            com.amap.api.fence.GeoFence r7 = (com.amap.api.fence.GeoFence) r7
            boolean r2 = r7.isAble()
            if (r2 == 0) goto L24
            com.amap.api.location.DPoint r2 = r7.getCenter()
            float r2 = com.loc.fz.a(r1, r2)
            float r3 = r7.getMinDis2Center()
            int r3 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r3 <= 0) goto L50
            float r3 = r7.getMaxDis2Center()
            int r3 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r3 >= 0) goto L50
            r6 = 0
            return r6
        L50:
            float r3 = r7.getMaxDis2Center()
            int r3 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r3 <= 0) goto L62
            float r3 = r7.getMaxDis2Center()
            float r3 = r2 - r3
            float r0 = java.lang.Math.min(r0, r3)
        L62:
            float r3 = r7.getMinDis2Center()
            int r3 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r3 >= 0) goto L24
            float r7 = r7.getMinDis2Center()
            float r7 = r7 - r2
            float r7 = java.lang.Math.min(r0, r7)
            r0 = r7
            goto L24
        L75:
            return r0
    }

    static float a(com.amap.api.location.DPoint r2, java.util.List<com.amap.api.location.DPoint> r3) {
            r0 = 2139095039(0x7f7fffff, float:3.4028235E38)
            if (r2 == 0) goto L26
            if (r3 == 0) goto L26
            boolean r1 = r3.isEmpty()
            if (r1 != 0) goto L26
            java.util.Iterator r3 = r3.iterator()
        L11:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r3.next()
            com.amap.api.location.DPoint r1 = (com.amap.api.location.DPoint) r1
            float r1 = com.loc.fz.a(r2, r1)
            float r0 = java.lang.Math.min(r0, r1)
            goto L11
        L26:
            return r0
    }

    private int a(java.util.List<com.amap.api.fence.GeoFence> r5) {
            r4 = this;
            r0 = 8
            r1 = 0
            java.util.ArrayList<com.amap.api.fence.GeoFence> r2 = r4.g     // Catch: java.lang.Throwable -> L24
            if (r2 != 0) goto Le
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L24
            r2.<init>()     // Catch: java.lang.Throwable -> L24
            r4.g = r2     // Catch: java.lang.Throwable -> L24
        Le:
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L24
        L12:
            boolean r2 = r5.hasNext()     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L22
            java.lang.Object r2 = r5.next()     // Catch: java.lang.Throwable -> L24
            com.amap.api.fence.GeoFence r2 = (com.amap.api.fence.GeoFence) r2     // Catch: java.lang.Throwable -> L24
            r4.c(r2)     // Catch: java.lang.Throwable -> L24
            goto L12
        L22:
            r0 = 0
            goto L37
        L24:
            r5 = move-exception
            java.lang.String r2 = "GeoFenceManager"
            java.lang.String r3 = "addGeoFenceList"
            com.loc.fr.a(r5, r2, r3)
            java.lang.String r5 = r5.getMessage()
            java.lang.String[] r1 = new java.lang.String[r1]
            java.lang.String r2 = "添加围栏失败"
            a(r2, r0, r5, r1)
        L37:
            return r0
    }

    private static android.os.Bundle a(com.amap.api.fence.GeoFence r2, java.lang.String r3, java.lang.String r4, int r5, int r6) {
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            if (r3 != 0) goto L9
            java.lang.String r3 = ""
        L9:
            java.lang.String r1 = "fenceid"
            r0.putString(r1, r3)
            java.lang.String r3 = "customId"
            r0.putString(r3, r4)
            java.lang.String r3 = "event"
            r0.putInt(r3, r5)
            java.lang.String r3 = "location_errorcode"
            r0.putInt(r3, r6)
            java.lang.String r3 = "fence"
            r0.putParcelable(r3, r2)
            return r0
    }

    private com.amap.api.fence.GeoFence a(android.os.Bundle r6, boolean r7) {
            r5 = this;
            com.amap.api.fence.GeoFence r0 = new com.amap.api.fence.GeoFence
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            com.amap.api.location.DPoint r2 = new com.amap.api.location.DPoint
            r2.<init>()
            if (r7 == 0) goto L30
            r7 = 1
            r0.setType(r7)
            java.lang.String r7 = "pointList"
            java.util.ArrayList r1 = r6.getParcelableArrayList(r7)
            if (r1 == 0) goto L21
            com.amap.api.location.DPoint r2 = b(r1)
        L21:
            float r7 = b(r2, r1)
            r0.setMaxDis2Center(r7)
            float r7 = a(r2, r1)
            r0.setMinDis2Center(r7)
            goto L5a
        L30:
            r7 = 0
            r0.setType(r7)
            java.lang.String r7 = "centerPoint"
            android.os.Parcelable r7 = r6.getParcelable(r7)
            r2 = r7
            com.amap.api.location.DPoint r2 = (com.amap.api.location.DPoint) r2
            if (r2 == 0) goto L42
            r1.add(r2)
        L42:
            r7 = 1148846080(0x447a0000, float:1000.0)
            java.lang.String r3 = "fenceRadius"
            float r3 = r6.getFloat(r3, r7)
            r4 = 0
            int r4 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r4 > 0) goto L50
            goto L51
        L50:
            r7 = r3
        L51:
            r0.setRadius(r7)
            r0.setMinDis2Center(r7)
            r0.setMaxDis2Center(r7)
        L5a:
            int r7 = r5.f
            r0.setActivatesAction(r7)
            java.lang.String r7 = "customId"
            java.lang.String r6 = r6.getString(r7)
            r0.setCustomId(r6)
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            r6.add(r1)
            r0.setPointList(r6)
            r0.setCenter(r2)
            java.lang.String r6 = r5.d
            r0.setPendingIntentAction(r6)
            r6 = -1
            r0.setExpiration(r6)
            android.app.PendingIntent r6 = r5.c
            r0.setPendingIntent(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            long r1 = com.loc.c.a()
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            r0.setFenceId(r6)
            com.loc.fx r6 = r5.a
            if (r6 == 0) goto La2
            android.content.Context r7 = r5.b
            r1 = 2
            r6.a(r7, r1)
        La2:
            return r0
    }

    static void a(java.lang.String r4, int r5, java.lang.String r6, java.lang.String... r7) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "===========================================\n"
            r0.append(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "              "
            r2.<init>(r3)
            r2.append(r4)
            java.lang.String r4 = "                "
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r0.append(r4)
            java.lang.String r4 = "\n"
            r0.append(r4)
            java.lang.String r2 = "-------------------------------------------\n"
            r0.append(r2)
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r2 = "errorCode:"
            java.lang.String r5 = r2.concat(r5)
            r0.append(r5)
            r0.append(r4)
            java.lang.String r5 = java.lang.String.valueOf(r6)
            java.lang.String r6 = "错误信息:"
            java.lang.String r5 = r6.concat(r5)
            r0.append(r5)
            r0.append(r4)
            int r5 = r7.length
            if (r5 <= 0) goto L5c
            int r5 = r7.length
            r6 = 0
        L4f:
            if (r6 >= r5) goto L5c
            r2 = r7[r6]
            r0.append(r2)
            r0.append(r4)
            int r6 = r6 + 1
            goto L4f
        L5c:
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            java.lang.String r5 = "fenceErrLog"
            android.util.Log.i(r5, r4)
            return
    }

    private static boolean a(int r5, java.lang.String r6, java.lang.String r7, com.amap.api.location.DPoint r8) {
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            r0 = 0
            if (r6 == 0) goto L8
            return r0
        L8:
            r6 = 1
            if (r5 == r6) goto L6c
            r7 = 2
            if (r5 == r7) goto Lf
            goto L73
        Lf:
            if (r8 != 0) goto L12
            goto L74
        L12:
            double r1 = r8.getLatitude()
            r3 = 4636033603912859648(0x4056800000000000, double:90.0)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 > 0) goto L46
            double r1 = r8.getLatitude()
            r3 = -4587338432941916160(0xc056800000000000, double:-90.0)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 < 0) goto L46
            double r1 = r8.getLongitude()
            r3 = 4640537203540230144(0x4066800000000000, double:180.0)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 > 0) goto L46
            double r1 = r8.getLongitude()
            r3 = -4582834833314545664(0xc066800000000000, double:-180.0)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 >= 0) goto L73
        L46:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "经纬度错误，传入的纬度："
            r5.<init>(r6)
            double r6 = r8.getLatitude()
            r5.append(r6)
            java.lang.String r6 = "传入的经度:"
            r5.append(r6)
            double r6 = r8.getLongitude()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String[] r6 = new java.lang.String[r0]
            java.lang.String r7 = "添加围栏失败"
            a(r7, r0, r5, r6)
            goto L74
        L6c:
            boolean r5 = android.text.TextUtils.isEmpty(r7)
            if (r5 == 0) goto L73
            goto L74
        L73:
            r0 = 1
        L74:
            return r0
    }

    private static boolean a(com.amap.api.fence.GeoFence r4, int r5) {
            r0 = r5 & 1
            r1 = 1
            r2 = 0
            if (r0 != r1) goto L10
            int r0 = r4.getStatus()     // Catch: java.lang.Throwable -> Le
            if (r0 != r1) goto L10
            r2 = 1
            goto L10
        Le:
            r4 = move-exception
            goto L28
        L10:
            r0 = r5 & 2
            r3 = 2
            if (r0 != r3) goto L1c
            int r0 = r4.getStatus()     // Catch: java.lang.Throwable -> Le
            if (r0 != r3) goto L1c
            r2 = 1
        L1c:
            r0 = 4
            r5 = r5 & r0
            if (r5 != r0) goto L30
            int r4 = r4.getStatus()     // Catch: java.lang.Throwable -> Le
            r5 = 3
            if (r4 != r5) goto L30
            goto L31
        L28:
            java.lang.String r5 = "Utils"
            java.lang.String r0 = "remindStatus"
            com.loc.fr.a(r4, r5, r0)
            goto L32
        L30:
            r1 = r2
        L31:
            r2 = r1
        L32:
            return r2
    }

    private static boolean a(com.amap.api.location.AMapLocation r4, com.amap.api.fence.GeoFence r5) {
            r0 = 1
            r1 = 0
            boolean r2 = com.loc.fz.a(r4)     // Catch: java.lang.Throwable -> L5b
            if (r2 == 0) goto L59
            if (r5 == 0) goto L59
            java.util.List r2 = r5.getPointList()     // Catch: java.lang.Throwable -> L5b
            if (r2 == 0) goto L59
            java.util.List r2 = r5.getPointList()     // Catch: java.lang.Throwable -> L5b
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Throwable -> L5b
            if (r2 != 0) goto L59
            int r2 = r5.getType()     // Catch: java.lang.Throwable -> L5b
            if (r2 == 0) goto L4a
            if (r2 == r0) goto L29
            r3 = 2
            if (r2 == r3) goto L4a
            r3 = 3
            if (r2 == r3) goto L29
            goto L59
        L29:
            java.util.List r5 = r5.getPointList()     // Catch: java.lang.Throwable -> L5b
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L5b
        L31:
            boolean r2 = r5.hasNext()     // Catch: java.lang.Throwable -> L47
            if (r2 == 0) goto L45
            java.lang.Object r2 = r5.next()     // Catch: java.lang.Throwable -> L47
            java.util.List r2 = (java.util.List) r2     // Catch: java.lang.Throwable -> L47
            boolean r2 = b(r4, r2)     // Catch: java.lang.Throwable -> L47
            if (r2 == 0) goto L31
            r1 = 1
            goto L31
        L45:
            r0 = r1
            goto L64
        L47:
            r4 = move-exception
            r0 = r1
            goto L5d
        L4a:
            com.amap.api.location.DPoint r2 = r5.getCenter()     // Catch: java.lang.Throwable -> L5b
            float r5 = r5.getRadius()     // Catch: java.lang.Throwable -> L5b
            boolean r4 = a(r4, r2, r5)     // Catch: java.lang.Throwable -> L5b
            if (r4 == 0) goto L59
            goto L64
        L59:
            r0 = 0
            goto L64
        L5b:
            r4 = move-exception
            r0 = 0
        L5d:
            java.lang.String r5 = "Utils"
            java.lang.String r1 = "isInGeoFence"
            com.loc.fr.a(r4, r5, r1)
        L64:
            return r0
    }

    private static boolean a(com.amap.api.location.AMapLocation r5, com.amap.api.location.DPoint r6, float r7) {
            r0 = 4
            double[] r0 = new double[r0]
            double r1 = r6.getLatitude()
            r3 = 0
            r0[r3] = r1
            double r1 = r6.getLongitude()
            r6 = 1
            r0[r6] = r1
            double r1 = r5.getLatitude()
            r4 = 2
            r0[r4] = r1
            double r1 = r5.getLongitude()
            r5 = 3
            r0[r5] = r1
            float r5 = com.loc.fz.a(r0)
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 > 0) goto L28
            r3 = 1
        L28:
            return r3
    }

    static float b(com.amap.api.location.DPoint r2, java.util.List<com.amap.api.location.DPoint> r3) {
            r0 = 1
            if (r2 == 0) goto L24
            if (r3 == 0) goto L24
            boolean r1 = r3.isEmpty()
            if (r1 != 0) goto L24
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L24
            java.lang.Object r1 = r3.next()
            com.amap.api.location.DPoint r1 = (com.amap.api.location.DPoint) r1
            float r1 = com.loc.fz.a(r2, r1)
            float r0 = java.lang.Math.max(r0, r1)
            goto Lf
        L24:
            return r0
    }

    private static com.amap.api.location.DPoint b(java.util.List<com.amap.api.location.DPoint> r9) {
            com.amap.api.location.DPoint r0 = new com.amap.api.location.DPoint
            r0.<init>()
            if (r9 == 0) goto L48
            java.util.Iterator r1 = r9.iterator()     // Catch: java.lang.Throwable -> L40
            r2 = 0
            r4 = r2
        Le:
            boolean r6 = r1.hasNext()     // Catch: java.lang.Throwable -> L40
            if (r6 == 0) goto L25
            java.lang.Object r6 = r1.next()     // Catch: java.lang.Throwable -> L40
            com.amap.api.location.DPoint r6 = (com.amap.api.location.DPoint) r6     // Catch: java.lang.Throwable -> L40
            double r7 = r6.getLatitude()     // Catch: java.lang.Throwable -> L40
            double r2 = r2 + r7
            double r6 = r6.getLongitude()     // Catch: java.lang.Throwable -> L40
            double r4 = r4 + r6
            goto Le
        L25:
            int r1 = r9.size()     // Catch: java.lang.Throwable -> L40
            double r6 = (double) r1     // Catch: java.lang.Throwable -> L40
            double r2 = r2 / r6
            double r1 = com.loc.fz.b(r2)     // Catch: java.lang.Throwable -> L40
            int r9 = r9.size()     // Catch: java.lang.Throwable -> L40
            double r6 = (double) r9     // Catch: java.lang.Throwable -> L40
            double r4 = r4 / r6
            double r3 = com.loc.fz.b(r4)     // Catch: java.lang.Throwable -> L40
            com.amap.api.location.DPoint r9 = new com.amap.api.location.DPoint     // Catch: java.lang.Throwable -> L40
            r9.<init>(r1, r3)     // Catch: java.lang.Throwable -> L40
            r0 = r9
            goto L48
        L40:
            r9 = move-exception
            java.lang.String r1 = "GeoFenceUtil"
            java.lang.String r2 = "getPolygonCenter"
            com.loc.fr.a(r9, r1, r2)
        L48:
            return r0
    }

    private void b(int r25, android.os.Bundle r26) {
            r24 = this;
            r1 = r24
            r0 = r25
            r2 = r26
            java.lang.String r3 = "customId"
            java.lang.String r4 = "errorCode"
            android.os.Bundle r5 = new android.os.Bundle
            r5.<init>()
            java.util.ArrayList r8 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L14b
            r8.<init>()     // Catch: java.lang.Throwable -> L14b
            if (r2 == 0) goto L13c
            boolean r10 = r26.isEmpty()     // Catch: java.lang.Throwable -> L14b
            if (r10 != 0) goto L13c
            java.util.ArrayList r11 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L14b
            r11.<init>()     // Catch: java.lang.Throwable -> L14b
            java.lang.String r12 = r2.getString(r3)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r13 = "keyWords"
            java.lang.String r13 = r2.getString(r13)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r14 = "city"
            java.lang.String r19 = r2.getString(r14)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r14 = "poiType"
            java.lang.String r15 = r2.getString(r14)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r14 = "centerPoint"
            android.os.Parcelable r14 = r2.getParcelable(r14)     // Catch: java.lang.Throwable -> L14b
            com.amap.api.location.DPoint r14 = (com.amap.api.location.DPoint) r14     // Catch: java.lang.Throwable -> L14b
            java.lang.String r6 = "searchSize"
            r10 = 10
            int r6 = r2.getInt(r6, r10)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r10 = "aroundRadius"
            r7 = 1161527296(0x453b8000, float:3000.0)
            float r2 = r2.getFloat(r10, r7)     // Catch: java.lang.Throwable -> L14b
            boolean r7 = a(r0, r13, r15, r14)     // Catch: java.lang.Throwable -> L14b
            if (r7 == 0) goto L127
            android.os.Bundle r7 = new android.os.Bundle     // Catch: java.lang.Throwable -> L14b
            r7.<init>()     // Catch: java.lang.Throwable -> L14b
            r7.putString(r3, r12)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r10 = "pendingIntentAction"
            java.lang.String r9 = r1.d     // Catch: java.lang.Throwable -> L14b
            r7.putString(r10, r9)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r9 = "expiration"
            r10 = r3
            r23 = r4
            r3 = -1
            r7.putLong(r9, r3)     // Catch: java.lang.Throwable -> L123
            java.lang.String r3 = "activatesAction"
            int r4 = r1.f     // Catch: java.lang.Throwable -> L123
            r7.putInt(r3, r4)     // Catch: java.lang.Throwable -> L123
            java.lang.String r3 = "fenceRadius"
            r9 = 2
            r4 = 1
            if (r0 == r4) goto Ld0
            if (r0 == r9) goto L8e
            r4 = 3
            if (r0 == r4) goto L83
            r2 = 0
            goto Le8
        L83:
            com.loc.b r2 = r1.p     // Catch: java.lang.Throwable -> L123
            android.content.Context r3 = r1.b     // Catch: java.lang.Throwable -> L123
            java.lang.String r4 = "http://restsdk.amap.com/v3/config/district?"
            java.lang.String r2 = r2.a(r3, r4, r13)     // Catch: java.lang.Throwable -> L123
            goto Le8
        L8e:
            double r16 = r14.getLatitude()     // Catch: java.lang.Throwable -> L123
            double r16 = com.loc.fz.b(r16)     // Catch: java.lang.Throwable -> L123
            double r18 = r14.getLongitude()     // Catch: java.lang.Throwable -> L123
            double r18 = com.loc.fz.b(r18)     // Catch: java.lang.Throwable -> L123
            java.lang.Float r2 = java.lang.Float.valueOf(r2)     // Catch: java.lang.Throwable -> L123
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L123
            r4 = 1128792064(0x43480000, float:200.0)
            r7.putFloat(r3, r4)     // Catch: java.lang.Throwable -> L123
            com.loc.b r14 = r1.p     // Catch: java.lang.Throwable -> L123
            android.content.Context r3 = r1.b     // Catch: java.lang.Throwable -> L123
            java.lang.String r4 = "http://restsdk.amap.com/v3/place/around?"
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L123
            java.lang.String r20 = java.lang.String.valueOf(r16)     // Catch: java.lang.Throwable -> L123
            java.lang.String r21 = java.lang.String.valueOf(r18)     // Catch: java.lang.Throwable -> L123
            java.lang.String r22 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L123
            r2 = r15
            r15 = r3
            r16 = r4
            r17 = r13
            r18 = r2
            r19 = r6
            java.lang.String r2 = r14.a(r15, r16, r17, r18, r19, r20, r21, r22)     // Catch: java.lang.Throwable -> L123
            goto Le8
        Ld0:
            r2 = r15
            r4 = 1148846080(0x447a0000, float:1000.0)
            r7.putFloat(r3, r4)     // Catch: java.lang.Throwable -> L123
            com.loc.b r14 = r1.p     // Catch: java.lang.Throwable -> L123
            android.content.Context r15 = r1.b     // Catch: java.lang.Throwable -> L123
            java.lang.String r16 = "http://restsdk.amap.com/v3/place/text?"
            java.lang.String r20 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L123
            r17 = r13
            r18 = r2
            java.lang.String r2 = r14.a(r15, r16, r17, r18, r19, r20)     // Catch: java.lang.Throwable -> L123
        Le8:
            if (r2 == 0) goto L121
            r3 = 1
            if (r3 != r0) goto Lf2
            int r3 = com.loc.c.a(r2, r11, r7)     // Catch: java.lang.Throwable -> L123
            goto Lf3
        Lf2:
            r3 = 0
        Lf3:
            if (r9 != r0) goto Lf9
            int r3 = com.loc.c.b(r2, r11, r7)     // Catch: java.lang.Throwable -> L123
        Lf9:
            r4 = 3
            if (r4 != r0) goto L102
            com.loc.c r0 = r1.q     // Catch: java.lang.Throwable -> L123
            int r3 = r0.c(r2, r11, r7)     // Catch: java.lang.Throwable -> L123
        L102:
            r0 = 10000(0x2710, float:1.4013E-41)
            if (r3 != r0) goto L11b
            boolean r0 = r11.isEmpty()     // Catch: java.lang.Throwable -> L123
            if (r0 == 0) goto L111
            r0 = 16
            r6 = 16
            goto L12c
        L111:
            int r6 = r1.a(r11)     // Catch: java.lang.Throwable -> L123
            if (r6 != 0) goto L12c
            r8.addAll(r11)     // Catch: java.lang.Throwable -> L138
            goto L12c
        L11b:
            int r0 = d(r3)     // Catch: java.lang.Throwable -> L123
            r6 = r0
            goto L12c
        L121:
            r6 = 4
            goto L12c
        L123:
            r0 = move-exception
            r2 = r23
            goto L14d
        L127:
            r10 = r3
            r23 = r4
            r3 = 1
            r6 = 1
        L12c:
            r5.putString(r10, r12)     // Catch: java.lang.Throwable -> L138
            java.lang.String r0 = "resultList"
            r5.putParcelableArrayList(r0, r8)     // Catch: java.lang.Throwable -> L138
            r9 = r6
            r2 = r23
            goto L142
        L138:
            r0 = move-exception
            r2 = r23
            goto L14e
        L13c:
            r23 = r4
            r3 = 1
            r2 = r23
            r9 = 1
        L142:
            r5.putInt(r2, r9)
            r2 = 1000(0x3e8, float:1.401E-42)
            r1.a(r2, r5)
            return
        L14b:
            r0 = move-exception
            r2 = r4
        L14d:
            r6 = 0
        L14e:
            java.lang.String r3 = "GeoFenceManager"
            java.lang.String r4 = "doAddGeoFenceNearby"
            com.loc.fr.a(r0, r3, r4)     // Catch: java.lang.Throwable -> L160
            r0 = 8
            r5.putInt(r2, r0)
            r3 = 1000(0x3e8, float:1.401E-42)
            r1.a(r3, r5)
            return
        L160:
            r0 = move-exception
            r3 = 1000(0x3e8, float:1.401E-42)
            r5.putInt(r2, r6)
            r1.a(r3, r5)
            throw r0
    }

    private static boolean b(com.amap.api.location.AMapLocation r7, com.amap.api.fence.GeoFence r8) {
            r0 = 1
            r1 = 0
            boolean r7 = a(r7, r8)     // Catch: java.lang.Throwable -> L50
            r2 = -1
            if (r7 == 0) goto L3e
            long r4 = r8.getEnterTime()     // Catch: java.lang.Throwable -> L50
            int r7 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r7 != 0) goto L23
            int r7 = r8.getStatus()     // Catch: java.lang.Throwable -> L50
            if (r7 == r0) goto L4e
            long r2 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L50
            r8.setEnterTime(r2)     // Catch: java.lang.Throwable -> L50
            r8.setStatus(r0)     // Catch: java.lang.Throwable -> L50
            goto L59
        L23:
            int r7 = r8.getStatus()     // Catch: java.lang.Throwable -> L50
            r2 = 3
            if (r7 == r2) goto L4e
            long r3 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L50
            long r5 = r8.getEnterTime()     // Catch: java.lang.Throwable -> L50
            long r3 = r3 - r5
            r5 = 600000(0x927c0, double:2.964394E-318)
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L4e
            r8.setStatus(r2)     // Catch: java.lang.Throwable -> L50
            goto L59
        L3e:
            int r7 = r8.getStatus()     // Catch: java.lang.Throwable -> L50
            r4 = 2
            if (r7 == r4) goto L4e
            r8.setStatus(r4)     // Catch: java.lang.Throwable -> L4c
            r8.setEnterTime(r2)     // Catch: java.lang.Throwable -> L4c
            goto L59
        L4c:
            r7 = move-exception
            goto L52
        L4e:
            r0 = 0
            goto L59
        L50:
            r7 = move-exception
            r0 = 0
        L52:
            java.lang.String r8 = "Utils"
            java.lang.String r1 = "isFenceStatusChanged"
            com.loc.fr.a(r7, r8, r1)
        L59:
            return r0
    }

    private static boolean b(com.amap.api.location.AMapLocation r5, java.util.List<com.amap.api.location.DPoint> r6) {
            int r0 = r6.size()
            r1 = 3
            if (r0 >= r1) goto L9
            r5 = 0
            return r5
        L9:
            com.amap.api.location.DPoint r0 = new com.amap.api.location.DPoint
            double r1 = r5.getLatitude()
            double r3 = r5.getLongitude()
            r0.<init>(r1, r3)
            boolean r5 = com.loc.fr.a(r0, r6)
            return r5
    }

    private int c(com.amap.api.fence.GeoFence r5) {
            r4 = this;
            r0 = 8
            r1 = 0
            java.util.ArrayList<com.amap.api.fence.GeoFence> r2 = r4.g     // Catch: java.lang.Throwable -> L20
            if (r2 != 0) goto Le
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L20
            r2.<init>()     // Catch: java.lang.Throwable -> L20
            r4.g = r2     // Catch: java.lang.Throwable -> L20
        Le:
            java.util.ArrayList<com.amap.api.fence.GeoFence> r2 = r4.g     // Catch: java.lang.Throwable -> L20
            boolean r2 = r2.contains(r5)     // Catch: java.lang.Throwable -> L20
            if (r2 != 0) goto L1d
            java.util.ArrayList<com.amap.api.fence.GeoFence> r2 = r4.g     // Catch: java.lang.Throwable -> L20
            r2.add(r5)     // Catch: java.lang.Throwable -> L20
            r0 = 0
            goto L33
        L1d:
            r0 = 17
            goto L33
        L20:
            r5 = move-exception
            java.lang.String r2 = "GeoFenceManager"
            java.lang.String r3 = "addGeoFence2List"
            com.loc.fr.a(r5, r2, r3)
            java.lang.String r5 = r5.getMessage()
            java.lang.String[] r1 = new java.lang.String[r1]
            java.lang.String r2 = "添加围栏失败"
            a(r2, r0, r5, r1)
        L33:
            return r0
    }

    private static int d(int r6) {
            r0 = 0
            r1 = 4
            r2 = 7
            r3 = 1
            r4 = 8
            if (r6 == r3) goto L27
            if (r6 == r2) goto L27
            if (r6 == r1) goto L27
            r5 = 5
            if (r6 == r5) goto L27
            r5 = 16
            if (r6 == r5) goto L27
            r5 = 17
            if (r6 == r5) goto L27
            switch(r6) {
                case 10000: goto L26;
                case 10001: goto L24;
                case 10002: goto L24;
                case 10003: goto L22;
                case 10004: goto L22;
                case 10005: goto L22;
                case 10006: goto L22;
                case 10007: goto L24;
                case 10008: goto L24;
                case 10009: goto L24;
                case 10010: goto L22;
                case 10011: goto L22;
                case 10012: goto L24;
                case 10013: goto L24;
                case 10014: goto L22;
                case 10015: goto L22;
                case 10016: goto L22;
                case 10017: goto L22;
                default: goto L1a;
            }
        L1a:
            switch(r6) {
                case 20000: goto L20;
                case 20001: goto L20;
                case 20002: goto L20;
                case 20003: goto L1d;
                default: goto L1d;
            }
        L1d:
            r6 = 8
            goto L27
        L20:
            r6 = 1
            goto L27
        L22:
            r6 = 4
            goto L27
        L24:
            r6 = 7
            goto L27
        L26:
            r6 = 0
        L27:
            if (r6 == 0) goto L3a
            java.lang.String r1 = java.lang.String.valueOf(r6)
            java.lang.String r2 = "searchErrCode is "
            java.lang.String r1 = r2.concat(r1)
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.String r2 = "添加围栏失败"
            a(r2, r6, r1, r0)
        L3a:
            return r6
    }

    private void d(com.amap.api.fence.GeoFence r3) {
            r2 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "geoFence"
            r0.putParcelable(r1, r3)
            r3 = 1001(0x3e9, float:1.403E-42)
            r2.a(r3, r0)
            return
    }

    private void j() {
            r4 = this;
            java.lang.String r0 = "GeoFenceManger"
            boolean r1 = r4.o
            r2 = 1
            if (r1 != 0) goto L9
            r4.o = r2
        L9:
            boolean r1 = r4.n
            if (r1 == 0) goto Le
            return
        Le:
            android.os.Looper r1 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L28
            if (r1 != 0) goto L22
            com.loc.a$c r1 = new com.loc.a$c     // Catch: java.lang.Throwable -> L28
            android.content.Context r3 = r4.b     // Catch: java.lang.Throwable -> L28
            android.os.Looper r3 = r3.getMainLooper()     // Catch: java.lang.Throwable -> L28
            r1.<init>(r4, r3)     // Catch: java.lang.Throwable -> L28
        L1f:
            r4.h = r1     // Catch: java.lang.Throwable -> L28
            goto L2e
        L22:
            com.loc.a$c r1 = new com.loc.a$c     // Catch: java.lang.Throwable -> L28
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L28
            goto L1f
        L28:
            r1 = move-exception
            java.lang.String r3 = "init 1"
            com.loc.fr.a(r1, r0, r3)
        L2e:
            com.loc.a$b r1 = new com.loc.a$b     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = "fenceActionThread"
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L4e
            r4.l = r1     // Catch: java.lang.Throwable -> L4e
            r3 = 5
            r1.setPriority(r3)     // Catch: java.lang.Throwable -> L4e
            com.loc.a$b r1 = r4.l     // Catch: java.lang.Throwable -> L4e
            r1.start()     // Catch: java.lang.Throwable -> L4e
            com.loc.a$a r1 = new com.loc.a$a     // Catch: java.lang.Throwable -> L4e
            com.loc.a$b r3 = r4.l     // Catch: java.lang.Throwable -> L4e
            android.os.Looper r3 = r3.getLooper()     // Catch: java.lang.Throwable -> L4e
            r1.<init>(r4, r3)     // Catch: java.lang.Throwable -> L4e
            r4.k = r1     // Catch: java.lang.Throwable -> L4e
            goto L54
        L4e:
            r1 = move-exception
            java.lang.String r3 = "init 2"
            com.loc.fr.a(r1, r0, r3)
        L54:
            com.loc.b r1 = new com.loc.b     // Catch: java.lang.Throwable -> L92
            android.content.Context r3 = r4.b     // Catch: java.lang.Throwable -> L92
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L92
            r4.p = r1     // Catch: java.lang.Throwable -> L92
            com.loc.c r1 = new com.loc.c     // Catch: java.lang.Throwable -> L92
            r1.<init>()     // Catch: java.lang.Throwable -> L92
            r4.q = r1     // Catch: java.lang.Throwable -> L92
            com.amap.api.location.AMapLocationClientOption r1 = new com.amap.api.location.AMapLocationClientOption     // Catch: java.lang.Throwable -> L92
            r1.<init>()     // Catch: java.lang.Throwable -> L92
            r4.u = r1     // Catch: java.lang.Throwable -> L92
            com.amap.api.location.AMapLocationClient r1 = new com.amap.api.location.AMapLocationClient     // Catch: java.lang.Throwable -> L92
            android.content.Context r3 = r4.b     // Catch: java.lang.Throwable -> L92
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L92
            r4.r = r1     // Catch: java.lang.Throwable -> L92
            com.amap.api.location.AMapLocationClientOption r1 = r4.u     // Catch: java.lang.Throwable -> L92
            r1.setLocationCacheEnable(r2)     // Catch: java.lang.Throwable -> L92
            com.amap.api.location.AMapLocationClientOption r1 = r4.u     // Catch: java.lang.Throwable -> L92
            r3 = 0
            r1.setNeedAddress(r3)     // Catch: java.lang.Throwable -> L92
            com.amap.api.location.AMapLocationClient r1 = r4.r     // Catch: java.lang.Throwable -> L92
            com.amap.api.location.AMapLocationListener r3 = r4.w     // Catch: java.lang.Throwable -> L92
            r1.setLocationListener(r3)     // Catch: java.lang.Throwable -> L92
            com.loc.fx r1 = r4.a     // Catch: java.lang.Throwable -> L92
            if (r1 != 0) goto L98
            com.loc.fx r1 = new com.loc.fx     // Catch: java.lang.Throwable -> L92
            r1.<init>()     // Catch: java.lang.Throwable -> L92
            r4.a = r1     // Catch: java.lang.Throwable -> L92
            goto L98
        L92:
            r1 = move-exception
            java.lang.String r3 = "initBase"
            com.loc.fr.a(r1, r0, r3)
        L98:
            r4.n = r2
            java.lang.String r1 = r4.d     // Catch: java.lang.Throwable -> La8
            if (r1 == 0) goto Lae
            android.app.PendingIntent r1 = r4.c     // Catch: java.lang.Throwable -> La8
            if (r1 != 0) goto Lae
            java.lang.String r1 = r4.d     // Catch: java.lang.Throwable -> La8
            r4.a(r1)     // Catch: java.lang.Throwable -> La8
            goto Lae
        La8:
            r1 = move-exception
            java.lang.String r3 = "init 4"
            com.loc.fr.a(r1, r0, r3)
        Lae:
            boolean r0 = com.loc.a.A
            if (r0 != 0) goto Lbc
            com.loc.a.A = r2
            android.content.Context r0 = r4.b
            r1 = 0
            java.lang.String r2 = "O020"
            com.loc.fx.a(r0, r2, r1)
        Lbc:
            return
    }

    private boolean k() {
            r3 = this;
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r3.g
            r1 = 1
            if (r0 == 0) goto L25
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lc
            goto L25
        Lc:
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r3.g
            java.util.Iterator r0 = r0.iterator()
        L12:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L25
            java.lang.Object r2 = r0.next()
            com.amap.api.fence.GeoFence r2 = (com.amap.api.fence.GeoFence) r2
            boolean r2 = r2.isAble()
            if (r2 == 0) goto L12
            r1 = 0
        L25:
            return r1
    }

    private void l() {
            r3 = this;
            java.lang.Object r0 = r3.j     // Catch: java.lang.Throwable -> L14
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L14
            com.loc.a$c r1 = r3.h     // Catch: java.lang.Throwable -> L11
            r2 = 0
            if (r1 == 0) goto Ld
            com.loc.a$c r1 = r3.h     // Catch: java.lang.Throwable -> L11
            r1.removeCallbacksAndMessages(r2)     // Catch: java.lang.Throwable -> L11
        Ld:
            r3.h = r2     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r1     // Catch: java.lang.Throwable -> L14
        L14:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceManager"
            java.lang.String r2 = "destroyResultHandler"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    private void m() {
            r3 = this;
            java.lang.Object r0 = r3.i     // Catch: java.lang.Throwable -> L14
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L14
            com.loc.a$a r1 = r3.k     // Catch: java.lang.Throwable -> L11
            r2 = 0
            if (r1 == 0) goto Ld
            com.loc.a$a r1 = r3.k     // Catch: java.lang.Throwable -> L11
            r1.removeCallbacksAndMessages(r2)     // Catch: java.lang.Throwable -> L11
        Ld:
            r3.k = r2     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r1     // Catch: java.lang.Throwable -> L14
        L14:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceManager"
            java.lang.String r2 = "destroyActionHandler"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    private void n() {
            r4 = this;
            boolean r0 = r4.y
            if (r0 == 0) goto L5
            return
        L5:
            com.loc.a$a r0 = r4.k
            if (r0 == 0) goto L22
            boolean r0 = r4.p()
            r1 = 0
            r3 = 0
            if (r0 == 0) goto L1b
            r0 = 6
            r4.a(r0, r3, r1)
            r0 = 5
            r4.a(r0, r3, r1)
            return
        L1b:
            r0 = 7
            r4.b(r0)
            r4.a(r0, r3, r1)
        L22:
            return
    }

    private void o() {
            r1 = this;
            boolean r0 = r1.m     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L9
            r0 = 8
            r1.b(r0)     // Catch: java.lang.Throwable -> L15
        L9:
            com.amap.api.location.AMapLocationClient r0 = r1.r     // Catch: java.lang.Throwable -> L15
            if (r0 == 0) goto L12
            com.amap.api.location.AMapLocationClient r0 = r1.r     // Catch: java.lang.Throwable -> L15
            r0.stopLocation()     // Catch: java.lang.Throwable -> L15
        L12:
            r0 = 0
            r1.m = r0     // Catch: java.lang.Throwable -> L15
        L15:
            return
    }

    private boolean p() {
            r5 = this;
            com.amap.api.location.AMapLocation r0 = r5.s
            if (r0 == 0) goto L1b
            com.amap.api.location.AMapLocation r0 = r5.s
            boolean r0 = com.loc.fz.a(r0)
            if (r0 == 0) goto L1b
            long r0 = com.loc.fz.b()
            long r2 = r5.t
            long r0 = r0 - r2
            r2 = 10000(0x2710, double:4.9407E-320)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L1b
            r0 = 1
            goto L1c
        L1b:
            r0 = 0
        L1c:
            return r0
    }

    public final android.app.PendingIntent a(java.lang.String r6) {
            r5 = this;
            java.lang.Object r0 = r5.z
            monitor-enter(r0)
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L5f
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L5f
            android.content.Context r2 = r5.b     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = com.loc.l.c(r2)     // Catch: java.lang.Throwable -> L5f
            r1.setPackage(r2)     // Catch: java.lang.Throwable -> L5f
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L5f
            r3 = 31
            r4 = 0
            if (r2 < r3) goto L2d
            android.content.Context r2 = r5.b     // Catch: java.lang.Throwable -> L5f
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()     // Catch: java.lang.Throwable -> L5f
            int r2 = r2.targetSdkVersion     // Catch: java.lang.Throwable -> L5f
            if (r2 < r3) goto L2d
            android.content.Context r2 = r5.b     // Catch: java.lang.Throwable -> L5f
            r3 = 33554432(0x2000000, float:9.403955E-38)
            android.app.PendingIntent r1 = android.app.PendingIntent.getBroadcast(r2, r4, r1, r3)     // Catch: java.lang.Throwable -> L5f
        L2a:
            r5.c = r1     // Catch: java.lang.Throwable -> L5f
            goto L34
        L2d:
            android.content.Context r2 = r5.b     // Catch: java.lang.Throwable -> L5f
            android.app.PendingIntent r1 = android.app.PendingIntent.getBroadcast(r2, r4, r1, r4)     // Catch: java.lang.Throwable -> L5f
            goto L2a
        L34:
            r5.d = r6     // Catch: java.lang.Throwable -> L5f
            java.util.ArrayList<com.amap.api.fence.GeoFence> r6 = r5.g     // Catch: java.lang.Throwable -> L5f
            if (r6 == 0) goto L67
            java.util.ArrayList<com.amap.api.fence.GeoFence> r6 = r5.g     // Catch: java.lang.Throwable -> L5f
            boolean r6 = r6.isEmpty()     // Catch: java.lang.Throwable -> L5f
            if (r6 != 0) goto L67
            java.util.ArrayList<com.amap.api.fence.GeoFence> r6 = r5.g     // Catch: java.lang.Throwable -> L5f
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L5f
        L48:
            boolean r1 = r6.hasNext()     // Catch: java.lang.Throwable -> L5f
            if (r1 == 0) goto L67
            java.lang.Object r1 = r6.next()     // Catch: java.lang.Throwable -> L5f
            com.amap.api.fence.GeoFence r1 = (com.amap.api.fence.GeoFence) r1     // Catch: java.lang.Throwable -> L5f
            android.app.PendingIntent r2 = r5.c     // Catch: java.lang.Throwable -> L5f
            r1.setPendingIntent(r2)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r2 = r5.d     // Catch: java.lang.Throwable -> L5f
            r1.setPendingIntentAction(r2)     // Catch: java.lang.Throwable -> L5f
            goto L48
        L5f:
            r6 = move-exception
            java.lang.String r1 = "GeoFenceManager"
            java.lang.String r2 = "createPendingIntent"
            com.loc.fr.a(r6, r1, r2)     // Catch: java.lang.Throwable -> L6b
        L67:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6b
            android.app.PendingIntent r6 = r5.c
            return r6
        L6b:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L6b
            throw r6
    }

    public final void a() {
            r4 = this;
            r0 = 0
            r4.o = r0     // Catch: java.lang.Throwable -> Lc
            r0 = 10
            r1 = 0
            r2 = 0
            r4.a(r0, r1, r2)     // Catch: java.lang.Throwable -> Lc
            return
        Lc:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceManager"
            java.lang.String r2 = "removeGeoFence"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final void a(int r4) {
            r3 = this;
            r3.j()     // Catch: java.lang.Throwable -> L1b
            r0 = 7
            if (r4 > r0) goto L8
            if (r4 > 0) goto L9
        L8:
            r4 = 1
        L9:
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L1b
            r0.<init>()     // Catch: java.lang.Throwable -> L1b
            java.lang.String r1 = "activatesAction"
            r0.putInt(r1, r4)     // Catch: java.lang.Throwable -> L1b
            r4 = 9
            r1 = 0
            r3.a(r4, r0, r1)     // Catch: java.lang.Throwable -> L1b
            return
        L1b:
            r4 = move-exception
            java.lang.String r0 = "GeoFenceManager"
            java.lang.String r1 = "setActivateAction"
            com.loc.fr.a(r4, r0, r1)
            return
    }

    final void a(int r3, android.os.Bundle r4) {
            r2 = this;
            java.lang.Object r0 = r2.j     // Catch: java.lang.Throwable -> L1c
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L1c
            com.loc.a$c r1 = r2.h     // Catch: java.lang.Throwable -> L19
            if (r1 == 0) goto L17
            com.loc.a$c r1 = r2.h     // Catch: java.lang.Throwable -> L19
            android.os.Message r1 = r1.obtainMessage()     // Catch: java.lang.Throwable -> L19
            r1.what = r3     // Catch: java.lang.Throwable -> L19
            r1.setData(r4)     // Catch: java.lang.Throwable -> L19
            com.loc.a$c r3 = r2.h     // Catch: java.lang.Throwable -> L19
            r3.sendMessage(r1)     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r3     // Catch: java.lang.Throwable -> L1c
        L1c:
            r3 = move-exception
            java.lang.String r4 = "GeoFenceManager"
            java.lang.String r0 = "sendResultHandlerMessage"
            com.loc.fr.a(r3, r4, r0)
            return
    }

    final void a(int r3, android.os.Bundle r4, long r5) {
            r2 = this;
            java.lang.Object r0 = r2.i     // Catch: java.lang.Throwable -> L1c
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L1c
            com.loc.a$a r1 = r2.k     // Catch: java.lang.Throwable -> L19
            if (r1 == 0) goto L17
            com.loc.a$a r1 = r2.k     // Catch: java.lang.Throwable -> L19
            android.os.Message r1 = r1.obtainMessage()     // Catch: java.lang.Throwable -> L19
            r1.what = r3     // Catch: java.lang.Throwable -> L19
            r1.setData(r4)     // Catch: java.lang.Throwable -> L19
            com.loc.a$a r3 = r2.k     // Catch: java.lang.Throwable -> L19
            r3.sendMessageDelayed(r1, r5)     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r3     // Catch: java.lang.Throwable -> L1c
        L1c:
            r3 = move-exception
            java.lang.String r4 = "GeoFenceManager"
            java.lang.String r5 = "sendActionHandlerMessage"
            com.loc.fr.a(r3, r4, r5)
            return
    }

    final void a(android.os.Bundle r5) {
            r4 = this;
            r0 = 1
            if (r5 == 0) goto L9
            java.lang.String r1 = "activatesAction"
            int r0 = r5.getInt(r1, r0)     // Catch: java.lang.Throwable -> L3b
        L9:
            int r5 = r4.f     // Catch: java.lang.Throwable -> L3b
            if (r5 == r0) goto L38
            java.util.ArrayList<com.amap.api.fence.GeoFence> r5 = r4.g     // Catch: java.lang.Throwable -> L3b
            if (r5 == 0) goto L35
            java.util.ArrayList<com.amap.api.fence.GeoFence> r5 = r4.g     // Catch: java.lang.Throwable -> L3b
            boolean r5 = r5.isEmpty()     // Catch: java.lang.Throwable -> L3b
            if (r5 != 0) goto L35
            java.util.ArrayList<com.amap.api.fence.GeoFence> r5 = r4.g     // Catch: java.lang.Throwable -> L3b
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L3b
        L1f:
            boolean r1 = r5.hasNext()     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L35
            java.lang.Object r1 = r5.next()     // Catch: java.lang.Throwable -> L3b
            com.amap.api.fence.GeoFence r1 = (com.amap.api.fence.GeoFence) r1     // Catch: java.lang.Throwable -> L3b
            r2 = 0
            r1.setStatus(r2)     // Catch: java.lang.Throwable -> L3b
            r2 = -1
            r1.setEnterTime(r2)     // Catch: java.lang.Throwable -> L3b
            goto L1f
        L35:
            r4.n()     // Catch: java.lang.Throwable -> L3b
        L38:
            r4.f = r0     // Catch: java.lang.Throwable -> L3b
            return
        L3b:
            r5 = move-exception
            java.lang.String r0 = "GeoFenceManager"
            java.lang.String r1 = "doSetActivatesAction"
            com.loc.fr.a(r5, r0, r1)
            return
    }

    public final void a(com.amap.api.fence.GeoFenceListener r1) {
            r0 = this;
            r0.e = r1     // Catch: java.lang.Throwable -> L2
        L2:
            return
    }

    final void a(com.amap.api.location.AMapLocation r4) {
            r3 = this;
            boolean r0 = r3.y     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L5
            return
        L5:
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r3.g     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L47
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r3.g     // Catch: java.lang.Throwable -> L48
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L12
            goto L47
        L12:
            if (r4 == 0) goto L47
            int r0 = r4.getErrorCode()     // Catch: java.lang.Throwable -> L48
            if (r0 != 0) goto L47
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r3.g     // Catch: java.lang.Throwable -> L48
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L48
        L20:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto L47
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L48
            com.amap.api.fence.GeoFence r1 = (com.amap.api.fence.GeoFence) r1     // Catch: java.lang.Throwable -> L48
            boolean r2 = r1.isAble()     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto L20
            boolean r2 = b(r4, r1)     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto L20
            int r2 = r3.f     // Catch: java.lang.Throwable -> L48
            boolean r2 = a(r1, r2)     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto L20
            r1.setCurrentLocation(r4)     // Catch: java.lang.Throwable -> L48
            r3.d(r1)     // Catch: java.lang.Throwable -> L48
            goto L20
        L47:
            return
        L48:
            r4 = move-exception
            java.lang.String r0 = "GeoFenceManager"
            java.lang.String r1 = "doCheckFence"
            com.loc.fr.a(r4, r0, r1)
            return
    }

    public final void a(com.amap.api.location.DPoint r3, float r4, java.lang.String r5) {
            r2 = this;
            r2.j()     // Catch: java.lang.Throwable -> L1e
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L1e
            r0.<init>()     // Catch: java.lang.Throwable -> L1e
            java.lang.String r1 = "centerPoint"
            r0.putParcelable(r1, r3)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r3 = "fenceRadius"
            r0.putFloat(r3, r4)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r3 = "customId"
            r0.putString(r3, r5)     // Catch: java.lang.Throwable -> L1e
            r3 = 0
            r4 = 0
            r2.a(r3, r0, r4)     // Catch: java.lang.Throwable -> L1e
            return
        L1e:
            r3 = move-exception
            java.lang.String r4 = "GeoFenceManager"
            java.lang.String r5 = "addRoundGeoFence"
            com.loc.fr.a(r3, r4, r5)
            return
    }

    public final void a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            r3.j()     // Catch: java.lang.Throwable -> L19
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L19
            r0.<init>()     // Catch: java.lang.Throwable -> L19
            java.lang.String r1 = "keyWords"
            r0.putString(r1, r4)     // Catch: java.lang.Throwable -> L19
            java.lang.String r4 = "customId"
            r0.putString(r4, r5)     // Catch: java.lang.Throwable -> L19
            r4 = 4
            r1 = 0
            r3.a(r4, r0, r1)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r4 = move-exception
            java.lang.String r5 = "GeoFenceManager"
            java.lang.String r0 = "addDistricetGeoFence"
            com.loc.fr.a(r4, r5, r0)
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4, com.amap.api.location.DPoint r5, float r6, int r7, java.lang.String r8) {
            r2 = this;
            r2.j()     // Catch: java.lang.Throwable -> L46
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto Lf
            r0 = 1195593728(0x47435000, float:50000.0)
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L12
        Lf:
            r6 = 1161527296(0x453b8000, float:3000.0)
        L12:
            if (r7 > 0) goto L16
            r7 = 10
        L16:
            r0 = 25
            if (r7 <= r0) goto L1c
            r7 = 25
        L1c:
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L46
            r0.<init>()     // Catch: java.lang.Throwable -> L46
            java.lang.String r1 = "keyWords"
            r0.putString(r1, r3)     // Catch: java.lang.Throwable -> L46
            java.lang.String r3 = "poiType"
            r0.putString(r3, r4)     // Catch: java.lang.Throwable -> L46
            java.lang.String r3 = "centerPoint"
            r0.putParcelable(r3, r5)     // Catch: java.lang.Throwable -> L46
            java.lang.String r3 = "aroundRadius"
            r0.putFloat(r3, r6)     // Catch: java.lang.Throwable -> L46
            java.lang.String r3 = "searchSize"
            r0.putInt(r3, r7)     // Catch: java.lang.Throwable -> L46
            java.lang.String r3 = "customId"
            r0.putString(r3, r8)     // Catch: java.lang.Throwable -> L46
            r3 = 3
            r4 = 0
            r2.a(r3, r0, r4)     // Catch: java.lang.Throwable -> L46
            return
        L46:
            r3 = move-exception
            java.lang.String r4 = "GeoFenceManager"
            java.lang.String r5 = "addNearbyGeoFence"
            com.loc.fr.a(r3, r4, r5)
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, int r6, java.lang.String r7) {
            r2 = this;
            r2.j()     // Catch: java.lang.Throwable -> L32
            if (r6 > 0) goto L7
            r6 = 10
        L7:
            r0 = 25
            if (r6 <= r0) goto Ld
            r6 = 25
        Ld:
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L32
            r0.<init>()     // Catch: java.lang.Throwable -> L32
            java.lang.String r1 = "keyWords"
            r0.putString(r1, r3)     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = "poiType"
            r0.putString(r3, r4)     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = "city"
            r0.putString(r3, r5)     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = "searchSize"
            r0.putInt(r3, r6)     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = "customId"
            r0.putString(r3, r7)     // Catch: java.lang.Throwable -> L32
            r3 = 2
            r4 = 0
            r2.a(r3, r0, r4)     // Catch: java.lang.Throwable -> L32
            return
        L32:
            r3 = move-exception
            java.lang.String r4 = "GeoFenceManager"
            java.lang.String r5 = "addKeywordGeoFence"
            com.loc.fr.a(r3, r4, r5)
            return
    }

    public final void a(java.lang.String r4, boolean r5) {
            r3 = this;
            r3.j()     // Catch: java.lang.Throwable -> L1a
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L1a
            r0.<init>()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r1 = "fid"
            r0.putString(r1, r4)     // Catch: java.lang.Throwable -> L1a
            java.lang.String r4 = "ab"
            r0.putBoolean(r4, r5)     // Catch: java.lang.Throwable -> L1a
            r4 = 12
            r1 = 0
            r3.a(r4, r0, r1)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r4 = move-exception
            java.lang.String r5 = "GeoFenceManager"
            java.lang.String r0 = "setGeoFenceAble"
            com.loc.fr.a(r4, r5, r0)
            return
    }

    public final void a(java.util.List<com.amap.api.location.DPoint> r4, java.lang.String r5) {
            r3 = this;
            r3.j()     // Catch: java.lang.Throwable -> L1e
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L1e
            r0.<init>()     // Catch: java.lang.Throwable -> L1e
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L1e
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r4 = "pointList"
            r0.putParcelableArrayList(r4, r1)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r4 = "customId"
            r0.putString(r4, r5)     // Catch: java.lang.Throwable -> L1e
            r4 = 1
            r1 = 0
            r3.a(r4, r0, r1)     // Catch: java.lang.Throwable -> L1e
            return
        L1e:
            r4 = move-exception
            java.lang.String r5 = "GeoFenceManager"
            java.lang.String r0 = "addPolygonGeoFence"
            com.loc.fr.a(r4, r5, r0)
            return
    }

    public final boolean a(com.amap.api.fence.GeoFence r7) {
            r6 = this;
            r0 = 0
            java.util.ArrayList<com.amap.api.fence.GeoFence> r1 = r6.g     // Catch: java.lang.Throwable -> L3d
            r2 = 0
            r4 = 1
            if (r1 == 0) goto L34
            java.util.ArrayList<com.amap.api.fence.GeoFence> r1 = r6.g     // Catch: java.lang.Throwable -> L3d
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L11
            goto L34
        L11:
            java.util.ArrayList<com.amap.api.fence.GeoFence> r1 = r6.g     // Catch: java.lang.Throwable -> L3d
            boolean r1 = r1.contains(r7)     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L33
            java.util.ArrayList<com.amap.api.fence.GeoFence> r1 = r6.g     // Catch: java.lang.Throwable -> L3d
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L3d
            if (r1 != r4) goto L23
            r6.o = r0     // Catch: java.lang.Throwable -> L3d
        L23:
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Throwable -> L3d
            r1.<init>()     // Catch: java.lang.Throwable -> L3d
            java.lang.String r5 = "fc"
            r1.putParcelable(r5, r7)     // Catch: java.lang.Throwable -> L3d
            r7 = 11
            r6.a(r7, r1, r2)     // Catch: java.lang.Throwable -> L3d
            return r4
        L33:
            return r0
        L34:
            r6.o = r0     // Catch: java.lang.Throwable -> L3d
            r7 = 10
            r1 = 0
            r6.a(r7, r1, r2)     // Catch: java.lang.Throwable -> L3d
            return r4
        L3d:
            r7 = move-exception
            java.lang.String r1 = "GeoFenceManager"
            java.lang.String r2 = "removeGeoFence(GeoFence)"
            com.loc.fr.a(r7, r1, r2)
            return r0
    }

    public final java.util.List<com.amap.api.fence.GeoFence> b() {
            r1 = this;
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r1.g     // Catch: java.lang.Throwable -> L14
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L14
            r0.<init>()     // Catch: java.lang.Throwable -> L14
            r1.g = r0     // Catch: java.lang.Throwable -> L14
        Lb:
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r1.g     // Catch: java.lang.Throwable -> L14
            java.lang.Object r0 = r0.clone()     // Catch: java.lang.Throwable -> L14
            java.util.ArrayList r0 = (java.util.ArrayList) r0     // Catch: java.lang.Throwable -> L14
            return r0
        L14:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            return r0
    }

    final void b(int r3) {
            r2 = this;
            java.lang.Object r0 = r2.i     // Catch: java.lang.Throwable -> L11
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L11
            com.loc.a$a r1 = r2.k     // Catch: java.lang.Throwable -> Le
            if (r1 == 0) goto Lc
            com.loc.a$a r1 = r2.k     // Catch: java.lang.Throwable -> Le
            r1.removeMessages(r3)     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r3     // Catch: java.lang.Throwable -> L11
        L11:
            r3 = move-exception
            java.lang.String r0 = "GeoFenceManager"
            java.lang.String r1 = "removeActionHandlerMessage"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    final void b(android.os.Bundle r12) {
            r11 = this;
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> La4
            r0.<init>()     // Catch: java.lang.Throwable -> La4
            java.lang.String r1 = ""
            java.lang.String r2 = "customId"
            r3 = 1
            if (r12 == 0) goto L8b
            boolean r4 = r12.isEmpty()     // Catch: java.lang.Throwable -> La4
            if (r4 != 0) goto L8b
            java.lang.String r1 = "centerPoint"
            android.os.Parcelable r1 = r12.getParcelable(r1)     // Catch: java.lang.Throwable -> La4
            com.amap.api.location.DPoint r1 = (com.amap.api.location.DPoint) r1     // Catch: java.lang.Throwable -> La4
            java.lang.String r4 = r12.getString(r2)     // Catch: java.lang.Throwable -> La4
            if (r1 == 0) goto L8a
            double r5 = r1.getLatitude()     // Catch: java.lang.Throwable -> La4
            r7 = 4636033603912859648(0x4056800000000000, double:90.0)
            r9 = 0
            int r10 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r10 > 0) goto L64
            double r5 = r1.getLatitude()     // Catch: java.lang.Throwable -> La4
            r7 = -4587338432941916160(0xc056800000000000, double:-90.0)
            int r10 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r10 < 0) goto L64
            double r5 = r1.getLongitude()     // Catch: java.lang.Throwable -> La4
            r7 = 4640537203540230144(0x4066800000000000, double:180.0)
            int r10 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r10 > 0) goto L64
            double r5 = r1.getLongitude()     // Catch: java.lang.Throwable -> La4
            r7 = -4582834833314545664(0xc066800000000000, double:-180.0)
            int r10 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r10 >= 0) goto L56
            goto L64
        L56:
            com.amap.api.fence.GeoFence r12 = r11.a(r12, r9)     // Catch: java.lang.Throwable -> La4
            int r3 = r11.c(r12)     // Catch: java.lang.Throwable -> La4
            if (r3 != 0) goto L8c
            r0.add(r12)     // Catch: java.lang.Throwable -> La4
            goto L8c
        L64:
            java.lang.String r12 = "添加围栏失败"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La4
            java.lang.String r6 = "经纬度错误，传入的纬度："
            r5.<init>(r6)     // Catch: java.lang.Throwable -> La4
            double r6 = r1.getLatitude()     // Catch: java.lang.Throwable -> La4
            r5.append(r6)     // Catch: java.lang.Throwable -> La4
            java.lang.String r6 = "传入的经度:"
            r5.append(r6)     // Catch: java.lang.Throwable -> La4
            double r6 = r1.getLongitude()     // Catch: java.lang.Throwable -> La4
            r5.append(r6)     // Catch: java.lang.Throwable -> La4
            java.lang.String r1 = r5.toString()     // Catch: java.lang.Throwable -> La4
            java.lang.String[] r5 = new java.lang.String[r9]     // Catch: java.lang.Throwable -> La4
            a(r12, r3, r1, r5)     // Catch: java.lang.Throwable -> La4
            goto L8c
        L8a:
            r1 = r4
        L8b:
            r4 = r1
        L8c:
            android.os.Bundle r12 = new android.os.Bundle     // Catch: java.lang.Throwable -> La4
            r12.<init>()     // Catch: java.lang.Throwable -> La4
            java.lang.String r1 = "errorCode"
            r12.putInt(r1, r3)     // Catch: java.lang.Throwable -> La4
            java.lang.String r1 = "resultList"
            r12.putParcelableArrayList(r1, r0)     // Catch: java.lang.Throwable -> La4
            r12.putString(r2, r4)     // Catch: java.lang.Throwable -> La4
            r0 = 1000(0x3e8, float:1.401E-42)
            r11.a(r0, r12)     // Catch: java.lang.Throwable -> La4
            return
        La4:
            r12 = move-exception
            java.lang.String r0 = "GeoFenceManager"
            java.lang.String r1 = "doAddGeoFenceRound"
            com.loc.fr.a(r12, r0, r1)
            return
    }

    final void b(com.amap.api.fence.GeoFence r7) {
            r6 = this;
            java.lang.Object r0 = r6.z     // Catch: java.lang.Throwable -> L58
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L58
            android.content.Context r1 = r6.b     // Catch: java.lang.Throwable -> L55
            if (r1 == 0) goto L53
            android.app.PendingIntent r1 = r6.c     // Catch: java.lang.Throwable -> L55
            if (r1 != 0) goto L13
            android.app.PendingIntent r1 = r7.getPendingIntent()     // Catch: java.lang.Throwable -> L55
            if (r1 != 0) goto L13
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L55
            return
        L13:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L55
            r1.<init>()     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = r7.getFenceId()     // Catch: java.lang.Throwable -> L55
            java.lang.String r3 = r7.getCustomId()     // Catch: java.lang.Throwable -> L55
            int r4 = r7.getStatus()     // Catch: java.lang.Throwable -> L55
            r5 = 0
            android.os.Bundle r2 = a(r7, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L55
            r1.putExtras(r2)     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = r6.d     // Catch: java.lang.Throwable -> L55
            if (r2 == 0) goto L35
            java.lang.String r2 = r6.d     // Catch: java.lang.Throwable -> L55
            r1.setAction(r2)     // Catch: java.lang.Throwable -> L55
        L35:
            android.content.Context r2 = r6.b     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = com.loc.l.c(r2)     // Catch: java.lang.Throwable -> L55
            r1.setPackage(r2)     // Catch: java.lang.Throwable -> L55
            android.app.PendingIntent r2 = r7.getPendingIntent()     // Catch: java.lang.Throwable -> L55
            if (r2 == 0) goto L4e
            android.app.PendingIntent r7 = r7.getPendingIntent()     // Catch: java.lang.Throwable -> L55
            android.content.Context r2 = r6.b     // Catch: java.lang.Throwable -> L55
        L4a:
            r7.send(r2, r5, r1)     // Catch: java.lang.Throwable -> L55
            goto L53
        L4e:
            android.app.PendingIntent r7 = r6.c     // Catch: java.lang.Throwable -> L55
            android.content.Context r2 = r6.b     // Catch: java.lang.Throwable -> L55
            goto L4a
        L53:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L55
            return
        L55:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L55
            throw r7     // Catch: java.lang.Throwable -> L58
        L58:
            r7 = move-exception
            java.lang.String r0 = "GeoFenceManager"
            java.lang.String r1 = "resultTriggerGeoFence"
            com.loc.fr.a(r7, r0, r1)
            return
    }

    final void c() {
            r3 = this;
            boolean r0 = r3.n     // Catch: java.lang.Throwable -> L63
            if (r0 != 0) goto L5
            return
        L5:
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r3.g     // Catch: java.lang.Throwable -> L63
            r1 = 0
            if (r0 == 0) goto L11
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r3.g     // Catch: java.lang.Throwable -> L63
            r0.clear()     // Catch: java.lang.Throwable -> L63
            r3.g = r1     // Catch: java.lang.Throwable -> L63
        L11:
            boolean r0 = r3.o     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L16
            return
        L16:
            r3.m()     // Catch: java.lang.Throwable -> L63
            com.amap.api.location.AMapLocationClient r0 = r3.r     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L27
            com.amap.api.location.AMapLocationClient r0 = r3.r     // Catch: java.lang.Throwable -> L63
            r0.stopLocation()     // Catch: java.lang.Throwable -> L63
            com.amap.api.location.AMapLocationClient r0 = r3.r     // Catch: java.lang.Throwable -> L63
            r0.onDestroy()     // Catch: java.lang.Throwable -> L63
        L27:
            r3.r = r1     // Catch: java.lang.Throwable -> L63
            com.loc.a$b r0 = r3.l     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L3e
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L63
            r2 = 18
            if (r0 < r2) goto L39
            com.loc.a$b r0 = r3.l     // Catch: java.lang.Throwable -> L63
            r0.quitSafely()     // Catch: java.lang.Throwable -> L63
            goto L3e
        L39:
            com.loc.a$b r0 = r3.l     // Catch: java.lang.Throwable -> L63
            r0.quit()     // Catch: java.lang.Throwable -> L63
        L3e:
            r3.l = r1     // Catch: java.lang.Throwable -> L63
            r3.p = r1     // Catch: java.lang.Throwable -> L63
            java.lang.Object r0 = r3.z     // Catch: java.lang.Throwable -> L63
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L63
            android.app.PendingIntent r2 = r3.c     // Catch: java.lang.Throwable -> L60
            if (r2 == 0) goto L4e
            android.app.PendingIntent r2 = r3.c     // Catch: java.lang.Throwable -> L60
            r2.cancel()     // Catch: java.lang.Throwable -> L60
        L4e:
            r3.c = r1     // Catch: java.lang.Throwable -> L60
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L60
            r3.l()     // Catch: java.lang.Throwable -> L63
            com.loc.fx r0 = r3.a     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L63
            com.loc.fx r0 = r3.a     // Catch: java.lang.Throwable -> L63
            android.content.Context r1 = r3.b     // Catch: java.lang.Throwable -> L63
            r0.b(r1)     // Catch: java.lang.Throwable -> L63
            goto L63
        L60:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L60
            throw r1     // Catch: java.lang.Throwable -> L63
        L63:
            r0 = 0
            r3.m = r0
            r3.n = r0
            return
    }

    final void c(int r5) {
            r4 = this;
            android.content.Context r0 = r4.b     // Catch: java.lang.Throwable -> L29
            if (r0 == 0) goto L28
            java.lang.Object r0 = r4.z     // Catch: java.lang.Throwable -> L29
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L29
            android.app.PendingIntent r1 = r4.c     // Catch: java.lang.Throwable -> L25
            if (r1 != 0) goto Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            return
        Ld:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L25
            r1.<init>()     // Catch: java.lang.Throwable -> L25
            r2 = 4
            r3 = 0
            android.os.Bundle r5 = a(r3, r3, r3, r2, r5)     // Catch: java.lang.Throwable -> L25
            r1.putExtras(r5)     // Catch: java.lang.Throwable -> L25
            android.app.PendingIntent r5 = r4.c     // Catch: java.lang.Throwable -> L25
            android.content.Context r2 = r4.b     // Catch: java.lang.Throwable -> L25
            r3 = 0
            r5.send(r2, r3, r1)     // Catch: java.lang.Throwable -> L25
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            return
        L25:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            throw r5     // Catch: java.lang.Throwable -> L29
        L28:
            return
        L29:
            r5 = move-exception
            java.lang.String r0 = "GeoFenceManager"
            java.lang.String r1 = "resultRemindLocationError"
            com.loc.fr.a(r5, r0, r1)
            return
    }

    final void c(android.os.Bundle r7) {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L4c
            r0.<init>()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = ""
            java.lang.String r2 = "customId"
            r3 = 1
            if (r7 == 0) goto L34
            boolean r4 = r7.isEmpty()     // Catch: java.lang.Throwable -> L4c
            if (r4 != 0) goto L34
            java.lang.String r1 = "pointList"
            java.util.ArrayList r1 = r7.getParcelableArrayList(r1)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r4 = r7.getString(r2)     // Catch: java.lang.Throwable -> L4c
            if (r1 == 0) goto L33
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L4c
            r5 = 2
            if (r1 > r5) goto L26
            goto L33
        L26:
            com.amap.api.fence.GeoFence r7 = r6.a(r7, r3)     // Catch: java.lang.Throwable -> L4c
            int r3 = r6.c(r7)     // Catch: java.lang.Throwable -> L4c
            if (r3 != 0) goto L33
            r0.add(r7)     // Catch: java.lang.Throwable -> L4c
        L33:
            r1 = r4
        L34:
            android.os.Bundle r7 = new android.os.Bundle     // Catch: java.lang.Throwable -> L4c
            r7.<init>()     // Catch: java.lang.Throwable -> L4c
            r7.putString(r2, r1)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = "errorCode"
            r7.putInt(r1, r3)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = "resultList"
            r7.putParcelableArrayList(r1, r0)     // Catch: java.lang.Throwable -> L4c
            r0 = 1000(0x3e8, float:1.401E-42)
            r6.a(r0, r7)     // Catch: java.lang.Throwable -> L4c
            return
        L4c:
            r7 = move-exception
            java.lang.String r0 = "GeoFenceManager"
            java.lang.String r1 = "doAddGeoFencePolygon"
            com.loc.fr.a(r7, r0, r1)
            return
    }

    final void d() {
            r3 = this;
            com.amap.api.location.AMapLocationClient r0 = r3.r     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L19
            r3.o()     // Catch: java.lang.Throwable -> L1a
            com.amap.api.location.AMapLocationClientOption r0 = r3.u     // Catch: java.lang.Throwable -> L1a
            r1 = 1
            r0.setOnceLocation(r1)     // Catch: java.lang.Throwable -> L1a
            com.amap.api.location.AMapLocationClient r0 = r3.r     // Catch: java.lang.Throwable -> L1a
            com.amap.api.location.AMapLocationClientOption r1 = r3.u     // Catch: java.lang.Throwable -> L1a
            r0.setLocationOption(r1)     // Catch: java.lang.Throwable -> L1a
            com.amap.api.location.AMapLocationClient r0 = r3.r     // Catch: java.lang.Throwable -> L1a
            r0.startLocation()     // Catch: java.lang.Throwable -> L1a
        L19:
            return
        L1a:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceManager"
            java.lang.String r2 = "doStartOnceLocation"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    final void d(android.os.Bundle r2) {
            r1 = this;
            r0 = 2
            r1.b(r0, r2)
            return
    }

    final void e() {
            r5 = this;
            boolean r0 = r5.y     // Catch: java.lang.Throwable -> L63
            if (r0 == 0) goto L5
            return
        L5:
            com.amap.api.location.AMapLocation r0 = r5.s     // Catch: java.lang.Throwable -> L63
            boolean r0 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> L63
            if (r0 != 0) goto Le
            return
        Le:
            com.amap.api.location.AMapLocation r0 = r5.s     // Catch: java.lang.Throwable -> L63
            java.util.ArrayList<com.amap.api.fence.GeoFence> r1 = r5.g     // Catch: java.lang.Throwable -> L63
            float r0 = a(r0, r1)     // Catch: java.lang.Throwable -> L63
            r1 = 2139095039(0x7f7fffff, float:3.4028235E38)
            int r1 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r1 != 0) goto L1e
            return
        L1e:
            r1 = 1148846080(0x447a0000, float:1000.0)
            r2 = 7
            int r3 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r3 >= 0) goto L3c
            r5.b(r2)     // Catch: java.lang.Throwable -> L63
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L63
            r0.<init>()     // Catch: java.lang.Throwable -> L63
            java.lang.String r1 = "interval"
            r2 = 2000(0x7d0, double:9.88E-321)
            r0.putLong(r1, r2)     // Catch: java.lang.Throwable -> L63
            r1 = 8
            r2 = 500(0x1f4, double:2.47E-321)
            r5.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L63
            return
        L3c:
            r3 = 1167867904(0x459c4000, float:5000.0)
            r4 = 0
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 >= 0) goto L50
            r5.o()     // Catch: java.lang.Throwable -> L63
            r5.b(r2)     // Catch: java.lang.Throwable -> L63
            r0 = 10000(0x2710, double:4.9407E-320)
            r5.a(r2, r4, r0)     // Catch: java.lang.Throwable -> L63
            return
        L50:
            r5.o()     // Catch: java.lang.Throwable -> L63
            r5.b(r2)     // Catch: java.lang.Throwable -> L63
            r3 = 1165623296(0x457a0000, float:4000.0)
            float r0 = r0 - r3
            r3 = 1120403456(0x42c80000, float:100.0)
            float r0 = r0 / r3
            float r0 = r0 * r1
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L63
            r5.a(r2, r4, r0)     // Catch: java.lang.Throwable -> L63
            return
        L63:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceManager"
            java.lang.String r2 = "doCheckLocationPolicy"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    final void e(android.os.Bundle r2) {
            r1 = this;
            r0 = 1
            r1.b(r0, r2)
            return
    }

    public final void f() {
            r4 = this;
            r4.j()     // Catch: java.lang.Throwable -> Lf
            r0 = 1
            r4.y = r0     // Catch: java.lang.Throwable -> Lf
            r0 = 13
            r1 = 0
            r2 = 0
            r4.a(r0, r1, r2)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceManager"
            java.lang.String r2 = "pauseGeoFence"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    final void f(android.os.Bundle r2) {
            r1 = this;
            r0 = 3
            r1.b(r0, r2)
            return
    }

    final void g() {
            r3 = this;
            r0 = 7
            r3.b(r0)     // Catch: java.lang.Throwable -> L16
            r0 = 8
            r3.b(r0)     // Catch: java.lang.Throwable -> L16
            com.amap.api.location.AMapLocationClient r0 = r3.r     // Catch: java.lang.Throwable -> L16
            if (r0 == 0) goto L12
            com.amap.api.location.AMapLocationClient r0 = r3.r     // Catch: java.lang.Throwable -> L16
            r0.stopLocation()     // Catch: java.lang.Throwable -> L16
        L12:
            r0 = 0
            r3.m = r0     // Catch: java.lang.Throwable -> L16
            return
        L16:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceManager"
            java.lang.String r2 = "doPauseGeoFence"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    final void g(android.os.Bundle r5) {
            r4 = this;
            if (r5 == 0) goto L60
            boolean r0 = r5.isEmpty()     // Catch: java.lang.Throwable -> L58
            if (r0 == 0) goto L9
            goto L60
        L9:
            java.lang.String r0 = "fid"
            java.lang.String r0 = r5.getString(r0)     // Catch: java.lang.Throwable -> L58
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L58
            if (r1 == 0) goto L16
            return
        L16:
            java.lang.String r1 = "ab"
            r2 = 1
            boolean r5 = r5.getBoolean(r1, r2)     // Catch: java.lang.Throwable -> L58
            java.util.ArrayList<com.amap.api.fence.GeoFence> r1 = r4.g     // Catch: java.lang.Throwable -> L58
            if (r1 == 0) goto L48
            java.util.ArrayList<com.amap.api.fence.GeoFence> r1 = r4.g     // Catch: java.lang.Throwable -> L58
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L58
            if (r1 != 0) goto L48
            java.util.ArrayList<com.amap.api.fence.GeoFence> r1 = r4.g     // Catch: java.lang.Throwable -> L58
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L58
        L2f:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L58
            if (r2 == 0) goto L48
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L58
            com.amap.api.fence.GeoFence r2 = (com.amap.api.fence.GeoFence) r2     // Catch: java.lang.Throwable -> L58
            java.lang.String r3 = r2.getFenceId()     // Catch: java.lang.Throwable -> L58
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Throwable -> L58
            if (r3 == 0) goto L2f
            r2.setAble(r5)     // Catch: java.lang.Throwable -> L58
        L48:
            if (r5 != 0) goto L54
            boolean r5 = r4.k()     // Catch: java.lang.Throwable -> L58
            if (r5 == 0) goto L57
            r4.g()     // Catch: java.lang.Throwable -> L58
            return
        L54:
            r4.n()     // Catch: java.lang.Throwable -> L58
        L57:
            return
        L58:
            r5 = move-exception
            java.lang.String r0 = "GeoFenceManager"
            java.lang.String r1 = "doSetGeoFenceAble"
            com.loc.fr.a(r5, r0, r1)
        L60:
            return
    }

    public final void h() {
            r3 = this;
            r3.j()     // Catch: java.lang.Throwable -> Le
            boolean r0 = r3.y     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto Ld
            r0 = 0
            r3.y = r0     // Catch: java.lang.Throwable -> Le
            r3.n()     // Catch: java.lang.Throwable -> Le
        Ld:
            return
        Le:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceManager"
            java.lang.String r2 = "resumeGeoFence"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    final void h(android.os.Bundle r2) {
            r1 = this;
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r1.g     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L28
            java.lang.String r0 = "fc"
            android.os.Parcelable r2 = r2.getParcelable(r0)     // Catch: java.lang.Throwable -> L28
            com.amap.api.fence.GeoFence r2 = (com.amap.api.fence.GeoFence) r2     // Catch: java.lang.Throwable -> L28
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r1.g     // Catch: java.lang.Throwable -> L28
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L19
            java.util.ArrayList<com.amap.api.fence.GeoFence> r0 = r1.g     // Catch: java.lang.Throwable -> L28
            r0.remove(r2)     // Catch: java.lang.Throwable -> L28
        L19:
            java.util.ArrayList<com.amap.api.fence.GeoFence> r2 = r1.g     // Catch: java.lang.Throwable -> L28
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L28
            if (r2 > 0) goto L25
            r1.c()     // Catch: java.lang.Throwable -> L28
            return
        L25:
            r1.n()     // Catch: java.lang.Throwable -> L28
        L28:
            return
    }

    final void i(android.os.Bundle r4) {
            r3 = this;
            if (r4 == 0) goto L42
            boolean r0 = r4.isEmpty()     // Catch: java.lang.Throwable -> L3a
            if (r0 != 0) goto L42
            java.lang.String r0 = "errorCode"
            int r0 = r4.getInt(r0)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = "resultList"
            java.util.ArrayList r1 = r4.getParcelableArrayList(r1)     // Catch: java.lang.Throwable -> L3a
            if (r1 != 0) goto L1b
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L3a
            r1.<init>()     // Catch: java.lang.Throwable -> L3a
        L1b:
            java.lang.String r2 = "customId"
            java.lang.String r4 = r4.getString(r2)     // Catch: java.lang.Throwable -> L3a
            if (r4 != 0) goto L25
            java.lang.String r4 = ""
        L25:
            com.amap.api.fence.GeoFenceListener r2 = r3.e     // Catch: java.lang.Throwable -> L3a
            if (r2 == 0) goto L34
            com.amap.api.fence.GeoFenceListener r2 = r3.e     // Catch: java.lang.Throwable -> L3a
            java.lang.Object r1 = r1.clone()     // Catch: java.lang.Throwable -> L3a
            java.util.ArrayList r1 = (java.util.ArrayList) r1     // Catch: java.lang.Throwable -> L3a
            r2.onGeoFenceCreateFinished(r1, r0, r4)     // Catch: java.lang.Throwable -> L3a
        L34:
            if (r0 != 0) goto L42
            r3.n()     // Catch: java.lang.Throwable -> L3a
            goto L42
        L3a:
            r4 = move-exception
            java.lang.String r0 = "GeoFenceManager"
            java.lang.String r1 = "resultAddGeoFenceFinished"
            com.loc.fr.a(r4, r0, r1)
        L42:
            return
    }

    public final boolean i() {
            r1 = this;
            boolean r0 = r1.y
            return r0
    }

    final void j(android.os.Bundle r4) {
            r3 = this;
            com.amap.api.location.AMapLocationClient r0 = r3.r     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L37
            r0 = 2000(0x7d0, double:9.88E-321)
            if (r4 == 0) goto L14
            boolean r2 = r4.isEmpty()     // Catch: java.lang.Throwable -> L38
            if (r2 != 0) goto L14
            java.lang.String r2 = "interval"
            long r0 = r4.getLong(r2, r0)     // Catch: java.lang.Throwable -> L38
        L14:
            com.amap.api.location.AMapLocationClientOption r4 = r3.u     // Catch: java.lang.Throwable -> L38
            r2 = 0
            r4.setOnceLocation(r2)     // Catch: java.lang.Throwable -> L38
            com.amap.api.location.AMapLocationClientOption r4 = r3.u     // Catch: java.lang.Throwable -> L38
            r4.setInterval(r0)     // Catch: java.lang.Throwable -> L38
            com.amap.api.location.AMapLocationClient r4 = r3.r     // Catch: java.lang.Throwable -> L38
            com.amap.api.location.AMapLocationClientOption r0 = r3.u     // Catch: java.lang.Throwable -> L38
            r4.setLocationOption(r0)     // Catch: java.lang.Throwable -> L38
            boolean r4 = r3.m     // Catch: java.lang.Throwable -> L38
            if (r4 != 0) goto L37
            com.amap.api.location.AMapLocationClient r4 = r3.r     // Catch: java.lang.Throwable -> L38
            r4.stopLocation()     // Catch: java.lang.Throwable -> L38
            com.amap.api.location.AMapLocationClient r4 = r3.r     // Catch: java.lang.Throwable -> L38
            r4.startLocation()     // Catch: java.lang.Throwable -> L38
            r4 = 1
            r3.m = r4     // Catch: java.lang.Throwable -> L38
        L37:
            return
        L38:
            r4 = move-exception
            java.lang.String r0 = "GeoFenceManager"
            java.lang.String r1 = "doStartContinueLocation"
            com.loc.fr.a(r4, r0, r1)
            return
    }
}
