package com.tkay.expressad.foundation.h;

public final class s extends com.tkay.expressad.foundation.h.f {
    public static boolean a = false;
    public static char[] b = null;
    private static final java.lang.String c = "SDKUtil";

    public static class a {
        public static final java.lang.String a = "com.android.vending";
        public static final java.lang.String b = "market";
        public static final java.lang.String c = "play.google.com";
        public static final java.lang.String d = "market.android.com";
        public static final java.lang.String e = "google.com";
        public static final java.lang.String f = "market://";
        public static final java.lang.String g = "details?id=";
        public static final java.lang.String h = "market://details?id=com.package.name";

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        private static android.content.Intent a() {
                android.content.Intent r0 = new android.content.Intent
                java.lang.String r1 = "market://details?id=com.package.name"
                android.net.Uri r1 = android.net.Uri.parse(r1)
                java.lang.String r2 = "android.intent.action.VIEW"
                r0.<init>(r2, r1)
                return r0
        }

        private static java.util.List<android.content.pm.ResolveInfo> a(android.content.Context r2) {
                android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> Le
                android.content.Intent r0 = a()     // Catch: java.lang.Exception -> Le
                r1 = 0
                java.util.List r2 = r2.queryIntentActivities(r0, r1)     // Catch: java.lang.Exception -> Le
                return r2
            Le:
                r2 = move-exception
                r2.printStackTrace()
                r2 = 0
                return r2
        }

        public static boolean a(android.content.Context r2, java.lang.String r3, com.tkay.expressad.out.j.c r4) {
                r0 = 0
                boolean r1 = b(r3)     // Catch: java.lang.Throwable -> L43
                if (r1 == 0) goto L8
                goto L24
            L8:
                boolean r1 = c(r3)     // Catch: java.lang.Throwable -> L43
                if (r1 == 0) goto L23
                java.lang.String r1 = "details?id="
                int r1 = r3.indexOf(r1)     // Catch: java.lang.Throwable -> L43
                java.lang.String r3 = r3.substring(r1)     // Catch: java.lang.Throwable -> L43
                java.lang.String r1 = "market://"
                java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L43
                java.lang.String r3 = r1.concat(r3)     // Catch: java.lang.Throwable -> L43
                goto L24
            L23:
                r3 = 0
            L24:
                boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L43
                if (r1 == 0) goto L2b
                return r0
            L2b:
                android.content.Intent r1 = a()     // Catch: java.lang.Throwable -> L43
                android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L43
                r1.setData(r3)     // Catch: java.lang.Throwable -> L43
                r3 = 268435456(0x10000000, float:2.524355E-29)
                r1.addFlags(r3)     // Catch: java.lang.Throwable -> L43
                r2.startActivity(r1)     // Catch: java.lang.Throwable -> L43
                com.tkay.expressad.foundation.h.s.a(r4)     // Catch: java.lang.Throwable -> L43
                r2 = 1
                return r2
            L43:
                r2 = move-exception
                android.util.Log.getStackTraceString(r2)
                return r0
        }

        public static boolean a(java.lang.String r1) {
                boolean r0 = b(r1)
                if (r0 != 0) goto Lf
                boolean r1 = c(r1)
                if (r1 == 0) goto Ld
                goto Lf
            Ld:
                r1 = 0
                return r1
            Lf:
                r1 = 1
                return r1
        }

        private static boolean b(android.content.Context r0) {
                java.util.List r0 = a(r0)
                if (r0 == 0) goto Le
                int r0 = r0.size()
                if (r0 <= 0) goto Le
                r0 = 1
                return r0
            Le:
                r0 = 0
                return r0
        }

        public static boolean b(java.lang.String r1) {
                boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L15
                if (r0 != 0) goto L19
                android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> L15
                java.lang.String r1 = r1.getScheme()     // Catch: java.lang.Throwable -> L15
                java.lang.String r0 = "market"
                boolean r1 = r1.equals(r0)     // Catch: java.lang.Throwable -> L15
                return r1
            L15:
                r1 = move-exception
                android.util.Log.getStackTraceString(r1)
            L19:
                r1 = 0
                return r1
        }

        private static boolean c(java.lang.String r3) {
                r0 = 0
                boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L27
                if (r1 != 0) goto L2b
                android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L27
                java.lang.String r1 = r3.getHost()     // Catch: java.lang.Throwable -> L27
                java.lang.String r2 = "play.google.com"
                boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L27
                if (r1 != 0) goto L25
                java.lang.String r3 = r3.getHost()     // Catch: java.lang.Throwable -> L27
                java.lang.String r1 = "market.android.com"
                boolean r3 = r3.equals(r1)     // Catch: java.lang.Throwable -> L27
                if (r3 == 0) goto L24
                goto L25
            L24:
                return r0
            L25:
                r3 = 1
                return r3
            L27:
                r3 = move-exception
                android.util.Log.getStackTraceString(r3)
            L2b:
                return r0
        }

