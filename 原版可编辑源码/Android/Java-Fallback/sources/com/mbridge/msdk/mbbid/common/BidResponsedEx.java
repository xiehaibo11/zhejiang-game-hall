package com.mbridge.msdk.mbbid.common;

public class BidResponsedEx extends com.mbridge.msdk.mbbid.out.BidResponsed {
    public static final java.lang.String KEY_CID = "cid";
    public static final java.lang.String KEY_MACORS = "macors";
    public static final java.lang.String TAG = "BidResponsedEx";
    private java.lang.String cid;

    public BidResponsedEx() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String decodePrice(java.lang.String r0) {
            return r0
    }

    public static com.mbridge.msdk.mbbid.common.BidResponsedEx parseBidResponsedEx(org.json.JSONObject r5, java.lang.String r6) {
            r6 = 0
            if (r5 == 0) goto L81
            com.mbridge.msdk.mbbid.common.BidResponsedEx r0 = new com.mbridge.msdk.mbbid.common.BidResponsedEx     // Catch: java.lang.Throwable -> L77
            r0.<init>()     // Catch: java.lang.Throwable -> L77
            java.lang.String r6 = "bid"
            java.lang.String r6 = r5.optString(r6)     // Catch: java.lang.Throwable -> L74
            r0.setBidId(r6)     // Catch: java.lang.Throwable -> L74
            java.lang.String r6 = "cur"
            java.lang.String r6 = r5.optString(r6)     // Catch: java.lang.Throwable -> L74
            r0.setCur(r6)     // Catch: java.lang.Throwable -> L74
            java.lang.String r6 = "price"
            java.lang.String r6 = r5.optString(r6)     // Catch: java.lang.Throwable -> L74
            r0.setPrice(r6)     // Catch: java.lang.Throwable -> L74
            java.lang.String r6 = "cid"
            java.lang.String r6 = r5.optString(r6)     // Catch: java.lang.Throwable -> L74
            r0.setCid(r6)     // Catch: java.lang.Throwable -> L74
            java.lang.String r6 = "token"
            java.lang.String r6 = r5.optString(r6)     // Catch: java.lang.Throwable -> L74
            r0.setBidToken(r6)     // Catch: java.lang.Throwable -> L74
            java.lang.String r6 = "macors"
            org.json.JSONObject r6 = r5.optJSONObject(r6)     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = "ln"
            java.lang.String r1 = r5.optString(r1)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "wn"
            java.lang.String r5 = r5.optString(r2)     // Catch: java.lang.Throwable -> L74
            if (r6 == 0) goto L6c
            int r2 = r6.length()     // Catch: java.lang.Throwable -> L74
            if (r2 <= 0) goto L6c
            java.util.Iterator r2 = r6.keys()     // Catch: java.lang.Throwable -> L74
        L53:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L74
            if (r3 == 0) goto L6c
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L74
            java.lang.String r4 = r6.getString(r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r1 = replaceUrl(r1, r3, r4)     // Catch: java.lang.Throwable -> L74
            java.lang.String r5 = replaceUrl(r5, r3, r4)     // Catch: java.lang.Throwable -> L74
            goto L53
        L6c:
            r0.setLn(r1)     // Catch: java.lang.Throwable -> L74
            r0.setWn(r5)     // Catch: java.lang.Throwable -> L74
            r6 = r0
            goto L81
        L74:
            r5 = move-exception
            r6 = r0
            goto L78
        L77:
            r5 = move-exception
        L78:
            java.lang.String r5 = r5.getMessage()
            java.lang.String r0 = "BidResponsedEx"
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
        L81:
            return r6
    }

    private static java.lang.String replaceUrl(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L2d
            if (r0 != 0) goto L31
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L2d
            if (r0 != 0) goto L31
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L2d
            if (r0 != 0) goto L31
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2d
            r0.<init>()     // Catch: java.lang.Exception -> L2d
            java.lang.String r1 = "\\{"
            r0.append(r1)     // Catch: java.lang.Exception -> L2d
            r0.append(r3)     // Catch: java.lang.Exception -> L2d
            java.lang.String r3 = "\\}"
            r0.append(r3)     // Catch: java.lang.Exception -> L2d
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L2d
            java.lang.String r2 = r2.replaceAll(r3, r4)     // Catch: java.lang.Exception -> L2d
            goto L31
        L2d:
            r3 = move-exception
            r3.printStackTrace()
        L31:
            return r2
    }

    public java.lang.String getCid() {
            r1 = this;
            java.lang.String r0 = r1.cid
            return r0
    }

    public void setCid(java.lang.String r1) {
            r0 = this;
            r0.cid = r1
            return
    }

    public void setLn(java.lang.String r1) {
            r0 = this;
            r0.ln = r1
            return
    }

    public void setWn(java.lang.String r1) {
            r0 = this;
            r0.wn = r1
            return
    }
}
