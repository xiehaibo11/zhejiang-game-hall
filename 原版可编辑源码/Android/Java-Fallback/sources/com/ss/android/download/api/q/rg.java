package com.ss.android.download.api.q;

public class rg {
    public static java.lang.String df(android.net.Uri r5) {
            java.lang.String r0 = r5.getScheme()
            java.util.List r1 = r5.getPathSegments()
            org.json.JSONObject r2 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r3 = "market_scheme_opt"
            int r2 = r2.optInt(r3)
            r3 = 0
            r4 = 1
            if (r2 != r4) goto L33
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.c()
            if (r2 == 0) goto L33
            java.lang.String r2 = "samsungapps"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L33
            if (r1 == 0) goto L33
            int r0 = r1.size()
            if (r0 != r4) goto L33
            java.lang.Object r5 = r1.get(r3)
            java.lang.String r5 = (java.lang.String) r5
            return r5
        L33:
            r0 = 5
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.String r1 = "id"
            java.lang.String r1 = r5.getQueryParameter(r1)
            r0[r3] = r1
            java.lang.String r1 = "packagename"
            java.lang.String r1 = r5.getQueryParameter(r1)
            r0[r4] = r1
            r1 = 2
            java.lang.String r2 = "pkg"
            java.lang.String r2 = r5.getQueryParameter(r2)
            r0[r1] = r2
            r1 = 3
            java.lang.String r2 = "package_name"
            java.lang.String r2 = r5.getQueryParameter(r2)
            r0[r1] = r2
            r1 = 4
            java.lang.String r2 = "appId"
            java.lang.String r5 = r5.getQueryParameter(r2)
            r0[r1] = r5
            java.lang.String r5 = com.ss.android.download.api.q.df.rg(r0)
            return r5
    }

    public static boolean rg(android.net.Uri r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r4 = r4.getScheme()
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto Lf
            return r0
        Lf:
            org.json.JSONObject r1 = com.ss.android.downloadlib.addownload.bm.rz()
            r2 = 1
            java.lang.String r3 = "market_url_opt"
            int r1 = r1.optInt(r3, r2)
            java.lang.String r3 = "market"
            if (r1 != 0) goto L23
            boolean r4 = r3.equals(r4)
            return r4
        L23:
            boolean r1 = r3.equals(r4)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "appmarket"
            boolean r1 = r1.equals(r4)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "oaps"
            boolean r1 = r1.equals(r4)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "oppomarket"
            boolean r1 = r1.equals(r4)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "mimarket"
            boolean r1 = r1.equals(r4)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "vivomarket"
            boolean r1 = r1.equals(r4)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "vivoMarket"
            boolean r1 = r1.equals(r4)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "gomarket"
            boolean r1 = r1.equals(r4)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "goMarket"
            boolean r1 = r1.equals(r4)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "mstore"
            boolean r1 = r1.equals(r4)
            if (r1 != 0) goto L7b
            java.lang.String r1 = "samsungapps"
            boolean r4 = r1.equals(r4)
            if (r4 == 0) goto L7a
            goto L7b
        L7a:
            return r0
        L7b:
            return r2
    }
}
