package com.tkay.core.basead.a;

public final class a {
    public static final java.lang.String a = "play.google.com";
    public static final java.lang.String b = "market.android.com";
    public static final java.lang.String c = "details?";
    public static final java.lang.String d = "market";
    public static final java.lang.String e = "market://";


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.core.common.f.an a(android.content.Context r6, java.lang.String r7) {
            com.tkay.core.common.f.an r0 = new com.tkay.core.common.f.an
            r0.<init>()
            java.lang.String r1 = "http"
            boolean r2 = r7.startsWith(r1)
            r3 = 1
            r2 = r2 ^ r3
            r0.n = r2
            r0.o = r7
            boolean r2 = d(r7)
            r4 = 0
            if (r2 == 0) goto L51
            r0.o = r7
            com.tkay.core.c.b r1 = com.tkay.core.c.b.a(r6)
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = r2.o()
            com.tkay.core.c.a r1 = r1.b(r2)
            java.lang.String r1 = r1.l()
            java.lang.String r2 = "1"
            boolean r1 = android.text.TextUtils.equals(r1, r2)
            boolean r2 = a(r6, r7, r4, r1)
            r5 = 4
            if (r2 == 0) goto L46
            r0.m = r3
            if (r1 == 0) goto L43
            r6 = 3
            r0.l = r6
            goto L50
        L43:
            r0.l = r5
            goto L50
        L46:
            boolean r6 = a(r6, r7, r4, r4)
            if (r6 == 0) goto L50
            r0.m = r3
            r0.l = r5
        L50:
            return r0
        L51:
            boolean r1 = r7.startsWith(r1)
            if (r1 != 0) goto L65
            r0.o = r7
            boolean r6 = a(r6, r7, r4, r4)
            if (r6 == 0) goto L64
            r0.m = r3
            r6 = 5
            r0.l = r6
        L64:
            return r0
        L65:
            boolean r1 = b(r7)
            if (r1 == 0) goto L89
            java.lang.String r7 = f(r7)
            r0.n = r3
            r0.o = r7
            boolean r1 = a(r6, r7, r4, r3)
            if (r1 == 0) goto L7e
            r0.m = r3
            r0.l = r3
            goto L89
        L7e:
            boolean r6 = a(r6, r7, r4, r4)
            if (r6 == 0) goto L89
            r0.m = r3
            r6 = 2
            r0.l = r6
        L89:
            return r0
    }

    public static com.tkay.core.common.f.an a(java.lang.String r5) {
            com.tkay.core.common.f.an r0 = new com.tkay.core.common.f.an
            r0.<init>()
            r1 = 8
            r0.l = r1
            r1 = 0
            r0.n = r1
            r1 = 1
            r0.m = r1
            r0.o = r5
            android.net.Uri r2 = android.net.Uri.parse(r5)     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = r2.getScheme()     // Catch: java.lang.Throwable -> L52
            java.lang.String r3 = "intent"
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L52
            if (r2 == 0) goto L52
            android.content.Intent r1 = android.content.Intent.parseUri(r5, r1)     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "android.intent.category.BROWSABLE"
            r1.addCategory(r2)     // Catch: java.lang.Throwable -> L52
            r2 = 0
            r1.setComponent(r2)     // Catch: java.lang.Throwable -> L52
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L52
            r4 = 15
            if (r3 < r4) goto L37
            r1.setSelector(r2)     // Catch: java.lang.Throwable -> L52
        L37:
            java.lang.String r2 = "browser_fallback_url"
            java.lang.String r1 = r1.getStringExtra(r2)     // Catch: java.lang.Throwable -> L52
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L52
            if (r2 != 0) goto L52
            java.lang.String r2 = "http"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Throwable -> L52
            if (r2 == 0) goto L52
            r2 = 10
            r0.l = r2     // Catch: java.lang.Throwable -> L52
            r0.o = r1     // Catch: java.lang.Throwable -> L52
            return r0
        L52:
            boolean r1 = d(r5)
            if (r1 == 0) goto L62
            java.lang.String r5 = e(r5)
            r1 = 9
            r0.l = r1
            r0.o = r5
        L62:
            return r0
    }

