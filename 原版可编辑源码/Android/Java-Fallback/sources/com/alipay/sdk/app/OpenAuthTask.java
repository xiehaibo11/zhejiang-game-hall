package com.alipay.sdk.app;

public final class OpenAuthTask {
    public static final int Duplex = 5000;
    public static final int NOT_INSTALLED = 4001;
    public static final int OK = 9000;
    public static final int SYS_ERR = 4000;
    public static final java.util.Map<java.lang.String, com.alipay.sdk.app.OpenAuthTask.Callback> e = null;
    public static long f = 0;
    public static final int g = 122;
    public volatile boolean a;
    public final android.app.Activity b;
    public com.alipay.sdk.app.OpenAuthTask.Callback c;
    public final android.os.Handler d;

    public enum BizType extends java.lang.Enum<com.alipay.sdk.app.OpenAuthTask.BizType> {
        public static final com.alipay.sdk.app.OpenAuthTask.BizType[] $VALUES = null;
        public static final com.alipay.sdk.app.OpenAuthTask.BizType AccountAuth = null;
        public static final com.alipay.sdk.app.OpenAuthTask.BizType Deduct = null;
        public static final com.alipay.sdk.app.OpenAuthTask.BizType Invoice = null;
        public java.lang.String appId;

        static {
                com.alipay.sdk.app.OpenAuthTask$BizType r0 = new com.alipay.sdk.app.OpenAuthTask$BizType
                r1 = 0
                java.lang.String r2 = "Invoice"
                java.lang.String r3 = "20000920"
                r0.<init>(r2, r1, r3)
                com.alipay.sdk.app.OpenAuthTask.BizType.Invoice = r0
                com.alipay.sdk.app.OpenAuthTask$BizType r0 = new com.alipay.sdk.app.OpenAuthTask$BizType
                r2 = 1
                java.lang.String r3 = "AccountAuth"
                java.lang.String r4 = "20000067"
                r0.<init>(r3, r2, r4)
                com.alipay.sdk.app.OpenAuthTask.BizType.AccountAuth = r0
                com.alipay.sdk.app.OpenAuthTask$BizType r0 = new com.alipay.sdk.app.OpenAuthTask$BizType
                r3 = 2
                java.lang.String r4 = "Deduct"
                java.lang.String r5 = "60000157"
                r0.<init>(r4, r3, r5)
                com.alipay.sdk.app.OpenAuthTask.BizType.Deduct = r0
                r4 = 3
                com.alipay.sdk.app.OpenAuthTask$BizType[] r4 = new com.alipay.sdk.app.OpenAuthTask.BizType[r4]
                com.alipay.sdk.app.OpenAuthTask$BizType r5 = com.alipay.sdk.app.OpenAuthTask.BizType.Invoice
                r4[r1] = r5
                com.alipay.sdk.app.OpenAuthTask$BizType r1 = com.alipay.sdk.app.OpenAuthTask.BizType.AccountAuth
                r4[r2] = r1
                r4[r3] = r0
                com.alipay.sdk.app.OpenAuthTask.BizType.$VALUES = r4
                return
        }

        BizType(java.lang.String r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.appId = r3
                return
        }

        public static java.lang.String access$100(com.alipay.sdk.app.OpenAuthTask.BizType r0) {
                java.lang.String r0 = r0.appId
                return r0
        }

        public static com.alipay.sdk.app.OpenAuthTask.BizType valueOf(java.lang.String r1) {
                java.lang.Class<com.alipay.sdk.app.OpenAuthTask$BizType> r0 = com.alipay.sdk.app.OpenAuthTask.BizType.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.alipay.sdk.app.OpenAuthTask$BizType r1 = (com.alipay.sdk.app.OpenAuthTask.BizType) r1
                return r1
        }

        public static com.alipay.sdk.app.OpenAuthTask.BizType[] values() {
                com.alipay.sdk.app.OpenAuthTask$BizType[] r0 = com.alipay.sdk.app.OpenAuthTask.BizType.$VALUES
                java.lang.Object r0 = r0.clone()
                com.alipay.sdk.app.OpenAuthTask$BizType[] r0 = (com.alipay.sdk.app.OpenAuthTask.BizType[]) r0
                return r0
        }
    }

    public interface Callback {
        void onResult(int r1, java.lang.String r2, android.os.Bundle r3);
    }

