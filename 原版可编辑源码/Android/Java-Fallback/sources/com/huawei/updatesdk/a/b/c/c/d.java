package com.huawei.updatesdk.a.b.c.c;

public class d extends com.huawei.updatesdk.a.b.c.c.b {
    public static final int ERROR = 1;
    public static final int NETWORK_ERROR = 3;
    public static final int OK = 0;
    public static final int PROGUARD_ERROR = 6;
    public static final int REQ_PARAM_ERROR = 5;
    public static final int RTN_CODE_OK = 0;
    public static final int TIMEOUT = 2;
    private com.huawei.updatesdk.a.b.c.c.d.a errCause;
    private int httpRespondeCode;
    private java.lang.String reason;
    private int responseCode;
    private int rtnCode_;

    public enum a extends java.lang.Enum<com.huawei.updatesdk.a.b.c.c.d.a> {
        public static final com.huawei.updatesdk.a.b.c.c.d.a a = null;
        public static final com.huawei.updatesdk.a.b.c.c.d.a b = null;
        public static final com.huawei.updatesdk.a.b.c.c.d.a c = null;
        public static final com.huawei.updatesdk.a.b.c.c.d.a d = null;
        public static final com.huawei.updatesdk.a.b.c.c.d.a e = null;
        public static final com.huawei.updatesdk.a.b.c.c.d.a f = null;
        public static final com.huawei.updatesdk.a.b.c.c.d.a g = null;
        public static final com.huawei.updatesdk.a.b.c.c.d.a h = null;
        private static final com.huawei.updatesdk.a.b.c.c.d.a[] i = null;

        static {
                com.huawei.updatesdk.a.b.c.c.d$a r0 = new com.huawei.updatesdk.a.b.c.c.d$a
                r1 = 0
                java.lang.String r2 = "NORMAL"
                r0.<init>(r2, r1)
                com.huawei.updatesdk.a.b.c.c.d.a.a = r0
                com.huawei.updatesdk.a.b.c.c.d$a r0 = new com.huawei.updatesdk.a.b.c.c.d$a
                r2 = 1
                java.lang.String r3 = "NO_NETWORK"
                r0.<init>(r3, r2)
                com.huawei.updatesdk.a.b.c.c.d.a.b = r0
                com.huawei.updatesdk.a.b.c.c.d$a r0 = new com.huawei.updatesdk.a.b.c.c.d$a
                r3 = 2
                java.lang.String r4 = "JSON_ERROR"
                r0.<init>(r4, r3)
                com.huawei.updatesdk.a.b.c.c.d.a.c = r0
                com.huawei.updatesdk.a.b.c.c.d$a r0 = new com.huawei.updatesdk.a.b.c.c.d$a
                r4 = 3
                java.lang.String r5 = "PARAM_ERROR"
                r0.<init>(r5, r4)
                com.huawei.updatesdk.a.b.c.c.d.a.d = r0
                com.huawei.updatesdk.a.b.c.c.d$a r0 = new com.huawei.updatesdk.a.b.c.c.d$a
                r5 = 4
                java.lang.String r6 = "IO_EXCEPTION"
                r0.<init>(r6, r5)
                com.huawei.updatesdk.a.b.c.c.d.a.e = r0
                com.huawei.updatesdk.a.b.c.c.d$a r0 = new com.huawei.updatesdk.a.b.c.c.d$a
                r6 = 5
                java.lang.String r7 = "CONNECT_EXCEPTION"
                r0.<init>(r7, r6)
                com.huawei.updatesdk.a.b.c.c.d.a.f = r0
                com.huawei.updatesdk.a.b.c.c.d$a r0 = new com.huawei.updatesdk.a.b.c.c.d$a
                r7 = 6
                java.lang.String r8 = "UNKNOWN_EXCEPTION"
                r0.<init>(r8, r7)
                com.huawei.updatesdk.a.b.c.c.d.a.g = r0
                com.huawei.updatesdk.a.b.c.c.d$a r0 = new com.huawei.updatesdk.a.b.c.c.d$a
                r8 = 7
                java.lang.String r9 = "NO_PROGUARD"
                r0.<init>(r9, r8)
                com.huawei.updatesdk.a.b.c.c.d.a.h = r0
                r9 = 8
                com.huawei.updatesdk.a.b.c.c.d$a[] r9 = new com.huawei.updatesdk.a.b.c.c.d.a[r9]
                com.huawei.updatesdk.a.b.c.c.d$a r10 = com.huawei.updatesdk.a.b.c.c.d.a.a
                r9[r1] = r10
                com.huawei.updatesdk.a.b.c.c.d$a r1 = com.huawei.updatesdk.a.b.c.c.d.a.b
                r9[r2] = r1
                com.huawei.updatesdk.a.b.c.c.d$a r1 = com.huawei.updatesdk.a.b.c.c.d.a.c
                r9[r3] = r1
                com.huawei.updatesdk.a.b.c.c.d$a r1 = com.huawei.updatesdk.a.b.c.c.d.a.d
                r9[r4] = r1
                com.huawei.updatesdk.a.b.c.c.d$a r1 = com.huawei.updatesdk.a.b.c.c.d.a.e
                r9[r5] = r1
                com.huawei.updatesdk.a.b.c.c.d$a r1 = com.huawei.updatesdk.a.b.c.c.d.a.f
                r9[r6] = r1
                com.huawei.updatesdk.a.b.c.c.d$a r1 = com.huawei.updatesdk.a.b.c.c.d.a.g
                r9[r7] = r1
                r9[r8] = r0
                com.huawei.updatesdk.a.b.c.c.d.a.i = r9
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.huawei.updatesdk.a.b.c.c.d.a valueOf(java.lang.String r1) {
                java.lang.Class<com.huawei.updatesdk.a.b.c.c.d$a> r0 = com.huawei.updatesdk.a.b.c.c.d.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.huawei.updatesdk.a.b.c.c.d$a r1 = (com.huawei.updatesdk.a.b.c.c.d.a) r1
                return r1
        }

        public static com.huawei.updatesdk.a.b.c.c.d.a[] values() {
                com.huawei.updatesdk.a.b.c.c.d$a[] r0 = com.huawei.updatesdk.a.b.c.c.d.a.i
                java.lang.Object r0 = r0.clone()
                com.huawei.updatesdk.a.b.c.c.d$a[] r0 = (com.huawei.updatesdk.a.b.c.c.d.a[]) r0
                return r0
        }
    }