    public static boolean a(android.content.Context r5, java.lang.String r6, boolean r7) {
            boolean r0 = b(r6)
            r1 = 1
            if (r0 == 0) goto L10
            java.lang.String r6 = f(r6)
            boolean r5 = a(r5, r6, r7, r1)
            return r5
        L10:
            android.net.Uri r0 = android.net.Uri.parse(r6)
            java.lang.String r0 = r0.getScheme()
            r2 = 0
            if (r0 == 0) goto L4e
            java.lang.String r3 = "http"
            boolean r3 = r0.startsWith(r3)
            if (r3 != 0) goto L4e
            com.tkay.core.c.b r3 = com.tkay.core.c.b.a(r5)
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            java.lang.String r4 = r4.o()
            com.tkay.core.c.a r3 = r3.b(r4)
            java.lang.String r4 = "market"
            boolean r0 = r0.startsWith(r4)
            if (r0 == 0) goto L48
            java.lang.String r0 = r3.l()
            java.lang.String r3 = "1"
            boolean r0 = android.text.TextUtils.equals(r0, r3)
            if (r0 == 0) goto L48
            goto L49
        L48:
            r1 = r2
        L49:
            boolean r5 = a(r5, r6, r7, r1)
            return r5
        L4e:
            return r2
    }

    private static boolean a(android.content.Context r4, java.lang.String r5, boolean r6, boolean r7) {
            android.net.Uri r0 = android.net.Uri.parse(r5)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = r0.getScheme()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = "intent"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L4c
            r2 = 1
            if (r1 == 0) goto L28
            android.content.Intent r5 = android.content.Intent.parseUri(r5, r2)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r0 = "android.intent.category.BROWSABLE"
            r5.addCategory(r0)     // Catch: java.lang.Throwable -> L4c
            r0 = 0
            r5.setComponent(r0)     // Catch: java.lang.Throwable -> L4c
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L4c
            r3 = 15
            if (r1 < r3) goto L32
            r5.setSelector(r0)     // Catch: java.lang.Throwable -> L4c
            goto L32
        L28:
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = "android.intent.action.VIEW"
            r5.<init>(r1, r0)     // Catch: java.lang.Throwable -> L4c
            r5.setData(r0)     // Catch: java.lang.Throwable -> L4c
        L32:
            if (r7 == 0) goto L43
            java.lang.String r7 = r5.getPackage()     // Catch: java.lang.Throwable -> L4c
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L4c
            if (r7 == 0) goto L43
            java.lang.String r7 = "com.android.vending"
            r5.setPackage(r7)     // Catch: java.lang.Throwable -> L4c
        L43:
            r7 = 268435456(0x10000000, float:2.524355E-29)
            r5.addFlags(r7)     // Catch: java.lang.Throwable -> L4c
            r4.startActivity(r5)     // Catch: java.lang.Throwable -> L4c
            return r2
        L4c:
            if (r6 == 0) goto L5a
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            com.tkay.core.basead.a.a$1 r6 = new com.tkay.core.basead.a.a$1
            r6.<init>(r4)
            r5.a(r6)
        L5a:
            r4 = 0
            return r4
    }

    public static boolean b(java.lang.String r3) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L31
            if (r1 == 0) goto L8
            return r0
        L8:
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L31
            if (r3 == 0) goto L31
            java.lang.String r1 = r3.getHost()     // Catch: java.lang.Throwable -> L31
            if (r1 != 0) goto L15
            goto L31
        L15:
            java.lang.String r1 = r3.getHost()     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "play.google.com"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L31
            if (r1 != 0) goto L2f
            java.lang.String r3 = r3.getHost()     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = "market.android.com"
            boolean r3 = r3.equals(r1)     // Catch: java.lang.Throwable -> L31
            if (r3 == 0) goto L2e
            goto L2f
        L2e:
            return r0
        L2f:
            r3 = 1
            return r3
        L31:
            return r0
    }

    private static void c(java.lang.String r0) {
            com.tkay.core.common.l.l.a(r0)
            return
    }

    private static boolean d(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto L15
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> L15
            java.lang.String r1 = r1.getScheme()     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = "market"
            boolean r1 = r1.equals(r0)     // Catch: java.lang.Throwable -> L15
            return r1
        L15:
            r1 = 0
            return r1
    }

    private static java.lang.String e(java.lang.String r2) {
            java.lang.String r0 = "market://details?id="
            java.lang.String r1 = ""
            java.lang.String r0 = r2.replace(r0, r1)     // Catch: java.lang.Throwable -> L12
            java.lang.String r1 = "https://play.google.com/store/apps/details?id="
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L12
            java.lang.String r2 = r1.concat(r0)     // Catch: java.lang.Throwable -> L12
        L12:
            return r2
    }

    private static java.lang.String f(java.lang.String r1) {
            java.lang.String r0 = "details?"
            int r0 = r1.indexOf(r0)     // Catch: java.lang.Throwable -> L15
            java.lang.String r1 = r1.substring(r0)     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = "market://"
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L15
            java.lang.String r1 = r0.concat(r1)     // Catch: java.lang.Throwable -> L15
            return r1
        L15:
            r1 = 0
            return r1
    }
}