    public static class a {
        public static final int[] a = null;

        static {
                com.alipay.sdk.app.OpenAuthTask$BizType[] r0 = com.alipay.sdk.app.OpenAuthTask.BizType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.alipay.sdk.app.OpenAuthTask.a.a = r0
                com.alipay.sdk.app.OpenAuthTask$BizType r1 = com.alipay.sdk.app.OpenAuthTask.BizType.Deduct     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.alipay.sdk.app.OpenAuthTask.a.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.alipay.sdk.app.OpenAuthTask$BizType r1 = com.alipay.sdk.app.OpenAuthTask.BizType.AccountAuth     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.alipay.sdk.app.OpenAuthTask.a.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.alipay.sdk.app.OpenAuthTask$BizType r1 = com.alipay.sdk.app.OpenAuthTask.BizType.Invoice     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    public final class b implements java.lang.Runnable {
        public final int a;
        public final java.lang.String b;
        public final android.os.Bundle c;
        public final com.alipay.sdk.app.OpenAuthTask d;

        public b(com.alipay.sdk.app.OpenAuthTask r1, int r2, java.lang.String r3, android.os.Bundle r4) {
                r0 = this;
                r0.d = r1
                r0.<init>()
                r0.a = r2
                r0.b = r3
                r0.c = r4
                return
        }

        public b(com.alipay.sdk.app.OpenAuthTask r1, int r2, java.lang.String r3, android.os.Bundle r4, com.alipay.sdk.app.OpenAuthTask.a r5) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4)
                return
        }

        @Override
        public void run() {
                r4 = this;
                com.alipay.sdk.app.OpenAuthTask r0 = r4.d
                com.alipay.sdk.app.OpenAuthTask$Callback r0 = com.alipay.sdk.app.OpenAuthTask.a(r0)
                if (r0 == 0) goto L17
                com.alipay.sdk.app.OpenAuthTask r0 = r4.d
                com.alipay.sdk.app.OpenAuthTask$Callback r0 = com.alipay.sdk.app.OpenAuthTask.a(r0)
                int r1 = r4.a
                java.lang.String r2 = r4.b
                android.os.Bundle r3 = r4.c
                r0.onResult(r1, r2, r3)
            L17:
                return
        }
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.alipay.sdk.app.OpenAuthTask.e = r0
            r0 = -1
            com.alipay.sdk.app.OpenAuthTask.f = r0
            return
    }

    public OpenAuthTask(android.app.Activity r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.d = r0
            r2.b = r3
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            r0.a(r3)
            return
    }

    public static com.alipay.sdk.app.OpenAuthTask.Callback a(com.alipay.sdk.app.OpenAuthTask r0) {
            com.alipay.sdk.app.OpenAuthTask$Callback r0 = r0.c
            return r0
    }

