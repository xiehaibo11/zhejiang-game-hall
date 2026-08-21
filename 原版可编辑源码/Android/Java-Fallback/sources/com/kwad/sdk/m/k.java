package com.kwad.sdk.m;

public final class k {
    private static com.kwad.sdk.m.k.a aMK;


    public static class a extends com.kwad.sdk.core.response.a.a {
        public java.util.List<java.lang.String> aML;
        public java.util.List<com.kwad.sdk.m.k.a.a> aMM;

        public static class a extends com.kwad.sdk.core.response.a.a {
            public java.lang.String aMN;
            public java.lang.String aMO;

            public a() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private static com.kwad.sdk.m.k.a KS() {
            com.kwad.sdk.m.k$a r0 = com.kwad.sdk.m.k.aMK
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            r1 = 0
            com.kwad.sdk.m.k$1 r2 = new com.kwad.sdk.m.k$1
            r2.<init>()
            java.lang.Object r0 = r0.getAppConfigData(r1, r2)
            org.json.JSONObject r0 = (org.json.JSONObject) r0
            com.kwad.sdk.m.k$a r1 = new com.kwad.sdk.m.k$a
            r1.<init>()
            com.kwad.sdk.m.k.aMK = r1
            r1.parseJson(r0)     // Catch: java.lang.Throwable -> L23
        L23:
            com.kwad.sdk.m.k$a r0 = com.kwad.sdk.m.k.aMK
            return r0
    }

    private static boolean a(android.content.Context r1, com.kwad.sdk.m.k.a r2) {
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            java.util.List<java.lang.String> r2 = r2.aML
            r0.<init>(r2)
            java.util.Iterator r2 = r0.iterator()
        L13:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L2e
            java.lang.Object r0 = r2.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r0 = com.kwad.sdk.utils.ah.a(r0, r1)
            if (r0 == 0) goto L13
            java.lang.String r1 = "WrapperBlackHelper"
            java.lang.String r2 = "isBlackClass"
            com.kwad.sdk.core.e.c.d(r1, r2)
            r1 = 1
            return r1
        L2e:
            r1 = 0
            return r1
    }

    private static boolean a(java.lang.StackTraceElement r3, com.kwad.sdk.m.k.a r4) {
            java.lang.String r0 = r3.getClassName()
            java.lang.String r3 = r3.getMethodName()
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            java.util.List<com.kwad.sdk.m.k$a$a> r4 = r4.aMM
            r1.<init>(r4)
            java.util.Iterator r4 = r1.iterator()
        L13:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L38
            java.lang.Object r1 = r4.next()
            com.kwad.sdk.m.k$a$a r1 = (com.kwad.sdk.m.k.a.a) r1
            java.lang.String r2 = r1.aMN
            java.lang.String r1 = r1.aMO
            boolean r2 = com.kwad.sdk.utils.ah.a(r2, r0)
            if (r2 == 0) goto L13
            boolean r1 = com.kwad.sdk.utils.ah.a(r1, r3)
            if (r1 == 0) goto L13
            java.lang.String r3 = "WrapperBlackHelper"
            java.lang.String r4 = "isBlackMethod"
            com.kwad.sdk.core.e.c.d(r3, r4)
            r3 = 1
            return r3
        L38:
            r3 = 0
            return r3
    }

    public static boolean dp(android.content.Context r5) {
            com.kwad.sdk.m.k$a r0 = KS()
            java.util.List<java.lang.String> r1 = r0.aML
            boolean r1 = com.kwad.sdk.utils.ah.K(r1)
            r2 = 0
            if (r1 != 0) goto L36
            java.util.List<com.kwad.sdk.m.k$a$a> r1 = r0.aMM
            boolean r1 = com.kwad.sdk.utils.ah.K(r1)
            if (r1 == 0) goto L16
            goto L36
        L16:
            boolean r5 = a(r5, r0)
            if (r5 != 0) goto L1d
            return r2
        L1d:
            java.lang.Thread r5 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r5 = r5.getStackTrace()
            int r1 = r5.length
            r3 = r2
        L27:
            if (r3 >= r1) goto L36
            r4 = r5[r3]
            boolean r4 = a(r4, r0)
            if (r4 == 0) goto L33
            r5 = 1
            return r5
        L33:
            int r3 = r3 + 1
            goto L27
        L36:
            return r2
    }
}
