package com.ss.android.downloadlib.utils;

public class rg {


    private static class rg implements java.lang.reflect.InvocationHandler {
        private java.lang.Object rg;

        private rg(java.lang.Object r1) {
                r0 = this;
                r0.<init>()
                r0.rg = r1
                return
        }

        rg(java.lang.Object r1, com.ss.android.downloadlib.utils.rg.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public java.lang.Object invoke(java.lang.Object r2, java.lang.reflect.Method r3, java.lang.Object[] r4) throws java.lang.Throwable {
                r1 = this;
                java.lang.String r2 = "startActivity"
                java.lang.String r0 = r3.getName()     // Catch: java.lang.Throwable -> Lf
                boolean r2 = r2.contains(r0)     // Catch: java.lang.Throwable -> Lf
                if (r2 == 0) goto Lf
                com.ss.android.downloadlib.utils.rg.rg(r4)     // Catch: java.lang.Throwable -> Lf
            Lf:
                java.lang.Object r2 = r1.rg
                java.lang.Object r2 = r3.invoke(r2, r4)
                return r2
        }
    }

    public static java.lang.String df(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L1a
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Exception -> L1a
            r2 = 0
            android.content.pm.ApplicationInfo r3 = r0.getApplicationInfo(r3, r2)     // Catch: java.lang.Exception -> L1a
            if (r3 == 0) goto L1a
            java.lang.String r3 = r3.sourceDir     // Catch: java.lang.Exception -> L1a
            return r3
        L1a:
            return r1
    }

    static void df() {
            q()
            return
    }

    private static void q() {
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L60
            r1 = 26
            if (r0 >= r1) goto L13
            java.lang.String r0 = "android.app.ActivityManagerNative"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L60
            java.lang.String r1 = "gDefault"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.Throwable -> L60
            goto L1f
        L13:
            java.lang.String r0 = "android.app.ActivityManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L60
            java.lang.String r1 = "IActivityManagerSingleton"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.Throwable -> L60
        L1f:
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.Throwable -> L60
            r2 = 0
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L60
            java.lang.String r3 = "android.util.Singleton"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L60
            java.lang.String r4 = "mInstance"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.Throwable -> L60
            r3.setAccessible(r1)     // Catch: java.lang.Throwable -> L60
            java.lang.Object r4 = r3.get(r0)     // Catch: java.lang.Throwable -> L60
            if (r4 != 0) goto L3e
            return
        L3e:
            java.lang.String r5 = "android.app.IActivityManager"
            java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.Throwable -> L60
            if (r5 != 0) goto L47
            return
        L47:
            com.ss.android.downloadlib.utils.rg$rg r6 = new com.ss.android.downloadlib.utils.rg$rg     // Catch: java.lang.Throwable -> L60
            r6.<init>(r4, r2)     // Catch: java.lang.Throwable -> L60
            java.lang.Thread r2 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L60
            java.lang.ClassLoader r2 = r2.getContextClassLoader()     // Catch: java.lang.Throwable -> L60
            java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> L60
            r4 = 0
            r1[r4] = r5     // Catch: java.lang.Throwable -> L60
            java.lang.Object r1 = java.lang.reflect.Proxy.newProxyInstance(r2, r1, r6)     // Catch: java.lang.Throwable -> L60
            r3.set(r0, r1)     // Catch: java.lang.Throwable -> L60
        L60:
            return
    }

    public static int rg(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r1 = 5
            return r1
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            int r1 = com.ss.android.ttmd5.TTMd5.checkMd5(r1, r0)
            return r1
    }

    public static java.lang.String rg(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            java.lang.String r1 = com.ss.android.ttmd5.TTMd5.ttmd5(r0)
            return r1
    }

    public static void rg() {
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "hook"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            r1 = 1
            if (r0 == r1) goto Lf
            return
        Lf:
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.utils.rg$1 r1 = new com.ss.android.downloadlib.utils.rg$1
            r1.<init>()
            r2 = 10000(0x2710, double:4.9407E-320)
            r0.rg(r1, r2)
            return
    }

