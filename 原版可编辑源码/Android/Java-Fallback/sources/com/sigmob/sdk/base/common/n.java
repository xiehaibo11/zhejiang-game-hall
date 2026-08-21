package com.sigmob.sdk.base.common;

public class n {
    private static java.util.Map<java.lang.String, java.lang.String> a;
    private static java.util.Set<com.sigmob.sdk.base.common.n.a> b;







    private static class a {
        java.lang.String a;
        java.lang.String b;
        long c;

        public a(java.lang.String r1, java.lang.String r2, long r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }

        public java.lang.String b() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }

        public long c() {
                r2 = this;
                long r0 = r2.c
                return r0
        }
    }

    static {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            com.sigmob.sdk.base.common.n.a = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            com.sigmob.sdk.base.common.n.b = r0
            return
    }

    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    private static long a(java.lang.String r4, java.lang.String r5) {
            r0 = -1
            if (r4 == 0) goto L96
            boolean r2 = r4.isEmpty()     // Catch: java.lang.Throwable -> L8e
            if (r2 == 0) goto Lc
            goto L96
        Lc:
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r2 = "http"
            boolean r2 = r4.startsWith(r2)     // Catch: java.lang.Throwable -> L8e
            if (r2 != 0) goto L29
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8e
            r2.<init>()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r3 = "http://"
            r2.append(r3)     // Catch: java.lang.Throwable -> L8e
            r2.append(r4)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L8e
        L29:
            android.app.DownloadManager$Request r2 = new android.app.DownloadManager$Request     // Catch: java.lang.Throwable -> L8e
            android.net.Uri r4 = android.net.Uri.parse(r4)     // Catch: java.lang.Throwable -> L8e
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L8e
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L8e
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r5 = r4.getName()     // Catch: java.lang.Throwable -> L8e
            r2.setTitle(r5)     // Catch: java.lang.Throwable -> L8e
            r5 = 3
            r2.setAllowedNetworkTypes(r5)     // Catch: java.lang.Throwable -> L8e
            r5 = 1
            r2.setAllowedOverRoaming(r5)     // Catch: java.lang.Throwable -> L8e
            r2.setVisibleInDownloadsUi(r5)     // Catch: java.lang.Throwable -> L8e
            r2.setNotificationVisibility(r5)     // Catch: java.lang.Throwable -> L8e
            java.io.File r5 = r4.getParentFile()     // Catch: java.lang.Throwable -> L8e
            boolean r3 = r5.exists()     // Catch: java.lang.Throwable -> L8e
            if (r3 == 0) goto L66
            boolean r3 = r5.isDirectory()     // Catch: java.lang.Throwable -> L8e
            if (r3 != 0) goto L6d
            r5.delete()     // Catch: java.lang.Throwable -> L8e
            boolean r5 = r5.mkdirs()     // Catch: java.lang.Throwable -> L8e
            if (r5 != 0) goto L6d
            return r0
        L66:
            boolean r5 = r5.mkdirs()     // Catch: java.lang.Throwable -> L8e
            if (r5 != 0) goto L6d
            return r0
        L6d:
            java.lang.String r5 = "User-Agent"
            java.lang.String r3 = com.czhj.sdk.common.network.Networking.getUserAgent()     // Catch: java.lang.Throwable -> L8e
            r2.addRequestHeader(r5, r3)     // Catch: java.lang.Throwable -> L8e
            android.net.Uri r4 = android.net.Uri.fromFile(r4)     // Catch: java.lang.Throwable -> L8e
            r2.setDestinationUri(r4)     // Catch: java.lang.Throwable -> L8e
            android.content.Context r4 = com.sigmob.sdk.b.b()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r5 = "download"
            java.lang.Object r4 = r4.getSystemService(r5)     // Catch: java.lang.Throwable -> L8e
            android.app.DownloadManager r4 = (android.app.DownloadManager) r4     // Catch: java.lang.Throwable -> L8e
            long r4 = r4.enqueue(r2)     // Catch: java.lang.Throwable -> L8e
            return r4
        L8e:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L96:
            return r0
    }

    public static java.lang.String a(java.io.File r2) {
            java.lang.String r2 = r2.getName()
            java.lang.String r0 = "."
            int r0 = r2.lastIndexOf(r0)
            int r0 = r0 + 1
            int r1 = r2.length()
            java.lang.String r2 = r2.substring(r0, r1)
            java.lang.String r2 = r2.toLowerCase()
            android.webkit.MimeTypeMap r0 = android.webkit.MimeTypeMap.getSingleton()
            java.lang.String r2 = r0.getMimeTypeFromExtension(r2)
            return r2
    }

    private static java.lang.String a(java.util.List<java.lang.String> r9, java.lang.String r10) {
            boolean r0 = r9.contains(r10)
            if (r0 != 0) goto L7
            return r10
        L7:
            java.lang.String r0 = "."
            int r0 = r10.lastIndexOf(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            int r1 = r0.intValue()
            r2 = 0
            java.lang.String r3 = ""
            r4 = -1
            if (r1 == r4) goto L2c
            int r1 = r0.intValue()
            java.lang.String r3 = r10.substring(r2, r1)
            int r0 = r0.intValue()
            java.lang.String r10 = r10.substring(r0)
            goto L2d
        L2c:
            r10 = r3
        L2d:
            java.lang.String r0 = "("
            int r1 = r3.lastIndexOf(r0)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            int r5 = r1.intValue()
            java.lang.String r6 = "(1)"
            if (r5 != r4) goto L56
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L44:
            r0.append(r3)
            r0.append(r6)
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            java.lang.String r9 = a(r9, r10)
            return r9
        L56:
            int r5 = r1.intValue()
            java.lang.String r7 = ")"
            int r5 = r3.indexOf(r7, r5)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            int r8 = r5.intValue()
            if (r8 != r4) goto L70
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            goto L44
        L70:
            int r4 = r5.intValue()
            int r8 = r3.length()
            int r8 = r8 + (-1)
            if (r4 >= r8) goto L82
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            goto L44
        L82:
            int r4 = r1.intValue()
            int r4 = r4 + 1
            int r5 = r5.intValue()
            java.lang.String r4 = r3.substring(r4, r5)
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> Lbf
            int r4 = r4 + 1
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> Lbf
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbf
            r5.<init>()     // Catch: java.lang.Throwable -> Lbf
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = r3.substring(r2, r1)     // Catch: java.lang.Throwable -> Lbf
            r5.append(r1)     // Catch: java.lang.Throwable -> Lbf
            r5.append(r0)     // Catch: java.lang.Throwable -> Lbf
            r5.append(r4)     // Catch: java.lang.Throwable -> Lbf
            r5.append(r7)     // Catch: java.lang.Throwable -> Lbf
            r5.append(r10)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r9 = a(r9, r0)     // Catch: java.lang.Throwable -> Lbf
            return r9
        Lbf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            goto L44
    }

    public static java.util.HashMap<java.lang.String, java.lang.Object> a(android.app.DownloadManager r5) {
            r0 = 0
            android.app.DownloadManager$Query r1 = new android.app.DownloadManager$Query     // Catch: java.lang.Throwable -> L4c
            r1.<init>()     // Catch: java.lang.Throwable -> L4c
            r2 = 3
            r1.setFilterByStatus(r2)     // Catch: java.lang.Throwable -> L4c
            android.database.Cursor r5 = r5.query(r1)     // Catch: java.lang.Throwable -> L4c
            boolean r1 = r5.moveToFirst()     // Catch: java.lang.Throwable -> L4a
            if (r1 != 0) goto L1d
            r5.close()     // Catch: java.lang.Throwable -> L4a
            if (r5 == 0) goto L1c
            r5.close()
        L1c:
            return r0
        L1d:
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L4a
            r1.<init>()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = "title"
            int r2 = r5.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = r5.getString(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r3 = "_id"
            int r3 = r5.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L4a
            long r3 = r5.getLong(r3)     // Catch: java.lang.Throwable -> L4a
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L4a
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L4a
            if (r4 != 0) goto L43
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L4a
        L43:
            r5.moveToNext()     // Catch: java.lang.Throwable -> L4a
            r5.close()     // Catch: java.lang.Throwable -> L4a
            return r1
        L4a:
            r1 = move-exception
            goto L4e
        L4c:
            r1 = move-exception
            r5 = r0
        L4e:
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L5b
            com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Throwable -> L5b
            if (r5 == 0) goto L5a
            r5.close()
        L5a:
            return r0
        L5b:
            r0 = move-exception
            if (r5 == 0) goto L61
            r5.close()
        L61:
            throw r0
    }

    public static java.util.Map<java.lang.String, java.lang.Object> a(android.app.DownloadManager r7, long r8) {
            java.lang.String r0 = "reason"
            java.lang.String r1 = "status"
            r2 = 0
            android.app.DownloadManager$Query r3 = new android.app.DownloadManager$Query     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            r4 = 1
            long[] r4 = new long[r4]     // Catch: java.lang.Throwable -> L67
            r5 = 0
            r4[r5] = r8     // Catch: java.lang.Throwable -> L67
            r3.setFilterById(r4)     // Catch: java.lang.Throwable -> L67
            android.net.Uri r8 = r7.getUriForDownloadedFile(r8)     // Catch: java.lang.Throwable -> L67
            android.database.Cursor r7 = r7.query(r3)     // Catch: java.lang.Throwable -> L67
            boolean r9 = r7.moveToFirst()     // Catch: java.lang.Throwable -> L65
            if (r9 != 0) goto L2a
            r7.close()     // Catch: java.lang.Throwable -> L65
            if (r7 == 0) goto L29
            r7.close()
        L29:
            return r2
        L2a:
            int r9 = r7.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L65
            int r9 = r7.getInt(r9)     // Catch: java.lang.Throwable -> L65
            int r3 = r7.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L65
            int r3 = r7.getInt(r3)     // Catch: java.lang.Throwable -> L65
            java.lang.String r4 = "local_uri"
            int r4 = r7.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L65
            java.lang.String r4 = r7.getString(r4)     // Catch: java.lang.Throwable -> L65
            java.util.HashMap r5 = new java.util.HashMap     // Catch: java.lang.Throwable -> L65
            r5.<init>()     // Catch: java.lang.Throwable -> L65
            java.lang.String r6 = "fileName"
            r5.put(r6, r4)     // Catch: java.lang.Throwable -> L65
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L65
            r5.put(r1, r9)     // Catch: java.lang.Throwable -> L65
            java.lang.String r9 = "uri"
            r5.put(r9, r8)     // Catch: java.lang.Throwable -> L65
            java.lang.Integer r8 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L65
            r5.put(r0, r8)     // Catch: java.lang.Throwable -> L65
            r7.close()     // Catch: java.lang.Throwable -> L65
            return r5
        L65:
            r8 = move-exception
            goto L69
        L67:
            r8 = move-exception
            r7 = r2
        L69:
            java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L76
            com.czhj.sdk.logger.SigmobLog.e(r8)     // Catch: java.lang.Throwable -> L76
            if (r7 == 0) goto L75
            r7.close()
        L75:
            return r2
        L76:
            r8 = move-exception
            if (r7 == 0) goto L7c
            r7.close()
        L7c:
            throw r8
    }

    public static void a(android.content.Context r6, java.lang.String r7, com.sigmob.sdk.base.models.BaseAdUnit r8) {
            java.io.File r0 = new java.io.File
            r0.<init>(r7)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "installAPK:"
            r1.append(r2)
            java.lang.String r2 = r0.getAbsolutePath()
            r1.append(r2)
            java.lang.String r2 = ":"
            r1.append(r2)
            boolean r2 = r0.exists()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.i(r1)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r2)
            java.lang.String r2 = "android.intent.action.VIEW"
            r1.setAction(r2)
            r2 = 1
            java.lang.String r3 = "开始安装"
            android.widget.Toast r3 = android.widget.Toast.makeText(r6, r3, r2)     // Catch: java.lang.Throwable -> L43
            r3.show()     // Catch: java.lang.Throwable -> L43
            goto L4b
        L43:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r3)
        L4b:
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 24
            if (r3 < r4) goto L8f
            android.content.pm.ApplicationInfo r3 = r6.getApplicationInfo()
            int r3 = r3.targetSdkVersion
            if (r3 >= r4) goto L5a
            goto L8f
        L5a:
            android.content.Context r3 = com.sigmob.sdk.b.b()     // Catch: java.lang.Exception -> L86
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L86
            r4.<init>()     // Catch: java.lang.Exception -> L86
            android.content.Context r5 = com.sigmob.sdk.b.b()     // Catch: java.lang.Exception -> L86
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Exception -> L86
            r4.append(r5)     // Catch: java.lang.Exception -> L86
            java.lang.String r5 = ".sigprovider"
            r4.append(r5)     // Catch: java.lang.Exception -> L86
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L86
            android.net.Uri r0 = com.sigmob.sdk.SigmobFileProvider.getUriForFile(r3, r4, r0)     // Catch: java.lang.Exception -> L86
            if (r0 == 0) goto L9a
            r1.addFlags(r2)     // Catch: java.lang.Exception -> L86
            java.lang.String r2 = "application/vnd.android.package-archive"
            r1.setDataAndType(r0, r2)     // Catch: java.lang.Exception -> L86
            goto L9a
        L86:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            goto L9a
        L8f:
            android.net.Uri r2 = android.net.Uri.fromFile(r0)
            java.lang.String r0 = a(r0)
            r1.setDataAndType(r2, r0)
        L9a:
            r6.startActivity(r1)
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.G
            com.sigmob.sdk.base.network.f.a(r8, r0)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "1"
            java.lang.String r2 = "result"
            r0.put(r2, r1)
            java.lang.String r2 = r8.getUuid()
            java.lang.String r3 = "com.sigmob.action.interstitial.install.start"
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r6, r2, r0, r3)
            android.content.pm.PackageInfo r6 = com.czhj.sdk.common.ClientMetadata.getPackageInfoWithUri(r6, r7)
            if (r6 == 0) goto Le0
            java.io.File r7 = new java.io.File
            java.lang.String r0 = com.sigmob.sdk.base.utils.b.f()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r6.packageName
            r2.append(r3)
            java.lang.String r3 = ".log"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r7.<init>(r0, r2)
            java.lang.String r7 = r7.getAbsolutePath()
            com.czhj.sdk.common.utils.FileUtil.writeToCache(r8, r7)
        Le0:
            boolean r7 = r8.isRecord()
            if (r7 == 0) goto Leb
            java.lang.String r7 = "app_install_start"
            com.sigmob.sdk.base.common.z.a(r8, r7, r6, r1)
        Leb:
            return
    }

    public static void a(java.lang.String r5, com.sigmob.sdk.base.models.BaseAdUnit r6) {
            android.content.Context r0 = com.sigmob.sdk.b.b()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48
            r1.<init>()     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = "download apk:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L48
            r1.append(r5)     // Catch: java.lang.Throwable -> L48
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L48
            com.czhj.sdk.logger.SigmobLog.i(r1)     // Catch: java.lang.Throwable -> L48
            com.sigmob.sdk.base.common.f.b(r6)     // Catch: java.lang.Throwable -> L48
            java.lang.String r1 = com.sigmob.sdk.base.common.o.a(r5)     // Catch: java.lang.Throwable -> L48
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto L44
            java.lang.String r2 = r6.getProductId()     // Catch: java.lang.Throwable -> L48
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L48
            if (r2 != 0) goto L44
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48
            r1.<init>()     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = r6.getProductId()     // Catch: java.lang.Throwable -> L48
            r1.append(r2)     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = ".apk"
            r1.append(r2)     // Catch: java.lang.Throwable -> L48
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L48
        L44:
            a(r1, r5, r6)     // Catch: java.lang.Throwable -> L48
            goto L82
        L48:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r2)
            boolean r2 = r6.isRecord()
            if (r2 == 0) goto L6f
            com.sigmob.sdk.base.common.n$5 r2 = new com.sigmob.sdk.base.common.n$5
            r2.<init>(r5)
            java.lang.String r3 = "download_start"
            java.lang.String r4 = "0"
            com.sigmob.sdk.base.common.z.a(r3, r4, r6, r2)
            r2 = 0
            java.lang.String r1 = r1.getMessage()
            com.sigmob.sdk.base.common.n$6 r4 = new com.sigmob.sdk.base.common.n$6
            r4.<init>(r5)
            com.sigmob.sdk.base.common.z.a(r3, r2, r1, r6, r4)
        L6f:
            java.lang.String r5 = "下载失败"
            r6 = 1
            android.widget.Toast r5 = android.widget.Toast.makeText(r0, r5, r6)     // Catch: java.lang.Throwable -> L7a
            r5.show()     // Catch: java.lang.Throwable -> L7a
            goto L82
        L7a:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r5)
        L82:
            return
    }

    private static void a(java.lang.String r20, java.lang.String r21, com.sigmob.sdk.base.models.BaseAdUnit r22) {
            r1 = r21
            r2 = r22
            java.lang.String r3 = "download_start"
            java.lang.String r4 = "com.sigmob.action.interstitial.download.start"
            java.lang.String r5 = "downloadId"
            java.lang.String r6 = "0"
            java.lang.String r7 = "result"
            android.content.Context r8 = com.sigmob.sdk.b.b()
            r10 = 1
            boolean r0 = android.text.TextUtils.isEmpty(r20)     // Catch: java.lang.Throwable -> L27e
            if (r0 == 0) goto L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27e
            r0.<init>()     // Catch: java.lang.Throwable -> L27e
            java.lang.String r11 = r22.getLanding_page()     // Catch: java.lang.Throwable -> L27e
            java.lang.String r11 = com.czhj.sdk.common.utils.Md5Util.md5(r11)     // Catch: java.lang.Throwable -> L27e
            r0.append(r11)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r11 = ".apk"
            r0.append(r11)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L27e
            r11 = r0
            goto L36
        L34:
            r11 = r20
        L36:
            java.io.File r12 = new java.io.File     // Catch: java.lang.Throwable -> L27e
            java.io.File r0 = com.sigmob.sdk.base.utils.b.a(r8)     // Catch: java.lang.Throwable -> L27e
            r12.<init>(r0, r11)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r0 = r12.getAbsolutePath()     // Catch: java.lang.Throwable -> L27e
            r13 = -1
            java.lang.Long r0 = c(r13, r0)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r15 = "当前正在努力下载，请稍等"
            if (r0 == 0) goto L75
            long r16 = r0.longValue()     // Catch: java.lang.Throwable -> L27e
            r18 = 0
            int r16 = (r16 > r18 ? 1 : (r16 == r18 ? 0 : -1))
            if (r16 <= 0) goto L75
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74
            r1.<init>()     // Catch: java.lang.Throwable -> L74
            r1.append(r11)     // Catch: java.lang.Throwable -> L74
            r1.append(r15)     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L74
            android.widget.Toast r1 = android.widget.Toast.makeText(r8, r1, r10)     // Catch: java.lang.Throwable -> L74
            r1.show()     // Catch: java.lang.Throwable -> L74
            long r0 = r0.longValue()     // Catch: java.lang.Throwable -> L74
            r2.setDownloadId(r0)     // Catch: java.lang.Throwable -> L74
        L74:
            return
        L75:
            java.lang.String r0 = "download"
            java.lang.Object r0 = r8.getSystemService(r0)     // Catch: java.lang.Throwable -> L27e
            android.app.DownloadManager r0 = (android.app.DownloadManager) r0     // Catch: java.lang.Throwable -> L27e
            java.util.HashMap r0 = a(r0)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r9 = "1"
            if (r0 == 0) goto Le5
            java.util.Set r17 = r0.keySet()     // Catch: java.lang.Throwable -> L27e
            java.util.Iterator r17 = r17.iterator()     // Catch: java.lang.Throwable -> L27e
        L8d:
            boolean r18 = r17.hasNext()     // Catch: java.lang.Throwable -> L27e
            if (r18 == 0) goto Le5
            java.lang.Object r18 = r17.next()     // Catch: java.lang.Throwable -> L27e
            r13 = r18
            java.lang.String r13 = (java.lang.String) r13     // Catch: java.lang.Throwable -> L27e
            boolean r14 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L27e
            if (r14 != 0) goto Le2
            boolean r14 = r13.equals(r11)     // Catch: java.lang.Throwable -> L27e
            if (r14 == 0) goto Le2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbd
            r1.<init>()     // Catch: java.lang.Throwable -> Lbd
            r1.append(r11)     // Catch: java.lang.Throwable -> Lbd
            r1.append(r15)     // Catch: java.lang.Throwable -> Lbd
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lbd
            android.widget.Toast r1 = android.widget.Toast.makeText(r8, r1, r10)     // Catch: java.lang.Throwable -> Lbd
            r1.show()     // Catch: java.lang.Throwable -> Lbd
        Lbd:
            java.lang.Object r0 = r0.get(r13)     // Catch: java.lang.Throwable -> Le1
            boolean r1 = r0 instanceof java.lang.Long     // Catch: java.lang.Throwable -> Le1
            if (r1 == 0) goto Le1
            r1 = r0
            java.lang.Long r1 = (java.lang.Long) r1     // Catch: java.lang.Throwable -> Le1
            long r10 = r1.longValue()     // Catch: java.lang.Throwable -> Le1
            r2.setDownloadId(r10)     // Catch: java.lang.Throwable -> Le1
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> Le1
            r1.<init>()     // Catch: java.lang.Throwable -> Le1
            r1.put(r7, r9)     // Catch: java.lang.Throwable -> Le1
            r1.put(r5, r0)     // Catch: java.lang.Throwable -> Le1
            java.lang.String r0 = r22.getUuid()     // Catch: java.lang.Throwable -> Le1
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r8, r0, r1, r4)     // Catch: java.lang.Throwable -> Le1
        Le1:
            return
        Le2:
            r13 = -1
            goto L8d
        Le5:
            java.util.Map<java.lang.String, java.lang.String> r0 = com.sigmob.sdk.base.common.n.a     // Catch: java.lang.Throwable -> L27e
            java.lang.String r13 = r22.getUuid()     // Catch: java.lang.Throwable -> L27e
            boolean r0 = r0.containsKey(r13)     // Catch: java.lang.Throwable -> L27e
            boolean r13 = r12.exists()     // Catch: java.lang.Throwable -> L27e
            if (r13 == 0) goto L11d
            if (r0 != 0) goto L11d
            java.lang.String r13 = r12.getAbsolutePath()     // Catch: java.lang.Throwable -> L27e
            boolean r13 = a(r8, r13)     // Catch: java.lang.Throwable -> L27e
            if (r13 != 0) goto L11d
            java.lang.String r13 = r12.getAbsolutePath()     // Catch: java.lang.Throwable -> L27e
            boolean r13 = com.czhj.sdk.common.utils.FileUtil.deleteFile(r13)     // Catch: java.lang.Throwable -> L27e
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27e
            r14.<init>()     // Catch: java.lang.Throwable -> L27e
            java.lang.String r15 = "cacheFile deleteFile:"
            r14.append(r15)     // Catch: java.lang.Throwable -> L27e
            r14.append(r13)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r13 = r14.toString()     // Catch: java.lang.Throwable -> L27e
            com.czhj.sdk.logger.SigmobLog.i(r13)     // Catch: java.lang.Throwable -> L27e
        L11d:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27e
            r13.<init>()     // Catch: java.lang.Throwable -> L27e
            r13.append(r11)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r14 = " exists:"
            r13.append(r14)     // Catch: java.lang.Throwable -> L27e
            boolean r14 = r12.exists()     // Catch: java.lang.Throwable -> L27e
            r13.append(r14)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r14 = " containsKey:"
            r13.append(r14)     // Catch: java.lang.Throwable -> L27e
            r13.append(r0)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L27e
            com.czhj.sdk.logger.SigmobLog.i(r13)     // Catch: java.lang.Throwable -> L27e
            boolean r13 = r12.exists()     // Catch: java.lang.Throwable -> L27e
            if (r13 == 0) goto L1aa
            if (r0 == 0) goto L150
            java.lang.String r0 = r12.getAbsolutePath()     // Catch: java.lang.Throwable -> L27e
            a(r8, r0, r2)     // Catch: java.lang.Throwable -> L27e
            return
        L150:
            long r13 = r12.lastModified()     // Catch: java.lang.Throwable -> L27e
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L27e
            int r0 = r0.M()     // Catch: java.lang.Throwable -> L27e
            if (r0 != 0) goto L17b
            java.lang.String r0 = r12.getAbsolutePath()     // Catch: java.lang.Throwable -> L27e
            boolean r0 = com.czhj.sdk.common.utils.FileUtil.deleteFile(r0)     // Catch: java.lang.Throwable -> L27e
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27e
            r13.<init>()     // Catch: java.lang.Throwable -> L27e
            java.lang.String r14 = "default deleteFile:"
            r13.append(r14)     // Catch: java.lang.Throwable -> L27e
            r13.append(r0)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r0 = r13.toString()     // Catch: java.lang.Throwable -> L27e
        L177:
            com.czhj.sdk.logger.SigmobLog.i(r0)     // Catch: java.lang.Throwable -> L27e
            goto L1aa
        L17b:
            long r17 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L27e
            long r17 = r17 - r13
            int r0 = r0 * 1000
            long r13 = (long) r0     // Catch: java.lang.Throwable -> L27e
            int r0 = (r17 > r13 ? 1 : (r17 == r13 ? 0 : -1))
            if (r0 <= 0) goto L1a2
            java.lang.String r0 = r12.getAbsolutePath()     // Catch: java.lang.Throwable -> L27e
            boolean r0 = com.czhj.sdk.common.utils.FileUtil.deleteFile(r0)     // Catch: java.lang.Throwable -> L27e
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27e
            r13.<init>()     // Catch: java.lang.Throwable -> L27e
            java.lang.String r14 = "timeOut deleteFile:"
            r13.append(r14)     // Catch: java.lang.Throwable -> L27e
            r13.append(r0)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r0 = r13.toString()     // Catch: java.lang.Throwable -> L27e
            goto L177
        L1a2:
            java.lang.String r0 = r12.getAbsolutePath()     // Catch: java.lang.Throwable -> L27e
            a(r8, r0, r2)     // Catch: java.lang.Throwable -> L27e
            return
        L1aa:
            java.lang.String r0 = "下载开始"
            android.widget.Toast r0 = android.widget.Toast.makeText(r8, r0, r10)     // Catch: java.lang.Throwable -> L1b4
            r0.show()     // Catch: java.lang.Throwable -> L1b4
            goto L1bc
        L1b4:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L27e
            com.czhj.sdk.logger.SigmobLog.e(r0)     // Catch: java.lang.Throwable -> L27e
        L1bc:
            java.util.Map<java.lang.String, java.lang.String> r0 = com.sigmob.sdk.base.common.n.a     // Catch: java.lang.Throwable -> L27e
            java.lang.String r13 = r22.getUuid()     // Catch: java.lang.Throwable -> L27e
            r0.put(r13, r11)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r0 = r12.getAbsolutePath()     // Catch: java.lang.Throwable -> L27e
            long r13 = a(r1, r0)     // Catch: java.lang.Throwable -> L27e
            r17 = -1
            int r0 = (r13 > r17 ? 1 : (r13 == r17 ? 0 : -1))
            if (r0 == 0) goto L223
            java.lang.String r0 = r12.getAbsolutePath()     // Catch: java.lang.Throwable -> L27e
            a(r13, r0)     // Catch: java.lang.Throwable -> L27e
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L27e
            java.lang.String r11 = com.sigmob.sdk.base.utils.b.f()     // Catch: java.lang.Throwable -> L27e
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L27e
            r15.<init>()     // Catch: java.lang.Throwable -> L27e
            r15.append(r13)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r10 = ".log"
            r15.append(r10)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r10 = r15.toString()     // Catch: java.lang.Throwable -> L27e
            r0.<init>(r11, r10)     // Catch: java.lang.Throwable -> L27e
            r2.setDownloadId(r13)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Throwable -> L27e
            com.czhj.sdk.common.utils.FileUtil.writeToCache(r2, r0)     // Catch: java.lang.Throwable -> L27e
            boolean r0 = r22.isRecord()     // Catch: java.lang.Throwable -> L27e
            if (r0 == 0) goto L20c
            com.sigmob.sdk.base.common.n$1 r0 = new com.sigmob.sdk.base.common.n$1     // Catch: java.lang.Throwable -> L27e
            r0.<init>(r1, r12)     // Catch: java.lang.Throwable -> L27e
            com.sigmob.sdk.base.common.z.a(r3, r9, r2, r0)     // Catch: java.lang.Throwable -> L27e
        L20c:
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L27e
            r0.<init>()     // Catch: java.lang.Throwable -> L27e
            r0.put(r7, r9)     // Catch: java.lang.Throwable -> L27e
            java.lang.Long r9 = java.lang.Long.valueOf(r13)     // Catch: java.lang.Throwable -> L27e
            r0.put(r5, r9)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r9 = r22.getUuid()     // Catch: java.lang.Throwable -> L27e
        L21f:
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r8, r9, r0, r4)     // Catch: java.lang.Throwable -> L27e
            goto L272
        L223:
            boolean r0 = r22.isRecord()     // Catch: java.lang.Throwable -> L27e
            if (r0 == 0) goto L231
            com.sigmob.sdk.base.common.n$2 r0 = new com.sigmob.sdk.base.common.n$2     // Catch: java.lang.Throwable -> L27e
            r0.<init>(r1, r12)     // Catch: java.lang.Throwable -> L27e
            com.sigmob.sdk.base.common.z.a(r3, r6, r2, r0)     // Catch: java.lang.Throwable -> L27e
        L231:
            java.lang.String r0 = "android.permission.WRITE_EXTERNAL_STORAGE"
            boolean r0 = com.czhj.sdk.common.ClientMetadata.isPermissionGranted(r8, r0)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r9 = "download_failed"
            if (r0 != 0) goto L251
            java.lang.String r0 = "请先给予应用 WRITE_EXTERNAL_STORAGE 权限"
            r10 = 1
            android.widget.Toast r0 = android.widget.Toast.makeText(r8, r0, r10)     // Catch: java.lang.Throwable -> L27e
            r0.show()     // Catch: java.lang.Throwable -> L27e
            boolean r0 = r22.isRecord()     // Catch: java.lang.Throwable -> L27e
            if (r0 == 0) goto L25d
            java.lang.String r0 = " No permission Manifest.permission.WRITE_EXTERNAL_STORAGE "
            com.sigmob.sdk.base.common.z.a(r9, r10, r0, r2)     // Catch: java.lang.Throwable -> L27e
            goto L25d
        L251:
            boolean r0 = r22.isRecord()     // Catch: java.lang.Throwable -> L27e
            if (r0 == 0) goto L25d
            r0 = 2
            java.lang.String r10 = "download Directory not exist"
            com.sigmob.sdk.base.common.z.a(r9, r0, r10, r2)     // Catch: java.lang.Throwable -> L27e
        L25d:
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L27e
            r0.<init>()     // Catch: java.lang.Throwable -> L27e
            r0.put(r7, r6)     // Catch: java.lang.Throwable -> L27e
            r9 = -1
            java.lang.Integer r10 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L27e
            r0.put(r5, r10)     // Catch: java.lang.Throwable -> L27e
            java.lang.String r9 = r22.getUuid()     // Catch: java.lang.Throwable -> L27e
            goto L21f
        L272:
            boolean r0 = r22.isRecord()     // Catch: java.lang.Throwable -> L27e
            if (r0 == 0) goto L2c2
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.E     // Catch: java.lang.Throwable -> L27e
            com.sigmob.sdk.base.network.f.a(r2, r0)     // Catch: java.lang.Throwable -> L27e
            goto L2c2
        L27e:
            r0 = move-exception
            java.lang.String r9 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r9)
            boolean r9 = r22.isRecord()
            if (r9 == 0) goto L2a1
            com.sigmob.sdk.base.common.n$3 r9 = new com.sigmob.sdk.base.common.n$3
            r9.<init>(r1)
            com.sigmob.sdk.base.common.z.a(r3, r6, r2, r9)
            r9 = 0
            java.lang.String r0 = r0.getMessage()
            com.sigmob.sdk.base.common.n$4 r10 = new com.sigmob.sdk.base.common.n$4
            r10.<init>(r1)
            com.sigmob.sdk.base.common.z.a(r3, r9, r0, r2, r10)
        L2a1:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r0.put(r7, r6)
            r1 = -1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.put(r5, r1)
            java.lang.String r1 = r22.getUuid()
            com.sigmob.sdk.base.common.BaseBroadcastReceiver.a(r8, r1, r0, r4)
            java.lang.String r0 = "请先给予应用权限"
            r1 = 1
            android.widget.Toast r0 = android.widget.Toast.makeText(r8, r0, r1)     // Catch: java.lang.Throwable -> L2c2
            r0.show()     // Catch: java.lang.Throwable -> L2c2
        L2c2:
            return
    }

    public static boolean a(long r3, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L8
            r3 = 0
            return r3
        L8:
            java.util.Set<com.sigmob.sdk.base.common.n$a> r0 = com.sigmob.sdk.base.common.n.b
            com.sigmob.sdk.base.common.n$a r1 = new com.sigmob.sdk.base.common.n$a
            r2 = 0
            r1.<init>(r5, r2, r3)
            r0.add(r1)
            r3 = 1
            return r3
    }

    public static boolean a(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> Ld
            r1 = 1
            android.content.pm.PackageInfo r2 = r2.getPackageArchiveInfo(r3, r1)     // Catch: java.lang.Exception -> Ld
            if (r2 == 0) goto Ld
            r0 = r1
        Ld:
            return r0
    }

    public static boolean a(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.content.Context r0 = com.sigmob.sdk.b.b()
            java.lang.String r2 = "download"
            java.lang.Object r0 = r0.getSystemService(r2)
            android.app.DownloadManager r0 = (android.app.DownloadManager) r0
            r2 = 0
            android.app.DownloadManager$Query r3 = new android.app.DownloadManager$Query     // Catch: java.lang.Throwable -> L5d
            r3.<init>()     // Catch: java.lang.Throwable -> L5d
            r4 = 3
            r3.setFilterByStatus(r4)     // Catch: java.lang.Throwable -> L5d
            android.database.Cursor r2 = r0.query(r3)     // Catch: java.lang.Throwable -> L5d
            boolean r0 = r2.moveToFirst()     // Catch: java.lang.Throwable -> L5d
            if (r0 != 0) goto L31
            r2.close()     // Catch: java.lang.Throwable -> L5d
            if (r2 == 0) goto L30
            r2.close()
        L30:
            return r1
        L31:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L5d
            r0.<init>()     // Catch: java.lang.Throwable -> L5d
        L36:
            java.lang.String r0 = "uri"
            int r0 = r2.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r0 = r2.getString(r0)     // Catch: java.lang.Throwable -> L5d
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L5d
            if (r3 != 0) goto L53
            boolean r0 = r5.equalsIgnoreCase(r0)     // Catch: java.lang.Throwable -> L5d
            if (r0 == 0) goto L53
            r5 = 1
            if (r2 == 0) goto L52
            r2.close()
        L52:
            return r5
        L53:
            boolean r0 = r2.moveToNext()     // Catch: java.lang.Throwable -> L5d
            if (r0 != 0) goto L36
            r2.close()     // Catch: java.lang.Throwable -> L5d
            return r1
        L5d:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L6b
            com.czhj.sdk.logger.SigmobLog.e(r5)     // Catch: java.lang.Throwable -> L6b
            if (r2 == 0) goto L6a
            r2.close()
        L6a:
            return r1
        L6b:
            r5 = move-exception
            if (r2 == 0) goto L71
            r2.close()
        L71:
            throw r5
    }

    public static long[] a(android.content.Context r6, java.lang.Long r7) {
            r0 = 3
            long[] r0 = new long[r0]
            r0 = {x0072: FILL_ARRAY_DATA , data: [-1, -1, 0} // fill-array
            if (r7 == 0) goto L70
            long r1 = r7.longValue()
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 >= 0) goto L13
            goto L70
        L13:
            android.app.DownloadManager$Query r1 = new android.app.DownloadManager$Query
            r1.<init>()
            r2 = 1
            long[] r3 = new long[r2]
            long r4 = r7.longValue()
            r7 = 0
            r3[r7] = r4
            android.app.DownloadManager$Query r1 = r1.setFilterById(r3)
            r3 = 0
            java.lang.String r4 = "download"
            java.lang.Object r6 = r6.getSystemService(r4)     // Catch: java.lang.Throwable -> L69
            android.app.DownloadManager r6 = (android.app.DownloadManager) r6     // Catch: java.lang.Throwable -> L69
            android.database.Cursor r3 = r6.query(r1)     // Catch: java.lang.Throwable -> L69
            if (r3 == 0) goto L63
            boolean r6 = r3.moveToFirst()     // Catch: java.lang.Throwable -> L69
            if (r6 == 0) goto L63
            java.lang.String r6 = "bytes_so_far"
            int r6 = r3.getColumnIndexOrThrow(r6)     // Catch: java.lang.Throwable -> L69
            int r6 = r3.getInt(r6)     // Catch: java.lang.Throwable -> L69
            long r4 = (long) r6     // Catch: java.lang.Throwable -> L69
            r0[r7] = r4     // Catch: java.lang.Throwable -> L69
            java.lang.String r6 = "total_size"
            int r6 = r3.getColumnIndexOrThrow(r6)     // Catch: java.lang.Throwable -> L69
            int r6 = r3.getInt(r6)     // Catch: java.lang.Throwable -> L69
            long r6 = (long) r6     // Catch: java.lang.Throwable -> L69
            r0[r2] = r6     // Catch: java.lang.Throwable -> L69
            r6 = 2
            java.lang.String r7 = "status"
            int r7 = r3.getColumnIndex(r7)     // Catch: java.lang.Throwable -> L69
            int r7 = r3.getInt(r7)     // Catch: java.lang.Throwable -> L69
            long r1 = (long) r7     // Catch: java.lang.Throwable -> L69
            r0[r6] = r1     // Catch: java.lang.Throwable -> L69
        L63:
            if (r3 == 0) goto L68
            r3.close()
        L68:
            return r0
        L69:
            r6 = move-exception
            if (r3 == 0) goto L6f
            r3.close()
        L6f:
            throw r6
        L70:
            return r0
    }

    public static void b(long r4, java.lang.String r6) {
            java.util.Set<com.sigmob.sdk.base.common.n$a> r0 = com.sigmob.sdk.base.common.n.b
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.base.common.n$a r1 = (com.sigmob.sdk.base.common.n.a) r1
            long r2 = r1.c
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L20
            java.lang.String r2 = r1.a
            boolean r2 = r2.equalsIgnoreCase(r6)
            if (r2 == 0) goto L6
        L20:
            java.util.Set<com.sigmob.sdk.base.common.n$a> r4 = com.sigmob.sdk.base.common.n.b
            r4.remove(r1)
        L25:
            return
    }

    public static java.lang.Long c(long r4, java.lang.String r6) {
            java.util.Set<com.sigmob.sdk.base.common.n$a> r0 = com.sigmob.sdk.base.common.n.b
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.base.common.n$a r1 = (com.sigmob.sdk.base.common.n.a) r1
            long r2 = r1.c
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L20
            java.lang.String r2 = r1.a
            boolean r2 = r2.equalsIgnoreCase(r6)
            if (r2 == 0) goto L6
        L20:
            long r4 = r1.c
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            return r4
        L27:
            r4 = 0
            return r4
    }
}