    public d() {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.responseCode = r0
            r0 = 0
            r2.rtnCode_ = r0
            com.huawei.updatesdk.a.b.c.c.d$a r1 = com.huawei.updatesdk.a.b.c.c.d.a.a
            r2.errCause = r1
            r2.httpRespondeCode = r0
            return
    }

    public com.huawei.updatesdk.a.b.c.c.d.a a() {
            r1 = this;
            com.huawei.updatesdk.a.b.c.c.d$a r0 = r1.errCause
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.httpRespondeCode = r1
            return
    }

    public void a(com.huawei.updatesdk.a.b.c.c.d.a r1) {
            r0 = this;
            r0.errCause = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.reason = r1
            return
    }

    public int b() {
            r1 = this;
            int r0 = r1.httpRespondeCode
            return r0
    }

    public void b(int r1) {
            r0 = this;
            r0.responseCode = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.reason
            return r0
    }

    public int d() {
            r1 = this;
            int r0 = r1.responseCode
            return r0
    }

    public int e() {
            r1 = this;
            int r0 = r1.rtnCode_
            return r0
    }

    public boolean f() {
            r1 = this;
            int r0 = r1.d()
            if (r0 != 0) goto Le
            int r0 = r1.e()
            if (r0 != 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " { \n\tresponseCode: "
            r0.append(r1)
            int r1 = r2.d()
            r0.append(r1)
            java.lang.String r1 = "\n\trtnCode_: "
            r0.append(r1)
            int r1 = r2.e()
            r0.append(r1)
            java.lang.String r1 = "\n\terrCause: "
            r0.append(r1)
            com.huawei.updatesdk.a.b.c.c.d$a r1 = r2.a()
            r0.append(r1)
            java.lang.String r1 = "\n}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
