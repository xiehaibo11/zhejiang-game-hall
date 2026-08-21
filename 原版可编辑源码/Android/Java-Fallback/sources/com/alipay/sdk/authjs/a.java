package com.alipay.sdk.authjs;

public class a {
    public static final java.lang.String a = "call";
    public static final java.lang.String b = "callback";
    public static final java.lang.String c = "bundleName";
    public static final java.lang.String d = "clientId";
    public static final java.lang.String e = "param";
    public static final java.lang.String f = "func";
    public static final java.lang.String g = "msgType";
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private org.json.JSONObject l;
    private boolean m;

    public enum a extends java.lang.Enum<com.alipay.sdk.authjs.a.a> {
        public static final com.alipay.sdk.authjs.a.a a = null;
        public static final com.alipay.sdk.authjs.a.a b = null;
        public static final com.alipay.sdk.authjs.a.a c = null;
        public static final com.alipay.sdk.authjs.a.a d = null;
        public static final com.alipay.sdk.authjs.a.a e = null;
        private static final com.alipay.sdk.authjs.a.a[] f = null;

        static {
                com.alipay.sdk.authjs.a$a r0 = new com.alipay.sdk.authjs.a$a
                r1 = 0
                java.lang.String r2 = "NONE_ERROR"
                r0.<init>(r2, r1)
                com.alipay.sdk.authjs.a.a.a = r0
                com.alipay.sdk.authjs.a$a r0 = new com.alipay.sdk.authjs.a$a
                r2 = 1
                java.lang.String r3 = "FUNCTION_NOT_FOUND"
                r0.<init>(r3, r2)
                com.alipay.sdk.authjs.a.a.b = r0
                com.alipay.sdk.authjs.a$a r0 = new com.alipay.sdk.authjs.a$a
                r3 = 2
                java.lang.String r4 = "INVALID_PARAMETER"
                r0.<init>(r4, r3)
                com.alipay.sdk.authjs.a.a.c = r0
                com.alipay.sdk.authjs.a$a r0 = new com.alipay.sdk.authjs.a$a
                r4 = 3
                java.lang.String r5 = "RUNTIME_ERROR"
                r0.<init>(r5, r4)
                com.alipay.sdk.authjs.a.a.d = r0
                com.alipay.sdk.authjs.a$a r0 = new com.alipay.sdk.authjs.a$a
                r5 = 4
                java.lang.String r6 = "NONE_PERMISS"
                r0.<init>(r6, r5)
                com.alipay.sdk.authjs.a.a.e = r0
                r0 = 5
                com.alipay.sdk.authjs.a$a[] r0 = new com.alipay.sdk.authjs.a.a[r0]
                com.alipay.sdk.authjs.a$a r6 = com.alipay.sdk.authjs.a.a.a
                r0[r1] = r6
                com.alipay.sdk.authjs.a$a r1 = com.alipay.sdk.authjs.a.a.b
                r0[r2] = r1
                com.alipay.sdk.authjs.a$a r1 = com.alipay.sdk.authjs.a.a.c
                r0[r3] = r1
                com.alipay.sdk.authjs.a$a r1 = com.alipay.sdk.authjs.a.a.d
                r0[r4] = r1
                com.alipay.sdk.authjs.a$a r1 = com.alipay.sdk.authjs.a.a.e
                r0[r5] = r1
                com.alipay.sdk.authjs.a.a.f = r0
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.alipay.sdk.authjs.a.a valueOf(java.lang.String r1) {
                java.lang.Class<com.alipay.sdk.authjs.a$a> r0 = com.alipay.sdk.authjs.a.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.alipay.sdk.authjs.a$a r1 = (com.alipay.sdk.authjs.a.a) r1
                return r1
        }

        public static com.alipay.sdk.authjs.a.a[] values() {
                com.alipay.sdk.authjs.a$a[] r0 = com.alipay.sdk.authjs.a.a.f
                java.lang.Object r0 = r0.clone()
                com.alipay.sdk.authjs.a$a[] r0 = (com.alipay.sdk.authjs.a.a[]) r0
                return r0
        }
    }

    public a(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.m = r0
            r1.d(r2)
            return
    }

    public static final java.lang.String a(com.alipay.sdk.authjs.a.a r1) {
            int[] r0 = com.alipay.sdk.authjs.b.a
            int r1 = r1.ordinal()
            r1 = r0[r1]
            r0 = 1
            if (r1 == r0) goto L1a
            r0 = 2
            if (r1 == r0) goto L17
            r0 = 3
            if (r1 == r0) goto L14
            java.lang.String r1 = "none"
            goto L1c
        L14:
            java.lang.String r1 = "runtime error"
            goto L1c
        L17:
            java.lang.String r1 = "invalid parameter"
            goto L1c
        L1a:
            java.lang.String r1 = "function not found"
        L1c:
            return r1
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void a(org.json.JSONObject r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public org.json.JSONObject f() {
            r1 = this;
            org.json.JSONObject r0 = r1.l
            return r0
    }

    public java.lang.String g() throws org.json.JSONException {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.h
            java.lang.String r2 = "clientId"
            r0.put(r2, r1)
            java.lang.String r1 = r3.j
            java.lang.String r2 = "func"
            r0.put(r2, r1)
            org.json.JSONObject r1 = r3.l
            java.lang.String r2 = "param"
            r0.put(r2, r1)
            java.lang.String r1 = r3.k
            java.lang.String r2 = "msgType"
            r0.put(r2, r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
