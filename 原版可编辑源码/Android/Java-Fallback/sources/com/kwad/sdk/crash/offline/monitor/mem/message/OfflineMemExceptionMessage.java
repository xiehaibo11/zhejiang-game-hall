package com.kwad.sdk.crash.offline.monitor.mem.message;

public class OfflineMemExceptionMessage extends com.kwad.sdk.crash.model.message.ExceptionMessage {
    private static final java.lang.String MSG_QUEUE_DETAIL = "mMessageQueueDetail";
    private static final java.lang.String REASON = "mReason";
    private static final java.lang.String TAG = "OfflineMemExceptionMessage";
    private static final java.lang.String THREAD_DETAIL = "mThreadDetail";
    private static final java.lang.String THREAD_STATUS = "mThreadStatus";
    private static final long serialVersionUID = 2116476830162477948L;
    public java.lang.String mMessageQueueDetail;
    public java.lang.String mReason;
    public java.lang.String mThreadDetail;
    public java.lang.String mThreadStatus;

    public OfflineMemExceptionMessage() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.mReason = r0
            r1.mMessageQueueDetail = r0
            r1.mThreadDetail = r0
            r1.mThreadStatus = r0
            return
    }

    @Override
    public java.lang.String getTypePrefix() {
            r1 = this;
            java.lang.String r0 = "offline_mem_"
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r2) {
            r1 = this;
            super.parseJson(r2)
            if (r2 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "mReason"
            java.lang.String r0 = r2.optString(r0)
            r1.mReason = r0
            java.lang.String r0 = "mMessageQueueDetail"
            java.lang.String r0 = r2.optString(r0)
            r1.mMessageQueueDetail = r0
            java.lang.String r0 = "mThreadDetail"
            java.lang.String r0 = r2.optString(r0)
            r1.mThreadDetail = r0
            java.lang.String r0 = "mThreadStatus"
            java.lang.String r2 = r2.optString(r0)
            r1.mThreadStatus = r2
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = super.toJson()
            java.lang.String r1 = r3.mReason
            java.lang.String r2 = "mReason"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.mMessageQueueDetail
            java.lang.String r2 = "mMessageQueueDetail"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.mThreadDetail
            java.lang.String r2 = "mThreadDetail"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.mThreadStatus
            java.lang.String r2 = "mThreadStatus"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}
