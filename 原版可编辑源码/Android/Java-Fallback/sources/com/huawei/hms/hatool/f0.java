package com.huawei.hms.hatool;

public class f0 {
    public long a;
    public volatile boolean b;
    public com.huawei.hms.hatool.f0.a c;

    public class a {
        public java.lang.String a;
        public boolean b;
        public long c;
        public final com.huawei.hms.hatool.f0 d;

        public a(com.huawei.hms.hatool.f0 r4, long r5) {
                r3 = this;
                r3.d = r4
                r3.<init>()
                java.util.UUID r0 = java.util.UUID.randomUUID()
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "-"
                java.lang.String r2 = ""
                java.lang.String r0 = r0.replace(r1, r2)
                r3.a = r0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r3.a
                r0.append(r1)
                java.lang.String r1 = "_"
                r0.append(r1)
                r0.append(r5)
                java.lang.String r0 = r0.toString()
                r3.a = r0
                r3.c = r5
                r5 = 1
                r3.b = r5
                r5 = 0
                com.huawei.hms.hatool.f0.a(r4, r5)
                return
        }

        public void a(long r5) {
                r4 = this;
                com.huawei.hms.hatool.f0 r0 = r4.d
                boolean r0 = com.huawei.hms.hatool.f0.a(r0)
                r1 = 0
                if (r0 == 0) goto L12
                com.huawei.hms.hatool.f0 r0 = r4.d
                com.huawei.hms.hatool.f0.a(r0, r1)
                r4.b(r5)
                return
            L12:
                long r2 = r4.c
                boolean r0 = r4.b(r2, r5)
                if (r0 != 0) goto L28
                long r2 = r4.c
                boolean r0 = r4.a(r2, r5)
                if (r0 == 0) goto L23
                goto L28
            L23:
                r4.c = r5
                r4.b = r1
                return
            L28:
                r4.b(r5)
                return
        }

        public final boolean a(long r2, long r4) {
                r1 = this;
                java.util.Calendar r0 = java.util.Calendar.getInstance()
                r0.setTimeInMillis(r2)
                java.util.Calendar r2 = java.util.Calendar.getInstance()
                r2.setTimeInMillis(r4)
                r3 = 1
                int r4 = r0.get(r3)
                int r5 = r2.get(r3)
                if (r4 != r5) goto L26
                r4 = 6
                int r5 = r0.get(r4)
                int r2 = r2.get(r4)
                if (r5 == r2) goto L25
                goto L26
            L25:
                r3 = 0
            L26:
                return r3
        }

        public final void b(long r4) {
                r3 = this;
                java.lang.String r0 = "hmsSdk"
                java.lang.String r1 = "getNewSession() session is flush!"
                com.huawei.hms.hatool.y.c(r0, r1)
                java.util.UUID r0 = java.util.UUID.randomUUID()
                java.lang.String r0 = r0.toString()
                r3.a = r0
                java.lang.String r1 = "-"
                java.lang.String r2 = ""
                java.lang.String r0 = r0.replace(r1, r2)
                r3.a = r0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r3.a
                r0.append(r1)
                java.lang.String r1 = "_"
                r0.append(r1)
                r0.append(r4)
                java.lang.String r0 = r0.toString()
                r3.a = r0
                r3.c = r4
                r4 = 1
                r3.b = r4
                return
        }

        public final boolean b(long r1, long r3) {
                r0 = this;
                long r3 = r3 - r1
                com.huawei.hms.hatool.f0 r1 = r0.d
                long r1 = com.huawei.hms.hatool.f0.b(r1)
                int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
                if (r1 < 0) goto Ld
                r1 = 1
                goto Le
            Ld:
                r1 = 0
            Le:
                return r1
        }
    }

    public f0() {
            r2 = this;
            r2.<init>()
            r0 = 1800000(0x1b7740, double:8.89318E-318)
            r2.a = r0
            r0 = 0
            r2.b = r0
            r0 = 0
            r2.c = r0
            return
    }

    public static boolean a(com.huawei.hms.hatool.f0 r0) {
            boolean r0 = r0.b
            return r0
    }

    public static boolean a(com.huawei.hms.hatool.f0 r0, boolean r1) {
            r0.b = r1
            return r1
    }

    public static long b(com.huawei.hms.hatool.f0 r2) {
            long r0 = r2.a
            return r0
    }

    public java.lang.String a() {
            r2 = this;
            com.huawei.hms.hatool.f0$a r0 = r2.c
            if (r0 != 0) goto Le
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "getSessionName(): session not prepared. onEvent() must be called first."
            com.huawei.hms.hatool.y.f(r0, r1)
            java.lang.String r0 = ""
            return r0
        Le:
            java.lang.String r0 = r0.a
            return r0
    }

    public void a(long r3) {
            r2 = this;
            com.huawei.hms.hatool.f0$a r0 = r2.c
            if (r0 != 0) goto L13
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "Session is first flush"
            com.huawei.hms.hatool.y.c(r0, r1)
            com.huawei.hms.hatool.f0$a r0 = new com.huawei.hms.hatool.f0$a
            r0.<init>(r2, r3)
            r2.c = r0
            return
        L13:
            r0.a(r3)
            return
    }

    public boolean b() {
            r2 = this;
            com.huawei.hms.hatool.f0$a r0 = r2.c
            if (r0 != 0) goto Ld
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "isFirstEvent(): session not prepared. onEvent() must be called first."
            com.huawei.hms.hatool.y.f(r0, r1)
            r0 = 0
            return r0
        Ld:
            boolean r0 = r0.b
            return r0
    }
}
