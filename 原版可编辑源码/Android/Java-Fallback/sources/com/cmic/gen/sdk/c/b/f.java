package com.cmic.gen.sdk.c.b;

public class f extends com.cmic.gen.sdk.c.b.g {
    private com.cmic.gen.sdk.c.b.f.b a;
    private com.cmic.gen.sdk.c.b.f.a b;

    public static class a {
        private org.json.JSONObject a;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public org.json.JSONObject a() {
                r1 = this;
                org.json.JSONObject r0 = r1.a
                return r0
        }

        public void a(org.json.JSONObject r1) {
                r0 = this;
                r0.a = r1
                return
        }
    }

    public static class b extends com.cmic.gen.sdk.c.b.g {
        private java.lang.String a;
        private java.lang.String b;
        private java.lang.String c;
        private java.lang.String d;
        private java.lang.String e;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        static java.lang.String a(com.cmic.gen.sdk.c.b.f.b r0) {
                java.lang.String r0 = r0.d
                return r0
        }

        @Override
        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.d
                return r0
        }

        @Override
        protected java.lang.String a_(java.lang.String r2) {
                r1 = this;
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r0 = r1.e
                r2.append(r0)
                java.lang.String r0 = r1.d
                r2.append(r0)
                java.lang.String r0 = r1.c
                r2.append(r0)
                java.lang.String r0 = r1.b
                r2.append(r0)
                java.lang.String r0 = "@Fdiwmxy7CBDDQNUI"
                r2.append(r0)
                java.lang.String r2 = r2.toString()
                return r2
        }

        @Override
        public org.json.JSONObject b() {
                r1 = this;
                r0 = 0
                return r0
        }

        public void b(java.lang.String r1) {
                r0 = this;
                r0.e = r1
                return
        }

        public java.lang.String c() {
                r1 = this;
                java.lang.String r0 = r1.e
                return r0
        }

        public void c(java.lang.String r1) {
                r0 = this;
                r0.d = r1
                return
        }

        public java.lang.String d() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }

        public void d(java.lang.String r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public java.lang.String e() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }

        public void e(java.lang.String r1) {
                r0 = this;
                r0.b = r1
                return
        }

        public java.lang.String f() {
                r1 = this;
                java.lang.String r0 = r1.c
                return r0
        }

        public void f(java.lang.String r1) {
                r0 = this;
                r0.c = r1
                return
        }
    }

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            com.cmic.gen.sdk.c.b.f$b r0 = r1.a
            java.lang.String r0 = com.cmic.gen.sdk.c.b.f.b.a(r0)
            return r0
    }

    public void a(com.cmic.gen.sdk.c.b.f.a r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void a(com.cmic.gen.sdk.c.b.f.b r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    protected java.lang.String a_(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public org.json.JSONObject b() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r3 = "sign"
            com.cmic.gen.sdk.c.b.f$b r4 = r5.a     // Catch: org.json.JSONException -> L5c
            java.lang.String r4 = r4.d()     // Catch: org.json.JSONException -> L5c
            r1.put(r3, r4)     // Catch: org.json.JSONException -> L5c
            java.lang.String r3 = "msgid"
            com.cmic.gen.sdk.c.b.f$b r4 = r5.a     // Catch: org.json.JSONException -> L5c
            java.lang.String r4 = r4.e()     // Catch: org.json.JSONException -> L5c
            r1.put(r3, r4)     // Catch: org.json.JSONException -> L5c
            java.lang.String r3 = "systemtime"
            com.cmic.gen.sdk.c.b.f$b r4 = r5.a     // Catch: org.json.JSONException -> L5c
            java.lang.String r4 = r4.f()     // Catch: org.json.JSONException -> L5c
            r1.put(r3, r4)     // Catch: org.json.JSONException -> L5c
            java.lang.String r3 = "appid"
            com.cmic.gen.sdk.c.b.f$b r4 = r5.a     // Catch: org.json.JSONException -> L5c
            java.lang.String r4 = r4.a()     // Catch: org.json.JSONException -> L5c
            r1.put(r3, r4)     // Catch: org.json.JSONException -> L5c
            java.lang.String r3 = "version"
            com.cmic.gen.sdk.c.b.f$b r4 = r5.a     // Catch: org.json.JSONException -> L5c
            java.lang.String r4 = r4.c()     // Catch: org.json.JSONException -> L5c
            r1.put(r3, r4)     // Catch: org.json.JSONException -> L5c
            java.lang.String r3 = "header"
            r0.put(r3, r1)     // Catch: org.json.JSONException -> L5c
            java.lang.String r1 = "log"
            com.cmic.gen.sdk.c.b.f$a r3 = r5.b     // Catch: org.json.JSONException -> L5c
            org.json.JSONObject r3 = r3.a()     // Catch: org.json.JSONException -> L5c
            r2.put(r1, r3)     // Catch: org.json.JSONException -> L5c
            java.lang.String r1 = "body"
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L5c
            goto L60
        L5c:
            r1 = move-exception
            r1.printStackTrace()
        L60:
            return r0
    }
}
