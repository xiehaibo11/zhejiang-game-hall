package com.mbridge.msdk.d;

public final class a {
    public static int a = 3;
    public static int b = 1;
    public static int c = 4;
    public static int d = 5;
    private static java.lang.String e = "ShortCutsDataManager";
    private com.mbridge.msdk.click.b f;


    private static class a {
        private static com.mbridge.msdk.d.a a;

        static {
                com.mbridge.msdk.d.a r0 = new com.mbridge.msdk.d.a
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.d.a.a.a = r0
                return
        }

        static com.mbridge.msdk.d.a a() {
                com.mbridge.msdk.d.a r0 = com.mbridge.msdk.d.a.a.a
                return r0
        }
    }

    static {
            return
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    a(com.mbridge.msdk.d.a.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.d.a a() {
            com.mbridge.msdk.d.a r0 = com.mbridge.msdk.d.a.a.a()
            return r0
    }

    static java.util.List a(com.mbridge.msdk.d.a r6, android.content.Context r7, java.util.List r8) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r8.size()
            if (r1 >= r2) goto L4c
            java.lang.Object r2 = r8.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            if (r2 == 0) goto L49
            java.lang.String r3 = r2.getPackageName()
            boolean r3 = com.mbridge.msdk.foundation.tools.ae.c(r7, r3)
            int r4 = r2.getWtick()
            r5 = 1
            if (r4 == r5) goto L25
            if (r3 != 0) goto L49
        L25:
            r0.add(r2)
            if (r2 == 0) goto L49
            int r3 = r2.getLinkType()
            r4 = 3
            if (r3 != r4) goto L49
            int r3 = r2.getJmPd()
            if (r3 == 0) goto L49
            r4 = 2
            if (r3 == r5) goto L46
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r7)
            r5 = 9
            if (r3 != r5) goto L49
            r6.a(r7, r2, r4)
            goto L49
        L46:
            r6.a(r7, r2, r4)
        L49:
            int r1 = r1 + 1
            goto L6
        L4c:
            return r0
    }

    private void a(android.content.Context r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, int r5) {
            r2 = this;
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.b(r1)
            if (r0 != 0) goto L1a
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b()
        L1a:
            com.mbridge.msdk.click.b r1 = r2.f
            if (r1 != 0) goto L29
            com.mbridge.msdk.click.b r1 = new com.mbridge.msdk.click.b
            java.lang.String r0 = r0.D()
            r1.<init>(r3, r0)
            r2.f = r1
        L29:
            r3 = 1
            if (r5 != r3) goto L32
            com.mbridge.msdk.click.b r3 = r2.f
            r3.c(r4)
            goto L3a
        L32:
            r3 = 2
            if (r5 != r3) goto L3a
            com.mbridge.msdk.click.b r3 = r2.f
            r3.a(r4)
        L3a:
            return
    }
}
