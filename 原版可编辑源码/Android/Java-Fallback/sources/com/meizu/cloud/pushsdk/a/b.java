package com.meizu.cloud.pushsdk.a;

public class b {
    private static final java.lang.String a = null;
    private final java.util.HashMap<java.lang.String, java.lang.String> b;
    private final java.util.HashMap<java.lang.String, java.lang.Object> c;
    private final java.util.HashMap<java.lang.String, java.lang.Object> d;

    class 1 {
    }

    public class a {
        private android.content.Context a;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                return
        }

        static android.content.Context a(com.meizu.cloud.pushsdk.a.b.a r0) {
                android.content.Context r0 = r0.a
                return r0
        }

        public com.meizu.cloud.pushsdk.a.b.a a(android.content.Context r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.a.b a() {
                r2 = this;
                com.meizu.cloud.pushsdk.a.b r0 = new com.meizu.cloud.pushsdk.a.b
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }
    }

    static {
            java.lang.Class<com.meizu.cloud.pushsdk.a.b> r0 = com.meizu.cloud.pushsdk.a.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.meizu.cloud.pushsdk.a.b.a = r0
            return
    }

    private b(com.meizu.cloud.pushsdk.a.b.a r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.c = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.d = r0
            r1.d()
            android.content.Context r0 = com.meizu.cloud.pushsdk.a.b.a.a(r2)
            if (r0 == 0) goto L3d
            android.content.Context r0 = com.meizu.cloud.pushsdk.a.b.a.a(r2)
            r1.b(r0)
            android.content.Context r0 = com.meizu.cloud.pushsdk.a.b.a.a(r2)
            r1.a(r0)
            android.content.Context r0 = com.meizu.cloud.pushsdk.a.b.a.a(r2)
            r1.c(r0)
            android.content.Context r2 = com.meizu.cloud.pushsdk.a.b.a.a(r2)
            r1.d(r2)
        L3d:
            java.lang.String r2 = com.meizu.cloud.pushsdk.a.b.a
            java.lang.String r0 = "Subject created successfully."
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)
            return
    }

    b(com.meizu.cloud.pushsdk.a.b.a r1, com.meizu.cloud.pushsdk.a.b.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private void a(java.lang.String r2, int r3, int r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "."
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.util.HashMap<java.lang.String, java.lang.String> r4 = r1.b
            r4.put(r2, r3)
            return
    }

    private void a(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1c
            if (r3 != 0) goto L9
            goto L1c
        L9:
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L17
            r0 = r3
            java.lang.String r0 = (java.lang.String) r0
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L17
            return
        L17:
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r1.c
            r0.put(r2, r3)
        L1c:
            return
    }

    private void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L11
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L11
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.b
            r0.put(r2, r3)
        L11:
            return
    }

    private void b(android.content.Context r2) {
            r1 = this;
            java.lang.String r2 = com.meizu.cloud.pushsdk.d.f.e.c(r2)
            java.lang.String r0 = "op"
            r1.a(r0, r2)
            return
    }

    private void b(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1c
            if (r3 != 0) goto L9
            goto L1c
        L9:
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L17
            r0 = r3
            java.lang.String r0 = (java.lang.String) r0
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L17
            return
        L17:
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r1.d
            r0.put(r2, r3)
        L1c:
            return
    }

    private void c(android.content.Context r2) {
            r1 = this;
            java.lang.String r2 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getNetWorkType(r2)
            java.lang.String r0 = "nt"
            r1.b(r0, r2)
            return
    }

    private void d() {
            r2 = this;
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r1 = "br"
            r2.a(r1, r0)
            java.lang.String r0 = android.os.Build.MODEL
            java.lang.String r1 = "dc"
            r2.a(r1, r0)
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            java.lang.String r1 = "ot"
            r2.a(r1, r0)
            java.lang.String r0 = android.os.Build.DISPLAY
            java.lang.String r1 = "ov"
            r2.a(r1, r0)
            java.lang.String r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getCurrentLanguage()
            java.lang.String r1 = "ll"
            r2.a(r1, r0)
            return
    }

    private void d(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = r3.getPackageName()
            java.lang.String r1 = "pn"
            r2.a(r1, r0)
            java.lang.String r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getAppVersionName(r3)
            java.lang.String r1 = "pv"
            r2.a(r1, r0)
            int r0 = com.meizu.cloud.pushsdk.util.MzSystemUtils.getAppVersionCode(r3)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "pvc"
            r2.a(r1, r0)
            java.lang.String r0 = r3.getPackageName()
            java.lang.String r1 = "com.meizu.ups.push.intent.MESSAGE"
            java.lang.String r3 = com.meizu.cloud.pushsdk.util.MzSystemUtils.findReceiver(r3, r1, r0)
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            r3 = r3 ^ 1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r0 = "st"
            r2.a(r0, r3)
            return
    }

    public java.util.Map<java.lang.String, java.lang.String> a() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.b
            return r0
    }

    public void a(android.content.Context r3) {
            r2 = this;
            android.graphics.Point r3 = com.meizu.cloud.pushsdk.d.f.e.d(r3)
            if (r3 != 0) goto Le
            java.lang.String r3 = com.meizu.cloud.pushsdk.a.b.a
            java.lang.String r0 = "screen information not available."
            com.meizu.cloud.pushinternal.DebugLogger.e(r3, r0)
            goto L17
        Le:
            int r0 = r3.x
            int r3 = r3.y
            java.lang.String r1 = "ss"
            r2.a(r1, r0, r3)
        L17:
            return
    }

    public java.util.Map<java.lang.String, java.lang.Object> b() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r1.c
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.Object> c() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r1.d
            return r0
    }
}
