package com.kwad.sdk.crash.model.message;

public final class AnrExceptionMessage extends com.kwad.sdk.crash.model.message.ExceptionMessage {
    private static final long serialVersionUID = 2116476830162477947L;
    public int mIndex;
    public java.lang.String mMessageQueueDetail;
    public java.lang.String mReason;
    public java.lang.String mThreadDetail;
    public java.lang.String mThreadStatus;

    public AnrExceptionMessage() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.mReason = r0
            r1.mMessageQueueDetail = r0
            r1.mThreadDetail = r0
            r1.mThreadStatus = r0
            r0 = -1
            r1.mIndex = r0
            r0 = 3
            r1.mExceptionType = r0
            return
    }

    @Override
    protected final java.lang.String getTypePrefix() {
            r1 = this;
            java.lang.String r0 = "ANR_"
            return r0
    }

    @Override
    public final void parseJson(org.json.JSONObject r2) {
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
    public final org.json.JSONObject toJson() {
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

    @Override
    public final java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = super.toString()
            r0.<init>(r1)
            java.lang.String r1 = r4.mReason     // Catch: java.lang.Exception -> L5e
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L5e
            java.lang.String r2 = "\n"
            if (r1 != 0) goto L20
            java.lang.String r1 = "ANR 原因:\n"
            r0.append(r1)     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = r4.mReason     // Catch: java.lang.Exception -> L5e
            r0.append(r1)     // Catch: java.lang.Exception -> L5e
            r0.append(r2)     // Catch: java.lang.Exception -> L5e
        L20:
            java.lang.String r1 = r4.mThreadStatus     // Catch: java.lang.Exception -> L5e
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L5e
            java.lang.String r3 = "线程状态: \n"
            if (r1 != 0) goto L35
            r0.append(r3)     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = r4.mThreadStatus     // Catch: java.lang.Exception -> L5e
            r0.append(r1)     // Catch: java.lang.Exception -> L5e
            r0.append(r2)     // Catch: java.lang.Exception -> L5e
        L35:
            java.lang.String r1 = r4.mThreadDetail     // Catch: java.lang.Exception -> L5e
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L5e
            if (r1 != 0) goto L48
            r0.append(r3)     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = r4.mThreadDetail     // Catch: java.lang.Exception -> L5e
            r0.append(r1)     // Catch: java.lang.Exception -> L5e
            r0.append(r2)     // Catch: java.lang.Exception -> L5e
        L48:
            java.lang.String r1 = r4.mMessageQueueDetail     // Catch: java.lang.Exception -> L5e
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L5e
            if (r1 != 0) goto L62
            java.lang.String r1 = "消息队列: \n"
            r0.append(r1)     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = r4.mMessageQueueDetail     // Catch: java.lang.Exception -> L5e
            r0.append(r1)     // Catch: java.lang.Exception -> L5e
            r0.append(r2)     // Catch: java.lang.Exception -> L5e
            goto L62
        L5e:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
        L62:
            r1 = 0
            java.lang.String r0 = r0.substring(r1)
            return r0
    }
}
