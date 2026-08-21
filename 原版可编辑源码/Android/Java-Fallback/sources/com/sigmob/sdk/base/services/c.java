package com.sigmob.sdk.base.services;

class c extends android.content.BroadcastReceiver {
    c() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.content.Context r17, long r18, com.sigmob.sdk.base.models.BaseAdUnit r20) {
            r16 = this;
            r1 = r17
            r2 = r20
            java.lang.String r0 = "1"
            if (r2 == 0) goto L101
            android.app.DownloadManager r3 = r16.a(r17)
            r4 = r18
            java.util.Map r3 = com.sigmob.sdk.base.common.n.a(r3, r4)
            com.sigmob.sdk.base.common.a r6 = com.sigmob.sdk.base.common.a.F
            com.sigmob.sdk.base.network.f.a(r2, r6)
            java.lang.String r6 = "com.sigmob.action.interstitial.download.end"
            java.lang.String r7 = "downloadId"
            java.lang.String r8 = "result"
            java.lang.String r9 = "download_end"
            java.lang.String r12 = "0"
            java.lang.String r13 = "download info is null"
            if (r3 == 0) goto Lcf
            java.lang.String r14 = "fileName"
            java.lang.Object r14 = r3.get(r14)
            java.lang.String r14 = (java.lang.String) r14
            java.lang.String r15 = "status"
            java.lang.Object r15 = r3.get(r15)
            java.lang.Integer r15 = (java.lang.Integer) r15
            int r15 = r15.intValue()
            java.lang.String r11 = "reason"
            java.lang.Object r11 = r3.get(r11)
            java.lang.Integer r11 = (java.lang.Integer) r11
            int r11 = r11.intValue()
            java.lang.String r10 = "uri"
            java.lang.Object r3 = r3.get(r10)
            android.net.Uri r3 = (android.net.Uri) r3
            if (r14 == 0) goto L93
            r10 = 8
            if (r15 != r10) goto L93
            java.lang.String r3 = com.czhj.sdk.common.utils.FileUtil.getRealFilePath(r1, r3)     // Catch: java.lang.Throwable -> L78
            android.content.pm.PackageInfo r10 = com.czhj.sdk.common.ClientMetadata.getPackageInfoWithUri(r1, r3)     // Catch: java.lang.Throwable -> L78
            com.sigmob.sdk.base.common.z.a(r2, r9, r10, r0)     // Catch: java.lang.Throwable -> L78
            java.util.HashMap r9 = new java.util.HashMap     // Catch: java.lang.Throwable -> L78
            r9.<init>()     // Catch: java.lang.Throwable -> L78
            r9.put(r8, r0)     // Catch: java.lang.Throwable -> L78
            java.lang.Long r0 = java.lang.Long.valueOf(r18)     // Catch: java.lang.Throwable -> L78
            r9.put(r7, r0)     // Catch: java.lang.Throwable -> L78
            java.lang.String r0 = r20.getUuid()     // Catch: java.lang.Throwable -> L78
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r1, r0, r9, r6)     // Catch: java.lang.Throwable -> L78
            com.sigmob.sdk.base.common.n.a(r1, r3, r2)     // Catch: java.lang.Throwable -> L78
            goto L92
        L78:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
            com.sigmob.windad.WindAdError r1 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_INSTALL_FAIL
            int r1 = r1.getErrorCode()
            java.lang.String r0 = r0.getMessage()
            java.lang.String r3 = "app_install_start"
            com.sigmob.sdk.base.common.z.a(r3, r1, r0, r2)
            com.sigmob.sdk.base.common.z.b(r3, r12, r2)
        L92:
            return
        L93:
            java.lang.String r0 = "status %d, reason %d"
            r10 = 2
            java.lang.Object[] r14 = new java.lang.Object[r10]     // Catch: java.lang.Throwable -> Lc7
            java.lang.Integer r10 = java.lang.Integer.valueOf(r15)     // Catch: java.lang.Throwable -> Lc7
            r15 = 0
            r14[r15] = r10     // Catch: java.lang.Throwable -> Lc7
            r10 = 1
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Throwable -> Lc7
            r14[r10] = r11     // Catch: java.lang.Throwable -> Lc7
            java.lang.String r13 = java.lang.String.format(r0, r14)     // Catch: java.lang.Throwable -> Lc7
            java.lang.String r0 = com.czhj.sdk.common.utils.FileUtil.getRealFilePath(r1, r3)     // Catch: java.lang.Throwable -> Lc7
            boolean r0 = com.czhj.sdk.common.utils.FileUtil.deleteFile(r0)     // Catch: java.lang.Throwable -> Lc7
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc7
            r3.<init>()     // Catch: java.lang.Throwable -> Lc7
            java.lang.String r10 = "handleDownloadComplete:fail:"
            r3.append(r10)     // Catch: java.lang.Throwable -> Lc7
            r3.append(r0)     // Catch: java.lang.Throwable -> Lc7
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> Lc7
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> Lc7
            goto Lcf
        Lc7:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        Lcf:
            java.lang.String r0 = "下载失败"
            r3 = 0
            android.widget.Toast r0 = android.widget.Toast.makeText(r1, r0, r3)     // Catch: java.lang.Throwable -> Lda
            r0.show()     // Catch: java.lang.Throwable -> Lda
            goto Le2
        Lda:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
        Le2:
            java.lang.String r0 = "download_failed"
            r3 = 2
            com.sigmob.sdk.base.common.z.a(r0, r3, r13, r2)
            com.sigmob.sdk.base.common.z.b(r9, r12, r2)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r0.put(r8, r12)
            java.lang.Long r3 = java.lang.Long.valueOf(r18)
            r0.put(r7, r3)
            java.lang.String r2 = r20.getUuid()
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r1, r2, r0, r6)
        L101:
            return
    }

    android.app.DownloadManager a(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "download"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.DownloadManager r2 = (android.app.DownloadManager) r2
            return r2
    }

    @Override
    public void onReceive(android.content.Context r8, android.content.Intent r9) {
            r7 = this;
            java.lang.String r0 = "extra_download_id"
            r1 = -1
            long r0 = r9.getLongExtra(r0, r1)
            r2 = 0
            com.sigmob.sdk.base.common.n.b(r0, r2)
            java.io.File r3 = new java.io.File
            java.lang.String r4 = com.sigmob.sdk.base.utils.b.f()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r0)
            java.lang.String r6 = ".log"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r3.<init>(r4, r5)
            java.lang.String r4 = r3.getAbsolutePath()
            java.lang.Object r4 = com.czhj.sdk.common.utils.FileUtil.readFromCache(r4)
            if (r4 == 0) goto L42
            boolean r5 = r4 instanceof com.sigmob.sdk.base.models.BaseAdUnit
            if (r5 == 0) goto L42
            r2 = r4
            com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2
            java.lang.String r4 = r2.getUuid()
            com.sigmob.sdk.base.models.BaseAdUnit r4 = com.sigmob.sdk.base.common.f.a(r4)
            if (r4 == 0) goto L42
            r2 = r4
        L42:
            java.lang.String r3 = r3.getAbsolutePath()
            com.czhj.sdk.common.utils.FileUtil.deleteFile(r3)
            java.lang.String r9 = r9.getAction()
            r3 = -1
            int r4 = r9.hashCode()
            r5 = 1248865515(0x4a702ceb, float:3935034.8)
            if (r4 == r5) goto L58
            goto L61
        L58:
            java.lang.String r4 = "android.intent.action.DOWNLOAD_COMPLETE"
            boolean r9 = r9.equals(r4)
            if (r9 == 0) goto L61
            r3 = 0
        L61:
            if (r3 == 0) goto L64
            goto L6a
        L64:
            if (r2 != 0) goto L67
            return
        L67:
            r7.a(r8, r0, r2)
        L6a:
            return
    }
}
