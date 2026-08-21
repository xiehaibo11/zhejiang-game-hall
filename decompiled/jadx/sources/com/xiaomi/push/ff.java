package com.xiaomi.push;

import com.xiaomi.mipush.sdk.Constants;

/* JADX INFO: loaded from: classes4.dex */
final class ff {

    class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        ez f8152a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        String f371a;

        a() {
        }
    }

    static a a(Exception exc) {
        m335a(exc);
        boolean z = exc instanceof gh;
        Throwable thA = exc;
        if (z) {
            gh ghVar = (gh) exc;
            thA = exc;
            if (ghVar.a() != null) {
                thA = ghVar.a();
            }
        }
        a aVar = new a();
        String message = thA.getMessage();
        if (thA.getCause() != null) {
            message = thA.getCause().getMessage();
        }
        String str = thA.getClass().getSimpleName() + Constants.COLON_SEPARATOR + message;
        int iA = fy.a(thA);
        if (iA != 0) {
            aVar.f8152a = ez.a(ez.GSLB_REQUEST_SUCCESS.a() + iA);
        }
        if (aVar.f8152a == null) {
            aVar.f8152a = ez.GSLB_TCP_ERR_OTHER;
        }
        if (aVar.f8152a == ez.GSLB_TCP_ERR_OTHER) {
            aVar.f371a = str;
        }
        return aVar;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static void m335a(Exception exc) {
        if (exc == null) {
            throw null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x0083  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static com.xiaomi.push.ff.a b(java.lang.Exception r5) {
        /*
            m335a(r5)
            boolean r0 = r5 instanceof com.xiaomi.push.gh
            if (r0 == 0) goto L14
            r0 = r5
            com.xiaomi.push.gh r0 = (com.xiaomi.push.gh) r0
            java.lang.Throwable r1 = r0.a()
            if (r1 == 0) goto L14
            java.lang.Throwable r5 = r0.a()
        L14:
            com.xiaomi.push.ff$a r0 = new com.xiaomi.push.ff$a
            r0.<init>()
            java.lang.String r1 = r5.getMessage()
            java.lang.Throwable r2 = r5.getCause()
            if (r2 == 0) goto L2b
            java.lang.Throwable r1 = r5.getCause()
            java.lang.String r1 = r1.getMessage()
        L2b:
            int r2 = com.xiaomi.push.fy.a(r5)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Class r4 = r5.getClass()
            java.lang.String r4 = r4.getSimpleName()
            r3.append(r4)
            java.lang.String r4 = ":"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            if (r2 == 0) goto L6d
            com.xiaomi.push.ez r3 = com.xiaomi.push.ez.CONN_SUCCESS
            int r3 = r3.a()
            int r3 = r3 + r2
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.a(r3)
            r0.f8152a = r2
            com.xiaomi.push.ez r2 = r0.f8152a
            com.xiaomi.push.ez r3 = com.xiaomi.push.ez.CONN_BOSH_ERR
            if (r2 != r3) goto L71
            java.lang.Throwable r5 = r5.getCause()
            if (r5 == 0) goto L71
            boolean r5 = r5 instanceof java.net.UnknownHostException
            if (r5 == 0) goto L71
            com.xiaomi.push.ez r5 = com.xiaomi.push.ez.CONN_BOSH_UNKNOWNHOST
            goto L6f
        L6d:
            com.xiaomi.push.ez r5 = com.xiaomi.push.ez.CONN_XMPP_ERR
        L6f:
            r0.f8152a = r5
        L71:
            com.xiaomi.push.ez r5 = r0.f8152a
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.CONN_TCP_ERR_OTHER
            if (r5 == r2) goto L83
            com.xiaomi.push.ez r5 = r0.f8152a
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.CONN_XMPP_ERR
            if (r5 == r2) goto L83
            com.xiaomi.push.ez r5 = r0.f8152a
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.CONN_BOSH_ERR
            if (r5 != r2) goto L85
        L83:
            r0.f371a = r1
        L85:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.ff.b(java.lang.Exception):com.xiaomi.push.ff$a");
    }

    /* JADX WARN: Removed duplicated region for block: B:35:0x0090  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static com.xiaomi.push.ff.a c(java.lang.Exception r4) {
        /*
            m335a(r4)
            boolean r0 = r4 instanceof com.xiaomi.push.gh
            if (r0 == 0) goto L14
            r0 = r4
            com.xiaomi.push.gh r0 = (com.xiaomi.push.gh) r0
            java.lang.Throwable r1 = r0.a()
            if (r1 == 0) goto L14
            java.lang.Throwable r4 = r0.a()
        L14:
            com.xiaomi.push.ff$a r0 = new com.xiaomi.push.ff$a
            r0.<init>()
            java.lang.String r1 = r4.getMessage()
            java.lang.Throwable r2 = r4.getCause()
            if (r2 == 0) goto L2b
            java.lang.Throwable r1 = r4.getCause()
            java.lang.String r1 = r1.getMessage()
        L2b:
            int r2 = com.xiaomi.push.fy.a(r4)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getSimpleName()
            r3.append(r4)
            java.lang.String r4 = ":"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r4 = r3.toString()
            r3 = 105(0x69, float:1.47E-43)
            if (r2 == r3) goto L7a
            r3 = 199(0xc7, float:2.79E-43)
            if (r2 == r3) goto L77
            r3 = 499(0x1f3, float:6.99E-43)
            if (r2 == r3) goto L68
            r1 = 109(0x6d, float:1.53E-43)
            if (r2 == r1) goto L65
            r1 = 110(0x6e, float:1.54E-43)
            if (r2 == r1) goto L62
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.BIND_XMPP_ERR
            goto L7c
        L62:
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.BIND_TCP_BROKEN_PIPE
            goto L7c
        L65:
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.BIND_TCP_CONNRESET
            goto L7c
        L68:
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.BIND_BOSH_ERR
            r0.f8152a = r2
            java.lang.String r2 = "Terminal binding condition encountered: item-not-found"
            boolean r1 = r1.startsWith(r2)
            if (r1 == 0) goto L7e
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.BIND_BOSH_ITEM_NOT_FOUND
            goto L7c
        L77:
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.BIND_TCP_ERR
            goto L7c
        L7a:
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.BIND_TCP_READ_TIMEOUT
        L7c:
            r0.f8152a = r1
        L7e:
            com.xiaomi.push.ez r1 = r0.f8152a
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.BIND_TCP_ERR
            if (r1 == r2) goto L90
            com.xiaomi.push.ez r1 = r0.f8152a
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.BIND_XMPP_ERR
            if (r1 == r2) goto L90
            com.xiaomi.push.ez r1 = r0.f8152a
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.BIND_BOSH_ERR
            if (r1 != r2) goto L92
        L90:
            r0.f371a = r4
        L92:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.ff.c(java.lang.Exception):com.xiaomi.push.ff$a");
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x0082  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    static com.xiaomi.push.ff.a d(java.lang.Exception r4) {
        /*
            m335a(r4)
            boolean r0 = r4 instanceof com.xiaomi.push.gh
            if (r0 == 0) goto L14
            r0 = r4
            com.xiaomi.push.gh r0 = (com.xiaomi.push.gh) r0
            java.lang.Throwable r1 = r0.a()
            if (r1 == 0) goto L14
            java.lang.Throwable r4 = r0.a()
        L14:
            com.xiaomi.push.ff$a r0 = new com.xiaomi.push.ff$a
            r0.<init>()
            java.lang.String r1 = r4.getMessage()
            int r2 = com.xiaomi.push.fy.a(r4)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getSimpleName()
            r3.append(r4)
            java.lang.String r4 = ":"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r4 = r3.toString()
            r3 = 105(0x69, float:1.47E-43)
            if (r2 == r3) goto L6c
            r3 = 199(0xc7, float:2.79E-43)
            if (r2 == r3) goto L69
            r3 = 499(0x1f3, float:6.99E-43)
            if (r2 == r3) goto L5a
            r1 = 109(0x6d, float:1.53E-43)
            if (r2 == r1) goto L57
            r1 = 110(0x6e, float:1.54E-43)
            if (r2 == r1) goto L54
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.CHANNEL_XMPPEXCEPTION
            goto L6e
        L54:
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.CHANNEL_TCP_BROKEN_PIPE
            goto L6e
        L57:
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.CHANNEL_TCP_CONNRESET
            goto L6e
        L5a:
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.CHANNEL_BOSH_EXCEPTION
            r0.f8152a = r2
            java.lang.String r2 = "Terminal binding condition encountered: item-not-found"
            boolean r1 = r1.startsWith(r2)
            if (r1 == 0) goto L70
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.CHANNEL_BOSH_ITEMNOTFIND
            goto L6e
        L69:
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.CHANNEL_TCP_ERR
            goto L6e
        L6c:
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.CHANNEL_TCP_READTIMEOUT
        L6e:
            r0.f8152a = r1
        L70:
            com.xiaomi.push.ez r1 = r0.f8152a
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.CHANNEL_TCP_ERR
            if (r1 == r2) goto L82
            com.xiaomi.push.ez r1 = r0.f8152a
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.CHANNEL_XMPPEXCEPTION
            if (r1 == r2) goto L82
            com.xiaomi.push.ez r1 = r0.f8152a
            com.xiaomi.push.ez r2 = com.xiaomi.push.ez.CHANNEL_BOSH_EXCEPTION
            if (r1 != r2) goto L84
        L82:
            r0.f371a = r4
        L84:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.ff.d(java.lang.Exception):com.xiaomi.push.ff$a");
    }
}