    private java.lang.String a(long r2, java.lang.String r4, com.alipay.sdk.app.OpenAuthTask.BizType r5, java.lang.String r6) throws org.json.JSONException {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "startTime"
            r0.put(r3, r2)
            java.lang.String r2 = "session"
            r0.put(r2, r4)
            android.app.Activity r2 = r1.b
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r3 = "package"
            r0.put(r3, r2)
            if (r5 == 0) goto L29
            java.lang.String r2 = com.alipay.sdk.app.OpenAuthTask.BizType.access$100(r5)
            java.lang.String r3 = "appId"
            r0.put(r3, r2)
        L29:
            java.lang.String r2 = "sdkVersion"
            java.lang.String r3 = "h.a.3.8.15"
            r0.put(r2, r3)
            java.lang.String r2 = "mqpURL"
            r0.put(r2, r6)
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "UTF-8"
            java.nio.charset.Charset r3 = java.nio.charset.Charset.forName(r3)
            byte[] r2 = r2.getBytes(r3)
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)
            return r2
    }

    private java.lang.String a(com.alipay.sdk.app.OpenAuthTask.BizType r4, java.util.Map<java.lang.String, java.lang.String> r5) {
            r3 = this;
            if (r4 == 0) goto L6b
            android.net.Uri$Builder r0 = new android.net.Uri$Builder
            r0.<init>()
            java.lang.String r1 = "alipays"
            android.net.Uri$Builder r0 = r0.scheme(r1)
            java.lang.String r1 = "platformapi"
            android.net.Uri$Builder r0 = r0.authority(r1)
            java.lang.String r1 = "startapp"
            android.net.Uri$Builder r0 = r0.path(r1)
            java.lang.String r1 = com.alipay.sdk.app.OpenAuthTask.BizType.access$100(r4)
            java.lang.String r2 = "appId"
            android.net.Uri$Builder r0 = r0.appendQueryParameter(r2, r1)
            int[] r1 = com.alipay.sdk.app.OpenAuthTask.a.a
            int r4 = r4.ordinal()
            r4 = r1[r4]
            r1 = 1
            if (r4 == r1) goto L2f
            goto L3e
        L2f:
            java.lang.String r4 = "appClearTop"
            java.lang.String r1 = "false"
            android.net.Uri$Builder r4 = r0.appendQueryParameter(r4, r1)
            java.lang.String r1 = "startMultApp"
            java.lang.String r2 = "YES"
            r4.appendQueryParameter(r1, r2)
        L3e:
            java.util.Set r4 = r5.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L46:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L62
            java.lang.Object r5 = r4.next()
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5
            java.lang.Object r1 = r5.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r5 = r5.getValue()
            java.lang.String r5 = (java.lang.String) r5
            r0.appendQueryParameter(r1, r5)
            goto L46
        L62:
            android.net.Uri r4 = r0.build()
            java.lang.String r4 = r4.toString()
            return r4
        L6b:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.String r5 = "missing bizType"
            r4.<init>(r5)
            goto L74
        L73:
            throw r4
        L74:
            goto L73
    }

    public static void a(java.lang.String r1, int r2, java.lang.String r3, android.os.Bundle r4) {
            java.util.Map<java.lang.String, com.alipay.sdk.app.OpenAuthTask$Callback> r0 = com.alipay.sdk.app.OpenAuthTask.e
            java.lang.Object r1 = r0.remove(r1)
            com.alipay.sdk.app.OpenAuthTask$Callback r1 = (com.alipay.sdk.app.OpenAuthTask.Callback) r1
            if (r1 == 0) goto L12
            r1.onResult(r2, r3, r4)     // Catch: java.lang.Throwable -> Le
            goto L12
        Le:
            r1 = move-exception
            com.alipay.sdk.m.u.e.a(r1)
        L12:
            return
    }

    private boolean a(com.alipay.sdk.m.s.a r19, java.lang.String r20, com.alipay.sdk.app.OpenAuthTask.BizType r21, java.util.Map<java.lang.String, java.lang.String> r22, boolean r23) {
            r18 = this;
            r7 = r18
            r8 = r19
            r5 = r21
            java.lang.String r9 = "biz"
            boolean r0 = r7.a
            r10 = 1
            if (r0 == 0) goto L21
            android.os.Handler r0 = r7.d
            com.alipay.sdk.app.OpenAuthTask$b r8 = new com.alipay.sdk.app.OpenAuthTask$b
            r3 = 4000(0xfa0, float:5.605E-42)
            r5 = 0
            r6 = 0
            java.lang.String r4 = "该 OpenAuthTask 已在执行"
            r1 = r8
            r2 = r18
            r1.<init>(r2, r3, r4, r5, r6)
            r0.post(r8)
            return r10
        L21:
            r7.a = r10
            long r11 = android.os.SystemClock.elapsedRealtime()
            long r0 = com.alipay.sdk.app.OpenAuthTask.f
            long r0 = r11 - r0
            r2 = 3000(0xbb8, double:1.482E-320)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L45
            android.os.Handler r0 = r7.d
            com.alipay.sdk.app.OpenAuthTask$b r8 = new com.alipay.sdk.app.OpenAuthTask$b
            r3 = 5000(0x1388, float:7.006E-42)
            r5 = 0
            r6 = 0
            java.lang.String r4 = "3s 内重复支付"
            r1 = r8
            r2 = r18
            r1.<init>(r2, r3, r4, r5, r6)
            r0.post(r8)
            return r10
        L45:
            com.alipay.sdk.app.OpenAuthTask.f = r11
            java.lang.String r13 = ""
            com.alipay.sdk.m.j.a.a(r13)
            r0 = 32
            java.lang.String r14 = com.alipay.sdk.m.u.n.a(r0)
            java.util.HashMap r1 = new java.util.HashMap
            r0 = r22
            r1.<init>(r0)
            android.app.Activity r0 = r7.b
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r2 = "mqpPkgName"
            r1.put(r2, r0)
            java.lang.String r0 = "mqpScene"
            java.lang.String r2 = "sdk"
            r1.put(r0, r2)
            com.alipay.sdk.m.m.a r2 = com.alipay.sdk.m.m.a.D()
            java.util.List r2 = r2.l()
            com.alipay.sdk.m.m.a r3 = com.alipay.sdk.m.m.a.D()
            boolean r3 = r3.h
            if (r3 == 0) goto L7d
            if (r2 != 0) goto L7f
        L7d:
            java.util.List<com.alipay.sdk.m.m.a$b> r2 = com.alipay.sdk.m.j.a.d
        L7f:
            android.app.Activity r3 = r7.b
            com.alipay.sdk.m.u.n$c r15 = com.alipay.sdk.m.u.n.a(r8, r3, r2)
            r16 = 0
            if (r15 == 0) goto L177
            boolean r2 = r15.a(r8)
            if (r2 != 0) goto L177
            boolean r2 = r15.a()
            if (r2 != 0) goto L177
            android.content.pm.PackageInfo r2 = r15.a
            if (r2 == 0) goto L177
            int r2 = r2.versionCode
            r3 = 122(0x7a, float:1.71E-43)
            if (r2 >= r3) goto La1
            goto L177
        La1:
            java.util.HashMap r0 = com.alipay.sdk.m.s.a.a(r19)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r2 = "ts_scheme"
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> Lc1
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> Lc1
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc1
            r2.<init>(r0)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r0 = "mqpLoc"
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lc1
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> Lc1
            goto Lc7
        Lc1:
            r0 = move-exception
            java.lang.String r2 = "OpenAuthLocEx"
            com.alipay.sdk.m.k.a.a(r8, r9, r2, r0)     // Catch: java.lang.Throwable -> L163
        Lc7:
            java.lang.String r6 = r7.a(r5, r1)     // Catch: java.lang.Throwable -> L163
            java.util.Map<java.lang.String, com.alipay.sdk.app.OpenAuthTask$Callback> r0 = com.alipay.sdk.app.OpenAuthTask.e
            com.alipay.sdk.app.OpenAuthTask$Callback r1 = r7.c
            r0.put(r14, r1)
            r17 = 0
            r1 = r18
            r2 = r11
            r4 = r14
            r5 = r21
            java.lang.String r17 = r1.a(r2, r4, r5, r6)     // Catch: org.json.JSONException -> Le1
        Lde:
            r0 = r17
            goto Le9
        Le1:
            r0 = move-exception
            r1 = r0
            java.lang.String r0 = "JSONEx"
            com.alipay.sdk.m.k.a.a(r8, r9, r0, r1)
            goto Lde
        Le9:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L103
            android.os.Handler r0 = r7.d
            com.alipay.sdk.app.OpenAuthTask$b r8 = new com.alipay.sdk.app.OpenAuthTask$b
            r3 = 4000(0xfa0, float:5.605E-42)
            r5 = 0
            r6 = 0
            java.lang.String r4 = "参数错误"
            r1 = r8
            r2 = r18
            r1.<init>(r2, r3, r4, r5, r6)
            r0.post(r8)
            return r10
        L103:
            android.net.Uri$Builder r1 = new android.net.Uri$Builder
            r1.<init>()
            java.lang.String r2 = "alipays"
            android.net.Uri$Builder r1 = r1.scheme(r2)
            java.lang.String r2 = "platformapi"
            android.net.Uri$Builder r1 = r1.authority(r2)
            java.lang.String r2 = "startapp"
            android.net.Uri$Builder r1 = r1.path(r2)
            java.lang.String r2 = "appId"
            java.lang.String r3 = "20001129"
            android.net.Uri$Builder r1 = r1.appendQueryParameter(r2, r3)
            java.lang.String r2 = "payload"
            android.net.Uri$Builder r0 = r1.appendQueryParameter(r2, r0)
            android.net.Uri r0 = r0.build()
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "android.intent.action.VIEW"
            r1.<init>(r2, r0)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r0)
            android.content.pm.PackageInfo r0 = r15.a
            java.lang.String r0 = r0.packageName
            r1.setPackage(r0)
            java.lang.String r0 = "PgOpenStarting"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15c
            r2.<init>()     // Catch: java.lang.Throwable -> L15c
            r2.append(r13)     // Catch: java.lang.Throwable -> L15c
            r2.append(r11)     // Catch: java.lang.Throwable -> L15c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L15c
            com.alipay.sdk.m.k.a.a(r8, r9, r0, r2)     // Catch: java.lang.Throwable -> L15c
            com.alipay.sdk.m.s.a.a.a(r8, r14)     // Catch: java.lang.Throwable -> L15c
            android.app.Activity r0 = r7.b     // Catch: java.lang.Throwable -> L15c
            r0.startActivity(r1)     // Catch: java.lang.Throwable -> L15c
            goto L162
        L15c:
            r0 = move-exception
            java.lang.String r1 = "StartWalletEx"
            com.alipay.sdk.m.k.a.a(r8, r9, r1, r0)
        L162:
            return r16
        L163:
            android.os.Handler r0 = r7.d
            com.alipay.sdk.app.OpenAuthTask$b r8 = new com.alipay.sdk.app.OpenAuthTask$b
            r3 = 4000(0xfa0, float:5.605E-42)
            r5 = 0
            r6 = 0
            java.lang.String r4 = "业务参数错误"
            r1 = r8
            r2 = r18
            r1.<init>(r2, r3, r4, r5, r6)
            r0.post(r8)
            return r10
        L177:
            if (r23 == 0) goto L1b5
            java.lang.String r2 = java.lang.String.valueOf(r20)
            java.lang.String r3 = "mqpScheme"
            r1.put(r3, r2)
            java.lang.String r2 = "mqpNotifyName"
            r1.put(r2, r14)
            java.lang.String r2 = "landing"
            r1.put(r0, r2)
            java.lang.String r0 = r7.a(r5, r1)
            android.content.Intent r1 = new android.content.Intent
            android.app.Activity r2 = r7.b
            java.lang.Class<com.alipay.sdk.app.H5OpenAuthActivity> r3 = com.alipay.sdk.app.H5OpenAuthActivity.class
            r1.<init>(r2, r3)
            java.lang.Object[] r2 = new java.lang.Object[r10]
            java.lang.String r0 = android.net.Uri.encode(r0)
            r2[r16] = r0
            java.lang.String r0 = "https://render.alipay.com/p/s/i?scheme=%s"
            java.lang.String r0 = java.lang.String.format(r0, r2)
            java.lang.String r2 = "url"
            r1.putExtra(r2, r0)
            com.alipay.sdk.m.s.a.a.a(r8, r1)
            android.app.Activity r0 = r7.b
            r0.startActivity(r1)
            return r16
        L1b5:
            android.os.Handler r0 = r7.d
            com.alipay.sdk.app.OpenAuthTask$b r8 = new com.alipay.sdk.app.OpenAuthTask$b
            r3 = 4001(0xfa1, float:5.607E-42)
            r5 = 0
            r6 = 0
            java.lang.String r4 = "支付宝未安装或签名错误"
            r1 = r8
            r2 = r18
            r1.<init>(r2, r3, r4, r5, r6)
            r0.post(r8)
            return r10
    }

    public void execute(java.lang.String r8, com.alipay.sdk.app.OpenAuthTask.BizType r9, java.util.Map<java.lang.String, java.lang.String> r10, com.alipay.sdk.app.OpenAuthTask.Callback r11, boolean r12) {
            r7 = this;
            com.alipay.sdk.m.s.a r6 = new com.alipay.sdk.m.s.a
            android.app.Activity r0 = r7.b
            java.lang.String r1 = java.lang.String.valueOf(r10)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "oa-"
            r2.append(r3)
            r2.append(r9)
            java.lang.String r2 = r2.toString()
            r6.<init>(r0, r1, r2)
            r7.c = r11     // Catch: java.lang.Throwable -> L34
            r0 = r7
            r1 = r6
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r12
            boolean r8 = r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L34
            if (r8 == 0) goto L33
            android.app.Activity r8 = r7.b
            java.lang.String r9 = r6.d
            java.lang.String r10 = ""
            com.alipay.sdk.m.k.a.b(r8, r6, r10, r9)
        L33:
            return
        L34:
            r8 = move-exception
            throw r8
    }
}
