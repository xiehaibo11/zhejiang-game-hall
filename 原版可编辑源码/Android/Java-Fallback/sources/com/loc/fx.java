package com.loc;

public final class fx {
    static com.amap.api.location.AMapLocation g;
    static boolean h;
    private static java.util.List<com.loc.bz> i;
    private static org.json.JSONArray j;
    public android.util.SparseArray<java.lang.Long> a;
    public int b;
    public long c;
    java.lang.String[] d;
    public int e;
    public long f;

    static class 1 {
        static final int[] a = null;

        static {
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode[] r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.loc.fx.1.a = r0
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Battery_Saving     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.loc.fx.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.loc.fx.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.loc.fx.i = r0
            r0 = 0
            com.loc.fx.j = r0
            com.loc.fx.g = r0
            r0 = 0
            com.loc.fx.h = r0
            return
    }

    public fx() {
            r9 = this;
            r9.<init>()
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r9.a = r0
            r0 = -1
            r9.b = r0
            r1 = 0
            r9.c = r1
            java.lang.String r3 = "ol"
            java.lang.String r4 = "cl"
            java.lang.String r5 = "gl"
            java.lang.String r6 = "ha"
            java.lang.String r7 = "bs"
            java.lang.String r8 = "ds"
            java.lang.String[] r1 = new java.lang.String[]{r3, r4, r5, r6, r7, r8}
            r9.d = r1
            r9.e = r0
            r0 = -1
            r9.f = r0
            return
    }

    private static java.lang.String a(int r1) {
            r0 = 2011(0x7db, float:2.818E-42)
            if (r1 == r0) goto L8b
            r0 = 2031(0x7ef, float:2.846E-42)
            if (r1 == r0) goto L88
            r0 = 2041(0x7f9, float:2.86E-42)
            if (r1 == r0) goto L85
            r0 = 2081(0x821, float:2.916E-42)
            if (r1 == r0) goto L82
            r0 = 2091(0x82b, float:2.93E-42)
            if (r1 == r0) goto L7f
            r0 = 2111(0x83f, float:2.958E-42)
            if (r1 == r0) goto L7c
            r0 = 2121(0x849, float:2.972E-42)
            if (r1 == r0) goto L79
            r0 = 2141(0x85d, float:3.0E-42)
            if (r1 == r0) goto L76
            r0 = 2021(0x7e5, float:2.832E-42)
            if (r1 == r0) goto L73
            r0 = 2022(0x7e6, float:2.833E-42)
            if (r1 == r0) goto L70
            r0 = 2061(0x80d, float:2.888E-42)
            if (r1 == r0) goto L6d
            r0 = 2062(0x80e, float:2.89E-42)
            if (r1 == r0) goto L6a
            switch(r1) {
                case 2051: goto L67;
                case 2052: goto L64;
                case 2053: goto L61;
                case 2054: goto L5e;
                default: goto L33;
            }
        L33:
            switch(r1) {
                case 2101: goto L5b;
                case 2102: goto L58;
                case 2103: goto L55;
                default: goto L36;
            }
        L36:
            switch(r1) {
                case 2131: goto L52;
                case 2132: goto L4f;
                case 2133: goto L4c;
                default: goto L39;
            }
        L39:
            switch(r1) {
                case 2151: goto L49;
                case 2152: goto L46;
                case 2153: goto L43;
                case 2154: goto L40;
                default: goto L3c;
            }
        L3c:
            java.lang.String r1 = ""
            goto L8d
        L40:
            java.lang.String r1 = "UNSUPPORT_CONTINUE_LOC"
            goto L8d
        L43:
            java.lang.String r1 = "UNSUPPORT_COARSE_LBSLOC"
            goto L8d
        L46:
            java.lang.String r1 = "MaybeMockGPSLoc"
            goto L8d
        L49:
            java.lang.String r1 = "MaybeMockNetLoc"
            goto L8d
        L4c:
            java.lang.String r1 = "NoCgiAndWifiOff"
            goto L8d
        L4f:
            java.lang.String r1 = "AirPlaneModeAndWifiOff"
            goto L8d
        L52:
            java.lang.String r1 = "NoCgiOAndWifiInfo"
            goto L8d
        L55:
            java.lang.String r1 = "NotConfigAPSService"
            goto L8d
        L58:
            java.lang.String r1 = "AuthClientScodeFail"
            goto L8d
        L5b:
            java.lang.String r1 = "BindAPSServiceException"
            goto L8d
        L5e:
            java.lang.String r1 = "ParserDataException"
            goto L8d
        L61:
            java.lang.String r1 = "DecryptResponseException"
            goto L8d
        L64:
            java.lang.String r1 = "MaybeIntercepted"
            goto L8d
        L67:
            java.lang.String r1 = "NeedLoginNetWork\t"
            goto L8d
        L6a:
            java.lang.String r1 = "ServerLocFail"
            goto L8d
        L6d:
            java.lang.String r1 = "ServerRetypeError"
            goto L8d
        L70:
            java.lang.String r1 = "OnlyOneWifiButNotMain"
            goto L8d
        L73:
            java.lang.String r1 = "OnlyMainWifi"
            goto L8d
        L76:
            java.lang.String r1 = "NoEnoughStatellites"
            goto L8d
        L79:
            java.lang.String r1 = "NotLocPermission"
            goto L8d
        L7c:
            java.lang.String r1 = "ErrorCgiInfo"
            goto L8d
        L7f:
            java.lang.String r1 = "InitException"
            goto L8d
        L82:
            java.lang.String r1 = "LocalLocException"
            goto L8d
        L85:
            java.lang.String r1 = "ResponseResultIsNull"
            goto L8d
        L88:
            java.lang.String r1 = "CreateApsReqException"
            goto L8d
        L8b:
            java.lang.String r1 = "ContextIsNull"
        L8d:
            return r1
    }

