package com.kwad.sdk.core.network;

public abstract class BaseResultData implements com.kwad.sdk.core.b, java.io.Serializable {
    private static final int CODE_RESULT_OK = 1;
    private static final long serialVersionUID = -8657363515914699792L;
    public java.lang.String cookie;
    public java.lang.String errorMsg;
    public java.lang.String extra;
    public boolean hasAd;
    public long llsid;
    public int result;
    public java.lang.String testErrorMsg;

    public BaseResultData() {
            r0 = this;
            r0.<init>()
            return
    }

    public org.json.JSONObject baseToJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            long r1 = r4.llsid
            java.lang.String r3 = "llsid"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            java.lang.String r1 = r4.extra
            java.lang.String r2 = "extra"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r4.result
            java.lang.String r2 = "result"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            boolean r1 = r4.hasAd
            java.lang.String r2 = "hasAd"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.errorMsg
            java.lang.String r2 = "errorMsg"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.testErrorMsg
            java.lang.String r2 = "testErrorMsg"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.cookie
            java.lang.String r2 = "cookie"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }

    public boolean hasData() {
            r1 = this;
            boolean r0 = r1.hasAd
            return r0
    }

    public boolean isDataEmpty() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean isResultOk() {
            r2 = this;
            int r0 = r2.result
            r1 = 1
            if (r0 != r1) goto L6
            return r1
        L6:
            r0 = 0
            return r0
    }

    public boolean notifyFailOnResultError() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "llsid"
            long r0 = r4.optLong(r0)
            r3.llsid = r0
            java.lang.String r0 = "result"
            int r0 = r4.optInt(r0)
            r3.result = r0
            java.lang.String r0 = "hasAd"
            boolean r0 = r4.optBoolean(r0)
            r3.hasAd = r0
            java.lang.String r0 = "errorMsg"
            java.lang.String r0 = r4.optString(r0)
            r3.errorMsg = r0
            java.lang.String r0 = "testErrorMsg"
            java.lang.String r0 = r4.optString(r0)
            r3.testErrorMsg = r0
            java.lang.String r0 = "extra"
            java.lang.String r0 = r4.optString(r0)
            boolean r1 = com.kwad.sdk.utils.bc.isNullString(r0)
            if (r1 != 0) goto L3d
            java.lang.String r0 = com.kwad.sdk.core.a.d.getResponseData(r0)
            r3.extra = r0
        L3d:
            java.lang.Class<com.kwad.sdk.components.f> r0 = com.kwad.sdk.components.f.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.sdk.components.f r0 = (com.kwad.sdk.components.f) r0
            if (r0 == 0) goto L59
            java.lang.String r1 = "egid"
            java.lang.String r1 = r4.optString(r1)
            r0.ap(r1)
            java.lang.String r1 = "gidExpireTimeMs"
            long r1 = r4.optLong(r1)
            r0.t(r1)
        L59:
            java.lang.String r0 = "cookie"
            java.lang.String r4 = r4.optString(r0)
            r3.cookie = r4
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L70
            com.kwad.sdk.core.network.e r4 = com.kwad.sdk.core.network.e.Be()
            java.lang.String r0 = r3.cookie
            r4.cX(r0)
        L70:
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r1 = this;
            org.json.JSONObject r0 = r1.baseToJson()
            return r0
    }
}
