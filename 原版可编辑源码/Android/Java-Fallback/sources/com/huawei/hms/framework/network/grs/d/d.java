package com.huawei.hms.framework.network.grs.d;

public class d {
    private static java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.d.d.a> a;

    public static class a {
        private long a;
        private long b;

        public a(long r1, long r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r3
                return
        }

        public boolean a() {
                r4 = this;
                long r0 = android.os.SystemClock.elapsedRealtime()
                long r2 = r4.b
                long r0 = r0 - r2
                long r2 = r4.a
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 > 0) goto Lf
                r0 = 1
                goto L10
            Lf:
                r0 = 0
            L10:
                return r0
        }
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            com.huawei.hms.framework.network.grs.d.d.a = r0
            return
    }

    public static com.huawei.hms.framework.network.grs.d.d.a a(java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "map size of get is before:"
            r0.append(r1)
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.d.d$a> r1 = com.huawei.hms.framework.network.grs.d.d.a
            int r1 = r1.size()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RequestUtil"
            com.huawei.hms.framework.common.Logger.v(r1, r0)
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.d.d$a> r0 = com.huawei.hms.framework.network.grs.d.d.a
            java.lang.Object r3 = r0.get(r3)
            com.huawei.hms.framework.network.grs.d.d$a r3 = (com.huawei.hms.framework.network.grs.d.d.a) r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "map size of get is after:"
            r0.append(r2)
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.d.d$a> r2 = com.huawei.hms.framework.network.grs.d.d.a
            int r2 = r2.size()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.huawei.hms.framework.common.Logger.v(r1, r0)
            return r3
    }

    public static void a(java.lang.String r2, com.huawei.hms.framework.network.grs.d.d.a r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "map size of put is before:"
            r0.append(r1)
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.d.d$a> r1 = com.huawei.hms.framework.network.grs.d.d.a
            int r1 = r1.size()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RequestUtil"
            com.huawei.hms.framework.common.Logger.v(r1, r0)
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.d.d$a> r0 = com.huawei.hms.framework.network.grs.d.d.a
            r0.put(r2, r3)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "map size of put is after:"
            r2.append(r3)
            java.util.Map<java.lang.String, com.huawei.hms.framework.network.grs.d.d$a> r3 = com.huawei.hms.framework.network.grs.d.d.a
            int r3 = r3.size()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.framework.common.Logger.v(r1, r2)
            return
    }
}
