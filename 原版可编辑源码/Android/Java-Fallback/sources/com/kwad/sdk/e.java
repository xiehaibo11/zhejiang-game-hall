package com.kwad.sdk;

public final class e {
    public static android.app.PendingIntent a(java.io.File r5, int r6, boolean r7) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.<init>(r1)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            r1 = 3
            r0.addFlags(r1)
            com.kwad.sdk.c r2 = com.kwad.sdk.c.wP()
            android.content.Context r2 = r2.getContext()
            android.net.Uri r5 = a(r2, r5)
            java.lang.String r3 = "application/vnd.android.package-archive"
            r0.setDataAndType(r5, r3)
            android.content.pm.PackageManager r3 = r2.getPackageManager()
            r4 = 65536(0x10000, float:9.1835E-41)
            java.util.List r3 = r3.queryIntentActivities(r0, r4)
            java.util.Iterator r3 = r3.iterator()
        L2f:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L43
            java.lang.Object r4 = r3.next()
            android.content.pm.ResolveInfo r4 = (android.content.pm.ResolveInfo) r4
            android.content.pm.ActivityInfo r4 = r4.activityInfo
            java.lang.String r4 = r4.packageName
            r2.grantUriPermission(r4, r5, r1)
            goto L2f
        L43:
            if (r7 == 0) goto L52
            com.kwad.sdk.c.wP()
            boolean r5 = com.kwad.sdk.c.wS()
            if (r5 == 0) goto L52
            android.content.Intent r0 = d(r0)
        L52:
            int r5 = android.os.Build.VERSION.SDK_INT
            r7 = 31
            if (r5 < r7) goto L5f
            r5 = 201326592(0xc000000, float:9.8607613E-32)
        L5a:
            android.app.PendingIntent r5 = android.app.PendingIntent.getActivity(r2, r6, r0, r5)
            return r5
        L5f:
            r5 = 134217728(0x8000000, float:3.85186E-34)
            goto L5a
    }

    private static android.net.Uri a(android.content.Context r2, java.io.File r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto L20
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getPackageName()
            r0.append(r1)
            java.lang.String r1 = ".adFileProvider"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.net.Uri r2 = com.kwad.sdk.api.core.fragment.FileProvider.getUriForFile(r2, r0, r3)
            return r2
        L20:
            android.net.Uri r2 = android.net.Uri.fromFile(r3)
            return r2
    }

    private static android.content.Intent d(android.content.Intent r3) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "intent.action.requestInstallPermission"
            r0.<init>(r1)
            java.lang.String r1 = "fromNotification"
            r2 = 1
            r0.putExtra(r1, r2)
            java.lang.String r1 = "pendingIntent"
            r0.putExtra(r1, r3)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r3)
            return r0
    }

    public static android.app.PendingIntent l(com.kwad.sdk.DownloadTask r6) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r6.getTargetFilePath()
            r0.<init>(r1)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "android.intent.action.VIEW"
            r1.<init>(r2)
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r2)
            r2 = 3
            r1.addFlags(r2)
            com.kwad.sdk.c r3 = com.kwad.sdk.c.wP()
            android.content.Context r3 = r3.getContext()
            android.net.Uri r0 = a(r3, r0)
            java.lang.String r4 = "application/vnd.android.package-archive"
            r1.setDataAndType(r0, r4)
            android.content.pm.PackageManager r4 = r3.getPackageManager()
            r5 = 65536(0x10000, float:9.1835E-41)
            java.util.List r4 = r4.queryIntentActivities(r1, r5)
            java.util.Iterator r4 = r4.iterator()
        L38:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L4c
            java.lang.Object r5 = r4.next()
            android.content.pm.ResolveInfo r5 = (android.content.pm.ResolveInfo) r5
            android.content.pm.ActivityInfo r5 = r5.activityInfo
            java.lang.String r5 = r5.packageName
            r3.grantUriPermission(r5, r0, r2)
            goto L38
        L4c:
            com.kwad.sdk.c.wP()
            boolean r0 = com.kwad.sdk.c.wS()
            if (r0 == 0) goto L6b
            java.lang.Object r0 = r6.getTag()
            boolean r0 = r0 instanceof com.kwad.sdk.core.download.DownloadParams
            if (r0 == 0) goto L6b
            java.lang.Object r0 = r6.getTag()
            com.kwad.sdk.core.download.DownloadParams r0 = (com.kwad.sdk.core.download.DownloadParams) r0
            boolean r0 = r0.requestInstallPermission
            if (r0 == 0) goto L6b
            android.content.Intent r1 = d(r1)
        L6b:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 31
            int r6 = r6.getId()
            if (r0 < r2) goto L7c
            r0 = 201326592(0xc000000, float:9.8607613E-32)
        L77:
            android.app.PendingIntent r6 = android.app.PendingIntent.getActivity(r3, r6, r1, r0)
            return r6
        L7c:
            r0 = 134217728(0x8000000, float:3.85186E-34)
            goto L77
    }

    public static android.app.PendingIntent m(java.lang.String r3, int r4) {
            com.kwad.sdk.c r0 = com.kwad.sdk.c.wP()
            android.content.Context r0 = r0.getContext()
            android.content.pm.PackageManager r1 = r0.getPackageManager()
            android.content.Intent r3 = r1.getLaunchIntentForPackage(r3)
            if (r3 != 0) goto L14
            r3 = 0
            return r3
        L14:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 31
            if (r1 < r2) goto L21
            r1 = 201326592(0xc000000, float:9.8607613E-32)
        L1c:
            android.app.PendingIntent r3 = android.app.PendingIntent.getActivity(r0, r4, r3, r1)
            return r3
        L21:
            r1 = 134217728(0x8000000, float:3.85186E-34)
            goto L1c
    }
}
