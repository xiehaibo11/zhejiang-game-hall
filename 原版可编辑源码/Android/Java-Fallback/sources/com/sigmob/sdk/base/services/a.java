package com.sigmob.sdk.base.services;

class a extends android.content.BroadcastReceiver {
    a() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.content.Context r2, android.content.pm.PackageInfo r3, java.lang.String r4) {
            r1 = this;
            r2 = 0
            java.lang.String r0 = "app_install_Monitor"
            com.sigmob.sdk.base.common.z.a(r2, r0, r3, r4)
            return
    }

    private void a(android.content.Context r3, com.sigmob.sdk.base.models.BaseAdUnit r4, android.content.pm.PackageInfo r5) {
            r2 = this;
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.H
            com.sigmob.sdk.base.network.f.a(r4, r0)
            java.lang.String r0 = "1"
            java.lang.String r1 = "app_install_end"
            com.sigmob.sdk.base.common.z.a(r4, r1, r5, r0)
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            java.lang.String r1 = "result"
            r5.put(r1, r0)
            java.lang.String r0 = r4.getUuid()
            java.lang.String r1 = "com.sigmob.action.interstitial.install.end"
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r3, r0, r5, r1)
            java.lang.String r3 = r4.getDeeplinkUrl()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            return
    }

    @Override
    public void onReceive(android.content.Context r13, android.content.Intent r14) {
            r12 = this;
            java.lang.String r0 = "app_install_end"
            java.lang.String r1 = "android.intent.action.PACKAGE_REMOVED"
            android.content.pm.PackageManager r2 = r13.getPackageManager()     // Catch: java.lang.Throwable -> L17c
            android.net.Uri r3 = r14.getData()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r3 = r3.getSchemeSpecificPart()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r4 = "android.intent.extra.REPLACING"
            r5 = 0
            boolean r4 = r14.getBooleanExtra(r4, r5)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r6 = r14.getAction()     // Catch: java.lang.Throwable -> L17c
            boolean r6 = r6.equals(r1)     // Catch: java.lang.Throwable -> L17c
            if (r6 == 0) goto L24
            if (r4 != 0) goto L24
            return
        L24:
            r6 = 0
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L2a java.lang.Throwable -> L17c
            goto L2b
        L2a:
            r2 = r6
        L2b:
            boolean r7 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L17c
            if (r7 != 0) goto L6e
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> L17c
            java.lang.String r8 = com.sigmob.sdk.base.utils.b.f()     // Catch: java.lang.Throwable -> L17c
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r9.<init>()     // Catch: java.lang.Throwable -> L17c
            r9.append(r3)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r10 = ".log"
            r9.append(r10)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L17c
            r7.<init>(r8, r9)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r8 = r7.getAbsolutePath()     // Catch: java.lang.Throwable -> L17c
            java.lang.Object r8 = com.czhj.sdk.common.utils.FileUtil.readFromCache(r8)     // Catch: java.lang.Throwable -> L17c
            if (r8 == 0) goto L67
            boolean r9 = r8 instanceof com.sigmob.sdk.base.models.BaseAdUnit     // Catch: java.lang.Throwable -> L17c
            if (r9 == 0) goto L67
            com.sigmob.sdk.base.models.BaseAdUnit r8 = (com.sigmob.sdk.base.models.BaseAdUnit) r8     // Catch: java.lang.Throwable -> L17c
            java.lang.String r6 = r8.getUuid()     // Catch: java.lang.Throwable -> L17c
            com.sigmob.sdk.base.models.BaseAdUnit r6 = com.sigmob.sdk.base.common.f.a(r6)     // Catch: java.lang.Throwable -> L17c
            if (r6 == 0) goto L66
            goto L67
        L66:
            r6 = r8
        L67:
            java.lang.String r7 = r7.getAbsolutePath()     // Catch: java.lang.Throwable -> L17c
            com.czhj.sdk.common.utils.FileUtil.deleteFile(r7)     // Catch: java.lang.Throwable -> L17c
        L6e:
            if (r6 != 0) goto L71
            return
        L71:
            java.lang.String r14 = r14.getAction()     // Catch: java.lang.Throwable -> L17c
            r7 = -1
            int r8 = r14.hashCode()     // Catch: java.lang.Throwable -> L17c
            r9 = 3
            r10 = 2
            r11 = 1
            switch(r8) {
                case -1585864895: goto L9d;
                case -810471698: goto L93;
                case 525384130: goto L8b;
                case 1544582882: goto L81;
                default: goto L80;
            }     // Catch: java.lang.Throwable -> L17c
        L80:
            goto La6
        L81:
            java.lang.String r1 = "android.intent.action.PACKAGE_ADDED"
            boolean r14 = r14.equals(r1)     // Catch: java.lang.Throwable -> L17c
            if (r14 == 0) goto La6
            r7 = r5
            goto La6
        L8b:
            boolean r14 = r14.equals(r1)     // Catch: java.lang.Throwable -> L17c
            if (r14 == 0) goto La6
            r7 = r11
            goto La6
        L93:
            java.lang.String r1 = "android.intent.action.PACKAGE_REPLACED"
            boolean r14 = r14.equals(r1)     // Catch: java.lang.Throwable -> L17c
            if (r14 == 0) goto La6
            r7 = r10
            goto La6
        L9d:
            java.lang.String r1 = "android.intent.action.INSTALL_FAILURE"
            boolean r14 = r14.equals(r1)     // Catch: java.lang.Throwable -> L17c
            if (r14 == 0) goto La6
            r7 = r9
        La6:
            if (r7 == 0) goto L15b
            java.lang.String r14 = "替换成功"
            if (r7 == r11) goto L121
            if (r7 == r10) goto Lff
            if (r7 == r9) goto Lb2
            goto L184
        Lb2:
            java.lang.Boolean r14 = com.sigmob.sdk.base.h.e     // Catch: java.lang.Throwable -> L17c
            boolean r14 = r14.booleanValue()     // Catch: java.lang.Throwable -> L17c
            if (r14 == 0) goto Lc3
            java.lang.String r14 = "安装失败"
            android.widget.Toast r14 = android.widget.Toast.makeText(r13, r14, r5)     // Catch: java.lang.Throwable -> L17c
            r14.show()     // Catch: java.lang.Throwable -> L17c
        Lc3:
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r14.<init>()     // Catch: java.lang.Throwable -> L17c
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INSTALL_FAIL     // Catch: java.lang.Throwable -> L17c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L17c
            r14.append(r1)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r1 = ",System"
            r14.append(r1)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L17c
            com.sigmob.sdk.base.common.z.a(r6, r0, r2, r14)     // Catch: java.lang.Throwable -> L17c
            com.sigmob.windad.WindAdError r14 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INSTALL_FAIL     // Catch: java.lang.Throwable -> L17c
            int r14 = r14.getErrorCode()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r1 = "system"
            com.sigmob.sdk.base.common.z.a(r0, r14, r1, r6)     // Catch: java.lang.Throwable -> L17c
            java.util.HashMap r14 = new java.util.HashMap     // Catch: java.lang.Throwable -> L17c
            r14.<init>()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = "result"
            java.lang.String r1 = "0"
            r14.put(r0, r1)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r6.getUuid()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r1 = "com.sigmob.action.interstitial.install.end"
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r13, r0, r14, r1)     // Catch: java.lang.Throwable -> L17c
            goto L184
        Lff:
            java.lang.Boolean r0 = com.sigmob.sdk.base.h.e     // Catch: java.lang.Throwable -> L17c
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Throwable -> L17c
            if (r0 == 0) goto L11d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r0.<init>()     // Catch: java.lang.Throwable -> L17c
            r0.append(r14)     // Catch: java.lang.Throwable -> L17c
            r0.append(r3)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r14 = r0.toString()     // Catch: java.lang.Throwable -> L17c
            android.widget.Toast r14 = android.widget.Toast.makeText(r13, r14, r11)     // Catch: java.lang.Throwable -> L17c
            r14.show()     // Catch: java.lang.Throwable -> L17c
        L11d:
            r12.a(r13, r6, r2)     // Catch: java.lang.Throwable -> L17c
            goto L184
        L121:
            if (r4 == 0) goto L13a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r0.<init>()     // Catch: java.lang.Throwable -> L17c
            r0.append(r14)     // Catch: java.lang.Throwable -> L17c
            r0.append(r3)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r14 = r0.toString()     // Catch: java.lang.Throwable -> L17c
            android.widget.Toast r14 = android.widget.Toast.makeText(r13, r14, r11)     // Catch: java.lang.Throwable -> L17c
            r14.show()     // Catch: java.lang.Throwable -> L17c
            goto L11d
        L13a:
            java.lang.Boolean r14 = com.sigmob.sdk.base.h.e     // Catch: java.lang.Throwable -> L17c
            boolean r14 = r14.booleanValue()     // Catch: java.lang.Throwable -> L17c
            if (r14 == 0) goto L184
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r14.<init>()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = "卸载成功"
            r14.append(r0)     // Catch: java.lang.Throwable -> L17c
            r14.append(r3)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L17c
            android.widget.Toast r13 = android.widget.Toast.makeText(r13, r14, r11)     // Catch: java.lang.Throwable -> L17c
            r13.show()     // Catch: java.lang.Throwable -> L17c
            goto L184
        L15b:
            java.lang.Boolean r14 = com.sigmob.sdk.base.h.e     // Catch: java.lang.Throwable -> L17c
            boolean r14 = r14.booleanValue()     // Catch: java.lang.Throwable -> L17c
            if (r14 == 0) goto L11d
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r14.<init>()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = "安装成功"
            r14.append(r0)     // Catch: java.lang.Throwable -> L17c
            r14.append(r3)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L17c
            android.widget.Toast r14 = android.widget.Toast.makeText(r13, r14, r11)     // Catch: java.lang.Throwable -> L17c
            r14.show()     // Catch: java.lang.Throwable -> L17c
            goto L11d
        L17c:
            r13 = move-exception
            java.lang.String r13 = r13.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r13)
        L184:
            return
    }
}