    public static void rg(java.lang.Object[] r8) {
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            r1 = 0
            java.lang.String r2 = "hook"
            int r0 = r0.optInt(r2, r1)
            r2 = 1
            if (r0 == r2) goto Lf
            return
        Lf:
            r0 = r8[r2]
            boolean r0 = r0 instanceof java.lang.String
            if (r0 == 0) goto L129
            r0 = 2
            r3 = r8[r0]
            boolean r3 = r3 instanceof android.content.Intent
            if (r3 == 0) goto L129
            r0 = r8[r0]
            android.content.Intent r0 = (android.content.Intent) r0
            java.lang.String r3 = r0.getAction()
            java.lang.String r4 = "android.intent.action.VIEW"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L129
            java.lang.String r3 = com.ss.android.socialbase.downloader.constants.DownloadConstants.MIME_APK
            java.lang.String r4 = r0.getType()
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L129
            boolean r3 = com.ss.android.socialbase.appdownloader.c.pt.q()
            java.lang.String r4 = "null"
            if (r3 == 0) goto L56
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "hook_vivo_arg"
            java.lang.String r3 = "com.android.settings"
            java.lang.String r0 = r0.optString(r1, r3)
            boolean r1 = r4.equals(r0)
            if (r1 != 0) goto L129
            r8[r2] = r0
            goto L129
        L56:
            boolean r3 = com.ss.android.socialbase.appdownloader.c.pt.pt()
            if (r3 == 0) goto L100
            org.json.JSONObject r3 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "com."
            r5.append(r6)
            java.lang.String r6 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LOWER_OPPO
            r5.append(r6)
            java.lang.String r6 = ".market"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "hook_kllk_arg1"
            java.lang.String r3 = r3.optString(r6, r5)
            boolean r4 = r4.equals(r3)
            if (r4 != 0) goto L86
            r8[r2] = r3
        L86:
            org.json.JSONObject r8 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r3 = "hook_kllk_arg2"
            java.lang.String r4 = "com.android.browser"
            java.lang.String r8 = r8.optString(r3, r4)
            org.json.JSONObject r3 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "m.store."
            r4.append(r5)
            java.lang.String r5 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LOWER_OPPO
            r4.append(r5)
            java.lang.String r5 = "mobile.com"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "hook_kllk_arg3"
            java.lang.String r3 = r3.optString(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LOWER_OPPO
            r4.append(r5)
            java.lang.String r5 = "_extra_pkg_name"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r0.putExtra(r4, r8)
            java.lang.String r4 = "refererHost"
            r0.putExtra(r4, r3)
            org.json.JSONObject r6 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r7 = "hook_kllk_arg4"
            int r6 = r6.optInt(r7, r1)
            if (r6 != r2) goto Ldc
            r1 = r2
        Ldc:
            if (r1 == 0) goto L129
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r6 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LOWER_OPPO
            r2.append(r6)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            r1.putExtra(r2, r8)
            r1.putExtra(r4, r3)
            java.lang.String r8 = "android.intent.extra.INTENT"
            r0.putExtra(r8, r1)
            goto L129
        L100:
            boolean r1 = com.ss.android.socialbase.appdownloader.c.pt.rg()
            if (r1 == 0) goto L129
            org.json.JSONObject r1 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r3 = "com.huawei.appmarket"
            java.lang.String r5 = "hook_huawei_arg1"
            java.lang.String r1 = r1.optString(r5, r3)
            boolean r4 = r4.equals(r1)
            if (r4 != 0) goto L11a
            r8[r2] = r1
        L11a:
            org.json.JSONObject r8 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "hook_huawei_arg2"
            java.lang.String r8 = r8.optString(r1, r3)
            java.lang.String r1 = "caller_package"
            r0.putExtra(r1, r8)
        L129:
            return
    }
}
