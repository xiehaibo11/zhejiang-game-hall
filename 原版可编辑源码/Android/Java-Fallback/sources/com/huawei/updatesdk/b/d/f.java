package com.huawei.updatesdk.b.d;

public class f {
    private static com.huawei.updatesdk.service.otaupdate.b a;

    private static class a implements com.huawei.updatesdk.a.b.c.c.a {
        private boolean a;

        public a(boolean r2) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                r1.a = r2
                return
        }

        @Override
        public void a(com.huawei.updatesdk.a.b.c.c.c r1, com.huawei.updatesdk.a.b.c.c.d r2) {
                r0 = this;
                return
        }

        @Override
        public void b(com.huawei.updatesdk.a.b.c.c.c r2, com.huawei.updatesdk.a.b.c.c.d r3) {
                r1 = this;
                com.huawei.updatesdk.service.otaupdate.b r2 = com.huawei.updatesdk.b.d.f.a()
                if (r2 != 0) goto L7
                return
            L7:
                boolean r2 = r3 instanceof com.huawei.updatesdk.service.appmgr.bean.b
                if (r2 == 0) goto L4b
                r2 = r3
                com.huawei.updatesdk.service.appmgr.bean.b r2 = (com.huawei.updatesdk.service.appmgr.bean.b) r2
                boolean r0 = r2.f()
                if (r0 != 0) goto L20
                com.huawei.updatesdk.service.otaupdate.b r2 = com.huawei.updatesdk.b.d.f.a()
                int r3 = r3.d()
                r2.b(r3)
                goto L56
            L20:
                com.huawei.updatesdk.service.appmgr.bean.c r2 = r2.g()
                if (r2 != 0) goto L32
                com.huawei.updatesdk.service.otaupdate.b r2 = com.huawei.updatesdk.b.d.f.a()
                int r3 = r3.d()
                r2.a(r3)
                return
            L32:
                boolean r3 = r1.a
                if (r3 != 0) goto L43
                java.lang.String r3 = "default"
                com.huawei.updatesdk.b.e.a r3 = com.huawei.updatesdk.b.e.e.a(r3)
                java.lang.String r0 = r2.d()
                r3.a(r0)
            L43:
                com.huawei.updatesdk.service.otaupdate.b r3 = com.huawei.updatesdk.b.d.f.a()
                r3.a(r2)
                goto L56
            L4b:
                com.huawei.updatesdk.service.otaupdate.b r2 = com.huawei.updatesdk.b.d.f.a()
                int r3 = r3.d()
                r2.a(r3)
            L56:
                return
        }
    }

    static com.huawei.updatesdk.service.otaupdate.b a() {
            com.huawei.updatesdk.service.otaupdate.b r0 = com.huawei.updatesdk.b.d.f.a
            return r0
    }

    public static void a(com.huawei.updatesdk.service.otaupdate.b r0) {
            com.huawei.updatesdk.b.d.f.a = r0
            return
    }

    public static void a(boolean r2) {
            com.huawei.updatesdk.service.appmgr.bean.a r0 = new com.huawei.updatesdk.service.appmgr.bean.a
            if (r2 == 0) goto Ld
            com.huawei.updatesdk.service.otaupdate.f r1 = com.huawei.updatesdk.service.otaupdate.f.e()
            java.lang.String r1 = r1.c()
            goto Le
        Ld:
            r1 = 0
        Le:
            r0.<init>(r1)
            com.huawei.updatesdk.b.d.f$a r1 = new com.huawei.updatesdk.b.d.f$a
            r1.<init>(r2)
            com.huawei.updatesdk.b.g.b.a(r0, r1)
            return
    }
}
