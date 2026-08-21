package com.tkay.core.common.l;

public final class g {
    static java.util.Random a;

    public static class a {
        public static final java.lang.String a = "com.android.vending";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            com.tkay.core.common.l.g.a = r0
            return
    }

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    public static double a(com.tkay.core.common.f.aj r2) {
            if (r2 == 0) goto L16
            boolean r0 = r2.Z()
            if (r0 == 0) goto L11
            com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
            double r0 = r0.b(r2)
            return r0
        L11:
            double r0 = r2.af()
            return r0
        L16:
            r0 = 0
            return r0
    }

    private static int a(int r3, int[] r4, int r5) {
            if (r4 != 0) goto L3
            return r5
        L3:
            int r0 = r4.length
            r1 = 0
        L5:
            if (r1 >= r0) goto Lf
            r2 = r4[r1]
            if (r3 != r2) goto Lc
            return r3
        Lc:
            int r1 = r1 + 1
            goto L5
        Lf:
            return r5
    }

    public static java.lang.String a() {
            java.lang.String r0 = "UA_6.1.74"
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto La
            java.lang.String r0 = "UA_0.0.0"
        La:
            return r0
    }

    public static java.lang.String a(android.content.Context r4) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.w()
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.String r4 = com.tkay.core.common.l.d.d(r4)
            r1.append(r4)
            java.lang.String r4 = "&"
            r1.append(r4)
            java.lang.String r2 = com.tkay.core.common.l.d.f()
            r1.append(r2)
            r1.append(r4)
            r1.append(r0)
            r1.append(r4)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            r1.append(r4)
            java.util.Random r4 = new java.util.Random
            r4.<init>()
            r0 = 10000(0x2710, float:1.4013E-41)
            int r4 = r4.nextInt(r0)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r4 = com.tkay.core.common.l.f.a(r4)
            return r4
    }

    public static java.lang.String a(com.tkay.core.common.f.h r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.p()
            r0.append(r1)
            java.lang.String r2 = r2.A()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r2 = com.tkay.core.common.l.f.a(r2)
            return r2
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2, long r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static java.util.List<com.tkay.core.common.f.aj> a(java.util.List<com.tkay.core.common.f.aj> r11) {
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.util.HashMap r1 = new java.util.HashMap
            r2 = 3
            r1.<init>(r2)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Collections.sort(r11)
            java.util.Iterator r11 = r11.iterator()
        L17:
            boolean r3 = r11.hasNext()
            r4 = 0
            if (r3 == 0) goto L68
            java.lang.Object r3 = r11.next()
            com.tkay.core.common.f.aj r3 = (com.tkay.core.common.f.aj) r3
            double r5 = a(r3)
            java.lang.String r7 = java.lang.String.valueOf(r5)
            java.lang.Object r7 = r0.get(r7)
            java.util.List r7 = (java.util.List) r7
            if (r7 != 0) goto L40
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            java.lang.String r8 = java.lang.String.valueOf(r5)
            r0.put(r8, r7)
        L40:
            java.lang.String r8 = java.lang.String.valueOf(r5)
            java.lang.Object r8 = r1.get(r8)
            java.lang.Integer r8 = (java.lang.Integer) r8
            if (r8 != 0) goto L50
            java.lang.Integer r8 = java.lang.Integer.valueOf(r4)
        L50:
            int r4 = r8.intValue()
            int r8 = r3.S()
            int r4 = r4 + r8
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r5 = java.lang.String.valueOf(r5)
            r1.put(r5, r4)
            r7.add(r3)
            goto L17
        L68:
            java.util.Set r11 = r0.entrySet()
            java.util.Iterator r11 = r11.iterator()
        L70:
            boolean r0 = r11.hasNext()
            if (r0 == 0) goto Le5
            java.lang.Object r0 = r11.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r3 = r0.getValue()
            java.util.List r3 = (java.util.List) r3
            int r5 = r3.size()
            r6 = 1
            if (r5 > r6) goto L8d
            r2.addAll(r3)
            goto L70
        L8d:
            java.lang.Object r0 = r0.getKey()
            java.lang.Object r0 = r1.get(r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
        L9b:
            int r5 = r3.size()
            if (r5 <= 0) goto L70
            int r5 = r3.size()
            if (r5 != r6) goto Lb4
            java.lang.Object r0 = r3.get(r4)
            com.tkay.core.common.f.aj r0 = (com.tkay.core.common.f.aj) r0
            r2.add(r0)
            r3.remove(r4)
            goto L70
        Lb4:
            java.util.Random r5 = com.tkay.core.common.l.g.a
            int r5 = r5.nextInt(r0)
            int r5 = r5 + r6
            java.util.Iterator r7 = r3.iterator()
            r8 = r4
        Lc0:
            boolean r9 = r7.hasNext()
            if (r9 == 0) goto L9b
            java.lang.Object r9 = r7.next()
            com.tkay.core.common.f.aj r9 = (com.tkay.core.common.f.aj) r9
            int r10 = r9.S()
            int r10 = r10 + r8
            if (r10 < r5) goto Ldf
            r2.add(r9)
            r3.remove(r9)
            int r5 = r9.S()
            int r0 = r0 - r5
            goto L9b
        Ldf:
            int r9 = r9.S()
            int r8 = r8 + r9
            goto Lc0
        Le5:
            return r2
    }

    public static org.json.JSONObject a(android.content.Context r5, java.lang.String r6, java.lang.String r7, int r8, int r9) {
            com.tkay.core.a.a r5 = com.tkay.core.a.a.a(r5)
            java.util.Map r5 = r5.a(r8)
            r8 = 0
            if (r5 == 0) goto L2f
            java.util.Collection r0 = r5.values()
            java.util.Iterator r0 = r0.iterator()
            r1 = r8
            r2 = r1
        L15:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L28
            java.lang.Object r3 = r0.next()
            com.tkay.core.common.f.ad r3 = (com.tkay.core.common.f.ad) r3
            int r4 = r3.c
            int r1 = r1 + r4
            int r3 = r3.d
            int r2 = r2 + r3
            goto L15
        L28:
            java.lang.Object r5 = r5.get(r7)
            com.tkay.core.common.f.ad r5 = (com.tkay.core.common.f.ad) r5
            goto L32
        L2f:
            r5 = 0
            r1 = r8
            r2 = r1
        L32:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r3 = "sr"
            java.lang.String r4 = "tp"
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L6b
            java.lang.String r3 = "rid"
            r0.put(r3, r6)     // Catch: java.lang.Exception -> L6b
            java.lang.String r6 = "ads"
            r0.put(r6, r1)     // Catch: java.lang.Exception -> L6b
            java.lang.String r6 = "ahs"
            r0.put(r6, r2)     // Catch: java.lang.Exception -> L6b
            java.lang.String r6 = "pds"
            if (r5 == 0) goto L54
            int r1 = r5.c     // Catch: java.lang.Exception -> L6b
            goto L55
        L54:
            r1 = r8
        L55:
            r0.put(r6, r1)     // Catch: java.lang.Exception -> L6b
            java.lang.String r6 = "phs"
            if (r5 == 0) goto L5e
            int r8 = r5.d     // Catch: java.lang.Exception -> L6b
        L5e:
            r0.put(r6, r8)     // Catch: java.lang.Exception -> L6b
            java.lang.String r5 = "ap"
            r0.put(r5, r9)     // Catch: java.lang.Exception -> L6b
            java.lang.String r5 = "tpl"
            r0.put(r5, r7)     // Catch: java.lang.Exception -> L6b
        L6b:
            return r0
    }

    public static void a(android.webkit.WebView r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "searchBoxjavaBridge_"
            r3.removeJavascriptInterface(r0)
            java.lang.String r0 = "accessibility"
            r3.removeJavascriptInterface(r0)
            java.lang.String r0 = "accessibilityTraversal"
            r3.removeJavascriptInterface(r0)
            android.webkit.WebSettings r0 = r3.getSettings()
            r1 = 0
            r0.setAllowFileAccess(r1)
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r0 < r2) goto L2e
            android.webkit.WebSettings r0 = r3.getSettings()
            r0.setAllowFileAccessFromFileURLs(r1)
            android.webkit.WebSettings r0 = r3.getSettings()
            r0.setAllowUniversalAccessFromFileURLs(r1)
        L2e:
            android.webkit.WebSettings r3 = r3.getSettings()
            r3.setSavePassword(r1)
            return
    }

    public static void a(com.tkay.core.common.f.d r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto Lcb
            if (r3 == 0) goto Lcb
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r3.y()     // Catch: java.lang.Throwable -> Lc2
            if (r1 == 0) goto L1c
            java.lang.String r1 = "defaultAdSourceType"
            int r2 = r3.y()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lc2
        L1c:
            java.lang.String r1 = "placementId"
            java.lang.String r2 = r3.W()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r1 = "adType"
            java.lang.String r2 = r3.Z()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r1 = "mixedFormatAdType"
            int r2 = r3.L()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r1 = "action"
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "refresh"
            int r1 = r3.F()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r1)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "result"
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "segmentId"
            int r5 = r3.I()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "adSourceId"
            java.lang.String r5 = r3.x()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "position"
            int r5 = r3.z()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "networkType"
            int r5 = r3.H()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "networkName"
            java.lang.String r5 = r3.T()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "networkVersion"
            java.lang.String r5 = r3.u     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "networkUnit"
            java.lang.String r5 = r3.G()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "isHB"
            int r5 = r3.v()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "msg"
            r0.put(r4, r6)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "hourly_frequency"
            int r5 = r3.B()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "daily_frequency"
            int r5 = r3.C()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "network_list"
            java.lang.String r5 = r3.D()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "request_network_num"
            int r5 = r3.E()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r4 = "handle_class"
            java.lang.String r3 = r3.i()     // Catch: java.lang.Throwable -> Lc2
            r0.put(r4, r3)     // Catch: java.lang.Throwable -> Lc2
        Lc2:
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "network"
            com.tkay.core.common.l.n.a(r4, r3)
        Lcb:
            return
    }

    private static void a(java.lang.String r6, java.util.List<com.tkay.core.common.f.aj> r7) {
            if (r7 == 0) goto L6d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L69
            r0.<init>()     // Catch: java.lang.Throwable -> L69
            int r1 = r7.size()     // Catch: java.lang.Throwable -> L69
            r2 = 0
        Lc:
            if (r2 >= r1) goto L61
            java.lang.Object r3 = r7.get(r2)     // Catch: java.lang.Throwable -> L69
            com.tkay.core.common.f.aj r3 = (com.tkay.core.common.f.aj) r3     // Catch: java.lang.Throwable -> L69
            java.lang.String r4 = "\n"
            r0.append(r4)     // Catch: java.lang.Throwable -> L69
            r0.append(r2)     // Catch: java.lang.Throwable -> L69
            java.lang.String r4 = " --> adSourceId: "
            r0.append(r4)     // Catch: java.lang.Throwable -> L69
            java.lang.String r4 = r3.t()     // Catch: java.lang.Throwable -> L69
            r0.append(r4)     // Catch: java.lang.Throwable -> L69
            java.lang.String r4 = ", "
            r0.append(r4)     // Catch: java.lang.Throwable -> L69
            java.lang.String r4 = r3.d()     // Catch: java.lang.Throwable -> L69
            r0.append(r4)     // Catch: java.lang.Throwable -> L69
            java.lang.String r4 = ", real: "
            r0.append(r4)     // Catch: java.lang.Throwable -> L69
            double r4 = r3.x()     // Catch: java.lang.Throwable -> L69
            r0.append(r4)     // Catch: java.lang.Throwable -> L69
            java.lang.String r4 = ", sort: "
            r0.append(r4)     // Catch: java.lang.Throwable -> L69
            double r4 = a(r3)     // Catch: java.lang.Throwable -> L69
            r0.append(r4)     // Catch: java.lang.Throwable -> L69
            java.lang.String r3 = r3.z()     // Catch: java.lang.Throwable -> L69
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L69
            if (r4 != 0) goto L5e
            java.lang.String r4 = ", errorMsg: "
            r0.append(r4)     // Catch: java.lang.Throwable -> L69
            r0.append(r3)     // Catch: java.lang.Throwable -> L69
        L5e:
            int r2 = r2 + 1
            goto Lc
        L61:
            java.lang.String r7 = r0.toString()     // Catch: java.lang.Throwable -> L69
            android.util.Log.e(r6, r7)     // Catch: java.lang.Throwable -> L69
            goto L6d
        L69:
            r6 = move-exception
            r6.printStackTrace()
        L6d:
            return
    }

    public static void a(java.util.List<com.tkay.core.common.f.aj> r11, com.tkay.core.common.f.aj r12, boolean r13) {
            if (r11 != 0) goto L3
            return
        L3:
            int r0 = r11.size()
            r1 = -1
            if (r13 == 0) goto L16
            int r2 = r12.a()
            if (r2 == r1) goto L12
            if (r0 != 0) goto L1c
        L12:
            r11.add(r12)
            return
        L16:
            if (r0 != 0) goto L1c
            r11.add(r12)
            return
        L1c:
            int r2 = r0 + (-1)
            r3 = 0
            r4 = r3
        L20:
            if (r4 >= r0) goto L51
            java.lang.Object r5 = r11.get(r4)
            com.tkay.core.common.f.aj r5 = (com.tkay.core.common.f.aj) r5
            r6 = 1
            if (r13 == 0) goto L35
            int r7 = r5.a()
            if (r7 != r1) goto L35
            r11.add(r4, r12)
            goto L4c
        L35:
            double r7 = a(r12)
            double r9 = a(r5)
            int r5 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r5 < 0) goto L45
            r11.add(r4, r12)
            goto L4c
        L45:
            if (r4 != r2) goto L4b
            r11.add(r12)
            goto L4c
        L4b:
            r6 = r3
        L4c:
            if (r6 != 0) goto L51
            int r4 = r4 + 1
            goto L20
        L51:
            return
    }

    public static void a(java.util.Map<java.lang.String, java.lang.Object> r2, com.tkay.core.common.f.d r3) {
            if (r3 == 0) goto L10
            int r0 = r3.H()
            r1 = 100000(0x186a0, float:1.4013E-40)
            if (r0 >= r1) goto L10
            java.lang.String r0 = "tkay_tracking_info"
            r2.put(r0, r3)
        L10:
            return
    }

    public static boolean a(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            java.lang.String r2 = "Invalid Channel("
            java.lang.String r3 = "tkay"
            if (r0 != 0) goto L35
            int r0 = r5.length()
            r4 = 128(0x80, float:1.8E-43)
            if (r0 > r4) goto L35
            java.lang.String r0 = "^([.A-Za-z0-9_-]){1,128}$"
            boolean r4 = java.util.regex.Pattern.matches(r0, r5)
            if (r4 == 0) goto L1d
            r5 = 1
            return r5
        L1d:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>(r2)
            r4.append(r5)
            java.lang.String r5 = "): contains some characters that are not in the "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = r4.toString()
            android.util.Log.e(r3, r5)
            return r1
        L35:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            r0.append(r5)
            java.lang.String r5 = "):Channel'length over 128"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            android.util.Log.e(r3, r5)
            return r1
    }

    private static boolean a(java.util.List<com.tkay.core.common.f.aj> r5, com.tkay.core.common.f.aj r6, com.tkay.core.common.f.aj r7, int r8, int r9, boolean r10) {
            r0 = 1
            if (r10 == 0) goto Le
            int r10 = r6.a()
            r1 = -1
            if (r10 != r1) goto Le
            r5.add(r8, r7)
            return r0
        Le:
            double r1 = a(r7)
            double r3 = a(r6)
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 < 0) goto L1e
            r5.add(r8, r7)
            return r0
        L1e:
            if (r8 != r9) goto L24
            r5.add(r7)
            return r0
        L24:
            r5 = 0
            return r5
    }

    public static java.lang.String b(java.lang.String r1, java.lang.String r2, long r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = a(r1, r2, r3)
            r0.append(r1)
            java.lang.String r1 = "_refresh"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static boolean b() {
            java.lang.String r0 = "age"
            r1 = 0
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L25
            java.util.Map r2 = r2.l()     // Catch: java.lang.Throwable -> L25
            if (r2 == 0) goto L25
            boolean r3 = r2.containsKey(r0)     // Catch: java.lang.Throwable -> L25
            if (r3 == 0) goto L25
            java.lang.Object r0 = r2.get(r0)     // Catch: java.lang.Throwable -> L25
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L25
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L25
            r2 = 13
            if (r0 > r2) goto L25
            r0 = 1
            r1 = r0
        L25:
            return r1
    }

    public static boolean b(android.content.Context r1) {
            com.tkay.core.common.l.q r0 = com.tkay.core.common.l.q.a()
            boolean r1 = r0.a(r1)
            return r1
    }

    public static boolean b(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            java.lang.String r2 = "Invalid SubChannel("
            java.lang.String r3 = "tkay"
            if (r0 != 0) goto L35
            int r0 = r5.length()
            r4 = 128(0x80, float:1.8E-43)
            if (r0 > r4) goto L35
            java.lang.String r0 = "^([.A-Za-z0-9_-]){1,128}$"
            boolean r4 = java.util.regex.Pattern.matches(r0, r5)
            if (r4 == 0) goto L1d
            r5 = 1
            return r5
        L1d:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>(r2)
            r4.append(r5)
            java.lang.String r5 = "):SubChannel contains some characters that are not in the "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = r4.toString()
            android.util.Log.e(r3, r5)
            return r1
        L35:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            r0.append(r5)
            java.lang.String r5 = "):SubChannel'length over 128"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            android.util.Log.e(r3, r5)
            return r1
    }

    public static boolean c() {
            com.tkay.core.common.l.q r0 = com.tkay.core.common.l.q.a()
            boolean r0 = r0.b()
            return r0
    }

    public static boolean c(android.content.Context r1) {
            com.tkay.core.common.l.q r0 = com.tkay.core.common.l.q.a()
            boolean r1 = r0.b(r1)
            return r1
    }

    public static boolean c(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            java.lang.String r2 = "Invalid Scenario("
            java.lang.String r3 = "tkay"
            if (r0 != 0) goto L32
            int r0 = r5.length()
            r4 = 14
            if (r0 != r4) goto L32
            java.lang.String r0 = "^[A-Za-z0-9]+$"
            boolean r0 = java.util.regex.Pattern.matches(r0, r5)
            if (r0 == 0) goto L1d
            r5 = 1
            return r5
        L1d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            r0.append(r5)
            java.lang.String r5 = "):Scenario contains some characters that are not in the [A-Za-z0-9]"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            android.util.Log.e(r3, r5)
            return r1
        L32:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            r0.append(r5)
            java.lang.String r5 = "):Scenario'length isn't 14"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            android.util.Log.e(r3, r5)
            return r1
    }

    private static java.lang.String d(android.content.Context r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.w()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.tkay.core.common.l.d.d(r2)
            r0.append(r2)
            java.lang.String r2 = com.tkay.core.common.l.d.f()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
        L25:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.tkay.core.common.l.f.a(r2)
            return r2
    }

    public static java.lang.String d(java.lang.String r5) {
            int r0 = r5.hashCode()
            r1 = 4
            r2 = 3
            r3 = 2
            r4 = 1
            switch(r0) {
                case 48: goto L34;
                case 49: goto L2a;
                case 50: goto L20;
                case 51: goto L16;
                case 52: goto Lc;
                default: goto Lb;
            }
        Lb:
            goto L3e
        Lc:
            java.lang.String r0 = "4"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L3e
            r5 = r1
            goto L3f
        L16:
            java.lang.String r0 = "3"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L3e
            r5 = r2
            goto L3f
        L20:
            java.lang.String r0 = "2"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L3e
            r5 = r3
            goto L3f
        L2a:
            java.lang.String r0 = "1"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L3e
            r5 = r4
            goto L3f
        L34:
            java.lang.String r0 = "0"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L3e
            r5 = 0
            goto L3f
        L3e:
            r5 = -1
        L3f:
            if (r5 == 0) goto L58
            if (r5 == r4) goto L55
            if (r5 == r3) goto L52
            if (r5 == r2) goto L4f
            if (r5 == r1) goto L4c
            java.lang.String r5 = ""
            return r5
        L4c:
            java.lang.String r5 = "Splash"
            return r5
        L4f:
            java.lang.String r5 = "Interstitial"
            return r5
        L52:
            java.lang.String r5 = "Banner"
            return r5
        L55:
            java.lang.String r5 = "RewardedVideo"
            return r5
        L58:
            java.lang.String r5 = "Native"
            return r5
    }
}
