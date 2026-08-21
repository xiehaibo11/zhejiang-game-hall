package com.tkay.core.common.l;

public final class n {
    public static final java.lang.String a = "tkay_bidding";

    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(java.lang.String r7, com.tkay.core.common.f.d r8, java.lang.String r9, com.tkay.core.common.f.aj r10, int r11, int r12) {
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            a(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    public static void a(java.lang.String r2, com.tkay.core.common.f.d r3, java.lang.String r4, com.tkay.core.common.f.aj r5, int r6, int r7, java.util.List<java.lang.String> r8) {
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto L7b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7b
            r0.<init>()     // Catch: java.lang.Throwable -> L7b
            java.lang.String r1 = "reason"
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r4 = "placementId"
            r0.put(r4, r2)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "adtype"
            java.lang.String r4 = r3.Z()     // Catch: java.lang.Throwable -> L7b
            r0.put(r2, r4)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "adsourceId"
            java.lang.String r4 = r5.t()     // Catch: java.lang.Throwable -> L7b
            r0.put(r2, r4)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "networkFirmId"
            int r4 = r5.c()     // Catch: java.lang.Throwable -> L7b
            r0.put(r2, r4)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "content"
            java.lang.String r3 = r3.G()     // Catch: java.lang.Throwable -> L7b
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "hourly_frequency"
            r0.put(r2, r6)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "hourly_limit"
            int r3 = r5.f()     // Catch: java.lang.Throwable -> L7b
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "daily_frequency"
            r0.put(r2, r7)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "daily_limit"
            int r3 = r5.e()     // Catch: java.lang.Throwable -> L7b
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "pacing_limit"
            long r3 = r5.s()     // Catch: java.lang.Throwable -> L7b
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "request_fail_interval"
            long r3 = r5.G()     // Catch: java.lang.Throwable -> L7b
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "filter_source_ids"
            if (r8 == 0) goto L6c
            goto L6e
        L6c:
            java.lang.String r8 = ""
        L6e:
            r0.put(r2, r8)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = "tkay_network"
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L7b
            r4 = 1
            a(r2, r3, r4)     // Catch: java.lang.Throwable -> L7b
        L7b:
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto L14
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = "tkay_"
            java.lang.String r1 = r0.concat(r1)
            r0 = 0
            a(r1, r2, r0)
        L14:
            return
    }

    public static void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, com.tkay.core.common.f.aj r6) {
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto L54
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L54
            r0.<init>()     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = "action"
            java.lang.String r2 = com.tkay.core.common.b.f.i.B     // Catch: java.lang.Throwable -> L54
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = "result"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = "placementId"
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = "adtype"
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = "adsourceId"
            java.lang.String r5 = r6.t()     // Catch: java.lang.Throwable -> L54
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = "networkFirmId"
            int r5 = r6.c()     // Catch: java.lang.Throwable -> L54
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = "content"
            java.lang.String r5 = r6.g()     // Catch: java.lang.Throwable -> L54
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = "msg"
            java.lang.String r5 = r6.z()     // Catch: java.lang.Throwable -> L54
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = "tkay_bidding"
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L54
            java.lang.String r6 = com.tkay.core.common.b.f.i.m     // Catch: java.lang.Throwable -> L54
            boolean r3 = android.text.TextUtils.equals(r6, r3)     // Catch: java.lang.Throwable -> L54
            a(r4, r5, r3)     // Catch: java.lang.Throwable -> L54
        L54:
            return
    }

    private static void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto L35
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35
            r0.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "action"
            java.lang.String r2 = com.tkay.core.common.b.f.i.C     // Catch: java.lang.Throwable -> L35
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "result"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "placementId"
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "adtype"
            r0.put(r4, r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "errorMsg"
            r0.put(r4, r6)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "tkay_network"
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L35
            java.lang.String r6 = com.tkay.core.common.b.f.i.m     // Catch: java.lang.Throwable -> L35
            boolean r3 = android.text.TextUtils.equals(r6, r3)     // Catch: java.lang.Throwable -> L35
            a(r4, r5, r3)     // Catch: java.lang.Throwable -> L35
        L35:
            return
    }

    public static void a(java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto L69
            r0 = -1
            int r1 = r7.hashCode()
            r2 = 4
            r3 = 3
            r4 = 2
            r5 = 1
            switch(r1) {
                case 48: goto L3b;
                case 49: goto L31;
                case 50: goto L27;
                case 51: goto L1d;
                case 52: goto L13;
                default: goto L12;
            }
        L12:
            goto L44
        L13:
            java.lang.String r1 = "4"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L44
            r0 = r2
            goto L44
        L1d:
            java.lang.String r1 = "3"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L44
            r0 = r3
            goto L44
        L27:
            java.lang.String r1 = "2"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L44
            r0 = r4
            goto L44
        L31:
            java.lang.String r1 = "1"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L44
            r0 = r5
            goto L44
        L3b:
            java.lang.String r1 = "0"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L44
            r0 = 0
        L44:
            if (r0 == 0) goto L5e
            if (r0 == r5) goto L5b
            if (r0 == r4) goto L58
            if (r0 == r3) goto L55
            if (r0 == r2) goto L52
            java.lang.String r7 = ""
        L50:
            r1 = r7
            goto L61
        L52:
            java.lang.String r7 = com.tkay.core.common.b.f.i.s
            goto L50
        L55:
            java.lang.String r7 = com.tkay.core.common.b.f.i.p
            goto L50
        L58:
            java.lang.String r7 = com.tkay.core.common.b.f.i.o
            goto L50
        L5b:
            java.lang.String r7 = com.tkay.core.common.b.f.i.q
            goto L50
        L5e:
            java.lang.String r7 = com.tkay.core.common.b.f.i.r
            goto L50
        L61:
            r5 = 0
            r0 = r6
            r2 = r8
            r3 = r9
            r4 = r10
            a(r0, r1, r2, r3, r4, r5)
        L69:
            return
    }

    public static void a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, boolean r7) {
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto Lbc
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lbc
            r0.<init>()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r1 = "placementId"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r1 = "adtype"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = "api"
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = "result"
            r0.put(r3, r5)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = "reason"
            r0.put(r3, r6)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = ""
            if (r7 == 0) goto L9b
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lbc
            if (r4 != 0) goto L95
            com.tkay.core.common.v r4 = com.tkay.core.common.v.a()     // Catch: java.lang.Throwable -> Lbc
            java.util.Map r2 = r4.b(r2)     // Catch: java.lang.Throwable -> Lbc
            int r4 = r2.size()     // Catch: java.lang.Throwable -> Lbc
            if (r4 <= 0) goto L95
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Throwable -> Lbc
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> Lbc
            r4 = r3
        L45:
            boolean r5 = r2.hasNext()     // Catch: java.lang.Throwable -> Lbc
            if (r5 == 0) goto L81
            java.lang.Object r5 = r2.next()     // Catch: java.lang.Throwable -> Lbc
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5     // Catch: java.lang.Throwable -> Lbc
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            r6.<init>()     // Catch: java.lang.Throwable -> Lbc
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = "key="
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.Object r4 = r5.getKey()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Lbc
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = ",value="
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.Object r4 = r5.getValue()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lbc
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = ";"
            r6.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> Lbc
            goto L45
        L81:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r5 = "["
            r2.<init>(r5)     // Catch: java.lang.Throwable -> Lbc
            r2.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = "]"
            r2.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lbc
            goto L96
        L95:
            r2 = r3
        L96:
            java.lang.String r4 = "extra"
            r0.put(r4, r2)     // Catch: java.lang.Throwable -> Lbc
        L9b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = "tkay_network"
            r2.<init>(r4)     // Catch: java.lang.Throwable -> Lbc
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lbc
            boolean r4 = r4.u()     // Catch: java.lang.Throwable -> Lbc
            if (r4 == 0) goto Lae
            java.lang.String r3 = "(DebuggerMode)"
        Lae:
            r2.append(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> Lbc
            android.util.Log.i(r2, r3)     // Catch: java.lang.Throwable -> Lbc
        Lbc:
            return
    }

    public static void a(java.lang.String r5, java.lang.String r6, boolean r7) {
            java.lang.String r0 = "line.separator"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            java.lang.String r1 = "{"
            boolean r1 = r6.startsWith(r1)     // Catch: org.json.JSONException -> L2a
            r2 = 4
            if (r1 == 0) goto L19
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2a
            r1.<init>(r6)     // Catch: org.json.JSONException -> L2a
            java.lang.String r6 = r1.toString(r2)     // Catch: org.json.JSONException -> L2a
            goto L2a
        L19:
            java.lang.String r1 = "["
            boolean r1 = r6.startsWith(r1)     // Catch: org.json.JSONException -> L2a
            if (r1 == 0) goto L2a
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: org.json.JSONException -> L2a
            r1.<init>(r6)     // Catch: org.json.JSONException -> L2a
            java.lang.String r6 = r1.toString(r2)     // Catch: org.json.JSONException -> L2a
        L2a:
            java.lang.String[] r6 = r6.split(r0)
            int r0 = r6.length
            r1 = 0
            java.lang.String r2 = "╔═══════════════════════════════════════════════════════════════════════════════════════"
        L32:
            if (r1 >= r0) goto L5e
            r3 = r6[r1]
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r2 = "\n"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r2 = "║ "
            r4.append(r2)
            r4.append(r3)
            java.lang.String r2 = r4.toString()
            int r1 = r1 + 1
            goto L32
        L5e:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r2)
            java.lang.String r0 = "\n╚═══════════════════════════════════════════════════════════════════════════════════════"
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            java.lang.String r0 = " \n"
            java.lang.String r1 = "(DebuggerMode)"
            java.lang.String r2 = ""
            if (r7 == 0) goto L9e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r5)
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            boolean r5 = r5.u()
            if (r5 == 0) goto L8a
            goto L8b
        L8a:
            r1 = r2
        L8b:
            r7.append(r1)
            java.lang.String r5 = r7.toString()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r6 = r0.concat(r6)
            android.util.Log.e(r5, r6)
            return
        L9e:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r5)
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            boolean r5 = r5.u()
            if (r5 == 0) goto Lb1
            goto Lb2
        Lb1:
            r1 = r2
        Lb2:
            r7.append(r1)
            java.lang.String r5 = r7.toString()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r6 = r0.concat(r6)
            android.util.Log.i(r5, r6)
            return
    }

    private static void b(java.lang.String r1, java.lang.String r2) {
            r0 = 0
            a(r1, r2, r0)
            return
    }

    public static void b(java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            a(r0, r1, r2, r3, r4, r5)
            return
    }
}
