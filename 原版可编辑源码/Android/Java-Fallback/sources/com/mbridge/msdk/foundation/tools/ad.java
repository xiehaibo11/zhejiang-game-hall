package com.mbridge.msdk.foundation.tools;

public final class ad extends com.mbridge.msdk.foundation.tools.g {
    public static boolean b;
    public static char[] c;
    public static android.widget.LinearLayout d;

    public static class a {
        private static android.content.Intent a(android.content.Context r2) {
                android.content.Intent r2 = new android.content.Intent
                java.lang.String r0 = "market://details?id=com.package.name"
                android.net.Uri r0 = android.net.Uri.parse(r0)
                java.lang.String r1 = "android.intent.action.VIEW"
                r2.<init>(r1, r0)
                return r2
        }

        public static boolean a(android.content.Context r5, java.lang.String r6, com.mbridge.msdk.out.NativeListener.NativeTrackingListener r7) {
                java.lang.String r0 = "com.android.vending"
                r1 = 0
                java.util.List r2 = b(r5)     // Catch: java.lang.Throwable -> L77
                if (r2 == 0) goto L76
                int r3 = r2.size()     // Catch: java.lang.Throwable -> L77
                if (r3 > 0) goto L10
                goto L76
            L10:
                boolean r3 = b(r6)     // Catch: java.lang.Throwable -> L77
                if (r3 == 0) goto L17
                goto L3a
            L17:
                boolean r3 = c(r6)     // Catch: java.lang.Throwable -> L77
                if (r3 == 0) goto L39
                java.lang.String r3 = "details?id="
                int r3 = r6.indexOf(r3)     // Catch: java.lang.Throwable -> L77
                java.lang.String r6 = r6.substring(r3)     // Catch: java.lang.Throwable -> L77
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L77
                r3.<init>()     // Catch: java.lang.Throwable -> L77
                java.lang.String r4 = "market://"
                r3.append(r4)     // Catch: java.lang.Throwable -> L77
                r3.append(r6)     // Catch: java.lang.Throwable -> L77
                java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L77
                goto L3a
            L39:
                r6 = 0
            L3a:
                boolean r3 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L77
                if (r3 == 0) goto L41
                return r1
            L41:
                android.content.Intent r3 = a(r5)     // Catch: java.lang.Throwable -> L77
                android.net.Uri r6 = android.net.Uri.parse(r6)     // Catch: java.lang.Throwable -> L77
                r3.setData(r6)     // Catch: java.lang.Throwable -> L77
                r6 = 268435456(0x10000000, float:2.524355E-29)
                r3.addFlags(r6)     // Catch: java.lang.Throwable -> L77
                java.util.Iterator r6 = r2.iterator()     // Catch: java.lang.Throwable -> L77
            L55:
                boolean r2 = r6.hasNext()     // Catch: java.lang.Throwable -> L77
                if (r2 == 0) goto L6e
                java.lang.Object r2 = r6.next()     // Catch: java.lang.Throwable -> L77
                android.content.pm.ResolveInfo r2 = (android.content.pm.ResolveInfo) r2     // Catch: java.lang.Throwable -> L77
                android.content.pm.ActivityInfo r2 = r2.activityInfo     // Catch: java.lang.Throwable -> L77
                java.lang.String r2 = r2.packageName     // Catch: java.lang.Throwable -> L77
                boolean r2 = r2.equals(r0)     // Catch: java.lang.Throwable -> L77
                if (r2 == 0) goto L55
                r3.setPackage(r0)     // Catch: java.lang.Throwable -> L77
            L6e:
                r5.startActivity(r3)     // Catch: java.lang.Throwable -> L77
                com.mbridge.msdk.foundation.tools.ad.a(r7)     // Catch: java.lang.Throwable -> L77
                r5 = 1
                return r5
            L76:
                return r1
            L77:
                r5 = move-exception
                java.lang.String r5 = android.util.Log.getStackTraceString(r5)
                java.lang.String r6 = "SDKUtil"
                com.mbridge.msdk.foundation.tools.z.d(r6, r5)
                return r1
        }

