package com.iab.omid.library.mmadbridge.utils;

public class g {
    public static void a() {
            boolean r0 = com.iab.omid.library.mmadbridge.Omid.isActive()
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Method called before OM SDK activation"
            r0.<init>(r1)
            throw r0
    }

    public static void a(com.iab.omid.library.mmadbridge.adsession.Owner r2, com.iab.omid.library.mmadbridge.adsession.CreativeType r3, com.iab.omid.library.mmadbridge.adsession.ImpressionType r4) {
            com.iab.omid.library.mmadbridge.adsession.Owner r0 = com.iab.omid.library.mmadbridge.adsession.Owner.NONE
            if (r2 == r0) goto L25
            com.iab.omid.library.mmadbridge.adsession.CreativeType r0 = com.iab.omid.library.mmadbridge.adsession.CreativeType.DEFINED_BY_JAVASCRIPT
            java.lang.String r1 = "ImpressionType/CreativeType can only be defined as DEFINED_BY_JAVASCRIPT if Impression Owner is JavaScript"
            if (r3 != r0) goto L15
            com.iab.omid.library.mmadbridge.adsession.Owner r3 = com.iab.omid.library.mmadbridge.adsession.Owner.NATIVE
            if (r2 == r3) goto Lf
            goto L15
        Lf:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>(r1)
            throw r2
        L15:
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r3 = com.iab.omid.library.mmadbridge.adsession.ImpressionType.DEFINED_BY_JAVASCRIPT
            if (r4 != r3) goto L24
            com.iab.omid.library.mmadbridge.adsession.Owner r3 = com.iab.omid.library.mmadbridge.adsession.Owner.NATIVE
            if (r2 == r3) goto L1e
            goto L24
        L1e:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>(r1)
            throw r2
        L24:
            return
        L25:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Impression owner is none"
            r2.<init>(r3)
            throw r2
    }

    public static void a(com.iab.omid.library.mmadbridge.adsession.a r0) {
            d(r0)
            b(r0)
            return
    }

    public static void a(java.lang.Object r0, java.lang.String r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r1)
            throw r0
    }

    public static void a(java.lang.String r0, int r1, java.lang.String r2) {
            int r0 = r0.length()
            if (r0 > r1) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r2)
            throw r0
    }

    public static void a(java.lang.String r0, java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r1)
            throw r0
    }

    public static void b(com.iab.omid.library.mmadbridge.adsession.a r1) {
            boolean r1 = r1.g()
            if (r1 != 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = "AdSession is finished"
            r1.<init>(r0)
            throw r1
    }

    public static void c(com.iab.omid.library.mmadbridge.adsession.a r1) {
            boolean r1 = r1.j()
            if (r1 != 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = "AdSession is started"
            r1.<init>(r0)
            throw r1
    }

    private static void d(com.iab.omid.library.mmadbridge.adsession.a r1) {
            boolean r1 = r1.j()
            if (r1 == 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = "AdSession is not started"
            r1.<init>(r0)
            throw r1
    }

    public static void e(com.iab.omid.library.mmadbridge.adsession.a r1) {
            boolean r1 = r1.h()
            if (r1 == 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = "Impression event is not expected from the Native AdSession"
            r1.<init>(r0)
            throw r1
    }

    public static void f(com.iab.omid.library.mmadbridge.adsession.a r1) {
            boolean r1 = r1.i()
            if (r1 == 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = "Cannot create MediaEvents for JavaScript AdSession"
            r1.<init>(r0)
            throw r1
    }

    public static void g(com.iab.omid.library.mmadbridge.adsession.a r1) {
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r1 = r1.getAdSessionStatePublisher()
            com.iab.omid.library.mmadbridge.adsession.AdEvents r1 = r1.c()
            if (r1 != 0) goto Lb
            return
        Lb:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = "AdEvents already exists for AdSession"
            r1.<init>(r0)
            throw r1
    }

    public static void h(com.iab.omid.library.mmadbridge.adsession.a r1) {
            com.iab.omid.library.mmadbridge.publisher.AdSessionStatePublisher r1 = r1.getAdSessionStatePublisher()
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r1.d()
            if (r1 != 0) goto Lb
            return
        Lb:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = "MediaEvents already exists for AdSession"
            r1.<init>(r0)
            throw r1
    }
}
