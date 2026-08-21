package com.kwad.sdk.crash.model.message;

public final class ThreadInfo implements com.kwad.sdk.core.b, java.io.Serializable {
    private static final long serialVersionUID = -1743841938230203418L;
    public int mIndex;
    public java.lang.String mName;
    public int mTid;
    public java.lang.String mTrace;

    public ThreadInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void parseJson(org.json.JSONObject r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "mName"
            java.lang.String r0 = r2.optString(r0)
            r1.mName = r0
            java.lang.String r0 = "mTrace"
            java.lang.String r0 = r2.optString(r0)
            r1.mTrace = r0
            java.lang.String r0 = "mTid"
            int r0 = r2.optInt(r0)
            r1.mTid = r0
            java.lang.String r0 = "mIndex"
            int r2 = r2.optInt(r0)
            r1.mIndex = r2
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.mName
            java.lang.String r2 = "mName"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.mTrace
            java.lang.String r2 = "mTrace"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.mTid
            java.lang.String r2 = "mTid"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.mIndex
            java.lang.String r2 = "mIndex"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}
