package com.xiaomi.push;

public class cv {
    protected static android.content.Context a;
    private static com.xiaomi.push.cv.a a;
    private static com.xiaomi.push.cv a;
    protected static boolean a;
    protected static final java.util.Map<java.lang.String, com.xiaomi.push.cr> b = null;
    private static java.lang.String c;
    private static java.lang.String d;
    private long a;
    private com.xiaomi.push.cu a;
    protected com.xiaomi.push.cv.b a;
    private java.lang.String a;
    protected final java.util.Map<java.lang.String, com.xiaomi.push.cs> a;
    private final long b;
    private java.lang.String b;
    private long c;

    public interface a {
        com.xiaomi.push.cv a(android.content.Context r1, com.xiaomi.push.cu r2, com.xiaomi.push.cv.b r3, java.lang.String r4);
    }

    public interface b {
        java.lang.String a(java.lang.String r1);
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.push.cv.b = r0
            r0 = 0
            com.xiaomi.push.cv.a = r0
            return
    }

    protected cv(android.content.Context r8, com.xiaomi.push.cu r9, com.xiaomi.push.cv.b r10, java.lang.String r11) {
            r7 = this;
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    protected cv(android.content.Context r5, com.xiaomi.push.cu r6, com.xiaomi.push.cv.b r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r4 = this;
            r4.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.a = r0
            java.lang.String r0 = "0"
            r4.a = r0
            r0 = 0
            r4.a = r0
            r2 = 15
            r4.b = r2
            r4.c = r0
            java.lang.String r0 = "isp_prov_city_country_ip"
            r4.b = r0
            r4.a = r7
            if (r6 != 0) goto L25
            com.xiaomi.push.cw r6 = new com.xiaomi.push.cw
            r6.<init>(r4)
        L25:
            r4.a = r6
            r4.a = r8
            if (r9 == 0) goto L2c
            goto L30
        L2c:
            java.lang.String r9 = r5.getPackageName()
        L30:
            com.xiaomi.push.cv.c = r9
            if (r10 == 0) goto L35
            goto L39
        L35:
            java.lang.String r10 = r4.f()
        L39:
            com.xiaomi.push.cv.d = r10
            return
    }

    public static synchronized com.xiaomi.push.cv a() {
            java.lang.Class<com.xiaomi.push.cv> r0 = com.xiaomi.push.cv.class
            monitor-enter(r0)
            com.xiaomi.push.cv r1 = com.xiaomi.push.cv.a     // Catch: java.lang.Throwable -> L13
            if (r1 == 0) goto Lb
            com.xiaomi.push.cv r1 = com.xiaomi.push.cv.a     // Catch: java.lang.Throwable -> L13
            monitor-exit(r0)
            return r1
        Lb:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L13
            java.lang.String r2 = "the host manager is not initialized yet."
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L13
            throw r1     // Catch: java.lang.Throwable -> L13
        L13:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static java.lang.String a() {
            android.content.Context r0 = com.xiaomi.push.cv.a
            java.lang.String r1 = "unknown"
            if (r0 != 0) goto L7
            return r1
        L7:
            java.lang.String r2 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r2)     // Catch: java.lang.Throwable -> L40
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0     // Catch: java.lang.Throwable -> L40
            if (r0 != 0) goto L12
            return r1
        L12:
            android.net.NetworkInfo r0 = r0.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L40
            if (r0 != 0) goto L19
            return r1
        L19:
            int r2 = r0.getType()     // Catch: java.lang.Throwable -> L40
            r3 = 1
            if (r2 != r3) goto L23
            java.lang.String r0 = "WIFI-UNKNOWN"
            return r0
        L23:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L40
            r2.<init>()     // Catch: java.lang.Throwable -> L40
            java.lang.String r3 = r0.getTypeName()     // Catch: java.lang.Throwable -> L40
            r2.append(r3)     // Catch: java.lang.Throwable -> L40
            java.lang.String r3 = "-"
            r2.append(r3)     // Catch: java.lang.Throwable -> L40
            java.lang.String r0 = r0.getSubtypeName()     // Catch: java.lang.Throwable -> L40
            r2.append(r0)     // Catch: java.lang.Throwable -> L40
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L40
            return r0
        L40:
            return r1
    }

    static java.lang.String a(java.lang.String r6) {
            int r0 = r6.length()     // Catch: java.io.UnsupportedEncodingException -> L2c
            java.lang.String r1 = "UTF-8"
            byte[] r1 = r6.getBytes(r1)     // Catch: java.io.UnsupportedEncodingException -> L2c
            r2 = 0
        Lb:
            int r3 = r1.length     // Catch: java.io.UnsupportedEncodingException -> L2c
            if (r2 >= r3) goto L26
            r3 = r1[r2]     // Catch: java.io.UnsupportedEncodingException -> L2c
            r4 = r3 & 240(0xf0, float:3.36E-43)
            r5 = 240(0xf0, float:3.36E-43)
            if (r4 == r5) goto L23
            int r5 = r3 >> 4
            int r5 = r5 + r0
            r5 = r5 & 15
            byte r5 = (byte) r5     // Catch: java.io.UnsupportedEncodingException -> L2c
            r3 = r3 & 15
            r3 = r3 ^ r5
            r3 = r3 | r4
            byte r3 = (byte) r3     // Catch: java.io.UnsupportedEncodingException -> L2c
            r1[r2] = r3     // Catch: java.io.UnsupportedEncodingException -> L2c
        L23:
            int r2 = r2 + 1
            goto Lb
        L26:
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L2c
            r0.<init>(r1)     // Catch: java.io.UnsupportedEncodingException -> L2c
            return r0
        L2c:
            return r6
    }

    private java.util.ArrayList<com.xiaomi.push.cr> a(java.util.ArrayList<java.lang.String> r19) {
            r18 = this;
            r1 = r18
            r2 = r19
            r18.d()
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r3 = r1.a
            monitor-enter(r3)
            r18.a()     // Catch: java.lang.Throwable -> L262
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r0 = r1.a     // Catch: java.lang.Throwable -> L262
            java.util.Set r0 = r0.keySet()     // Catch: java.lang.Throwable -> L262
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L262
        L17:
            boolean r4 = r0.hasNext()     // Catch: java.lang.Throwable -> L262
            if (r4 == 0) goto L2d
            java.lang.Object r4 = r0.next()     // Catch: java.lang.Throwable -> L262
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L262
            boolean r5 = r2.contains(r4)     // Catch: java.lang.Throwable -> L262
            if (r5 != 0) goto L17
            r2.add(r4)     // Catch: java.lang.Throwable -> L262
            goto L17
        L2d:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L262
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r4 = com.xiaomi.push.cv.b
            monitor-enter(r4)
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r0 = com.xiaomi.push.cv.b     // Catch: java.lang.Throwable -> L25f
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L25f
            java.lang.Object[] r0 = r0.toArray()     // Catch: java.lang.Throwable -> L25f
            int r3 = r0.length     // Catch: java.lang.Throwable -> L25f
            r6 = 0
        L3d:
            if (r6 >= r3) goto L53
            r7 = r0[r6]     // Catch: java.lang.Throwable -> L25f
            com.xiaomi.push.cr r7 = (com.xiaomi.push.cr) r7     // Catch: java.lang.Throwable -> L25f
            boolean r8 = r7.b()     // Catch: java.lang.Throwable -> L25f
            if (r8 != 0) goto L50
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r8 = com.xiaomi.push.cv.b     // Catch: java.lang.Throwable -> L25f
            java.lang.String r7 = r7.b     // Catch: java.lang.Throwable -> L25f
            r8.remove(r7)     // Catch: java.lang.Throwable -> L25f
        L50:
            int r6 = r6 + 1
            goto L3d
        L53:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L25f
            java.lang.String r0 = r18.b()
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L65
            java.lang.String r0 = r18.b()
            r2.add(r0)
        L65:
            java.util.ArrayList r3 = new java.util.ArrayList
            int r0 = r19.size()
            r3.<init>(r0)
            r0 = 0
        L6f:
            int r4 = r19.size()
            if (r0 >= r4) goto L7c
            r4 = 0
            r3.add(r4)
            int r0 = r0 + 1
            goto L6f
        L7c:
            android.content.Context r0 = com.xiaomi.push.cv.a     // Catch: java.lang.Exception -> L227
            boolean r0 = com.xiaomi.push.bj.e(r0)     // Catch: java.lang.Exception -> L227
            if (r0 == 0) goto L87
            java.lang.String r0 = "wifi"
            goto L89
        L87:
            java.lang.String r0 = "wap"
        L89:
            java.lang.String r4 = r1.a     // Catch: java.lang.Exception -> L227
            r6 = 1
            java.lang.String r4 = r1.a(r2, r0, r4, r6)     // Catch: java.lang.Exception -> L227
            boolean r6 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L227
            if (r6 != 0) goto L240
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> L227
            r6.<init>(r4)     // Catch: java.lang.Exception -> L227
            com.xiaomi.channel.commonutils.logger.b.b(r4)     // Catch: java.lang.Exception -> L227
            java.lang.String r4 = "OK"
            java.lang.String r7 = "S"
            java.lang.String r7 = r6.getString(r7)     // Catch: java.lang.Exception -> L227
            boolean r4 = r4.equalsIgnoreCase(r7)     // Catch: java.lang.Exception -> L227
            if (r4 == 0) goto L240
            java.lang.String r4 = "R"
            org.json.JSONObject r4 = r6.getJSONObject(r4)     // Catch: java.lang.Exception -> L227
            java.lang.String r6 = "province"
            java.lang.String r6 = r4.getString(r6)     // Catch: java.lang.Exception -> L227
            java.lang.String r7 = "city"
            java.lang.String r7 = r4.getString(r7)     // Catch: java.lang.Exception -> L227
            java.lang.String r8 = "isp"
            java.lang.String r8 = r4.getString(r8)     // Catch: java.lang.Exception -> L227
            java.lang.String r9 = "ip"
            java.lang.String r9 = r4.getString(r9)     // Catch: java.lang.Exception -> L227
            java.lang.String r10 = "country"
            java.lang.String r10 = r4.getString(r10)     // Catch: java.lang.Exception -> L227
            org.json.JSONObject r0 = r4.getJSONObject(r0)     // Catch: java.lang.Exception -> L227
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L227
            r11.<init>()     // Catch: java.lang.Exception -> L227
            java.lang.String r12 = "get bucket: net="
            r11.append(r12)     // Catch: java.lang.Exception -> L227
            r11.append(r8)     // Catch: java.lang.Exception -> L227
            java.lang.String r12 = ", hosts="
            r11.append(r12)     // Catch: java.lang.Exception -> L227
            java.lang.String r12 = r0.toString()     // Catch: java.lang.Exception -> L227
            r11.append(r12)     // Catch: java.lang.Exception -> L227
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> L227
            com.xiaomi.channel.commonutils.logger.b.c(r11)     // Catch: java.lang.Exception -> L227
            r11 = 0
        Lf5:
            int r12 = r19.size()     // Catch: java.lang.Exception -> L227
            if (r11 >= r12) goto L1a0
            java.lang.Object r12 = r2.get(r11)     // Catch: java.lang.Exception -> L227
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Exception -> L227
            org.json.JSONArray r15 = r0.optJSONArray(r12)     // Catch: java.lang.Exception -> L227
            if (r15 != 0) goto L11f
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L227
            r13.<init>()     // Catch: java.lang.Exception -> L227
            java.lang.String r14 = "no bucket found for "
            r13.append(r14)     // Catch: java.lang.Exception -> L227
            r13.append(r12)     // Catch: java.lang.Exception -> L227
            java.lang.String r12 = r13.toString()     // Catch: java.lang.Exception -> L227
            com.xiaomi.channel.commonutils.logger.b.a(r12)     // Catch: java.lang.Exception -> L227
            r17 = r0
            goto L19a
        L11f:
            com.xiaomi.push.cr r5 = new com.xiaomi.push.cr     // Catch: java.lang.Exception -> L227
            r5.<init>(r12)     // Catch: java.lang.Exception -> L227
            r12 = 0
        L125:
            int r13 = r15.length()     // Catch: java.lang.Exception -> L227
            if (r12 >= r13) goto L14d
            java.lang.String r13 = r15.getString(r12)     // Catch: java.lang.Exception -> L227
            boolean r14 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Exception -> L227
            if (r14 != 0) goto L146
            com.xiaomi.push.da r14 = new com.xiaomi.push.da     // Catch: java.lang.Exception -> L227
            int r16 = r15.length()     // Catch: java.lang.Exception -> L227
            r17 = r0
            int r0 = r16 - r12
            r14.<init>(r13, r0)     // Catch: java.lang.Exception -> L227
            r5.a(r14)     // Catch: java.lang.Exception -> L227
            goto L148
        L146:
            r17 = r0
        L148:
            int r12 = r12 + 1
            r0 = r17
            goto L125
        L14d:
            r17 = r0
            r3.set(r11, r5)     // Catch: java.lang.Exception -> L227
            r5.g = r10     // Catch: java.lang.Exception -> L227
            r5.c = r6     // Catch: java.lang.Exception -> L227
            r5.e = r8     // Catch: java.lang.Exception -> L227
            r5.f = r9     // Catch: java.lang.Exception -> L227
            r5.d = r7     // Catch: java.lang.Exception -> L227
            java.lang.String r0 = "stat-percent"
            boolean r0 = r4.has(r0)     // Catch: java.lang.Exception -> L227
            if (r0 == 0) goto L16d
            java.lang.String r0 = "stat-percent"
            double r12 = r4.getDouble(r0)     // Catch: java.lang.Exception -> L227
            r5.a(r12)     // Catch: java.lang.Exception -> L227
        L16d:
            java.lang.String r0 = "stat-domain"
            boolean r0 = r4.has(r0)     // Catch: java.lang.Exception -> L227
            if (r0 == 0) goto L17e
            java.lang.String r0 = "stat-domain"
            java.lang.String r0 = r4.getString(r0)     // Catch: java.lang.Exception -> L227
            r5.b(r0)     // Catch: java.lang.Exception -> L227
        L17e:
            java.lang.String r0 = "ttl"
            boolean r0 = r4.has(r0)     // Catch: java.lang.Exception -> L227
            if (r0 == 0) goto L193
            java.lang.String r0 = "ttl"
            int r0 = r4.getInt(r0)     // Catch: java.lang.Exception -> L227
            long r12 = (long) r0     // Catch: java.lang.Exception -> L227
            r14 = 1000(0x3e8, double:4.94E-321)
            long r12 = r12 * r14
            r5.a(r12)     // Catch: java.lang.Exception -> L227
        L193:
            java.lang.String r0 = r5.a()     // Catch: java.lang.Exception -> L227
            r1.a(r0)     // Catch: java.lang.Exception -> L227
        L19a:
            int r11 = r11 + 1
            r0 = r17
            goto Lf5
        L1a0:
            java.lang.String r0 = "reserved"
            org.json.JSONObject r0 = r4.optJSONObject(r0)     // Catch: java.lang.Exception -> L227
            if (r0 == 0) goto L240
            r5 = 604800000(0x240c8400, double:2.988109026E-315)
            java.lang.String r7 = "reserved-ttl"
            boolean r7 = r4.has(r7)     // Catch: java.lang.Exception -> L227
            if (r7 == 0) goto L1be
            java.lang.String r5 = "reserved-ttl"
            int r4 = r4.getInt(r5)     // Catch: java.lang.Exception -> L227
            long r4 = (long) r4     // Catch: java.lang.Exception -> L227
            r6 = 1000(0x3e8, double:4.94E-321)
            long r5 = r4 * r6
        L1be:
            java.util.Iterator r4 = r0.keys()     // Catch: java.lang.Exception -> L227
        L1c2:
            boolean r7 = r4.hasNext()     // Catch: java.lang.Exception -> L227
            if (r7 == 0) goto L240
            java.lang.Object r7 = r4.next()     // Catch: java.lang.Exception -> L227
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L227
            org.json.JSONArray r8 = r0.optJSONArray(r7)     // Catch: java.lang.Exception -> L227
            if (r8 != 0) goto L1e9
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L227
            r8.<init>()     // Catch: java.lang.Exception -> L227
            java.lang.String r9 = "no bucket found for "
            r8.append(r9)     // Catch: java.lang.Exception -> L227
            r8.append(r7)     // Catch: java.lang.Exception -> L227
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Exception -> L227
            com.xiaomi.channel.commonutils.logger.b.a(r7)     // Catch: java.lang.Exception -> L227
            goto L1c2
        L1e9:
            com.xiaomi.push.cr r9 = new com.xiaomi.push.cr     // Catch: java.lang.Exception -> L227
            r9.<init>(r7)     // Catch: java.lang.Exception -> L227
            r9.a(r5)     // Catch: java.lang.Exception -> L227
            r10 = 0
        L1f2:
            int r11 = r8.length()     // Catch: java.lang.Exception -> L227
            if (r10 >= r11) goto L212
            java.lang.String r11 = r8.getString(r10)     // Catch: java.lang.Exception -> L227
            boolean r12 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L227
            if (r12 != 0) goto L20f
            com.xiaomi.push.da r12 = new com.xiaomi.push.da     // Catch: java.lang.Exception -> L227
            int r13 = r8.length()     // Catch: java.lang.Exception -> L227
            int r13 = r13 - r10
            r12.<init>(r11, r13)     // Catch: java.lang.Exception -> L227
            r9.a(r12)     // Catch: java.lang.Exception -> L227
        L20f:
            int r10 = r10 + 1
            goto L1f2
        L212:
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r8 = com.xiaomi.push.cv.b     // Catch: java.lang.Exception -> L227
            monitor-enter(r8)     // Catch: java.lang.Exception -> L227
            com.xiaomi.push.cu r10 = r1.a     // Catch: java.lang.Throwable -> L224
            boolean r10 = r10.a(r7)     // Catch: java.lang.Throwable -> L224
            if (r10 == 0) goto L222
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r10 = com.xiaomi.push.cv.b     // Catch: java.lang.Throwable -> L224
            r10.put(r7, r9)     // Catch: java.lang.Throwable -> L224
        L222:
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L224
            goto L1c2
        L224:
            r0 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L224
            throw r0     // Catch: java.lang.Exception -> L227
        L227:
            r0 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "failed to get bucket "
            r4.append(r5)
            java.lang.String r0 = r0.getMessage()
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L240:
            r5 = 0
        L241:
            int r0 = r19.size()
            if (r5 >= r0) goto L25b
            java.lang.Object r0 = r3.get(r5)
            com.xiaomi.push.cr r0 = (com.xiaomi.push.cr) r0
            if (r0 == 0) goto L258
            java.lang.Object r4 = r2.get(r5)
            java.lang.String r4 = (java.lang.String) r4
            r1.a(r4, r0)
        L258:
            int r5 = r5 + 1
            goto L241
        L25b:
            r18.c()
            return r3
        L25f:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L25f
            throw r0
        L262:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L262
            throw r0
    }

    public static synchronized void a(android.content.Context r9, com.xiaomi.push.cu r10, com.xiaomi.push.cv.b r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            java.lang.Class<com.xiaomi.push.cv> r0 = com.xiaomi.push.cv.class
            monitor-enter(r0)
            android.content.Context r1 = r9.getApplicationContext()     // Catch: java.lang.Throwable -> L2e
            com.xiaomi.push.cv.a = r1     // Catch: java.lang.Throwable -> L2e
            if (r1 != 0) goto Ld
            com.xiaomi.push.cv.a = r9     // Catch: java.lang.Throwable -> L2e
        Ld:
            com.xiaomi.push.cv r1 = com.xiaomi.push.cv.a     // Catch: java.lang.Throwable -> L2e
            if (r1 != 0) goto L2c
            com.xiaomi.push.cv$a r1 = com.xiaomi.push.cv.a     // Catch: java.lang.Throwable -> L2e
            if (r1 != 0) goto L24
            com.xiaomi.push.cv r1 = new com.xiaomi.push.cv     // Catch: java.lang.Throwable -> L2e
            r2 = r1
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            r8 = r14
            r2.<init>(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L2e
            com.xiaomi.push.cv.a = r1     // Catch: java.lang.Throwable -> L2e
            goto L2c
        L24:
            com.xiaomi.push.cv$a r13 = com.xiaomi.push.cv.a     // Catch: java.lang.Throwable -> L2e
            com.xiaomi.push.cv r9 = r13.a(r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L2e
            com.xiaomi.push.cv.a = r9     // Catch: java.lang.Throwable -> L2e
        L2c:
            monitor-exit(r0)
            return
        L2e:
            r9 = move-exception
            monitor-exit(r0)
            throw r9
    }

    public static synchronized void a(com.xiaomi.push.cv.a r1) {
            java.lang.Class<com.xiaomi.push.cv> r0 = com.xiaomi.push.cv.class
            monitor-enter(r0)
            com.xiaomi.push.cv.a = r1     // Catch: java.lang.Throwable -> La
            r1 = 0
            com.xiaomi.push.cv.a = r1     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)
            return
        La:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void a(java.lang.String r4, java.lang.String r5) {
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r0 = com.xiaomi.push.cv.b
            java.lang.Object r0 = r0.get(r4)
            com.xiaomi.push.cr r0 = (com.xiaomi.push.cr) r0
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r1 = com.xiaomi.push.cv.b
            monitor-enter(r1)
            if (r0 != 0) goto L21
            com.xiaomi.push.cr r0 = new com.xiaomi.push.cr     // Catch: java.lang.Throwable -> L26
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L26
            r2 = 604800000(0x240c8400, double:2.988109026E-315)
            r0.a(r2)     // Catch: java.lang.Throwable -> L26
            r0.a(r5)     // Catch: java.lang.Throwable -> L26
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r5 = com.xiaomi.push.cv.b     // Catch: java.lang.Throwable -> L26
            r5.put(r4, r0)     // Catch: java.lang.Throwable -> L26
            goto L24
        L21:
            r0.a(r5)     // Catch: java.lang.Throwable -> L26
        L24:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L26
            return
        L26:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L26
            throw r4
    }

    private java.lang.String f() {
            r3 = this;
            android.content.Context r0 = com.xiaomi.push.cv.a     // Catch: java.lang.Exception -> L17
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L17
            android.content.Context r1 = com.xiaomi.push.cv.a     // Catch: java.lang.Exception -> L17
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Exception -> L17
            r2 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r0 = r0.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L17
            java.lang.String r0 = r0.versionName     // Catch: java.lang.Exception -> L17
            return r0
        L17:
            java.lang.String r0 = "0"
            return r0
    }

    public com.xiaomi.push.cr a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L15
            java.net.URL r0 = new java.net.URL
            r0.<init>(r2)
            java.lang.String r2 = r0.getHost()
            r0 = 1
            com.xiaomi.push.cr r2 = r1.a(r2, r0)
            return r2
        L15:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "the url is empty"
            r2.<init>(r0)
            throw r2
    }

    public com.xiaomi.push.cr a(java.lang.String r3, boolean r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L34
            com.xiaomi.push.cu r0 = r2.a
            boolean r0 = r0.a(r3)
            if (r0 != 0) goto L10
            r3 = 0
            return r3
        L10:
            com.xiaomi.push.cr r0 = r2.c(r3)
            if (r0 == 0) goto L1d
            boolean r1 = r0.b()
            if (r1 == 0) goto L1d
            return r0
        L1d:
            if (r4 == 0) goto L2e
            android.content.Context r4 = com.xiaomi.push.cv.a
            boolean r4 = com.xiaomi.push.bj.b(r4)
            if (r4 == 0) goto L2e
            com.xiaomi.push.cr r4 = r2.e(r3)
            if (r4 == 0) goto L2e
            return r4
        L2e:
            com.xiaomi.push.cx r4 = new com.xiaomi.push.cx
            r4.<init>(r2, r3, r0)
            return r4
        L34:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "the host is empty"
            r3.<init>(r4)
            throw r3
    }

    protected java.lang.String a(java.util.ArrayList<java.lang.String> r7, java.lang.String r8, java.lang.String r9, boolean r10) {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            com.xiaomi.push.bg r2 = new com.xiaomi.push.bg
            java.lang.String r3 = "type"
            r2.<init>(r3, r8)
            r1.add(r2)
            java.lang.String r2 = "wap"
            boolean r8 = r8.equals(r2)
            if (r8 == 0) goto L30
            com.xiaomi.push.bg r8 = new com.xiaomi.push.bg
            android.content.Context r2 = com.xiaomi.push.cv.a
            java.lang.String r2 = com.xiaomi.push.bj.a(r2)
            java.lang.String r2 = a(r2)
            java.lang.String r3 = "conpt"
            r8.<init>(r3, r2)
            r1.add(r8)
        L30:
            if (r10 == 0) goto L3e
            com.xiaomi.push.bg r8 = new com.xiaomi.push.bg
            java.lang.String r10 = "reserved"
            java.lang.String r2 = "1"
            r8.<init>(r10, r2)
            r1.add(r8)
        L3e:
            com.xiaomi.push.bg r8 = new com.xiaomi.push.bg
            java.lang.String r10 = "uuid"
            r8.<init>(r10, r9)
            r1.add(r8)
            com.xiaomi.push.bg r8 = new com.xiaomi.push.bg
            java.lang.String r9 = ","
            java.lang.String r7 = com.xiaomi.push.bp.a(r7, r9)
            java.lang.String r9 = "list"
            r8.<init>(r9, r7)
            r1.add(r8)
            com.xiaomi.push.bg r7 = new com.xiaomi.push.bg
            android.content.Context r8 = com.xiaomi.push.cv.a
            com.xiaomi.push.service.a r8 = com.xiaomi.push.service.a.a(r8)
            java.lang.String r8 = r8.b()
            java.lang.String r9 = "countrycode"
            r7.<init>(r9, r8)
            r1.add(r7)
            java.lang.String r7 = r6.b()
            com.xiaomi.push.cr r8 = r6.c(r7)
            java.util.Locale r9 = java.util.Locale.US
            r10 = 1
            java.lang.Object[] r2 = new java.lang.Object[r10]
            r3 = 0
            r2[r3] = r7
            java.lang.String r4 = "https://%1$s/gslb/?ver=4.0"
            java.lang.String r9 = java.lang.String.format(r9, r4, r2)
            if (r8 != 0) goto Lbd
            r0.add(r9)
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r2 = com.xiaomi.push.cv.b
            monitor-enter(r2)
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r8 = com.xiaomi.push.cv.b     // Catch: java.lang.Throwable -> Lba
            java.lang.Object r7 = r8.get(r7)     // Catch: java.lang.Throwable -> Lba
            com.xiaomi.push.cr r7 = (com.xiaomi.push.cr) r7     // Catch: java.lang.Throwable -> Lba
            if (r7 == 0) goto Lb8
            java.util.ArrayList r7 = r7.a(r10)     // Catch: java.lang.Throwable -> Lba
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> Lba
        L9c:
            boolean r8 = r7.hasNext()     // Catch: java.lang.Throwable -> Lba
            if (r8 == 0) goto Lb8
            java.lang.Object r8 = r7.next()     // Catch: java.lang.Throwable -> Lba
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> Lba
            java.util.Locale r9 = java.util.Locale.US     // Catch: java.lang.Throwable -> Lba
            java.lang.String r4 = "https://%1$s/gslb/?ver=4.0"
            java.lang.Object[] r5 = new java.lang.Object[r10]     // Catch: java.lang.Throwable -> Lba
            r5[r3] = r8     // Catch: java.lang.Throwable -> Lba
            java.lang.String r8 = java.lang.String.format(r9, r4, r5)     // Catch: java.lang.Throwable -> Lba
            r0.add(r8)     // Catch: java.lang.Throwable -> Lba
            goto L9c
        Lb8:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lba
            goto Lc1
        Lba:
            r7 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lba
            throw r7
        Lbd:
            java.util.ArrayList r0 = r8.a(r9)
        Lc1:
            java.util.Iterator r7 = r0.iterator()
            r8 = 0
            r9 = r8
        Lc7:
            boolean r10 = r7.hasNext()
            if (r10 == 0) goto L118
            java.lang.Object r9 = r7.next()
            java.lang.String r9 = (java.lang.String) r9
            android.net.Uri r9 = android.net.Uri.parse(r9)
            android.net.Uri$Builder r9 = r9.buildUpon()
            java.util.Iterator r10 = r1.iterator()
        Ldf:
            boolean r0 = r10.hasNext()
            if (r0 == 0) goto Lf7
            java.lang.Object r0 = r10.next()
            com.xiaomi.push.bi r0 = (com.xiaomi.push.bi) r0
            java.lang.String r2 = r0.a()
            java.lang.String r0 = r0.b()
            r9.appendQueryParameter(r2, r0)
            goto Ldf
        Lf7:
            com.xiaomi.push.cv$b r10 = r6.a     // Catch: java.io.IOException -> L116
            if (r10 != 0) goto L10b
            android.content.Context r10 = com.xiaomi.push.cv.a     // Catch: java.io.IOException -> L116
            java.net.URL r0 = new java.net.URL     // Catch: java.io.IOException -> L116
            java.lang.String r9 = r9.toString()     // Catch: java.io.IOException -> L116
            r0.<init>(r9)     // Catch: java.io.IOException -> L116
            java.lang.String r7 = com.xiaomi.push.bj.a(r10, r0)     // Catch: java.io.IOException -> L116
            return r7
        L10b:
            com.xiaomi.push.cv$b r10 = r6.a     // Catch: java.io.IOException -> L116
            java.lang.String r9 = r9.toString()     // Catch: java.io.IOException -> L116
            java.lang.String r7 = r10.a(r9)     // Catch: java.io.IOException -> L116
            return r7
        L116:
            r9 = move-exception
            goto Lc7
        L118:
            if (r9 != 0) goto L11b
            return r8
        L11b:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "network exception: "
            r7.append(r8)
            java.lang.String r8 = r9.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r7)
            throw r9
    }

    protected org.json.JSONObject a() {
            r5 = this;
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r0 = r5.a
            monitor-enter(r0)
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L60
            r1.<init>()     // Catch: java.lang.Throwable -> L60
            java.lang.String r2 = "ver"
            r3 = 2
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L60
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L60
            r2.<init>()     // Catch: java.lang.Throwable -> L60
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r3 = r5.a     // Catch: java.lang.Throwable -> L60
            java.util.Collection r3 = r3.values()     // Catch: java.lang.Throwable -> L60
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L60
        L1d:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L60
            if (r4 == 0) goto L31
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L60
            com.xiaomi.push.cs r4 = (com.xiaomi.push.cs) r4     // Catch: java.lang.Throwable -> L60
            org.json.JSONObject r4 = r4.a()     // Catch: java.lang.Throwable -> L60
            r2.put(r4)     // Catch: java.lang.Throwable -> L60
            goto L1d
        L31:
            java.lang.String r3 = "data"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L60
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L60
            r2.<init>()     // Catch: java.lang.Throwable -> L60
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r3 = com.xiaomi.push.cv.b     // Catch: java.lang.Throwable -> L60
            java.util.Collection r3 = r3.values()     // Catch: java.lang.Throwable -> L60
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L60
        L45:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L60
            if (r4 == 0) goto L59
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L60
            com.xiaomi.push.cr r4 = (com.xiaomi.push.cr) r4     // Catch: java.lang.Throwable -> L60
            org.json.JSONObject r4 = r4.a()     // Catch: java.lang.Throwable -> L60
            r2.put(r4)     // Catch: java.lang.Throwable -> L60
            goto L45
        L59:
            java.lang.String r3 = "reserved"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L60
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L60
            return r1
        L60:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L60
            throw r1
    }

    public void a() {
            r2 = this;
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r0 = r2.a
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r1 = r2.a     // Catch: java.lang.Throwable -> La
            r1.clear()     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r1
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void a(java.lang.String r4, com.xiaomi.push.cr r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L3d
            if (r5 == 0) goto L3d
            com.xiaomi.push.cu r0 = r3.a
            boolean r0 = r0.a(r4)
            if (r0 == 0) goto L3c
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r0 = r3.a
            monitor-enter(r0)
            r3.a()     // Catch: java.lang.Throwable -> L39
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r1 = r3.a     // Catch: java.lang.Throwable -> L39
            boolean r1 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L2a
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r1 = r3.a     // Catch: java.lang.Throwable -> L39
            java.lang.Object r4 = r1.get(r4)     // Catch: java.lang.Throwable -> L39
            com.xiaomi.push.cs r4 = (com.xiaomi.push.cs) r4     // Catch: java.lang.Throwable -> L39
            r4.a(r5)     // Catch: java.lang.Throwable -> L39
            goto L37
        L2a:
            com.xiaomi.push.cs r1 = new com.xiaomi.push.cs     // Catch: java.lang.Throwable -> L39
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L39
            r1.a(r5)     // Catch: java.lang.Throwable -> L39
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r5 = r3.a     // Catch: java.lang.Throwable -> L39
            r5.put(r4, r1)     // Catch: java.lang.Throwable -> L39
        L37:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L39
            goto L3c
        L39:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L39
            throw r4
        L3c:
            return
        L3d:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "the argument is invalid "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = ", "
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    protected boolean a() {
            r4 = this;
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r0 = r4.a
            monitor-enter(r0)
            boolean r1 = com.xiaomi.push.cv.a     // Catch: java.lang.Throwable -> L41
            r2 = 1
            if (r1 != 0) goto L3f
            com.xiaomi.push.cv.a = r2     // Catch: java.lang.Throwable -> L41
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r1 = r4.a     // Catch: java.lang.Throwable -> L41
            r1.clear()     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = r4.d()     // Catch: java.lang.Throwable -> L23
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L23
            if (r3 != 0) goto L3c
            r4.b(r1)     // Catch: java.lang.Throwable -> L23
            java.lang.String r1 = "loading the new hosts succeed"
            com.xiaomi.channel.commonutils.logger.b.b(r1)     // Catch: java.lang.Throwable -> L23
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L41
            return r2
        L23:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
            r2.<init>()     // Catch: java.lang.Throwable -> L41
            java.lang.String r3 = "load bucket failure: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L41
            r2.append(r1)     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L41
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L41
        L3c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L41
            r0 = 0
            return r0
        L3f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L41
            return r2
        L41:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L41
            throw r1
    }

    public com.xiaomi.push.cr b(java.lang.String r2) {
            r1 = this;
            r0 = 1
            com.xiaomi.push.cr r2 = r1.a(r2, r0)
            return r2
    }

    protected java.lang.String b() {
            r3 = this;
            android.content.Context r0 = com.xiaomi.push.cv.a
            com.xiaomi.push.service.a r0 = com.xiaomi.push.service.a.a(r0)
            java.lang.String r0 = r0.a()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "resolver.msg.xiaomi.net"
            if (r1 != 0) goto L21
            com.xiaomi.push.service.module.PushChannelRegion r1 = com.xiaomi.push.service.module.PushChannelRegion.China
            java.lang.String r1 = r1.name()
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L1f
            goto L21
        L1f:
            java.lang.String r2 = "resolver.msg.global.xiaomi.net"
        L21:
            return r2
    }

    public void b() {
            r5 = this;
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r0 = r5.a
            monitor-enter(r0)
            r5.a()     // Catch: java.lang.Throwable -> L58
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L58
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r2 = r5.a     // Catch: java.lang.Throwable -> L58
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Throwable -> L58
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L58
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L58
            int r2 = r2 + (-1)
        L17:
            if (r2 < 0) goto L33
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r3 = r5.a     // Catch: java.lang.Throwable -> L58
            java.lang.Object r4 = r1.get(r2)     // Catch: java.lang.Throwable -> L58
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L58
            com.xiaomi.push.cs r3 = (com.xiaomi.push.cs) r3     // Catch: java.lang.Throwable -> L58
            if (r3 == 0) goto L30
            com.xiaomi.push.cr r3 = r3.a()     // Catch: java.lang.Throwable -> L58
            if (r3 == 0) goto L30
            r1.remove(r2)     // Catch: java.lang.Throwable -> L58
        L30:
            int r2 = r2 + (-1)
            goto L17
        L33:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L58
            java.util.ArrayList r0 = r5.a(r1)
            r2 = 0
        L39:
            int r3 = r1.size()
            if (r2 >= r3) goto L57
            java.lang.Object r3 = r0.get(r2)
            if (r3 == 0) goto L54
            java.lang.Object r3 = r1.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r4 = r0.get(r2)
            com.xiaomi.push.cr r4 = (com.xiaomi.push.cr) r4
            r5.a(r3, r4)
        L54:
            int r2 = r2 + 1
            goto L39
        L57:
            return
        L58:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L58
            throw r1
    }

    protected void b(java.lang.String r8) {
            r7 = this;
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r0 = r7.a
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r1 = r7.a     // Catch: java.lang.Throwable -> L96
            r1.clear()     // Catch: java.lang.Throwable -> L96
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L96
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L96
            java.lang.String r8 = "ver"
            int r8 = r1.optInt(r8)     // Catch: java.lang.Throwable -> L96
            r2 = 2
            if (r8 != r2) goto L8e
            java.lang.String r8 = "data"
            org.json.JSONArray r8 = r1.optJSONArray(r8)     // Catch: java.lang.Throwable -> L96
            r2 = 0
            if (r8 == 0) goto L3f
            r3 = r2
        L20:
            int r4 = r8.length()     // Catch: java.lang.Throwable -> L96
            if (r3 >= r4) goto L3f
            com.xiaomi.push.cs r4 = new com.xiaomi.push.cs     // Catch: java.lang.Throwable -> L96
            r4.<init>()     // Catch: java.lang.Throwable -> L96
            org.json.JSONObject r5 = r8.getJSONObject(r3)     // Catch: java.lang.Throwable -> L96
            com.xiaomi.push.cs r4 = r4.a(r5)     // Catch: java.lang.Throwable -> L96
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r5 = r7.a     // Catch: java.lang.Throwable -> L96
            java.lang.String r6 = r4.a()     // Catch: java.lang.Throwable -> L96
            r5.put(r6, r4)     // Catch: java.lang.Throwable -> L96
            int r3 = r3 + 1
            goto L20
        L3f:
            java.lang.String r8 = "reserved"
            org.json.JSONArray r8 = r1.optJSONArray(r8)     // Catch: java.lang.Throwable -> L96
            if (r8 == 0) goto L8c
        L47:
            int r1 = r8.length()     // Catch: java.lang.Throwable -> L96
            if (r2 >= r1) goto L8c
            org.json.JSONObject r1 = r8.getJSONObject(r2)     // Catch: java.lang.Throwable -> L96
            java.lang.String r3 = "host"
            java.lang.String r3 = r1.optString(r3)     // Catch: java.lang.Throwable -> L96
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L96
            if (r4 != 0) goto L89
            com.xiaomi.push.cr r4 = new com.xiaomi.push.cr     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            r4.<init>(r3)     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            com.xiaomi.push.cr r1 = r4.a(r1)     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r3 = com.xiaomi.push.cv.b     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            java.lang.String r4 = r1.b     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            r3.put(r4, r1)     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            r3.<init>()     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            java.lang.String r4 = "load local reserved host for "
            r3.append(r4)     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            java.lang.String r1 = r1.b     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            r3.append(r1)     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            java.lang.String r1 = r3.toString()     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: org.json.JSONException -> L84 java.lang.Throwable -> L96
            goto L89
        L84:
            java.lang.String r1 = "parse reserved host fail."
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L96
        L89:
            int r2 = r2 + 1
            goto L47
        L8c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L96
            return
        L8e:
            org.json.JSONException r8 = new org.json.JSONException     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = "Bad version"
            r8.<init>(r1)     // Catch: java.lang.Throwable -> L96
            throw r8     // Catch: java.lang.Throwable -> L96
        L96:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L96
            throw r8
    }

    protected com.xiaomi.push.cr c(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r0 = r2.a
            monitor-enter(r0)
            r2.a()     // Catch: java.lang.Throwable -> L1a
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r1 = r2.a     // Catch: java.lang.Throwable -> L1a
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L1a
            com.xiaomi.push.cs r3 = (com.xiaomi.push.cs) r3     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            if (r3 == 0) goto L18
            com.xiaomi.push.cr r3 = r3.a()
            if (r3 == 0) goto L18
            return r3
        L18:
            r3 = 0
            return r3
        L1a:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            throw r3
    }

    public java.lang.String c() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r1 = r5.a
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r2 = r5.a     // Catch: java.lang.Throwable -> L45
            java.util.Set r2 = r2.entrySet()     // Catch: java.lang.Throwable -> L45
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L45
        L12:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L45
            if (r3 == 0) goto L3f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L45
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Throwable -> L45
            java.lang.Object r4 = r3.getKey()     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L45
            r0.append(r4)     // Catch: java.lang.Throwable -> L45
            java.lang.String r4 = ":\n"
            r0.append(r4)     // Catch: java.lang.Throwable -> L45
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Throwable -> L45
            com.xiaomi.push.cs r3 = (com.xiaomi.push.cs) r3     // Catch: java.lang.Throwable -> L45
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L45
            r0.append(r3)     // Catch: java.lang.Throwable -> L45
            java.lang.String r3 = "\n"
            r0.append(r3)     // Catch: java.lang.Throwable -> L45
            goto L12
        L3f:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L45
            java.lang.String r0 = r0.toString()
            return r0
        L45:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L45
            throw r0
    }

    public void c() {
            r4 = this;
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r0 = r4.a
            monitor-enter(r0)
            android.content.Context r1 = com.xiaomi.push.cv.a     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            java.lang.String r2 = r4.e()     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            r3 = 0
            java.io.FileOutputStream r1 = r1.openFileOutput(r2, r3)     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            java.io.BufferedWriter r2 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            java.io.OutputStreamWriter r3 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            org.json.JSONObject r1 = r4.a()     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            if (r3 != 0) goto L29
            r2.write(r1)     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
        L29:
            r2.close()     // Catch: java.lang.Throwable -> L2d java.lang.Exception -> L2f
            goto L48
        L2d:
            r1 = move-exception
            goto L4a
        L2f:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2d
            r2.<init>()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = "persist bucket failure: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L2d
            r2.append(r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L2d
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L2d
        L48:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2d
            return
        L4a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2d
            throw r1
    }

    public com.xiaomi.push.cr d(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r0 = com.xiaomi.push.cv.b
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.xiaomi.push.cr> r1 = com.xiaomi.push.cv.b     // Catch: java.lang.Throwable -> Ld
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> Ld
            com.xiaomi.push.cr r3 = (com.xiaomi.push.cr) r3     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            return r3
        Ld:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r3
    }

    protected java.lang.String d() {
            r5 = this;
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L42
            android.content.Context r2 = com.xiaomi.push.cv.a     // Catch: java.lang.Throwable -> L42
            java.io.File r2 = r2.getFilesDir()     // Catch: java.lang.Throwable -> L42
            java.lang.String r3 = r5.e()     // Catch: java.lang.Throwable -> L42
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L42
            boolean r2 = r1.isFile()     // Catch: java.lang.Throwable -> L42
            if (r2 == 0) goto L3e
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L42
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L42
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L42
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L42
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L42
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L42
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3c
            r1.<init>()     // Catch: java.lang.Throwable -> L3c
        L2a:
            java.lang.String r3 = r2.readLine()     // Catch: java.lang.Throwable -> L3c
            if (r3 == 0) goto L34
            r1.append(r3)     // Catch: java.lang.Throwable -> L3c
            goto L2a
        L34:
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L3c
            com.xiaomi.push.ab.a(r2)
            return r0
        L3c:
            r1 = move-exception
            goto L44
        L3e:
            com.xiaomi.push.ab.a(r0)
            goto L5f
        L42:
            r1 = move-exception
            r2 = r0
        L44:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L60
            r3.<init>()     // Catch: java.lang.Throwable -> L60
            java.lang.String r4 = "load host exception "
            r3.append(r4)     // Catch: java.lang.Throwable -> L60
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L60
            r3.append(r1)     // Catch: java.lang.Throwable -> L60
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L60
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L60
            com.xiaomi.push.ab.a(r2)
        L5f:
            return r0
        L60:
            r0 = move-exception
            com.xiaomi.push.ab.a(r2)
            throw r0
    }

    public void d() {
            r6 = this;
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r0 = r6.a
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r1 = r6.a     // Catch: java.lang.Throwable -> L54
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L54
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L54
        Ld:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L54
            r3 = 1
            if (r2 == 0) goto L1e
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L54
            com.xiaomi.push.cs r2 = (com.xiaomi.push.cs) r2     // Catch: java.lang.Throwable -> L54
            r2.a(r3)     // Catch: java.lang.Throwable -> L54
            goto Ld
        L1e:
            r1 = 0
        L1f:
            r2 = r1
        L20:
            if (r2 != 0) goto L52
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r2 = r6.a     // Catch: java.lang.Throwable -> L54
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Throwable -> L54
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L54
        L2c:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L54
            if (r4 == 0) goto L50
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L54
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r5 = r6.a     // Catch: java.lang.Throwable -> L54
            java.lang.Object r5 = r5.get(r4)     // Catch: java.lang.Throwable -> L54
            com.xiaomi.push.cs r5 = (com.xiaomi.push.cs) r5     // Catch: java.lang.Throwable -> L54
            java.util.ArrayList r5 = r5.a()     // Catch: java.lang.Throwable -> L54
            boolean r5 = r5.isEmpty()     // Catch: java.lang.Throwable -> L54
            if (r5 == 0) goto L2c
            java.util.Map<java.lang.String, com.xiaomi.push.cs> r2 = r6.a     // Catch: java.lang.Throwable -> L54
            r2.remove(r4)     // Catch: java.lang.Throwable -> L54
            goto L1f
        L50:
            r2 = r3
            goto L20
        L52:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            return
        L54:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            throw r1
    }

    protected com.xiaomi.push.cr e(java.lang.String r7) {
            r6 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r6.c
            long r0 = r0 - r2
            long r2 = r6.a
            r4 = 60
            long r2 = r2 * r4
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L40
            long r0 = java.lang.System.currentTimeMillis()
            r6.c = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r7)
            java.util.ArrayList r7 = r6.a(r0)
            r0 = 0
            java.lang.Object r7 = r7.get(r0)
            com.xiaomi.push.cr r7 = (com.xiaomi.push.cr) r7
            if (r7 == 0) goto L33
            r0 = 0
            r6.a = r0
            return r7
        L33:
            long r0 = r6.a
            r2 = 15
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 >= 0) goto L40
            r2 = 1
            long r0 = r0 + r2
            r6.a = r0
        L40:
            r7 = 0
            return r7
    }

    protected java.lang.String e() {
            r2 = this;
            java.lang.String r0 = com.xiaomi.push.cv.c
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Ld
            java.lang.String r0 = com.xiaomi.push.cv.c
            return r0
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.xiaomi.push.cv.c
            r0.append(r1)
            java.lang.String r1 = ":pushservice"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
