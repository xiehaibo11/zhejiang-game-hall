package com.kwad.sdk.crash.report.upload;

public class GetUploadTokenResult extends com.kwad.sdk.core.network.BaseResultData implements com.kwad.sdk.core.b {
    private static final long serialVersionUID = -6532478349134611769L;
    public java.lang.String uploadToken;

    public GetUploadTokenResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public long getResult() {
            r2 = this;
            int r0 = r2.result
            long r0 = (long) r0
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r2) {
            r1 = this;
            super.parseJson(r2)
            if (r2 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "uploadToken"
            java.lang.String r2 = r2.optString(r0)     // Catch: java.lang.Exception -> Lf
            r1.uploadToken = r2     // Catch: java.lang.Exception -> Lf
            return
        Lf:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r1 = this;
            org.json.JSONObject r0 = super.toJson()
            return r0
    }
}