    public static void a(long r6, long r8) {
            java.lang.String r0 = ","
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss.SSS"
            boolean r2 = com.loc.fx.h     // Catch: java.lang.Throwable -> L76
            if (r2 == 0) goto L9
            return
        L9:
            java.lang.StringBuffer r2 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L76
            r2.<init>()     // Catch: java.lang.Throwable -> L76
            java.lang.String r3 = "gpsTime:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L76
            java.lang.String r3 = com.loc.fz.a(r6, r1)     // Catch: java.lang.Throwable -> L76
            r2.append(r3)     // Catch: java.lang.Throwable -> L76
            r2.append(r0)     // Catch: java.lang.Throwable -> L76
            java.lang.String r3 = "sysTime:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L76
            java.lang.String r8 = com.loc.fz.a(r8, r1)     // Catch: java.lang.Throwable -> L76
            r2.append(r8)     // Catch: java.lang.Throwable -> L76
            r2.append(r0)     // Catch: java.lang.Throwable -> L76
            long r8 = com.loc.fq.u()     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = "0"
            r3 = 0
            int r5 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r5 == 0) goto L3c
            java.lang.String r0 = com.loc.fz.a(r8, r1)     // Catch: java.lang.Throwable -> L76
        L3c:
            java.lang.String r1 = "serverTime:"
            r2.append(r1)     // Catch: java.lang.Throwable -> L76
            r2.append(r0)     // Catch: java.lang.Throwable -> L76
            java.lang.String r0 = "checkgpstime"
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L76
            a(r0, r1)     // Catch: java.lang.Throwable -> L76
            if (r5 == 0) goto L6b
            long r6 = r6 - r8
            long r6 = java.lang.Math.abs(r6)     // Catch: java.lang.Throwable -> L76
            r8 = 31536000000(0x757b12c00, double:1.55808542072E-313)
            int r0 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r0 >= 0) goto L6b
            java.lang.String r6 = ", correctError"
            r2.append(r6)     // Catch: java.lang.Throwable -> L76
            java.lang.String r6 = "checkgpstimeerror"
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L76
            a(r6, r7)     // Catch: java.lang.Throwable -> L76
        L6b:
            r6 = 0
            int r7 = r2.length()     // Catch: java.lang.Throwable -> L76
            r2.delete(r6, r7)     // Catch: java.lang.Throwable -> L76
            r6 = 1
            com.loc.fx.h = r6     // Catch: java.lang.Throwable -> L76
        L76:
            return
    }

    public static synchronized void a(android.content.Context r3) {
            java.lang.Class<com.loc.fx> r0 = com.loc.fx.class
            monitor-enter(r0)
            if (r3 == 0) goto L3c
            boolean r1 = com.loc.fq.a()     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto Lc
            goto L3c
        Lc:
            java.util.List<com.loc.bz> r1 = com.loc.fx.i     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L2a
            java.util.List<com.loc.bz> r1 = com.loc.fx.i     // Catch: java.lang.Throwable -> L2f
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L2f
            if (r1 <= 0) goto L2a
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L2f
            r1.<init>()     // Catch: java.lang.Throwable -> L2f
            java.util.List<com.loc.bz> r2 = com.loc.fx.i     // Catch: java.lang.Throwable -> L2f
            r1.addAll(r2)     // Catch: java.lang.Throwable -> L2f
            com.loc.ca.b(r1, r3)     // Catch: java.lang.Throwable -> L2f
            java.util.List<com.loc.bz> r1 = com.loc.fx.i     // Catch: java.lang.Throwable -> L2f
            r1.clear()     // Catch: java.lang.Throwable -> L2f
        L2a:
            f(r3)     // Catch: java.lang.Throwable -> L2f
            monitor-exit(r0)
            return
        L2f:
            r3 = move-exception
            java.lang.String r1 = "ReportUtil"
            java.lang.String r2 = "destroy"
            com.loc.fr.a(r3, r1, r2)     // Catch: java.lang.Throwable -> L39
            monitor-exit(r0)
            return
        L39:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
        L3c:
            monitor-exit(r0)
            return
    }

    public static void a(android.content.Context r9, int r10, int r11, long r12, long r14) {
            r0 = -1
            if (r10 == r0) goto L19
            if (r11 != r0) goto L6
            goto L19
        L6:
            java.lang.String r2 = "O012"
            r1 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r7 = r14
            a(r1, r2, r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r9 = move-exception
            java.lang.String r10 = "ReportUtil"
            java.lang.String r11 = "reportServiceAliveTime"
            com.loc.fr.a(r9, r10, r11)
        L19:
            return
    }

    public static void a(android.content.Context r1, long r2, boolean r4) {
            if (r1 == 0) goto L17
            boolean r0 = com.loc.fq.a()     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto L9
            goto L17
        L9:
            java.lang.String r0 = "O015"
            a(r1, r2, r4, r0)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r1 = move-exception
            java.lang.String r2 = "ReportUtil"
            java.lang.String r3 = "reportGPSLocUseTime"
            com.loc.fr.a(r1, r2, r3)
        L17:
            return
    }

    private static void a(android.content.Context r0, long r1, boolean r3, java.lang.String r4) {
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            int r1 = r1.intValue()
            if (r3 != 0) goto Ld
            java.lang.String r2 = "abroad"
            goto Lf
        Ld:
            java.lang.String r2 = "domestic"
        Lf:
            a(r0, r4, r2, r1)
            return
    }

    public static synchronized void a(android.content.Context r8, com.amap.api.location.AMapLocation r9) {
            java.lang.Class<com.loc.fx> r0 = com.loc.fx.class
            monitor-enter(r0)
            boolean r1 = com.loc.fz.a(r9)     // Catch: java.lang.Throwable -> Lf0
            if (r1 != 0) goto Lb
            monitor-exit(r0)
            return
        Lb:
            int r1 = r9.getLocationType()     // Catch: java.lang.Throwable -> Lf0
            r2 = 4
            r3 = 0
            r4 = 2
            r5 = 1
            if (r1 == r5) goto L30
            if (r1 == r4) goto L2e
            if (r1 == r2) goto L2e
            r6 = 11
            if (r1 == r6) goto L2c
            r6 = 8
            if (r1 == r6) goto L29
            r6 = 9
            if (r1 == r6) goto L27
            r1 = 0
            goto L32
        L27:
            r1 = 2
            goto L31
        L29:
            r3 = 3
            r1 = 3
            goto L31
        L2c:
            r1 = 4
            goto L31
        L2e:
            r1 = 1
            goto L31
        L30:
            r1 = 0
        L31:
            r3 = 1
        L32:
            if (r3 == 0) goto Lee
            int r3 = com.loc.fq.c()     // Catch: java.lang.Throwable -> Lf0
            if (r3 == 0) goto L47
            if (r1 == 0) goto L43
            if (r1 != r2) goto L3f
            goto L43
        L3f:
            if (r3 != r5) goto L47
            monitor-exit(r0)
            return
        L43:
            if (r3 != r4) goto L47
            monitor-exit(r0)
            return
        L47:
            org.json.JSONArray r2 = com.loc.fx.j     // Catch: java.lang.Throwable -> Lf0
            if (r2 != 0) goto L52
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> Lf0
            r2.<init>()     // Catch: java.lang.Throwable -> Lf0
            com.loc.fx.j = r2     // Catch: java.lang.Throwable -> Lf0
        L52:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf0
            r2.<init>()     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r3 = "lon"
            double r6 = r9.getLongitude()     // Catch: java.lang.Throwable -> Lf0
            double r6 = com.loc.fz.b(r6)     // Catch: java.lang.Throwable -> Lf0
            r2.put(r3, r6)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r3 = "lat"
            double r6 = r9.getLatitude()     // Catch: java.lang.Throwable -> Lf0
            double r6 = com.loc.fz.b(r6)     // Catch: java.lang.Throwable -> Lf0
            r2.put(r3, r6)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r3 = "type"
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r3 = "timestamp"
            long r6 = com.loc.fz.a()     // Catch: java.lang.Throwable -> Lf0
            r2.put(r3, r6)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r3 = r9.getCoordType()     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r6 = "WGS84"
            boolean r3 = r3.equalsIgnoreCase(r6)     // Catch: java.lang.Throwable -> Lf0
            if (r3 == 0) goto L91
            java.lang.String r3 = "coordType"
            r2.put(r3, r5)     // Catch: java.lang.Throwable -> Lf0
            goto L96
        L91:
            java.lang.String r3 = "coordType"
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> Lf0
        L96:
            if (r1 != 0) goto Ld9
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf0
            r1.<init>()     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r3 = "accuracy"
            float r4 = r9.getAccuracy()     // Catch: java.lang.Throwable -> Lf0
            double r4 = (double) r4     // Catch: java.lang.Throwable -> Lf0
            double r4 = com.loc.fz.c(r4)     // Catch: java.lang.Throwable -> Lf0
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r3 = "altitude"
            double r4 = r9.getAltitude()     // Catch: java.lang.Throwable -> Lf0
            double r4 = com.loc.fz.c(r4)     // Catch: java.lang.Throwable -> Lf0
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r3 = "bearing"
            float r4 = r9.getBearing()     // Catch: java.lang.Throwable -> Lf0
            double r4 = (double) r4     // Catch: java.lang.Throwable -> Lf0
            double r4 = com.loc.fz.c(r4)     // Catch: java.lang.Throwable -> Lf0
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r3 = "speed"
            float r9 = r9.getSpeed()     // Catch: java.lang.Throwable -> Lf0
            double r4 = (double) r9     // Catch: java.lang.Throwable -> Lf0
            double r4 = com.loc.fz.c(r4)     // Catch: java.lang.Throwable -> Lf0
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r9 = "extension"
            r2.put(r9, r1)     // Catch: java.lang.Throwable -> Lf0
        Ld9:
            org.json.JSONArray r9 = com.loc.fx.j     // Catch: java.lang.Throwable -> Lf0
            org.json.JSONArray r9 = r9.put(r2)     // Catch: java.lang.Throwable -> Lf0
            com.loc.fx.j = r9     // Catch: java.lang.Throwable -> Lf0
            int r9 = r9.length()     // Catch: java.lang.Throwable -> Lf0
            int r1 = com.loc.fq.b()     // Catch: java.lang.Throwable -> Lf0
            if (r9 < r1) goto Lee
            f(r8)     // Catch: java.lang.Throwable -> Lf0
        Lee:
            monitor-exit(r0)
            return
        Lf0:
            r8 = move-exception
            java.lang.String r9 = "ReportUtil"
            java.lang.String r1 = "recordOfflineLocLog"
            com.loc.fr.a(r8, r9, r1)     // Catch: java.lang.Throwable -> Lfa
            monitor-exit(r0)
            return
        Lfa:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }

    public static void a(android.content.Context r8, com.amap.api.location.AMapLocation r9, com.loc.eq r10) {
            if (r9 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "gps"
            java.lang.String r1 = r9.getProvider()     // Catch: java.lang.Throwable -> L59
            boolean r0 = r0.equalsIgnoreCase(r1)     // Catch: java.lang.Throwable -> L59
            if (r0 != 0) goto L58
            int r0 = r9.getLocationType()     // Catch: java.lang.Throwable -> L59
            r1 = 1
            if (r0 != r1) goto L17
            goto L58
        L17:
            java.lang.String r0 = "domestic"
            boolean r2 = a(r9)     // Catch: java.lang.Throwable -> L59
            if (r2 == 0) goto L21
            java.lang.String r0 = "abroad"
        L21:
            r3 = r0
            int r0 = r9.getErrorCode()     // Catch: java.lang.Throwable -> L59
            java.lang.String r2 = "cache"
            java.lang.String r4 = "net"
            r5 = 6
            r6 = 5
            r7 = 0
            if (r0 == 0) goto L42
            int r0 = r9.getErrorCode()     // Catch: java.lang.Throwable -> L59
            r1 = 4
            if (r0 == r1) goto L3f
            if (r0 == r6) goto L3f
            if (r0 == r5) goto L3f
            r1 = 11
            if (r0 == r1) goto L3f
            goto L40
        L3f:
            r2 = r4
        L40:
            r4 = 0
            goto L4d
        L42:
            int r0 = r9.getLocationType()     // Catch: java.lang.Throwable -> L59
            if (r0 == r6) goto L4b
            if (r0 == r5) goto L4b
            goto L4c
        L4b:
            r2 = r4
        L4c:
            r4 = 1
        L4d:
            java.lang.String r1 = "O016"
            int r5 = r9.getErrorCode()     // Catch: java.lang.Throwable -> L59
            r0 = r8
            r6 = r10
            a(r0, r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L59
        L58:
            return
        L59:
            r8 = move-exception
            java.lang.String r9 = "ReportUtil"
            java.lang.String r10 = "reportBatting"
            com.loc.fr.a(r8, r9, r10)
            return
    }

    private static void a(android.content.Context r2, java.lang.String r3, int r4, int r5, long r6, long r8) {
            if (r2 == 0) goto L2e
            boolean r0 = com.loc.fq.a()     // Catch: java.lang.Throwable -> L26
            if (r0 != 0) goto L9
            goto L2e
        L9:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L26
            r0.<init>()     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = "param_int_first"
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L26
            java.lang.String r4 = "param_int_second"
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L26
            java.lang.String r4 = "param_long_first"
            r0.put(r4, r6)     // Catch: java.lang.Throwable -> L26
            java.lang.String r4 = "param_long_second"
            r0.put(r4, r8)     // Catch: java.lang.Throwable -> L26
            a(r2, r3, r0)     // Catch: java.lang.Throwable -> L26
            return
        L26:
            r2 = move-exception
            java.lang.String r3 = "ReportUtil"
            java.lang.String r4 = "applyStatisticsEx"
            com.loc.fr.a(r2, r3, r4)
        L2e:
            return
    }

    private static void a(android.content.Context r2, java.lang.String r3, java.lang.String r4, int r5) {
            if (r2 == 0) goto L3b
            boolean r0 = com.loc.fq.a()     // Catch: java.lang.Throwable -> L33
            if (r0 != 0) goto L9
            goto L3b
        L9:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L33
            r0.<init>()     // Catch: java.lang.Throwable -> L33
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L33
            if (r1 != 0) goto L19
            java.lang.String r1 = "param_string_first"
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L33
        L19:
            r4 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L33
            if (r1 != 0) goto L25
            java.lang.String r1 = "param_string_second"
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L33
        L25:
            r4 = 2147483647(0x7fffffff, float:NaN)
            if (r5 == r4) goto L2f
            java.lang.String r4 = "param_int_first"
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L33
        L2f:
            a(r2, r3, r0)     // Catch: java.lang.Throwable -> L33
            return
        L33:
            r2 = move-exception
            java.lang.String r3 = "ReportUtil"
            java.lang.String r4 = "applyStatisticsEx"
            com.loc.fr.a(r2, r3, r4)
        L3b:
            return
    }

    private static void a(android.content.Context r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, int r7, int r8, com.loc.eq r9) {
            if (r3 == 0) goto Le2
            boolean r0 = com.loc.fq.a()     // Catch: java.lang.Throwable -> Lda
            if (r0 != 0) goto La
            goto Le2
        La:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lda
            r0.<init>()     // Catch: java.lang.Throwable -> Lda
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lda
            if (r1 != 0) goto L1a
            java.lang.String r1 = "param_string_first"
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> Lda
        L1a:
            boolean r5 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lda
            if (r5 != 0) goto L25
            java.lang.String r5 = "param_string_second"
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> Lda
        L25:
            r5 = 2147483647(0x7fffffff, float:NaN)
            if (r7 == r5) goto L2f
            java.lang.String r6 = "param_int_first"
            r0.put(r6, r7)     // Catch: java.lang.Throwable -> Lda
        L2f:
            if (r8 == r5) goto L36
            java.lang.String r5 = "param_int_second"
            r0.put(r5, r8)     // Catch: java.lang.Throwable -> Lda
        L36:
            if (r9 == 0) goto Ld6
            java.lang.String r5 = r9.d()     // Catch: java.lang.Throwable -> Lda
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lda
            if (r5 != 0) goto L4b
            java.lang.String r5 = "dns"
            java.lang.String r6 = r9.d()     // Catch: java.lang.Throwable -> Lda
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> Lda
        L4b:
            java.lang.String r5 = r9.e()     // Catch: java.lang.Throwable -> Lda
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lda
            if (r5 != 0) goto L5e
            java.lang.String r5 = "domain"
            java.lang.String r6 = r9.e()     // Catch: java.lang.Throwable -> Lda
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> Lda
        L5e:
            java.lang.String r5 = r9.f()     // Catch: java.lang.Throwable -> Lda
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lda
            if (r5 != 0) goto L71
            java.lang.String r5 = "type"
            java.lang.String r6 = r9.f()     // Catch: java.lang.Throwable -> Lda
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> Lda
        L71:
            java.lang.String r5 = r9.g()     // Catch: java.lang.Throwable -> Lda
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lda
            if (r5 != 0) goto L84
            java.lang.String r5 = "reason"
            java.lang.String r6 = r9.g()     // Catch: java.lang.Throwable -> Lda
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> Lda
        L84:
            java.lang.String r5 = r9.c()     // Catch: java.lang.Throwable -> Lda
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lda
            if (r5 != 0) goto L97
            java.lang.String r5 = "ip"
            java.lang.String r6 = r9.c()     // Catch: java.lang.Throwable -> Lda
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> Lda
        L97:
            java.lang.String r5 = r9.b()     // Catch: java.lang.Throwable -> Lda
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lda
            if (r5 != 0) goto Laa
            java.lang.String r5 = "stack"
            java.lang.String r6 = r9.b()     // Catch: java.lang.Throwable -> Lda
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> Lda
        Laa:
            long r5 = r9.h()     // Catch: java.lang.Throwable -> Lda
            r7 = 0
            int r1 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r1 <= 0) goto Lc1
            java.lang.String r5 = "ctime"
            long r1 = r9.h()     // Catch: java.lang.Throwable -> Lda
            java.lang.String r6 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> Lda
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> Lda
        Lc1:
            long r5 = r9.a()     // Catch: java.lang.Throwable -> Lda
            int r1 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r1 <= 0) goto Ld6
            java.lang.String r5 = "ntime"
            long r6 = r9.a()     // Catch: java.lang.Throwable -> Lda
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> Lda
            r0.put(r5, r6)     // Catch: java.lang.Throwable -> Lda
        Ld6:
            a(r3, r4, r0)     // Catch: java.lang.Throwable -> Lda
            return
        Lda:
            r3 = move-exception
            java.lang.String r4 = "ReportUtil"
            java.lang.String r5 = "applyStatisticsEx"
            com.loc.fr.a(r3, r4, r5)
        Le2:
            return
    }

    public static synchronized void a(android.content.Context r4, java.lang.String r5, org.json.JSONObject r6) {
            java.lang.Class<com.loc.fx> r0 = com.loc.fx.class
            monitor-enter(r0)
            if (r4 == 0) goto L4e
            boolean r1 = com.loc.fq.a()     // Catch: java.lang.Throwable -> L41
            if (r1 != 0) goto Lc
            goto L4e
        Lc:
            com.loc.bz r1 = new com.loc.bz     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = "loc"
            java.lang.String r3 = "6.4.0"
            r1.<init>(r4, r2, r3, r5)     // Catch: java.lang.Throwable -> L41
            if (r6 == 0) goto L1e
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> L41
            r1.a(r5)     // Catch: java.lang.Throwable -> L41
        L1e:
            java.util.List<com.loc.bz> r5 = com.loc.fx.i     // Catch: java.lang.Throwable -> L41
            r5.add(r1)     // Catch: java.lang.Throwable -> L41
            java.util.List<com.loc.bz> r5 = com.loc.fx.i     // Catch: java.lang.Throwable -> L41
            int r5 = r5.size()     // Catch: java.lang.Throwable -> L41
            r6 = 30
            if (r5 < r6) goto L3f
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L41
            r5.<init>()     // Catch: java.lang.Throwable -> L41
            java.util.List<com.loc.bz> r6 = com.loc.fx.i     // Catch: java.lang.Throwable -> L41
            r5.addAll(r6)     // Catch: java.lang.Throwable -> L41
            com.loc.ca.b(r5, r4)     // Catch: java.lang.Throwable -> L41
            java.util.List<com.loc.bz> r4 = com.loc.fx.i     // Catch: java.lang.Throwable -> L41
            r4.clear()     // Catch: java.lang.Throwable -> L41
        L3f:
            monitor-exit(r0)
            return
        L41:
            r4 = move-exception
            java.lang.String r5 = "ReportUtil"
            java.lang.String r6 = "applyStatistics"
            com.loc.fr.a(r4, r5, r6)     // Catch: java.lang.Throwable -> L4b
            monitor-exit(r0)
            return
        L4b:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
        L4e:
            monitor-exit(r0)
            return
    }

    public static void a(com.amap.api.location.AMapLocation r8, com.amap.api.location.AMapLocation r9) {
            java.lang.String r0 = "gps"
            java.lang.String r1 = ","
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            if (r2 != 0) goto L17
            boolean r2 = com.loc.fz.a(r8)     // Catch: java.lang.Throwable -> L154
            if (r2 != 0) goto L11
            com.loc.fx.g = r9     // Catch: java.lang.Throwable -> L154
            return
        L11:
            com.amap.api.location.AMapLocation r2 = r8.clone()     // Catch: java.lang.Throwable -> L154
            com.loc.fx.g = r2     // Catch: java.lang.Throwable -> L154
        L17:
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            boolean r2 = com.loc.fz.a(r2)     // Catch: java.lang.Throwable -> L154
            if (r2 == 0) goto L154
            boolean r2 = com.loc.fz.a(r9)     // Catch: java.lang.Throwable -> L154
            if (r2 == 0) goto L154
            com.amap.api.location.AMapLocation r9 = r9.clone()     // Catch: java.lang.Throwable -> L154
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            int r2 = r2.getLocationType()     // Catch: java.lang.Throwable -> L154
            r3 = 1
            if (r2 == r3) goto L152
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            int r2 = r2.getLocationType()     // Catch: java.lang.Throwable -> L154
            r4 = 9
            if (r2 == r4) goto L152
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            java.lang.String r2 = r2.getProvider()     // Catch: java.lang.Throwable -> L154
            boolean r2 = r0.equalsIgnoreCase(r2)     // Catch: java.lang.Throwable -> L154
            if (r2 != 0) goto L152
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            int r2 = r2.getLocationType()     // Catch: java.lang.Throwable -> L154
            r5 = 7
            if (r2 == r5) goto L152
            int r2 = r9.getLocationType()     // Catch: java.lang.Throwable -> L154
            if (r2 == r3) goto L152
            int r2 = r9.getLocationType()     // Catch: java.lang.Throwable -> L154
            if (r2 == r4) goto L152
            java.lang.String r2 = r9.getProvider()     // Catch: java.lang.Throwable -> L154
            boolean r0 = r0.equalsIgnoreCase(r2)     // Catch: java.lang.Throwable -> L154
            if (r0 != 0) goto L152
            int r0 = r9.getLocationType()     // Catch: java.lang.Throwable -> L154
            if (r0 == r5) goto L152
            long r2 = r9.getTime()     // Catch: java.lang.Throwable -> L154
            com.amap.api.location.AMapLocation r0 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            long r4 = r0.getTime()     // Catch: java.lang.Throwable -> L154
            long r2 = r2 - r4
            long r2 = java.lang.Math.abs(r2)     // Catch: java.lang.Throwable -> L154
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto L87
            r2 = 1
        L87:
            r6 = 1800(0x708, double:8.893E-321)
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 > 0) goto L152
            com.amap.api.location.AMapLocation r0 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            float r0 = com.loc.fz.a(r0, r9)     // Catch: java.lang.Throwable -> L154
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L154
            float r2 = r0 / r2
            r3 = 1189765120(0x46ea6000, float:30000.0)
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 <= 0) goto L152
            r0 = 1148846080(0x447a0000, float:1000.0)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L152
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L154
            r0.<init>()     // Catch: java.lang.Throwable -> L154
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            double r2 = r2.getLatitude()     // Catch: java.lang.Throwable -> L154
            r0.append(r2)     // Catch: java.lang.Throwable -> L154
            r0.append(r1)     // Catch: java.lang.Throwable -> L154
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            double r2 = r2.getLongitude()     // Catch: java.lang.Throwable -> L154
            r0.append(r2)     // Catch: java.lang.Throwable -> L154
            r0.append(r1)     // Catch: java.lang.Throwable -> L154
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            float r2 = r2.getAccuracy()     // Catch: java.lang.Throwable -> L154
            r0.append(r2)     // Catch: java.lang.Throwable -> L154
            r0.append(r1)     // Catch: java.lang.Throwable -> L154
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            int r2 = r2.getLocationType()     // Catch: java.lang.Throwable -> L154
            r0.append(r2)     // Catch: java.lang.Throwable -> L154
            r0.append(r1)     // Catch: java.lang.Throwable -> L154
            long r2 = r8.getTime()     // Catch: java.lang.Throwable -> L154
            java.lang.String r8 = "yyyyMMdd_HH:mm:ss:SS"
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 == 0) goto Lf0
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            long r2 = r2.getTime()     // Catch: java.lang.Throwable -> L154
            java.lang.String r2 = com.loc.fz.a(r2, r8)     // Catch: java.lang.Throwable -> L154
            r0.append(r2)     // Catch: java.lang.Throwable -> L154
            goto Lf9
        Lf0:
            com.amap.api.location.AMapLocation r2 = com.loc.fx.g     // Catch: java.lang.Throwable -> L154
            long r2 = r2.getTime()     // Catch: java.lang.Throwable -> L154
            r0.append(r2)     // Catch: java.lang.Throwable -> L154
        Lf9:
            java.lang.String r2 = "#"
            r0.append(r2)     // Catch: java.lang.Throwable -> L154
            double r2 = r9.getLatitude()     // Catch: java.lang.Throwable -> L154
            r0.append(r2)     // Catch: java.lang.Throwable -> L154
            r0.append(r1)     // Catch: java.lang.Throwable -> L154
            double r2 = r9.getLongitude()     // Catch: java.lang.Throwable -> L154
            r0.append(r2)     // Catch: java.lang.Throwable -> L154
            r0.append(r1)     // Catch: java.lang.Throwable -> L154
            float r2 = r9.getAccuracy()     // Catch: java.lang.Throwable -> L154
            r0.append(r2)     // Catch: java.lang.Throwable -> L154
            r0.append(r1)     // Catch: java.lang.Throwable -> L154
            int r2 = r9.getLocationType()     // Catch: java.lang.Throwable -> L154
            r0.append(r2)     // Catch: java.lang.Throwable -> L154
            r0.append(r1)     // Catch: java.lang.Throwable -> L154
            long r1 = r9.getTime()     // Catch: java.lang.Throwable -> L154
            int r3 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r3 == 0) goto L13a
            long r1 = r9.getTime()     // Catch: java.lang.Throwable -> L154
            java.lang.String r8 = com.loc.fz.a(r1, r8)     // Catch: java.lang.Throwable -> L154
            r0.append(r8)     // Catch: java.lang.Throwable -> L154
            goto L141
        L13a:
            long r1 = r9.getTime()     // Catch: java.lang.Throwable -> L154
            r0.append(r1)     // Catch: java.lang.Throwable -> L154
        L141:
            java.lang.String r8 = "bigshiftstatistics"
            java.lang.String r1 = r0.toString()     // Catch: java.lang.Throwable -> L154
            a(r8, r1)     // Catch: java.lang.Throwable -> L154
            r8 = 0
            int r1 = r0.length()     // Catch: java.lang.Throwable -> L154
            r0.delete(r8, r1)     // Catch: java.lang.Throwable -> L154
        L152:
            com.loc.fx.g = r9     // Catch: java.lang.Throwable -> L154
        L154:
            return
    }

    public static void a(java.lang.String r1, int r2) {
            java.lang.String r0 = java.lang.String.valueOf(r2)
            java.lang.String r2 = a(r2)
            a(r1, r0, r2)
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2) {
            com.loc.w r0 = com.loc.fr.c()     // Catch: java.lang.Throwable -> L8
            com.loc.av.b(r0, r2, r1)     // Catch: java.lang.Throwable -> L8
            return
        L8:
            r1 = move-exception
            java.lang.String r2 = "ReportUtil"
            java.lang.String r0 = "reportLog"
            com.loc.fr.a(r1, r2, r0)
            return
    }

    public static void a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            com.loc.w r0 = com.loc.fr.c()     // Catch: java.lang.Throwable -> L9
            java.lang.String r1 = "/mobile/binary"
            com.loc.av.a(r0, r1, r4, r2, r3)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    public static void a(java.lang.String r1, java.lang.Throwable r2) {
            boolean r0 = r2 instanceof com.loc.k     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Ld
            com.loc.w r0 = com.loc.fr.c()     // Catch: java.lang.Throwable -> Ld
            com.loc.k r2 = (com.loc.k) r2     // Catch: java.lang.Throwable -> Ld
            com.loc.av.a(r0, r1, r2)     // Catch: java.lang.Throwable -> Ld
        Ld:
            return
    }

    private static boolean a(com.amap.api.location.AMapLocation r7) {
            boolean r0 = com.loc.fz.a(r7)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L18
            double r3 = r7.getLatitude()
            double r5 = r7.getLongitude()
            boolean r7 = com.loc.fr.a(r3, r5)
            if (r7 == 0) goto L17
            return r2
        L17:
            return r1
        L18:
            java.lang.String r7 = com.loc.fr.c
            java.lang.String r0 = "http://abroad.apilocate.amap.com/mobile/binary"
            boolean r7 = r0.equals(r7)
            if (r7 == 0) goto L23
            return r1
        L23:
            return r2
    }

    public static void b(android.content.Context r1, long r2, boolean r4) {
            if (r1 == 0) goto L17
            boolean r0 = com.loc.fq.a()     // Catch: java.lang.Throwable -> Lf
            if (r0 != 0) goto L9
            goto L17
        L9:
            java.lang.String r0 = "O024"
            a(r1, r2, r4, r0)     // Catch: java.lang.Throwable -> Lf
            return
        Lf:
            r1 = move-exception
            java.lang.String r2 = "ReportUtil"
            java.lang.String r3 = "reportCoarseLocUseTime"
            com.loc.fr.a(r1, r2, r3)
        L17:
            return
    }

    private static void f(android.content.Context r3) {
            org.json.JSONArray r0 = com.loc.fx.j     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto L21
            org.json.JSONArray r0 = com.loc.fx.j     // Catch: java.lang.Throwable -> L22
            int r0 = r0.length()     // Catch: java.lang.Throwable -> L22
            if (r0 <= 0) goto L21
            com.loc.w r0 = com.loc.fr.c()     // Catch: java.lang.Throwable -> L22
            com.loc.bx r1 = new com.loc.bx     // Catch: java.lang.Throwable -> L22
            org.json.JSONArray r2 = com.loc.fx.j     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L22
            r1.<init>(r3, r0, r2)     // Catch: java.lang.Throwable -> L22
            com.loc.by.a(r1, r3)     // Catch: java.lang.Throwable -> L22
            r3 = 0
            com.loc.fx.j = r3     // Catch: java.lang.Throwable -> L22
        L21:
            return
        L22:
            r3 = move-exception
            java.lang.String r0 = "ReportUtil"
            java.lang.String r1 = "writeOfflineLocLog"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    public final void a(android.content.Context r9, int r10) {
            r8 = this;
            int r0 = r8.b     // Catch: java.lang.Throwable -> L49
            if (r0 != r10) goto L5
            return
        L5:
            int r0 = r8.b     // Catch: java.lang.Throwable -> L49
            r1 = -1
            r2 = 0
            if (r0 == r1) goto L35
            int r0 = r8.b     // Catch: java.lang.Throwable -> L49
            if (r0 == r10) goto L35
            long r0 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L49
            long r4 = r8.c     // Catch: java.lang.Throwable -> L49
            long r0 = r0 - r4
            android.util.SparseArray<java.lang.Long> r4 = r8.a     // Catch: java.lang.Throwable -> L49
            int r5 = r8.b     // Catch: java.lang.Throwable -> L49
            java.lang.Long r6 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L49
            java.lang.Object r4 = r4.get(r5, r6)     // Catch: java.lang.Throwable -> L49
            java.lang.Long r4 = (java.lang.Long) r4     // Catch: java.lang.Throwable -> L49
            long r4 = r4.longValue()     // Catch: java.lang.Throwable -> L49
            android.util.SparseArray<java.lang.Long> r6 = r8.a     // Catch: java.lang.Throwable -> L49
            int r7 = r8.b     // Catch: java.lang.Throwable -> L49
            long r0 = r0 + r4
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L49
            r6.append(r7, r0)     // Catch: java.lang.Throwable -> L49
        L35:
            java.lang.String r0 = "pref1"
            java.lang.String[] r1 = r8.d     // Catch: java.lang.Throwable -> L49
            r1 = r1[r10]     // Catch: java.lang.Throwable -> L49
            long r0 = com.loc.fy.a(r9, r0, r1, r2)     // Catch: java.lang.Throwable -> L49
            long r2 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L49
            long r2 = r2 - r0
            r8.c = r2     // Catch: java.lang.Throwable -> L49
            r8.b = r10     // Catch: java.lang.Throwable -> L49
            return
        L49:
            r9 = move-exception
            java.lang.String r10 = "ReportUtil"
            java.lang.String r0 = "setLocationType"
            com.loc.fr.a(r9, r10, r0)
            return
    }

    public final void a(android.content.Context r10, com.amap.api.location.AMapLocationClientOption r11) {
            r9 = this;
            int[] r0 = com.loc.fx.1.a     // Catch: java.lang.Throwable -> L63
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r11 = r11.getLocationMode()     // Catch: java.lang.Throwable -> L63
            int r11 = r11.ordinal()     // Catch: java.lang.Throwable -> L63
            r11 = r0[r11]     // Catch: java.lang.Throwable -> L63
            r0 = 1
            r1 = 3
            r2 = -1
            if (r11 == r0) goto L1a
            r0 = 2
            if (r11 == r0) goto L18
            if (r11 == r1) goto L1b
            r1 = -1
            goto L1b
        L18:
            r1 = 5
            goto L1b
        L1a:
            r1 = 4
        L1b:
            int r11 = r9.e     // Catch: java.lang.Throwable -> L63
            if (r11 != r1) goto L20
            return
        L20:
            int r11 = r9.e     // Catch: java.lang.Throwable -> L63
            r3 = 0
            if (r11 == r2) goto L4f
            int r11 = r9.e     // Catch: java.lang.Throwable -> L63
            if (r11 == r1) goto L4f
            long r5 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L63
            long r7 = r9.f     // Catch: java.lang.Throwable -> L63
            long r5 = r5 - r7
            android.util.SparseArray<java.lang.Long> r11 = r9.a     // Catch: java.lang.Throwable -> L63
            int r0 = r9.e     // Catch: java.lang.Throwable -> L63
            java.lang.Long r2 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L63
            java.lang.Object r11 = r11.get(r0, r2)     // Catch: java.lang.Throwable -> L63
            java.lang.Long r11 = (java.lang.Long) r11     // Catch: java.lang.Throwable -> L63
            long r7 = r11.longValue()     // Catch: java.lang.Throwable -> L63
            android.util.SparseArray<java.lang.Long> r11 = r9.a     // Catch: java.lang.Throwable -> L63
            int r0 = r9.e     // Catch: java.lang.Throwable -> L63
            long r5 = r5 + r7
            java.lang.Long r2 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L63
            r11.append(r0, r2)     // Catch: java.lang.Throwable -> L63
        L4f:
            java.lang.String r11 = "pref1"
            java.lang.String[] r0 = r9.d     // Catch: java.lang.Throwable -> L63
            r0 = r0[r1]     // Catch: java.lang.Throwable -> L63
            long r10 = com.loc.fy.a(r10, r11, r0, r3)     // Catch: java.lang.Throwable -> L63
            long r2 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L63
            long r2 = r2 - r10
            r9.f = r2     // Catch: java.lang.Throwable -> L63
            r9.e = r1     // Catch: java.lang.Throwable -> L63
            return
        L63:
            r10 = move-exception
            java.lang.String r11 = "ReportUtil"
            java.lang.String r0 = "setLocationMode"
            com.loc.fr.a(r10, r11, r0)
            return
    }

    public final void b(android.content.Context r11) {
            r10 = this;
            java.lang.String r0 = "pref1"
            long r1 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L8f
            long r3 = r10.c     // Catch: java.lang.Throwable -> L8f
            long r1 = r1 - r3
            int r3 = r10.b     // Catch: java.lang.Throwable -> L8f
            r4 = -1
            r5 = 0
            if (r3 == r4) goto L2e
            android.util.SparseArray<java.lang.Long> r3 = r10.a     // Catch: java.lang.Throwable -> L8f
            int r7 = r10.b     // Catch: java.lang.Throwable -> L8f
            java.lang.Long r8 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L8f
            java.lang.Object r3 = r3.get(r7, r8)     // Catch: java.lang.Throwable -> L8f
            java.lang.Long r3 = (java.lang.Long) r3     // Catch: java.lang.Throwable -> L8f
            long r7 = r3.longValue()     // Catch: java.lang.Throwable -> L8f
            android.util.SparseArray<java.lang.Long> r3 = r10.a     // Catch: java.lang.Throwable -> L8f
            int r9 = r10.b     // Catch: java.lang.Throwable -> L8f
            long r1 = r1 + r7
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L8f
            r3.append(r9, r1)     // Catch: java.lang.Throwable -> L8f
        L2e:
            long r1 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L8f
            long r7 = r10.f     // Catch: java.lang.Throwable -> L8f
            long r1 = r1 - r7
            int r3 = r10.e     // Catch: java.lang.Throwable -> L8f
            if (r3 == r4) goto L57
            android.util.SparseArray<java.lang.Long> r3 = r10.a     // Catch: java.lang.Throwable -> L8f
            int r4 = r10.e     // Catch: java.lang.Throwable -> L8f
            java.lang.Long r7 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L8f
            java.lang.Object r3 = r3.get(r4, r7)     // Catch: java.lang.Throwable -> L8f
            java.lang.Long r3 = (java.lang.Long) r3     // Catch: java.lang.Throwable -> L8f
            long r3 = r3.longValue()     // Catch: java.lang.Throwable -> L8f
            android.util.SparseArray<java.lang.Long> r7 = r10.a     // Catch: java.lang.Throwable -> L8f
            int r8 = r10.e     // Catch: java.lang.Throwable -> L8f
            long r1 = r1 + r3
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L8f
            r7.append(r8, r1)     // Catch: java.lang.Throwable -> L8f
        L57:
            android.content.SharedPreferences$Editor r1 = com.loc.fy.a(r11, r0)     // Catch: java.lang.Throwable -> L8f
            r2 = 0
        L5c:
            java.lang.String[] r3 = r10.d     // Catch: java.lang.Throwable -> L8f
            int r3 = r3.length     // Catch: java.lang.Throwable -> L8f
            if (r2 >= r3) goto L8b
            android.util.SparseArray<java.lang.Long> r3 = r10.a     // Catch: java.lang.Throwable -> L8f
            java.lang.Long r4 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L8f
            java.lang.Object r3 = r3.get(r2, r4)     // Catch: java.lang.Throwable -> L8f
            java.lang.Long r3 = (java.lang.Long) r3     // Catch: java.lang.Throwable -> L8f
            long r3 = r3.longValue()     // Catch: java.lang.Throwable -> L8f
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L88
            java.lang.String[] r7 = r10.d     // Catch: java.lang.Throwable -> L8f
            r7 = r7[r2]     // Catch: java.lang.Throwable -> L8f
            long r7 = com.loc.fy.a(r11, r0, r7, r5)     // Catch: java.lang.Throwable -> L8f
            int r9 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r9 <= 0) goto L88
            java.lang.String[] r7 = r10.d     // Catch: java.lang.Throwable -> L8f
            r7 = r7[r2]     // Catch: java.lang.Throwable -> L8f
            com.loc.fy.a(r1, r7, r3)     // Catch: java.lang.Throwable -> L8f
        L88:
            int r2 = r2 + 1
            goto L5c
        L8b:
            com.loc.fy.a(r1)     // Catch: java.lang.Throwable -> L8f
            return
        L8f:
            r11 = move-exception
            java.lang.String r0 = "ReportUtil"
            java.lang.String r1 = "saveLocationTypeAndMode"
            com.loc.fr.a(r11, r0, r1)
            return
    }

    public final int c(android.content.Context r15) {
            r14 = this;
            java.lang.String r0 = "pref1"
            r1 = -1
            java.lang.String[] r2 = r14.d     // Catch: java.lang.Throwable -> L3f
            r3 = 2
            r2 = r2[r3]     // Catch: java.lang.Throwable -> L3f
            r4 = 0
            long r6 = com.loc.fy.a(r15, r0, r2, r4)     // Catch: java.lang.Throwable -> L3f
            java.lang.String[] r2 = r14.d     // Catch: java.lang.Throwable -> L3f
            r8 = 0
            r2 = r2[r8]     // Catch: java.lang.Throwable -> L3f
            long r9 = com.loc.fy.a(r15, r0, r2, r4)     // Catch: java.lang.Throwable -> L3f
            java.lang.String[] r2 = r14.d     // Catch: java.lang.Throwable -> L3f
            r11 = 1
            r2 = r2[r11]     // Catch: java.lang.Throwable -> L3f
            long r12 = com.loc.fy.a(r15, r0, r2, r4)     // Catch: java.lang.Throwable -> L3f
            int r15 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r15 != 0) goto L2d
            int r15 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r15 != 0) goto L2d
            int r15 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r15 != 0) goto L2d
            return r1
        L2d:
            long r9 = r9 - r6
            long r12 = r12 - r6
            int r15 = (r6 > r9 ? 1 : (r6 == r9 ? 0 : -1))
            if (r15 <= 0) goto L39
            int r15 = (r6 > r12 ? 1 : (r6 == r12 ? 0 : -1))
            if (r15 <= 0) goto L38
            return r3
        L38:
            return r11
        L39:
            int r15 = (r9 > r12 ? 1 : (r9 == r12 ? 0 : -1))
            if (r15 <= 0) goto L3e
            return r8
        L3e:
            return r11
        L3f:
            return r1
    }

    public final int d(android.content.Context r15) {
            r14 = this;
            java.lang.String r0 = "pref1"
            r1 = -1
            java.lang.String[] r2 = r14.d     // Catch: java.lang.Throwable -> L3d
            r3 = 3
            r2 = r2[r3]     // Catch: java.lang.Throwable -> L3d
            r4 = 0
            long r6 = com.loc.fy.a(r15, r0, r2, r4)     // Catch: java.lang.Throwable -> L3d
            java.lang.String[] r2 = r14.d     // Catch: java.lang.Throwable -> L3d
            r8 = 4
            r2 = r2[r8]     // Catch: java.lang.Throwable -> L3d
            long r9 = com.loc.fy.a(r15, r0, r2, r4)     // Catch: java.lang.Throwable -> L3d
            java.lang.String[] r2 = r14.d     // Catch: java.lang.Throwable -> L3d
            r11 = 5
            r2 = r2[r11]     // Catch: java.lang.Throwable -> L3d
            long r12 = com.loc.fy.a(r15, r0, r2, r4)     // Catch: java.lang.Throwable -> L3d
            int r15 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r15 != 0) goto L2d
            int r15 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r15 != 0) goto L2d
            int r15 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            if (r15 != 0) goto L2d
            return r1
        L2d:
            int r15 = (r6 > r9 ? 1 : (r6 == r9 ? 0 : -1))
            if (r15 <= 0) goto L37
            int r15 = (r6 > r12 ? 1 : (r6 == r12 ? 0 : -1))
            if (r15 <= 0) goto L36
            return r3
        L36:
            return r11
        L37:
            int r15 = (r9 > r12 ? 1 : (r9 == r12 ? 0 : -1))
            if (r15 <= 0) goto L3c
            return r8
        L3c:
            return r11
        L3d:
            return r1
    }

    public final void e(android.content.Context r5) {
            r4 = this;
            java.lang.String r0 = "pref1"
            android.content.SharedPreferences$Editor r5 = com.loc.fy.a(r5, r0)     // Catch: java.lang.Throwable -> L1b
            r0 = 0
        L7:
            java.lang.String[] r1 = r4.d     // Catch: java.lang.Throwable -> L1b
            int r1 = r1.length     // Catch: java.lang.Throwable -> L1b
            if (r0 >= r1) goto L18
            java.lang.String[] r1 = r4.d     // Catch: java.lang.Throwable -> L1b
            r1 = r1[r0]     // Catch: java.lang.Throwable -> L1b
            r2 = 0
            com.loc.fy.a(r5, r1, r2)     // Catch: java.lang.Throwable -> L1b
            int r0 = r0 + 1
            goto L7
        L18:
            com.loc.fy.a(r5)     // Catch: java.lang.Throwable -> L1b
        L1b:
            return
    }
}
