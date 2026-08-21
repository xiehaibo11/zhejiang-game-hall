package com.ss.android.socialbase.appdownloader.rg;

public class pt {
    public static com.ss.android.socialbase.appdownloader.rg.rg rg(android.content.Context r9, java.lang.String r10, org.json.JSONObject r11, com.ss.android.socialbase.downloader.model.DownloadInfo r12) {
            r0 = 0
            if (r12 == 0) goto L107
            if (r9 == 0) goto L107
            if (r11 != 0) goto L9
            goto L107
        L9:
            java.lang.String r1 = r12.getSavePath()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L107
            boolean r2 = android.text.TextUtils.isEmpty(r10)
            if (r2 == 0) goto L1b
            goto L107
        L1b:
            java.io.File r2 = new java.io.File
            r2.<init>(r1)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r5 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r12)
            java.lang.String r1 = "v1"
            boolean r1 = r10.equals(r1)
            if (r1 == 0) goto L37
            com.ss.android.socialbase.appdownloader.rg.bm r0 = new com.ss.android.socialbase.appdownloader.rg.bm
            java.lang.String r10 = r12.getTargetFilePath()
            r0.<init>(r9, r5, r10)
            goto L107
        L37:
            java.lang.String r1 = "v2"
            boolean r1 = r10.equals(r1)
            if (r1 == 0) goto L4a
            com.ss.android.socialbase.appdownloader.rg.b r0 = new com.ss.android.socialbase.appdownloader.rg.b
            java.lang.String r10 = r2.getAbsolutePath()
            r0.<init>(r9, r5, r10)
            goto L107
        L4a:
            java.lang.String r1 = "v3"
            boolean r1 = r10.equals(r1)
            if (r1 == 0) goto L5d
            com.ss.android.socialbase.appdownloader.rg.hq r0 = new com.ss.android.socialbase.appdownloader.rg.hq
            java.lang.String r10 = r2.getAbsolutePath()
            r0.<init>(r9, r5, r10)
            goto L107
        L5d:
            java.lang.String r1 = "o1"
            boolean r1 = r10.equals(r1)
            if (r1 == 0) goto L70
            com.ss.android.socialbase.appdownloader.rg.fw r0 = new com.ss.android.socialbase.appdownloader.rg.fw
            java.lang.String r10 = r2.getAbsolutePath()
            r0.<init>(r9, r5, r10)
            goto L107
        L70:
            java.lang.String r1 = "o2"
            boolean r1 = r10.equals(r1)
            if (r1 == 0) goto L83
            com.ss.android.socialbase.appdownloader.rg.ux r0 = new com.ss.android.socialbase.appdownloader.rg.ux
            java.lang.String r10 = r2.getAbsolutePath()
            r0.<init>(r9, r5, r10)
            goto L107
        L83:
            java.lang.String r1 = "o3"
            boolean r1 = r10.equals(r1)
            if (r1 == 0) goto La7
            java.lang.String r10 = "file_content_uri"
            java.lang.String r7 = r12.getDBJsonString(r10)
            boolean r10 = android.text.TextUtils.isEmpty(r7)
            if (r10 != 0) goto L107
            com.ss.android.socialbase.appdownloader.rg.rz r0 = new com.ss.android.socialbase.appdownloader.rg.rz
            java.lang.String r6 = r2.getAbsolutePath()
            java.lang.String r8 = r12.getName()
            r3 = r0
            r4 = r9
            r3.<init>(r4, r5, r6, r7, r8)
            goto L107
        La7:
            java.lang.String r1 = "custom"
            boolean r1 = r10.equals(r1)
            if (r1 == 0) goto Lb9
            com.ss.android.socialbase.appdownloader.rg.q r0 = new com.ss.android.socialbase.appdownloader.rg.q
            java.lang.String r10 = r2.getAbsolutePath()
            r0.<init>(r9, r5, r10, r11)
            goto L107
        Lb9:
            java.lang.String r11 = "vbi"
            boolean r10 = r10.equals(r11)
            if (r10 == 0) goto L107
            com.ss.android.socialbase.downloader.downloader.Downloader r10 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r9)
            int r11 = r12.getId()
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r10 = r10.getDownloadFileUriProvider(r11)
            com.ss.android.socialbase.appdownloader.pt r11 = com.ss.android.socialbase.appdownloader.pt.bm()
            java.lang.String r11 = r11.pt()
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r12.getSavePath()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            java.lang.String r2 = r12.getName()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            int r12 = r12.getId()
            android.net.Uri r10 = com.ss.android.socialbase.appdownloader.q.rg(r12, r10, r9, r11, r0)
            com.ss.android.socialbase.appdownloader.rg.oh r0 = new com.ss.android.socialbase.appdownloader.rg.oh
            java.lang.String r10 = r10.toString()
            r0.<init>(r9, r5, r10)
        L107:
            return r0
    }

    public static boolean rg(android.content.Context r8, java.lang.String r9, org.json.JSONObject r10, com.ss.android.socialbase.downloader.setting.DownloadSetting r11) {
            r0 = 0
            if (r8 == 0) goto Lca
            if (r9 != 0) goto L7
            goto Lca
        L7:
            r1 = 0
            java.lang.String r7 = com.ss.android.socialbase.appdownloader.q.df()
            boolean r2 = android.text.TextUtils.isEmpty(r7)
            if (r2 != 0) goto Lca
            boolean r2 = android.text.TextUtils.isEmpty(r9)
            if (r2 == 0) goto L1a
            goto Lca
        L1a:
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.q()
            if (r2 == 0) goto L2f
            java.lang.String r2 = "v1"
            boolean r2 = r9.equals(r2)
            if (r2 == 0) goto L2f
            com.ss.android.socialbase.appdownloader.rg.bm r1 = new com.ss.android.socialbase.appdownloader.rg.bm
            r1.<init>(r8, r11, r7)
            goto Lc1
        L2f:
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.q()
            if (r2 == 0) goto L44
            java.lang.String r2 = "v2"
            boolean r2 = r9.equals(r2)
            if (r2 == 0) goto L44
            com.ss.android.socialbase.appdownloader.rg.b r1 = new com.ss.android.socialbase.appdownloader.rg.b
            r1.<init>(r8, r11, r7)
            goto Lc1
        L44:
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.q()
            if (r2 == 0) goto L59
            java.lang.String r2 = "v3"
            boolean r2 = r9.equals(r2)
            if (r2 == 0) goto L59
            com.ss.android.socialbase.appdownloader.rg.hq r1 = new com.ss.android.socialbase.appdownloader.rg.hq
            r1.<init>(r8, r11, r7)
            goto Lc1
        L59:
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.pt()
            if (r2 == 0) goto L6d
            java.lang.String r2 = "o1"
            boolean r2 = r9.equals(r2)
            if (r2 == 0) goto L6d
            com.ss.android.socialbase.appdownloader.rg.fw r1 = new com.ss.android.socialbase.appdownloader.rg.fw
            r1.<init>(r8, r11, r7)
            goto Lc1
        L6d:
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.pt()
            if (r2 == 0) goto L81
            java.lang.String r2 = "o2"
            boolean r2 = r9.equals(r2)
            if (r2 == 0) goto L81
            com.ss.android.socialbase.appdownloader.rg.ux r1 = new com.ss.android.socialbase.appdownloader.rg.ux
            r1.<init>(r8, r11, r7)
            goto Lc1
        L81:
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.pt()
            if (r2 == 0) goto L9a
            java.lang.String r2 = "o3"
            boolean r2 = r9.equals(r2)
            if (r2 == 0) goto L9a
            com.ss.android.socialbase.appdownloader.rg.rz r1 = new com.ss.android.socialbase.appdownloader.rg.rz
            r2 = r1
            r3 = r8
            r4 = r11
            r5 = r7
            r6 = r7
            r2.<init>(r3, r4, r5, r6, r7)
            goto Lc1
        L9a:
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.q()
            if (r2 == 0) goto Lae
            java.lang.String r2 = "custom"
            boolean r2 = r9.equals(r2)
            if (r2 == 0) goto Lae
            com.ss.android.socialbase.appdownloader.rg.q r1 = new com.ss.android.socialbase.appdownloader.rg.q
            r1.<init>(r8, r11, r7, r10)
            goto Lc1
        Lae:
            boolean r10 = com.ss.android.socialbase.appdownloader.c.pt.q()
            if (r10 == 0) goto Lc1
            java.lang.String r10 = "vbi"
            boolean r9 = r9.equals(r10)
            if (r9 == 0) goto Lc1
            com.ss.android.socialbase.appdownloader.rg.oh r1 = new com.ss.android.socialbase.appdownloader.rg.oh
            r1.<init>(r8, r11, r7)
        Lc1:
            if (r1 == 0) goto Lca
            boolean r8 = r1.rg()
            if (r8 == 0) goto Lca
            r0 = 1
        Lca:
            return r0
    }
}
