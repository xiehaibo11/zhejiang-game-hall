package com.ss.android.socialbase.appdownloader.view;

public class rg extends android.app.Fragment {
    public rg() {
            r0 = this;
            r0.<init>()
            return
    }

    private android.content.Intent c() {
            r4 = this;
            android.content.Context r0 = r4.pp()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "android.settings.APP_NOTIFICATION_SETTINGS"
            r1.<init>(r2)
            java.lang.String r2 = r0.getPackageName()
            java.lang.String r3 = "package"
            r1.putExtra(r3, r2)
            java.lang.String r3 = "android.provider.extra.APP_PACKAGE"
            r1.putExtra(r3, r2)
            java.lang.String r3 = "app_package"
            r1.putExtra(r3, r2)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.uid
            java.lang.String r2 = "uid"
            r1.putExtra(r2, r0)
            java.lang.String r2 = "app_uid"
            r1.putExtra(r2, r0)
            return r1
    }

    private android.content.Context pp() {
            r2 = this;
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 != 0) goto L1e
            android.app.Activity r1 = r2.getActivity()
            if (r1 == 0) goto L1e
            android.app.Activity r1 = r2.getActivity()
            boolean r1 = r1.isFinishing()
            if (r1 != 0) goto L1e
            android.app.Activity r0 = r2.getActivity()
            android.content.Context r0 = r0.getApplicationContext()
        L1e:
            return r0
    }

    public static android.content.Intent pt() {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.settings.APPLICATION_SETTINGS"
            r0.<init>(r1)
            return r0
    }

    public android.content.Intent df() {
            r6 = this;
            android.content.Context r0 = r6.pp()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.String r1 = r0.getPackageName()
            java.lang.String r2 = android.os.Build.MANUFACTURER
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L8e
            java.lang.String r2 = android.os.Build.MANUFACTURER
            java.lang.String r2 = r2.toLowerCase()
            java.lang.String r3 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LOWER_OPPO
            boolean r3 = r2.contains(r3)
            java.lang.String r4 = "packageName"
            if (r3 == 0) goto L39
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            r0.putExtra(r4, r1)
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r2 = "com.color.safecenter"
            java.lang.String r3 = "com.color.safecenter.permission.PermissionManagerActivity"
            r1.<init>(r2, r3)
            r0.setComponent(r1)
            return r0
        L39:
            java.lang.String r3 = "vivo"
            boolean r3 = r2.contains(r3)
            r5 = 25
            if (r3 == 0) goto L6b
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r2 = "packagename"
            r0.putExtra(r2, r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            if (r1 < r5) goto L5e
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r2 = "com.vivo.permissionmanager"
            java.lang.String r3 = "com.vivo.permissionmanager.activity.SoftPermissionDetailActivity"
            r1.<init>(r2, r3)
            r0.setComponent(r1)
            goto L6a
        L5e:
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r2 = "com.iqoo.secure"
            java.lang.String r3 = "com.iqoo.secure.safeguard.SoftPermissionDetailActivity"
            r1.<init>(r2, r3)
            r0.setComponent(r1)
        L6a:
            return r0
        L6b:
            java.lang.String r3 = "meizu"
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L8e
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 >= r5) goto L8e
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r2 = "com.meizu.safe.security.SHOW_APPSEC"
            r0.<init>(r2)
            r0.putExtra(r4, r1)
            android.content.ComponentName r1 = new android.content.ComponentName
            java.lang.String r2 = "com.meizu.safe"
            java.lang.String r3 = "com.meizu.safe.security.AppSecActivity"
            r1.<init>(r2, r3)
            r0.setComponent(r1)
            return r0
        L8e:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "package:"
            r1.append(r2)
            java.lang.String r0 = r0.getPackageName()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "android.settings.APPLICATION_DETAILS_SETTINGS"
            r1.<init>(r2, r0)
            return r1
    }

    @Override
    public void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            super.onActivityResult(r1, r2, r3)
            boolean r1 = com.ss.android.socialbase.appdownloader.pp.pt.rg()
            if (r1 == 0) goto Le
            r1 = 1
            com.ss.android.socialbase.appdownloader.pp.pt.rg(r1)
            goto L12
        Le:
            r1 = 0
            com.ss.android.socialbase.appdownloader.pp.pt.rg(r1)
        L12:
            return
    }

    public android.content.Intent q() {
            r3 = this;
            android.content.Context r0 = r3.pp()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "package:"
            r1.append(r2)
            java.lang.String r0 = r0.getPackageName()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "android.settings.APPLICATION_DETAILS_SETTINGS"
            r1.<init>(r2, r0)
            return r1
    }

    public void rg() {
            r2 = this;
            r0 = 1000(0x3e8, float:1.401E-42)
            android.content.Intent r1 = r2.c()     // Catch: java.lang.Throwable -> La
            r2.startActivityForResult(r1, r0)     // Catch: java.lang.Throwable -> La
            goto L21
        La:
            android.content.Intent r1 = r2.df()     // Catch: java.lang.Throwable -> L12
            r2.startActivityForResult(r1, r0)     // Catch: java.lang.Throwable -> L12
            goto L21
        L12:
            android.content.Intent r1 = r2.q()     // Catch: java.lang.Throwable -> L1a
            r2.startActivityForResult(r1, r0)     // Catch: java.lang.Throwable -> L1a
            goto L21
        L1a:
            android.content.Intent r1 = pt()
            r2.startActivityForResult(r1, r0)
        L21:
            return
    }
}