        private static java.lang.String d(java.lang.String r1) {
                boolean r0 = b(r1)
                if (r0 == 0) goto L7
                return r1
            L7:
                boolean r0 = c(r1)
                if (r0 == 0) goto L22
                java.lang.String r0 = "details?id="
                int r0 = r1.indexOf(r0)
                java.lang.String r1 = r1.substring(r0)
                java.lang.String r1 = java.lang.String.valueOf(r1)
                java.lang.String r0 = "market://"
                java.lang.String r1 = r0.concat(r1)
                return r1
            L22:
                r1 = 0
                return r1
        }
    }

    static {
            r0 = 26
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [97, 110, 100, 114, 111, 105, 100, 99, 111, 110, 116, 101, 110, 116, 112, 109, 103, 101, 116, 67, 111, 110, 116, 101, 120, 116} // fill-array
            com.tkay.expressad.foundation.h.s.b = r0
            return
    }

    public s() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a() {
            com.tkay.expressad.foundation.g.c.c r0 = com.tkay.expressad.foundation.g.c.c.e
            java.lang.String r0 = com.tkay.expressad.foundation.g.c.f.b(r0)
            return r0
    }

    public static java.lang.String a(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L8
            r4 = 0
            return r4
        L8:
            com.tkay.expressad.foundation.g.c.c r0 = com.tkay.expressad.foundation.g.c.c.h
            java.io.File r0 = com.tkay.expressad.foundation.g.c.f.a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L17
            java.lang.String r4 = ""
            goto L50
        L17:
            java.lang.String r1 = "/"
            int r2 = r4.lastIndexOf(r1)
            r3 = -1
            if (r2 != r3) goto L31
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r4 = r4.hashCode()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            goto L50
        L31:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r3 = r4.hashCode()
            int r1 = r4.lastIndexOf(r1)
            int r1 = r1 + 1
            java.lang.String r4 = r4.substring(r1)
            int r4 = r4.hashCode()
            int r3 = r3 + r4
            r2.append(r3)
            java.lang.String r4 = r2.toString()
        L50:
            java.io.File r1 = new java.io.File
            r1.<init>(r0, r4)
            java.lang.String r4 = r1.getAbsolutePath()
            return r4
    }

    public static void a(android.content.Context r3, java.lang.String r4, com.tkay.expressad.foundation.d.c r5, com.tkay.expressad.out.j.c r6) {
            java.lang.String r0 = "com.tkay.expressad.activity.TYCommonActivity"
            if (r3 != 0) goto L5
            return
        L5:
            boolean r1 = com.tkay.expressad.foundation.h.s.a
            if (r1 == 0) goto Ld
            a(r3, r4, r6)
            return
        Ld:
            java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L4b
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L4b
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L4b
            r1.<init>(r3, r0)     // Catch: java.lang.Exception -> L4b
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L4b
            if (r0 == 0) goto L20
            return
        L20:
            boolean r0 = com.tkay.expressad.foundation.h.s.a.b(r4)     // Catch: java.lang.Exception -> L4b
            if (r0 == 0) goto L38
            java.lang.String r0 = "market://details?id="
            java.lang.String r2 = ""
            java.lang.String r4 = r4.replace(r0, r2)     // Catch: java.lang.Exception -> L4b
            java.lang.String r0 = "https://play.google.com/store/apps/details?id="
            java.lang.String r2 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L4b
            java.lang.String r4 = r0.concat(r2)     // Catch: java.lang.Exception -> L4b
        L38:
            java.lang.String r0 = "url"
            r1.putExtra(r0, r4)     // Catch: java.lang.Exception -> L4b
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r1.setFlags(r0)     // Catch: java.lang.Exception -> L4b
            java.lang.String r0 = "mvcommon"
            r1.putExtra(r0, r5)     // Catch: java.lang.Exception -> L4b
            r3.startActivity(r1)     // Catch: java.lang.Exception -> L4b
            return
        L4b:
            a(r3, r4, r6)
            return
    }