        public static boolean a(java.lang.String r1) {
                boolean r0 = b(r1)
                if (r0 != 0) goto Lf
                boolean r1 = c(r1)
                if (r1 == 0) goto Ld
                goto Lf
            Ld:
                r1 = 0
                goto L10
            Lf:
                r1 = 1
            L10:
                return r1
        }

        private static java.util.List<android.content.pm.ResolveInfo> b(android.content.Context r2) {
                android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> Le
                android.content.Intent r2 = a(r2)     // Catch: java.lang.Exception -> Le
                r1 = 0
                java.util.List r2 = r0.queryIntentActivities(r2, r1)     // Catch: java.lang.Exception -> Le
                return r2
            Le:
                r2 = move-exception
                r2.printStackTrace()
                r2 = 0
                return r2
        }

        public static boolean b(java.lang.String r1) {
                boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L15
                if (r0 != 0) goto L1f
                android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> L15
                java.lang.String r1 = r1.getScheme()     // Catch: java.lang.Throwable -> L15
                java.lang.String r0 = "market"
                boolean r1 = r1.equals(r0)     // Catch: java.lang.Throwable -> L15
                return r1
            L15:
                r1 = move-exception
                java.lang.String r1 = android.util.Log.getStackTraceString(r1)
                java.lang.String r0 = "SDKUtil"
                com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            L1f:
                r1 = 0
                return r1
        }

        private static boolean c(java.lang.String r3) {
                r0 = 0
                boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L31
                if (r1 != 0) goto L3b
                android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L31
                if (r3 == 0) goto L30
                java.lang.String r1 = r3.getHost()     // Catch: java.lang.Throwable -> L31
                boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L31
                if (r1 != 0) goto L30
                java.lang.String r1 = r3.getHost()     // Catch: java.lang.Throwable -> L31
                java.lang.String r2 = "play.google.com"
                boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L31
                if (r1 != 0) goto L2f
                java.lang.String r3 = r3.getHost()     // Catch: java.lang.Throwable -> L31
                java.lang.String r1 = "market.android.com"
                boolean r3 = r3.equals(r1)     // Catch: java.lang.Throwable -> L31
                if (r3 == 0) goto L30
            L2f:
                r0 = 1
            L30:
                return r0
            L31:
                r3 = move-exception
                java.lang.String r3 = android.util.Log.getStackTraceString(r3)
                java.lang.String r1 = "SDKUtil"
                com.mbridge.msdk.foundation.tools.z.d(r1, r3)
            L3b:
                return r0
        }
    }

