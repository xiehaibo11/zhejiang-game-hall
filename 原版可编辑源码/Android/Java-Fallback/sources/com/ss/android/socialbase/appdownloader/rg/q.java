package com.ss.android.socialbase.appdownloader.rg;

public class q extends com.ss.android.socialbase.appdownloader.rg.rg {
    private final org.json.JSONObject pt;

    public q(android.content.Context r1, com.ss.android.socialbase.downloader.setting.DownloadSetting r2, java.lang.String r3, org.json.JSONObject r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.pt = r4
            return
    }

    private static void rg(android.content.Intent r3, org.json.JSONObject r4, org.json.JSONObject r5) {
            if (r4 == 0) goto L2d
            if (r5 == 0) goto L2d
            int r0 = r4.length()
            int r1 = r5.length()
            if (r0 != r1) goto L2d
            if (r3 != 0) goto L11
            goto L2d
        L11:
            java.util.Iterator r0 = r4.keys()
            if (r0 == 0) goto L2d
        L17:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2d
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = r5.optString(r1)
            if (r2 == 0) goto L17
            rg(r4, r1, r2, r3)
            goto L17
        L2d:
            return
    }

    private static void rg(org.json.JSONObject r5, java.lang.String r6, java.lang.String r7, android.content.Intent r8) {
            int r0 = r7.hashCode()
            r1 = 4
            r2 = 3
            r3 = 2
            r4 = 1
            switch(r0) {
                case -1325958191: goto L34;
                case -891985903: goto L2a;
                case 104431: goto L20;
                case 3327612: goto L16;
                case 64711720: goto Lc;
                default: goto Lb;
            }
        Lb:
            goto L3e
        Lc:
            java.lang.String r0 = "boolean"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L3e
            r7 = r4
            goto L3f
        L16:
            java.lang.String r0 = "long"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L3e
            r7 = r3
            goto L3f
        L20:
            java.lang.String r0 = "int"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L3e
            r7 = 0
            goto L3f
        L2a:
            java.lang.String r0 = "string"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L3e
            r7 = r1
            goto L3f
        L34:
            java.lang.String r0 = "double"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L3e
            r7 = r2
            goto L3f
        L3e:
            r7 = -1
        L3f:
            if (r7 == 0) goto L6a
            if (r7 == r4) goto L62
            if (r7 == r3) goto L5a
            if (r7 == r2) goto L52
            if (r7 == r1) goto L4a
            goto L71
        L4a:
            java.lang.String r5 = r5.optString(r6)
            r8.putExtra(r6, r5)
            goto L71
        L52:
            double r0 = r5.optDouble(r6)
            r8.putExtra(r6, r0)
            goto L71
        L5a:
            long r0 = r5.optLong(r6)
            r8.putExtra(r6, r0)
            goto L71
        L62:
            boolean r5 = r5.optBoolean(r6)
            r8.putExtra(r6, r5)
            goto L71
        L6a:
            int r5 = r5.optInt(r6)
            r8.putExtra(r6, r5)
        L71:
            return
    }

    @Override
    public android.content.Intent df() {
            r9 = this;
            org.json.JSONObject r0 = r9.pt
            java.lang.String r1 = "action"
            java.lang.String r0 = r0.optString(r1)
            org.json.JSONObject r1 = r9.pt
            java.lang.String r2 = "category"
            java.lang.String r1 = r1.optString(r2)
            org.json.JSONObject r2 = r9.pt
            java.lang.String r3 = "flags"
            r4 = 1342210048(0x50008000, float:8.623489E9)
            int r2 = r2.optInt(r3, r4)
            org.json.JSONObject r3 = r9.pt
            java.lang.String r4 = "path_extra_key"
            java.lang.String r3 = r3.optString(r4)
            org.json.JSONObject r4 = r9.pt
            java.lang.String r5 = "path_data_key"
            java.lang.String r4 = r4.optString(r5)
            org.json.JSONObject r5 = r9.pt
            java.lang.String r6 = "extra"
            org.json.JSONObject r5 = r5.optJSONObject(r6)
            org.json.JSONObject r6 = r9.pt
            java.lang.String r7 = "extra_type"
            org.json.JSONObject r6 = r6.optJSONObject(r7)
            boolean r7 = android.text.TextUtils.isEmpty(r0)
            if (r7 == 0) goto L43
            r0 = 0
            return r0
        L43:
            android.content.Intent r7 = new android.content.Intent
            r7.<init>(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L51
            r7.addCategory(r1)
        L51:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L6a
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L6a
            r1 = 0
            java.lang.String r8 = r9.q     // Catch: java.lang.Throwable -> L6a
            r0[r1] = r8     // Catch: java.lang.Throwable -> L6a
            java.lang.String r0 = java.lang.String.format(r4, r0)     // Catch: java.lang.Throwable -> L6a
            android.net.Uri r0 = android.net.Uri.parse(r0)     // Catch: java.lang.Throwable -> L6a
            r7.setData(r0)     // Catch: java.lang.Throwable -> L6a
        L6a:
            r7.setFlags(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L78
            java.lang.String r0 = r9.q
            r7.putExtra(r3, r0)
        L78:
            rg(r7, r5, r6)
            return r7
    }
}
