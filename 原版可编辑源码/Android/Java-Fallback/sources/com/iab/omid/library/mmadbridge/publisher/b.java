package com.iab.omid.library.mmadbridge.publisher;

public class b extends com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher {
    private android.webkit.WebView f;
    private java.lang.Long g;
    private final java.util.Map<java.lang.String, com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> h;
    private final java.lang.String i;

    class a implements java.lang.Runnable {
        private final android.webkit.WebView a;
        final com.iab.omid.library.mmadbridge.publisher.b b;

        a(com.iab.omid.library.mmadbridge.publisher.b r1) {
                r0 = this;
                r0.b = r1
                r0.<init>()
                android.webkit.WebView r1 = com.iab.omid.library.mmadbridge.publisher.b.a(r1)
                r0.a = r1
                return
        }

        @Override
        public void run() {
                r1 = this;
                android.webkit.WebView r0 = r1.a
                r0.destroy()
                return
        }
    }

    public b(java.util.Map<java.lang.String, com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.g = r0
            r1.h = r2
            r1.i = r3
            return
    }

    static android.webkit.WebView a(com.iab.omid.library.mmadbridge.publisher.b r0) {
            android.webkit.WebView r0 = r0.f
            return r0
    }

    @Override
    public void a(com.iab.omid.library.mmadbridge.adsession.a r6, com.iab.omid.library.mmadbridge.adsession.AdSessionContext r7) {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.Map r1 = r7.getInjectedResourcesMap()
            java.util.Set r2 = r1.keySet()
            java.util.Iterator r2 = r2.iterator()
        L11:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L2b
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r4 = r1.get(r3)
            com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource r4 = (com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource) r4
            org.json.JSONObject r4 = r4.toJsonObject()
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r3, r4)
            goto L11
        L2b:
            r5.a(r6, r7, r0)
            return
    }

    @Override
    public void b() {
            r7 = this;
            super.b()
            java.lang.Long r0 = r7.g
            r1 = 4000(0xfa0, double:1.9763E-320)
            if (r0 != 0) goto Lb
            r3 = r1
            goto L1e
        Lb:
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            long r3 = com.iab.omid.library.mmadbridge.utils.f.b()
            java.lang.Long r5 = r7.g
            long r5 = r5.longValue()
            long r3 = r3 - r5
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.NANOSECONDS
            long r3 = r0.convert(r3, r5)
        L1e:
            long r1 = r1 - r3
            r3 = 2000(0x7d0, double:9.88E-321)
            long r0 = java.lang.Math.max(r1, r3)
            android.os.Handler r2 = new android.os.Handler
            r2.<init>()
            com.iab.omid.library.mmadbridge.publisher.b$a r3 = new com.iab.omid.library.mmadbridge.publisher.b$a
            r3.<init>(r7)
            r2.postDelayed(r3, r0)
            r0 = 0
            r7.f = r0
            return
    }

    @Override
    public void i() {
            r0 = this;
            super.i()
            r0.j()
            return
    }

    void j() {
            r5 = this;
            android.webkit.WebView r0 = new android.webkit.WebView
            com.iab.omid.library.mmadbridge.internal.f r1 = com.iab.omid.library.mmadbridge.internal.f.b()
            android.content.Context r1 = r1.a()
            r0.<init>(r1)
            r5.f = r0
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 1
            r0.setJavaScriptEnabled(r1)
            android.webkit.WebView r0 = r5.f
            android.webkit.WebSettings r0 = r0.getSettings()
            r1 = 0
            r0.setAllowContentAccess(r1)
            android.webkit.WebView r0 = r5.f
            r5.a(r0)
            com.iab.omid.library.mmadbridge.internal.g r0 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r1 = r5.f
            java.lang.String r2 = r5.i
            r0.c(r1, r2)
            java.util.Map<java.lang.String, com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> r0 = r5.h
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L3b:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L61
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.Map<java.lang.String, com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> r2 = r5.h
            java.lang.Object r2 = r2.get(r1)
            com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource r2 = (com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource) r2
            java.net.URL r2 = r2.getResourceUrl()
            java.lang.String r2 = r2.toExternalForm()
            com.iab.omid.library.mmadbridge.internal.g r3 = com.iab.omid.library.mmadbridge.internal.g.a()
            android.webkit.WebView r4 = r5.f
            r3.a(r4, r2, r1)
            goto L3b
        L61:
            long r0 = com.iab.omid.library.mmadbridge.utils.f.b()
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r5.g = r0
            return
    }
}
