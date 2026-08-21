package com.mbridge.msdk.playercommon.exoplayer2.drm;

final class ClearKeyUtil {
    private static final java.lang.String TAG = "ClearKeyUtil";

    private ClearKeyUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] adjustRequestData(byte[] r2) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 27
            if (r0 < r1) goto L7
            return r2
        L7:
            java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.fromUtf8Bytes(r2)
            java.lang.String r2 = base64ToBase64Url(r2)
            byte[] r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getUtf8Bytes(r2)
            return r2
    }

    public static byte[] adjustResponseData(byte[] r5) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 27
            if (r0 < r1) goto L7
            return r5
        L7:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L77
            java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.fromUtf8Bytes(r5)     // Catch: org.json.JSONException -> L77
            r0.<init>(r1)     // Catch: org.json.JSONException -> L77
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L77
            java.lang.String r2 = "{\"keys\":["
            r1.<init>(r2)     // Catch: org.json.JSONException -> L77
            java.lang.String r2 = "keys"
            org.json.JSONArray r0 = r0.getJSONArray(r2)     // Catch: org.json.JSONException -> L77
            r2 = 0
        L1e:
            int r3 = r0.length()     // Catch: org.json.JSONException -> L77
            if (r2 >= r3) goto L69
            if (r2 == 0) goto L2b
            java.lang.String r3 = ","
            r1.append(r3)     // Catch: org.json.JSONException -> L77
        L2b:
            org.json.JSONObject r3 = r0.getJSONObject(r2)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = "{\"k\":\""
            r1.append(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = "k"
            java.lang.String r4 = r3.getString(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = base64UrlToBase64(r4)     // Catch: org.json.JSONException -> L77
            r1.append(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = "\",\"kid\":\""
            r1.append(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = "kid"
            java.lang.String r4 = r3.getString(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = base64UrlToBase64(r4)     // Catch: org.json.JSONException -> L77
            r1.append(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = "\",\"kty\":\""
            r1.append(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = "kty"
            java.lang.String r3 = r3.getString(r4)     // Catch: org.json.JSONException -> L77
            r1.append(r3)     // Catch: org.json.JSONException -> L77
            java.lang.String r3 = "\"}"
            r1.append(r3)     // Catch: org.json.JSONException -> L77
            int r2 = r2 + 1
            goto L1e
        L69:
            java.lang.String r0 = "]}"
            r1.append(r0)     // Catch: org.json.JSONException -> L77
            java.lang.String r0 = r1.toString()     // Catch: org.json.JSONException -> L77
            byte[] r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getUtf8Bytes(r0)     // Catch: org.json.JSONException -> L77
            return r5
        L77:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed to adjust response data: "
            r1.append(r2)
            java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.fromUtf8Bytes(r5)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ClearKeyUtil"
            android.util.Log.e(r2, r1, r0)
            return r5
    }

    private static java.lang.String base64ToBase64Url(java.lang.String r2) {
            r0 = 43
            r1 = 45
            java.lang.String r2 = r2.replace(r0, r1)
            r0 = 47
            r1 = 95
            java.lang.String r2 = r2.replace(r0, r1)
            return r2
    }

    private static java.lang.String base64UrlToBase64(java.lang.String r2) {
            r0 = 45
            r1 = 43
            java.lang.String r2 = r2.replace(r0, r1)
            r0 = 95
            r1 = 47
            java.lang.String r2 = r2.replace(r0, r1)
            return r2
    }
}
