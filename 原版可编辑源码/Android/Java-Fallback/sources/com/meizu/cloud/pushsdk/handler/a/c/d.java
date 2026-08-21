package com.meizu.cloud.pushsdk.handler.a.c;

public class d {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;

    public class a {
        private java.lang.String a;
        private java.lang.String b;
        private java.lang.String c;
        private java.lang.String d;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        static java.lang.String a(com.meizu.cloud.pushsdk.handler.a.c.d.a r0) {
                java.lang.String r0 = r0.a
                return r0
        }

        static java.lang.String b(com.meizu.cloud.pushsdk.handler.a.c.d.a r0) {
                java.lang.String r0 = r0.b
                return r0
        }

        static java.lang.String c(com.meizu.cloud.pushsdk.handler.a.c.d.a r0) {
                java.lang.String r0 = r0.c
                return r0
        }

        static java.lang.String d(com.meizu.cloud.pushsdk.handler.a.c.d.a r0) {
                java.lang.String r0 = r0.d
                return r0
        }

        public com.meizu.cloud.pushsdk.handler.a.c.d.a a(java.lang.String r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.handler.a.c.d a() {
                r1 = this;
                com.meizu.cloud.pushsdk.handler.a.c.d r0 = new com.meizu.cloud.pushsdk.handler.a.c.d
                r0.<init>(r1)
                return r0
        }

        public com.meizu.cloud.pushsdk.handler.a.c.d.a b(java.lang.String r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.handler.a.c.d.a c(java.lang.String r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.handler.a.c.d.a d(java.lang.String r1) {
                r0 = this;
                r0.d = r1
                return r0
        }
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public d(com.meizu.cloud.pushsdk.handler.a.c.d.a r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = com.meizu.cloud.pushsdk.handler.a.c.d.a.a(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = ""
            if (r0 != 0) goto L14
            java.lang.String r0 = com.meizu.cloud.pushsdk.handler.a.c.d.a.a(r3)
            goto L15
        L14:
            r0 = r1
        L15:
            r2.a = r0
            java.lang.String r0 = com.meizu.cloud.pushsdk.handler.a.c.d.a.b(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L26
            java.lang.String r0 = com.meizu.cloud.pushsdk.handler.a.c.d.a.b(r3)
            goto L27
        L26:
            r0 = r1
        L27:
            r2.b = r0
            java.lang.String r0 = com.meizu.cloud.pushsdk.handler.a.c.d.a.c(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L38
            java.lang.String r0 = com.meizu.cloud.pushsdk.handler.a.c.d.a.c(r3)
            goto L39
        L38:
            r0 = r1
        L39:
            r2.c = r0
            java.lang.String r0 = com.meizu.cloud.pushsdk.handler.a.c.d.a.d(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L49
            java.lang.String r1 = com.meizu.cloud.pushsdk.handler.a.c.d.a.d(r3)
        L49:
            r2.d = r1
            return
    }

    public static com.meizu.cloud.pushsdk.handler.a.c.d.a a() {
            com.meizu.cloud.pushsdk.handler.a.c.d$a r0 = new com.meizu.cloud.pushsdk.handler.a.c.d$a
            r0.<init>()
            return r0
    }

    public java.lang.String b() {
            r3 = this;
            com.meizu.cloud.pushsdk.d.a.c r0 = new com.meizu.cloud.pushsdk.d.a.c
            r0.<init>()
            java.lang.String r1 = r3.a
            java.lang.String r2 = "task_id"
            r0.a(r2, r1)
            java.lang.String r1 = r3.b
            java.lang.String r2 = "seq_id"
            r0.a(r2, r1)
            java.lang.String r1 = r3.c
            java.lang.String r2 = "push_timestamp"
            r0.a(r2, r1)
            java.lang.String r1 = r3.d
            java.lang.String r2 = "device_id"
            r0.a(r2, r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }
}