    static {
            r0 = 26
            char[] r0 = new char[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [97, 110, 100, 114, 111, 105, 100, 99, 111, 110, 116, 101, 110, 116, 112, 109, 103, 101, 116, 67, 111, 110, 116, 101, 120, 116} // fill-array
            com.mbridge.msdk.foundation.tools.ad.c = r0
            return
    }

    public static java.lang.String a(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L8
            r5 = 0
            return r5
        L8:
            com.mbridge.msdk.foundation.same.b.c r0 = com.mbridge.msdk.foundation.same.b.c.f
            java.io.File r0 = com.mbridge.msdk.foundation.same.b.e.a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r2 = ""
            if (r1 == 0) goto L17
            goto L56
        L17:
            java.lang.String r1 = "/"
            int r3 = r5.lastIndexOf(r1)
            r4 = -1
            if (r3 != r4) goto L34
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r5 = r5.hashCode()
            r1.append(r5)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            goto L56
        L34:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            int r4 = r5.hashCode()
            int r1 = r5.lastIndexOf(r1)
            int r1 = r1 + 1
            java.lang.String r5 = r5.substring(r1)
            int r5 = r5.hashCode()
            int r4 = r4 + r5
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
        L56:
            java.io.File r5 = new java.io.File
            r5.<init>(r0, r2)
            java.lang.String r5 = r5.getAbsolutePath()
            return r5
    }

    public static void a(android.content.Context r8, java.lang.String r9, com.mbridge.msdk.foundation.entity.CampaignEx r10, com.mbridge.msdk.click.b r11, com.mbridge.msdk.out.BaseTrackingListener r12) {
            com.mbridge.msdk.foundation.webview.BrowserView r6 = new com.mbridge.msdk.foundation.webview.BrowserView     // Catch: java.lang.Exception -> L2f
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L2f
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L2f
            r6.<init>(r0, r10)     // Catch: java.lang.Exception -> L2f
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Exception -> L2f
            int r1 = com.mbridge.msdk.foundation.tools.v.x(r8)     // Catch: java.lang.Exception -> L2f
            int r2 = com.mbridge.msdk.foundation.tools.v.y(r8)     // Catch: java.lang.Exception -> L2f
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L2f
            r6.setLayoutParams(r0)     // Catch: java.lang.Exception -> L2f
            com.mbridge.msdk.foundation.webview.a r7 = new com.mbridge.msdk.foundation.webview.a     // Catch: java.lang.Exception -> L2f
            r0 = r7
            r1 = r8
            r2 = r10
            r3 = r11
            r4 = r6
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L2f
            r6.setListener(r7)     // Catch: java.lang.Exception -> L2f
            r6.loadUrl(r9)     // Catch: java.lang.Exception -> L2f
            goto L39
        L2f:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            java.lang.String r9 = "SDKUtil"
            com.mbridge.msdk.foundation.tools.z.d(r9, r8)
        L39:
            return
    }

    public static void a(android.content.Context r4, java.lang.String r5, com.mbridge.msdk.foundation.entity.CampaignEx r6, com.mbridge.msdk.out.NativeListener.NativeTrackingListener r7) {
            java.lang.String r0 = "url"
            java.lang.String r1 = "com.mbridge.msdk.activity.MBCommonActivity"
            if (r4 != 0) goto L7
            return
        L7:
            boolean r2 = com.mbridge.msdk.foundation.tools.ad.b
            if (r2 == 0) goto Lf
            a(r4, r5, r7)
            return
        Lf:
            java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L66
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L66
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Exception -> L66
            r2.<init>(r4, r1)     // Catch: java.lang.Exception -> L66
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L66
            if (r1 == 0) goto L22
            return
        L22:
            boolean r1 = com.mbridge.msdk.foundation.tools.ad.a.b(r5)     // Catch: java.lang.Exception -> L66
            if (r1 == 0) goto L41
            java.lang.String r1 = "market://details?id="
            java.lang.String r3 = ""
            java.lang.String r5 = r5.replace(r1, r3)     // Catch: java.lang.Exception -> L66
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L66
            r1.<init>()     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "https://play.google.com/store/apps/details?id="
            r1.append(r3)     // Catch: java.lang.Exception -> L66
            r1.append(r5)     // Catch: java.lang.Exception -> L66
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L66
        L41:
            r2.putExtra(r0, r5)     // Catch: java.lang.Exception -> L66
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L66
            r1.<init>()     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "webview url = "
            r1.append(r3)     // Catch: java.lang.Exception -> L66
            r1.append(r5)     // Catch: java.lang.Exception -> L66
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L66
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L66
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r0)     // Catch: java.lang.Exception -> L66
            java.lang.String r0 = "mvcommon"
            r2.putExtra(r0, r6)     // Catch: java.lang.Exception -> L66
            r4.startActivity(r2)     // Catch: java.lang.Exception -> L66
            goto L69
        L66:
            a(r4, r5, r7)
        L69:
            return
    }

