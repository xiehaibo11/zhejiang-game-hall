package com.ss.android.socialbase.appdownloader.rg;

public class oh extends com.ss.android.socialbase.appdownloader.rg.rg {
    public oh(android.content.Context r1, com.ss.android.socialbase.downloader.setting.DownloadSetting r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public static java.lang.String rg(java.util.Map<java.lang.String, java.lang.String> r4) {
            if (r4 != 0) goto L5
            java.lang.String r4 = ""
            return r4
        L5:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L12:
            boolean r1 = r4.hasNext()
            java.lang.String r2 = "&"
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r0.append(r3)
            java.lang.String r3 = "="
            r0.append(r3)
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r1 = java.net.URLEncoder.encode(r1)
            r0.append(r1)
            r0.append(r2)
            goto L12
        L3f:
            java.lang.String r4 = r0.toString()
            boolean r0 = r4.endsWith(r2)
            if (r0 == 0) goto L54
            r0 = 0
            int r1 = r4.length()
            int r1 = r1 + (-1)
            java.lang.String r4 = r4.substring(r0, r1)
        L54:
            return r4
    }

    @Override
    public android.content.Intent df() {
            r9 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = r9.df
            java.lang.String r1 = "s"
            java.lang.String r0 = r0.optString(r1)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = r9.df
            java.lang.String r2 = "bb"
            java.lang.String r1 = r1.optString(r2)
            java.lang.String r1 = com.ss.android.socialbase.appdownloader.c.q.rg(r1, r0)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            r3 = 0
            if (r2 != 0) goto Lb0
            java.lang.String r2 = ","
            java.lang.String[] r4 = r1.split(r2)
            int r4 = r4.length
            r5 = 2
            if (r4 == r5) goto L27
            goto Lb0
        L27:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = r9.df
            java.lang.String r6 = "bc"
            java.lang.String r4 = r4.optString(r6)
            java.lang.String r4 = com.ss.android.socialbase.appdownloader.c.q.rg(r4, r0)
            boolean r6 = android.text.TextUtils.isEmpty(r4)
            if (r6 != 0) goto Lb0
            java.lang.String[] r6 = r4.split(r2)
            int r6 = r6.length
            if (r6 == r5) goto L41
            goto Lb0
        L41:
            java.lang.String[] r1 = r1.split(r2)
            java.lang.String[] r2 = r4.split(r2)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = r9.df
            java.lang.String r4 = "bd"
            java.lang.String r3 = r3.optString(r4)
            java.lang.String r3 = com.ss.android.socialbase.appdownloader.c.q.rg(r3, r0)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = r9.df
            java.lang.String r5 = "be"
            java.lang.String r4 = r4.optString(r5)
            java.lang.String r4 = com.ss.android.socialbase.appdownloader.c.q.rg(r4, r0)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r5 = r9.df
            java.lang.String r6 = "bf"
            java.lang.String r5 = r5.optString(r6)
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.q.rg(r5, r0)
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            r6 = 0
            r7 = r1[r6]
            r8 = 1
            r1 = r1[r8]
            r5.put(r7, r1)
            r1 = r2[r6]
            r2 = r2[r8]
            r5.put(r1, r2)
            java.lang.String r1 = r9.q
            r5.put(r3, r1)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            r1.setAction(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r2 = rg(r5)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            r1.setData(r0)
            r0 = 268468224(0x10008000, float:2.5342157E-29)
            r1.addFlags(r0)
            return r1
        Lb0:
            return r3
    }
}
