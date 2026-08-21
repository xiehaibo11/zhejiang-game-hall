package com.kwad.sdk.core.scene;

public class URLPackage extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    public static final java.lang.String KEY_AUTHOR_ID = "authorId";
    public static final java.lang.String KEY_CHANNEL_ID = "channelId";
    public static final java.lang.String KEY_TUBE_ID = "tubeId";
    private static final long serialVersionUID = -7365796297335816787L;
    public java.lang.String identity;
    public transient org.json.JSONObject mJsonObjectParams;
    public int page;

    public URLPackage() {
            r0 = this;
            r0.<init>()
            return
    }

    public URLPackage(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.page = r2
            r0.identity = r1
            return
    }

    @Override
    public void afterParseJson(org.json.JSONObject r2) {
            r1 = this;
            super.afterParseJson(r2)
            if (r2 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "params"
            java.lang.String r2 = r2.optString(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1e
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1a
            r0.<init>(r2)     // Catch: org.json.JSONException -> L1a
            r1.mJsonObjectParams = r0     // Catch: org.json.JSONException -> L1a
            return
        L1a:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
        L1e:
            return
    }

    @Override
    public void afterToJson(org.json.JSONObject r3) {
            r2 = this;
            super.afterToJson(r3)
            org.json.JSONObject r0 = r2.mJsonObjectParams
            if (r0 == 0) goto L10
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "params"
            com.kwad.sdk.utils.u.putValue(r3, r1, r0)
        L10:
            return
    }

    public void putParams(java.lang.String r2, long r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.mJsonObjectParams
            if (r0 != 0) goto Lb
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r1.mJsonObjectParams = r0
        Lb:
            org.json.JSONObject r0 = r1.mJsonObjectParams
            com.kwad.sdk.utils.u.putValue(r0, r2, r3)
            return
    }
}