    public static void a(android.content.Context r4, java.lang.String r5, com.mbridge.msdk.out.BaseTrackingListener r6) {
            java.lang.String r0 = "android.intent.action.VIEW"
            if (r5 == 0) goto L70
            if (r4 != 0) goto L7
            goto L70
        L7:
            boolean r1 = com.mbridge.msdk.foundation.tools.ad.a.b(r5)     // Catch: java.lang.Exception -> L52
            if (r1 == 0) goto L26
            java.lang.String r1 = "market://details?id="
            java.lang.String r2 = ""
            java.lang.String r5 = r5.replace(r1, r2)     // Catch: java.lang.Exception -> L52
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L52
            r1.<init>()     // Catch: java.lang.Exception -> L52
            java.lang.String r2 = "https://play.google.com/store/apps/details?id="
            r1.append(r2)     // Catch: java.lang.Exception -> L52
            r1.append(r5)     // Catch: java.lang.Exception -> L52
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L52
        L26:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L52
            android.net.Uri r2 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L52
            r1.<init>(r0, r2)     // Catch: java.lang.Exception -> L52
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r2)     // Catch: java.lang.Exception -> L52
            android.content.pm.PackageManager r2 = r4.getPackageManager()     // Catch: java.lang.Exception -> L52
            r3 = 65536(0x10000, float:9.1835E-41)
            android.content.pm.ResolveInfo r2 = r2.resolveActivity(r1, r3)     // Catch: java.lang.Exception -> L52
            if (r2 == 0) goto L4b
            android.content.pm.ActivityInfo r3 = r2.activityInfo     // Catch: java.lang.Exception -> L52
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Exception -> L52
            android.content.pm.ActivityInfo r2 = r2.activityInfo     // Catch: java.lang.Exception -> L52
            java.lang.String r2 = r2.name     // Catch: java.lang.Exception -> L52
            r1.setClassName(r3, r2)     // Catch: java.lang.Exception -> L52
        L4b:
            r4.startActivity(r1)     // Catch: java.lang.Exception -> L52
            a(r6)     // Catch: java.lang.Exception -> L52
            goto L70
        L52:
            r1 = move-exception
            r1.printStackTrace()
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L6c
            android.net.Uri r5 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L6c
            r1.<init>(r0, r5)     // Catch: java.lang.Exception -> L6c
            r5 = 268468224(0x10008000, float:2.5342157E-29)
            r1.addFlags(r5)     // Catch: java.lang.Exception -> L6c
            r4.startActivity(r1)     // Catch: java.lang.Exception -> L6c
            a(r6)     // Catch: java.lang.Exception -> L6c
            goto L70
        L6c:
            r4 = move-exception
            r4.printStackTrace()
        L70:
            return
    }

    public static void a(android.content.Context r8, java.lang.String r9, com.mbridge.msdk.out.NativeListener.NativeTrackingListener r10) {
            java.lang.String r0 = "com.android.vending"
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> La5
            java.lang.String r2 = "android.intent.action.VIEW"
            android.net.Uri r3 = android.net.Uri.parse(r9)     // Catch: java.lang.Exception -> La5
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> La5
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r2)     // Catch: java.lang.Exception -> La5
            android.content.pm.PackageManager r2 = r8.getPackageManager()     // Catch: java.lang.Exception -> La5
            r3 = 0
            java.util.List r2 = r2.queryIntentActivities(r1, r3)     // Catch: java.lang.Exception -> La5
            int r4 = r2.size()     // Catch: java.lang.Exception -> La5
            if (r4 <= 0) goto L22
            r3 = 1
        L22:
            java.lang.String r4 = "market://"
            boolean r4 = r9.startsWith(r4)     // Catch: java.lang.Exception -> La5
            java.lang.String r5 = "https://play.google.com/store/apps/details?id="
            java.lang.String r6 = ""
            java.lang.String r7 = "market://details?id="
            if (r4 == 0) goto L86
            if (r3 != 0) goto L49
            java.lang.String r9 = r9.replace(r7, r6)     // Catch: java.lang.Exception -> La5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La5
            r0.<init>()     // Catch: java.lang.Exception -> La5
            r0.append(r5)     // Catch: java.lang.Exception -> La5
            r0.append(r9)     // Catch: java.lang.Exception -> La5
            java.lang.String r9 = r0.toString()     // Catch: java.lang.Exception -> La5
            a(r8, r9, r10)     // Catch: java.lang.Exception -> La5
            goto Laf
        L49:
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> La5
        L4d:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> La5
            if (r3 == 0) goto L68
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> La5
            android.content.pm.ResolveInfo r3 = (android.content.pm.ResolveInfo) r3     // Catch: java.lang.Exception -> La5
            android.content.pm.ActivityInfo r3 = r3.activityInfo     // Catch: java.lang.Exception -> La5
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Exception -> La5
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Exception -> La5
            if (r3 == 0) goto L4d
            java.lang.String r2 = "com.android.vending.AssetBrowserActivity"
            r1.setClassName(r0, r2)     // Catch: java.lang.Exception -> La5
        L68:
            r8.startActivity(r1)     // Catch: java.lang.Exception -> L6f
            a(r10)     // Catch: java.lang.Exception -> L6f
            goto Laf
        L6f:
            java.lang.String r9 = r9.replace(r7, r6)     // Catch: java.lang.Exception -> La5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La5
            r0.<init>()     // Catch: java.lang.Exception -> La5
            r0.append(r5)     // Catch: java.lang.Exception -> La5
            r0.append(r9)     // Catch: java.lang.Exception -> La5
            java.lang.String r9 = r0.toString()     // Catch: java.lang.Exception -> La5
            a(r8, r9, r10)     // Catch: java.lang.Exception -> La5
            goto Laf
        L86:
            java.lang.String r0 = "https://play.google.com/"
            boolean r0 = r9.startsWith(r0)     // Catch: java.lang.Exception -> La5
            if (r0 == 0) goto Laf
            java.lang.String r9 = r9.replace(r5, r6)     // Catch: java.lang.Exception -> La5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La5
            r0.<init>()     // Catch: java.lang.Exception -> La5
            r0.append(r7)     // Catch: java.lang.Exception -> La5
            r0.append(r9)     // Catch: java.lang.Exception -> La5
            java.lang.String r9 = r0.toString()     // Catch: java.lang.Exception -> La5
            a(r8, r9, r10)     // Catch: java.lang.Exception -> La5
            goto Laf
        La5:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            java.lang.String r9 = "SDKUtil"
            com.mbridge.msdk.foundation.tools.z.d(r9, r8)
        Laf:
            return
    }

    public static void a(android.view.ViewGroup r1) {
            if (r1 != 0) goto La
            java.lang.String r1 = "SDKUtil"
            java.lang.String r0 = "hide linkType==8 loading view failed. viewGroup is null"
            com.mbridge.msdk.foundation.tools.z.c(r1, r0)
            return
        La:
            android.widget.LinearLayout r0 = com.mbridge.msdk.foundation.tools.ad.d     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto Lf
            return
        Lf:
            android.widget.LinearLayout r0 = com.mbridge.msdk.foundation.tools.ad.d     // Catch: java.lang.Throwable -> L15
            r1.removeView(r0)     // Catch: java.lang.Throwable -> L15
            goto L19
        L15:
            r1 = move-exception
            r1.printStackTrace()
        L19:
            return
    }

    public static void a(com.mbridge.msdk.out.BaseTrackingListener r1) {
            boolean r0 = r1 instanceof com.mbridge.msdk.out.NativeListener.TrackingExListener
            if (r0 == 0) goto L9
            com.mbridge.msdk.out.NativeListener$TrackingExListener r1 = (com.mbridge.msdk.out.NativeListener.TrackingExListener) r1
            r1.onLeaveApp()
        L9:
            return
    }

    public static void a(com.mbridge.msdk.out.Campaign r1, android.view.ViewGroup r2) {
            r0 = 0
            a(r1, r2, r0, r0)
            return
    }

    public static void a(com.mbridge.msdk.out.Campaign r4, android.view.ViewGroup r5, int r6, int r7) {
            if (r4 == 0) goto Lb9
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4
            int r0 = r4.getLinkType()
            r1 = 8
            if (r0 != r1) goto Lb9
            com.mbridge.msdk.foundation.entity.AabEntity r0 = r4.getAabEntity()
            if (r0 == 0) goto Lb9
            com.mbridge.msdk.foundation.entity.AabEntity r4 = r4.getAabEntity()
            int r4 = r4.getHlp()
            r0 = 1
            if (r4 == r0) goto L1f
            goto Lb9
        L1f:
            if (r5 != 0) goto L29
            java.lang.String r4 = "SDKUtil"
            java.lang.String r5 = "show linkType==8 loading view failed. viewGroup is null"
            com.mbridge.msdk.foundation.tools.z.c(r4, r5)
            return
        L29:
            android.widget.LinearLayout r4 = com.mbridge.msdk.foundation.tools.ad.d     // Catch: java.lang.Exception -> Lb5
            if (r4 != 0) goto L67
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lb5
            android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> Lb5
            boolean r0 = r4 instanceof android.app.Activity     // Catch: java.lang.Exception -> Lb5
            r1 = 0
            java.lang.String r2 = "layout"
            java.lang.String r3 = "mbridge_cm_loading_layout"
            if (r0 == 0) goto L57
            android.content.Context r0 = r4.getApplicationContext()     // Catch: java.lang.Exception -> Lb5
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)     // Catch: java.lang.Exception -> Lb5
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Exception -> Lb5
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r3, r2)     // Catch: java.lang.Exception -> Lb5
            android.view.View r4 = r0.inflate(r4, r1)     // Catch: java.lang.Exception -> Lb5
            android.widget.LinearLayout r4 = (android.widget.LinearLayout) r4     // Catch: java.lang.Exception -> Lb5
            com.mbridge.msdk.foundation.tools.ad.d = r4     // Catch: java.lang.Exception -> Lb5
            goto L67
        L57:
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r4)     // Catch: java.lang.Exception -> Lb5
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r3, r2)     // Catch: java.lang.Exception -> Lb5
            android.view.View r4 = r0.inflate(r4, r1)     // Catch: java.lang.Exception -> Lb5
            android.widget.LinearLayout r4 = (android.widget.LinearLayout) r4     // Catch: java.lang.Exception -> Lb5
            com.mbridge.msdk.foundation.tools.ad.d = r4     // Catch: java.lang.Exception -> Lb5
        L67:
            int r4 = r5.getWidth()     // Catch: java.lang.Exception -> Lb5
            int r0 = r5.getHeight()     // Catch: java.lang.Exception -> Lb5
            int r4 = java.lang.Math.min(r4, r0)     // Catch: java.lang.Exception -> Lb5
            int r0 = r4 / 4
            r1 = 70
            int r0 = java.lang.Math.max(r0, r1)     // Catch: java.lang.Exception -> Lb5
            int r4 = java.lang.Math.min(r0, r4)     // Catch: java.lang.Exception -> Lb5
            boolean r0 = r5 instanceof android.widget.FrameLayout     // Catch: java.lang.Exception -> Lb5
            if (r0 == 0) goto L97
            android.widget.FrameLayout$LayoutParams r6 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Exception -> Lb5
            r6.<init>(r4, r4)     // Catch: java.lang.Exception -> Lb5
            r4 = 17
            r6.gravity = r4     // Catch: java.lang.Exception -> Lb5
            android.widget.LinearLayout r4 = com.mbridge.msdk.foundation.tools.ad.d     // Catch: java.lang.Exception -> Lb5
            com.mbridge.msdk.foundation.tools.an.a(r4)     // Catch: java.lang.Exception -> Lb5
            android.widget.LinearLayout r4 = com.mbridge.msdk.foundation.tools.ad.d     // Catch: java.lang.Exception -> Lb5
            r5.addView(r4, r6)     // Catch: java.lang.Exception -> Lb5
            goto Lb9
        L97:
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> Lb5
            r0.<init>(r4, r4)     // Catch: java.lang.Exception -> Lb5
            if (r7 != 0) goto La6
            if (r6 != 0) goto La6
            r4 = 13
            r0.addRule(r4)     // Catch: java.lang.Exception -> Lb5
            goto Laa
        La6:
            r0.leftMargin = r7     // Catch: java.lang.Exception -> Lb5
            r0.topMargin = r6     // Catch: java.lang.Exception -> Lb5
        Laa:
            android.widget.LinearLayout r4 = com.mbridge.msdk.foundation.tools.ad.d     // Catch: java.lang.Exception -> Lb5
            com.mbridge.msdk.foundation.tools.an.a(r4)     // Catch: java.lang.Exception -> Lb5
            android.widget.LinearLayout r4 = com.mbridge.msdk.foundation.tools.ad.d     // Catch: java.lang.Exception -> Lb5
            r5.addView(r4, r0)     // Catch: java.lang.Exception -> Lb5
            goto Lb9
        Lb5:
            r4 = move-exception
            r4.printStackTrace()
        Lb9:
            return
    }
}
