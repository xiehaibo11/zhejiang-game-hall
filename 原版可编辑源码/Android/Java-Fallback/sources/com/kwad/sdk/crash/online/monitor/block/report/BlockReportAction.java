package com.kwad.sdk.crash.online.monitor.block.report;

public class BlockReportAction extends com.kwad.sdk.core.report.g implements java.io.Serializable {
    private static final long serialVersionUID = 8432448382850235426L;
    public java.lang.String msg;

    public BlockReportAction(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.util.UUID r0 = java.util.UUID.randomUUID()
            java.lang.String r0 = r0.toString()
            r1.actionId = r0
            r1.msg = r2
            return
    }

    public BlockReportAction(org.json.JSONObject r1) {
            r0 = this;
            r0.<init>()
            r0.parseJson(r1)
            return
    }

    @Override
    public void parseJson(org.json.JSONObject r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "actionId"
            java.lang.String r0 = r2.optString(r0)
            r1.actionId = r0
            java.lang.String r0 = "msg"
            java.lang.String r2 = r2.optString(r0)
            r1.msg = r2
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.actionId
            java.lang.String r2 = "actionId"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.msg
            java.lang.String r2 = "msg"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}