    public static void a(android.content.Context r4, java.lang.String r5, com.tkay.expressad.out.j.c r6) {
            java.lang.String r0 = "android.intent.action.VIEW"
            if (r5 == 0) goto L69
            if (r4 != 0) goto L7
            goto L69
        L7:
            boolean r1 = com.tkay.expressad.foundation.h.s.a.b(r5)     // Catch: java.lang.Exception -> L4b
            if (r1 == 0) goto L1f
            java.lang.String r1 = "market://details?id="
            java.lang.String r2 = ""
            java.lang.String r5 = r5.replace(r1, r2)     // Catch: java.lang.Exception -> L4b
            java.lang.String r1 = "https://play.google.com/store/apps/details?id="
            java.lang.String r2 = java.lang.String.valueOf(r5)     // Catch: java.lang.Exception -> L4b
            java.lang.String r5 = r1.concat(r2)     // Catch: java.lang.Exception -> L4b
        L1f:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L4b
            android.net.Uri r2 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L4b
            r1.<init>(r0, r2)     // Catch: java.lang.Exception -> L4b
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r2)     // Catch: java.lang.Exception -> L4b
            android.content.pm.PackageManager r2 = r4.getPackageManager()     // Catch: java.lang.Exception -> L4b
            r3 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ResolveInfo r2 = r2.resolveActivity(r1, r3)     // Catch: java.lang.Exception -> L4b
            if (r2 == 0) goto L44
            android.content.pm.ActivityInfo r3 = r2.activityInfo     // Catch: java.lang.Exception -> L4b
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Exception -> L4b
            android.content.pm.ActivityInfo r2 = r2.activityInfo     // Catch: java.lang.Exception -> L4b
            java.lang.String r2 = r2.name     // Catch: java.lang.Exception -> L4b
            r1.setClassName(r3, r2)     // Catch: java.lang.Exception -> L4b
        L44:
            r4.startActivity(r1)     // Catch: java.lang.Exception -> L4b
            a(r6)     // Catch: java.lang.Exception -> L4b
            return
        L4b:
            r1 = move-exception
            r1.printStackTrace()
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L65
            android.net.Uri r5 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L65
            r1.<init>(r0, r5)     // Catch: java.lang.Exception -> L65
            r5 = 268468224(0x10008000, float:2.5342157E-29)
            r1.addFlags(r5)     // Catch: java.lang.Exception -> L65
            r4.startActivity(r1)     // Catch: java.lang.Exception -> L65
            a(r6)     // Catch: java.lang.Exception -> L65
            return
        L65:
            r4 = move-exception
            r4.printStackTrace()
        L69:
            return
    }

    public static void a(com.tkay.expressad.out.j.c r1) {
            boolean r0 = r1 instanceof com.tkay.expressad.out.j.e
            if (r0 == 0) goto L9
            com.tkay.expressad.out.j$e r1 = (com.tkay.expressad.out.j.e) r1
            r1.c()
        L9:
            return
    }

    private static java.lang.String b(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            java.lang.String r0 = "/"
            int r1 = r3.lastIndexOf(r0)
            r2 = -1
            if (r1 != r2) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r3 = r3.hashCode()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L23:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r3.hashCode()
            int r0 = r3.lastIndexOf(r0)
            int r0 = r0 + 1
            java.lang.String r3 = r3.substring(r0)
            int r3 = r3.hashCode()
            int r2 = r2 + r3
            r1.append(r2)
            java.lang.String r3 = r1.toString()
            return r3
    }

    private static void b(android.content.Context r8, java.lang.String r9, com.tkay.expressad.out.j.c r10) {
            java.lang.String r0 = "com.android.vending"
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L90
            java.lang.String r2 = "android.intent.action.VIEW"
            android.net.Uri r3 = android.net.Uri.parse(r9)     // Catch: java.lang.Exception -> L90
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L90
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r2)     // Catch: java.lang.Exception -> L90
            android.content.pm.PackageManager r2 = r8.getPackageManager()     // Catch: java.lang.Exception -> L90
            r3 = 0
            java.util.List r2 = r2.queryIntentActivities(r1, r3)     // Catch: java.lang.Exception -> L90
            int r4 = r2.size()     // Catch: java.lang.Exception -> L90
            if (r4 <= 0) goto L22
            r3 = 1
        L22:
            java.lang.String r4 = "market://"
            boolean r4 = r9.startsWith(r4)     // Catch: java.lang.Exception -> L90
            java.lang.String r5 = "https://play.google.com/store/apps/details?id="
            java.lang.String r6 = ""
            java.lang.String r7 = "market://details?id="
            if (r4 == 0) goto L78
            if (r3 != 0) goto L42
            java.lang.String r9 = r9.replace(r7, r6)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = r5.concat(r9)     // Catch: java.lang.Exception -> L90
            a(r8, r9, r10)     // Catch: java.lang.Exception -> L90
            return
        L42:
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L90
        L46:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L90
            if (r3 == 0) goto L61
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L90
            android.content.pm.ResolveInfo r3 = (android.content.pm.ResolveInfo) r3     // Catch: java.lang.Exception -> L90
            android.content.pm.ActivityInfo r3 = r3.activityInfo     // Catch: java.lang.Exception -> L90
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Exception -> L90
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Exception -> L90
            if (r3 == 0) goto L46
            java.lang.String r2 = "com.android.vending.AssetBrowserActivity"
            r1.setClassName(r0, r2)     // Catch: java.lang.Exception -> L90
        L61:
            r8.startActivity(r1)     // Catch: java.lang.Exception -> L68
            a(r10)     // Catch: java.lang.Exception -> L68
            return
        L68:
            java.lang.String r9 = r9.replace(r7, r6)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = r5.concat(r9)     // Catch: java.lang.Exception -> L90
            a(r8, r9, r10)     // Catch: java.lang.Exception -> L90
            return
        L78:
            java.lang.String r0 = "https://play.google.com/"
            boolean r0 = r9.startsWith(r0)     // Catch: java.lang.Exception -> L90
            if (r0 == 0) goto L8f
            java.lang.String r9 = r9.replace(r5, r6)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = r7.concat(r9)     // Catch: java.lang.Exception -> L90
            b(r8, r9, r10)     // Catch: java.lang.Exception -> L90
        L8f:
            return
        L90:
            r8 = move-exception
            r8.getMessage()
            return
    }
}
