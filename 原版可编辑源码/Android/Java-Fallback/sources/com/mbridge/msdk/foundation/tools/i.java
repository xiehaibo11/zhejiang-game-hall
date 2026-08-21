package com.mbridge.msdk.foundation.tools;

public final class i {
    static final java.util.List<java.lang.String> a = null;



    public interface a {
        void a(java.lang.String r1, com.mbridge.msdk.foundation.download.DownloadError r2);

        void a(java.lang.String r1, java.lang.String r2, java.lang.String r3);
    }

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 4
            r0.<init>(r1)
            com.mbridge.msdk.foundation.tools.i.a = r0
            if (r0 == 0) goto L16
            java.lang.String r1 = "mbridge_splash_native_template_v_v1.xml"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = com.mbridge.msdk.foundation.tools.i.a
            java.lang.String r1 = "mbridge_splash_native_template_h_v1.xml"
            r0.add(r1)
        L16:
            return
    }

    public static java.lang.String a(int r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r3 = b(r3, r4, r5)     // Catch: java.lang.Exception -> Le
            goto Lf
        Le:
            r3 = r1
        Lf:
            r4 = 0
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            com.mbridge.msdk.foundation.same.b.c r0 = com.mbridge.msdk.foundation.same.b.c.l
            java.lang.String r0 = com.mbridge.msdk.foundation.same.b.e.b(r0)
            r5.append(r0)
            java.lang.String r0 = java.io.File.separator
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L33
            if (r0 != 0) goto L33
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L33
            r0.<init>(r5, r3)     // Catch: java.lang.Exception -> L33
            r4 = r0
        L33:
            if (r4 == 0) goto L3b
            boolean r0 = r4.exists()
            if (r0 != 0) goto L5b
        L3b:
            java.lang.String r4 = ".xml"
            java.lang.String r4 = r3.replace(r4, r1)
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r5 = java.io.File.separator
            r2.append(r5)
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r0.<init>(r4, r3)
            r4 = r0
        L5b:
            if (r4 == 0) goto L61
            java.lang.String r1 = r4.getPath()
        L61:
            return r1
    }

    public static java.lang.String a(java.lang.String r11) {
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            android.net.Uri r0 = android.net.Uri.parse(r11)     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "natmp"
            java.lang.String r0 = r0.getQueryParameter(r2)     // Catch: java.lang.Throwable -> L22
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L22
            if (r2 != 0) goto L22
            java.lang.String r2 = "1"
            boolean r0 = r0.equals(r2)     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto L22
            return r1
        L22:
            java.lang.String r0 = b(r11)     // Catch: java.lang.Exception -> L27
            goto L28
        L27:
            r0 = r1
        L28:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L2f
            return r1
        L2f:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb4
            r2.<init>()     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.l     // Catch: java.lang.Exception -> Lb4
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> Lb4
            r2.append(r3)     // Catch: java.lang.Exception -> Lb4
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Exception -> Lb4
            r2.append(r3)     // Catch: java.lang.Exception -> Lb4
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lb4
            java.io.File r3 = new java.io.File     // Catch: java.lang.Exception -> Lb4
            r3.<init>(r2, r0)     // Catch: java.lang.Exception -> Lb4
            boolean r0 = r3.isFile()     // Catch: java.lang.Exception -> Lb4
            if (r0 == 0) goto L5c
            boolean r0 = r3.exists()     // Catch: java.lang.Exception -> Lb4
            if (r0 == 0) goto L5c
            java.lang.String r11 = r3.getPath()     // Catch: java.lang.Exception -> Lb4
            return r11
        L5c:
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> Lb4
            r0.<init>(r11)     // Catch: java.lang.Exception -> Lb4
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> Lb4
            r3 = 47
            int r3 = r0.lastIndexOf(r3)     // Catch: java.lang.Exception -> Lb4
            r4 = 1
            int r3 = r3 + r4
            java.lang.String r0 = r0.substring(r3)     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.download.DownloadMessage r3 = new com.mbridge.msdk.foundation.download.DownloadMessage     // Catch: java.lang.Exception -> Lb4
            java.lang.Object r6 = new java.lang.Object     // Catch: java.lang.Exception -> Lb4
            r6.<init>()     // Catch: java.lang.Exception -> Lb4
            r9 = 100
            com.mbridge.msdk.foundation.download.DownloadResourceType r10 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_OTHER     // Catch: java.lang.Exception -> Lb4
            r5 = r3
            r7 = r11
            r8 = r0
            r5.<init>(r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.download.MBDownloadManager r11 = com.mbridge.msdk.foundation.download.MBDownloadManager.getInstance()     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r11 = r11.download(r3)     // Catch: java.lang.Exception -> Lb4
            r5 = 30000(0x7530, double:1.4822E-319)
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r11 = r11.withReadTimeout(r5)     // Catch: java.lang.Exception -> Lb4
            r5 = 20000(0x4e20, double:9.8813E-320)
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r11 = r11.withConnectTimeout(r5)     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.download.DownloadPriority r3 = com.mbridge.msdk.foundation.download.DownloadPriority.MEDIUM     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.download.core.RequestBuilder r11 = r11.withDownloadPriority(r3)     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.download.core.RequestBuilder r11 = r11.withHttpRetryCounter(r4)     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.download.core.RequestBuilder r11 = r11.withDirectoryPathInternal(r2)     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.tools.i$2 r3 = new com.mbridge.msdk.foundation.tools.i$2     // Catch: java.lang.Exception -> Lb4
            r3.<init>(r2, r0)     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.download.core.RequestBuilder r11 = r11.withDownloadStateListener(r3)     // Catch: java.lang.Exception -> Lb4
            com.mbridge.msdk.foundation.download.core.DownloadRequest r11 = r11.build()     // Catch: java.lang.Exception -> Lb4
            r11.start()     // Catch: java.lang.Exception -> Lb4
        Lb4:
            return r1
    }

    public static void a(int r14, java.lang.String r15, java.lang.String r16, com.mbridge.msdk.foundation.tools.i.a r17) {
            r0 = r16
            r7 = r17
            java.lang.String r1 = ""
            boolean r2 = android.text.TextUtils.isEmpty(r16)
            if (r2 == 0) goto Ld
            return
        Ld:
            java.lang.String r2 = b(r14, r15, r16)     // Catch: java.lang.Exception -> L12
            goto L13
        L12:
            r2 = r1
        L13:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            com.mbridge.msdk.foundation.same.b.c r4 = com.mbridge.msdk.foundation.same.b.c.l
            java.lang.String r4 = com.mbridge.msdk.foundation.same.b.e.b(r4)
            r3.append(r4)
            java.lang.String r4 = java.io.File.separator
            r3.append(r4)
            java.lang.String r8 = r3.toString()
            r3 = 0
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L37
            if (r4 != 0) goto L37
            java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> L37
            r4.<init>(r8, r2)     // Catch: java.lang.Exception -> L37
            r3 = r4
        L37:
            if (r3 == 0) goto L3f
            boolean r4 = r3.exists()
            if (r4 != 0) goto L5f
        L3f:
            java.lang.String r3 = ".xml"
            java.lang.String r3 = r2.replace(r3, r1)
            java.io.File r4 = new java.io.File
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r8)
            java.lang.String r6 = java.io.File.separator
            r5.append(r6)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3, r2)
            r3 = r4
        L5f:
            if (r3 == 0) goto L72
            boolean r4 = r3.exists()     // Catch: java.lang.Exception -> L72
            if (r4 == 0) goto L72
            boolean r4 = r3.isFile()     // Catch: java.lang.Exception -> L72
            if (r4 == 0) goto L72
            java.lang.String r3 = r3.getPath()     // Catch: java.lang.Exception -> L72
            goto L73
        L72:
            r3 = r1
        L73:
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r9 = "DynamicViewResourceManager"
            if (r4 != 0) goto L91
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 != 0) goto L91
            if (r7 == 0) goto L90
            r7.a(r0, r3, r2)     // Catch: java.lang.Exception -> L87
            goto L90
        L87:
            r0 = move-exception
            r1 = r0
            java.lang.String r0 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r9, r0)
        L90:
            return
        L91:
            java.net.URL r2 = new java.net.URL     // Catch: java.lang.Exception -> Lf9
            r2.<init>(r0)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Exception -> Lf9
            r3 = 47
            int r3 = r2.lastIndexOf(r3)     // Catch: java.lang.Exception -> Lf9
            r10 = 1
            int r3 = r3 + r10
            java.lang.String r11 = r2.substring(r3)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r2 = ".zip"
            java.lang.String r12 = r11.replace(r2, r1)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.download.DownloadMessage r13 = new com.mbridge.msdk.foundation.download.DownloadMessage     // Catch: java.lang.Exception -> Lf9
            java.lang.Object r2 = new java.lang.Object     // Catch: java.lang.Exception -> Lf9
            r2.<init>()     // Catch: java.lang.Exception -> Lf9
            r5 = 100
            com.mbridge.msdk.foundation.download.DownloadResourceType r6 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_OTHER     // Catch: java.lang.Exception -> Lf9
            r1 = r13
            r3 = r16
            r4 = r11
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.download.MBDownloadManager r1 = com.mbridge.msdk.foundation.download.MBDownloadManager.getInstance()     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1 = r1.download(r13)     // Catch: java.lang.Exception -> Lf9
            r2 = 30000(0x7530, double:1.4822E-319)
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1 = r1.withReadTimeout(r2)     // Catch: java.lang.Exception -> Lf9
            r2 = 20000(0x4e20, double:9.8813E-320)
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r1 = r1.withConnectTimeout(r2)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.download.DownloadPriority r2 = com.mbridge.msdk.foundation.download.DownloadPriority.MEDIUM     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.download.core.RequestBuilder r1 = r1.withDownloadPriority(r2)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.download.core.RequestBuilder r1 = r1.withHttpRetryCounter(r10)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.download.core.RequestBuilder r10 = r1.withDirectoryPathInternal(r8)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.tools.i$1 r13 = new com.mbridge.msdk.foundation.tools.i$1     // Catch: java.lang.Exception -> Lf9
            r1 = r13
            r2 = r8
            r3 = r11
            r4 = r17
            r5 = r16
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.download.core.RequestBuilder r0 = r10.withDownloadStateListener(r13)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r0.build()     // Catch: java.lang.Exception -> Lf9
            r0.start()     // Catch: java.lang.Exception -> Lf9
            goto L101
        Lf9:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r9, r0)
        L101:
            return
    }

    private static java.lang.String b(int r0, java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L2a
            r0.<init>(r2)     // Catch: java.lang.Exception -> L2a
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L2a
            r2 = 47
            int r2 = r0.lastIndexOf(r2)     // Catch: java.lang.Exception -> L2a
            int r2 = r2 + 1
            java.lang.String r0 = r0.substring(r2)     // Catch: java.lang.Exception -> L2a
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2a
            if (r2 != 0) goto L2a
            java.lang.String r2 = ".zip"
            java.lang.String r1 = r0.replace(r2, r1)     // Catch: java.lang.Exception -> L2a
        L2a:
            return r1
    }

    private static java.lang.String b(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L37
            r0.<init>(r2)     // Catch: java.lang.Exception -> L37
            java.lang.String r2 = r0.getPath()     // Catch: java.lang.Exception -> L37
            r0 = 47
            int r0 = r2.lastIndexOf(r0)     // Catch: java.lang.Exception -> L37
            int r0 = r0 + 1
            java.lang.String r2 = r2.substring(r0)     // Catch: java.lang.Exception -> L37
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L37
            if (r0 != 0) goto L37
            java.lang.String r0 = ".zip"
            java.lang.String r2 = r2.replace(r0, r1)     // Catch: java.lang.Exception -> L37
            java.util.List<java.lang.String> r0 = com.mbridge.msdk.foundation.tools.i.a     // Catch: java.lang.Exception -> L37
            if (r0 == 0) goto L37
            java.util.List<java.lang.String> r0 = com.mbridge.msdk.foundation.tools.i.a     // Catch: java.lang.Exception -> L37
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L37
            if (r0 != 0) goto L37
            r1 = r2
        L37:
            return r1
    }
}
