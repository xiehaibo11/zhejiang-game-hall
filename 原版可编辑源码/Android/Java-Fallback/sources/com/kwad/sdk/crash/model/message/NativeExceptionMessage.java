package com.kwad.sdk.crash.model.message;

public final class NativeExceptionMessage extends com.kwad.sdk.crash.model.message.ExceptionMessage {
    private static final long serialVersionUID = -7790706181005700630L;
    public java.lang.String mAbortMsg;
    public java.lang.String mCode;
    public java.lang.String mFaultAddr;
    public java.lang.String mFingerprint;
    public java.lang.String mManuallyKill;
    public java.lang.String mRegister;
    public java.lang.String mRevision;
    public java.lang.String mSignal;

    public NativeExceptionMessage() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Unknown"
            r1.mFingerprint = r0
            r1.mRevision = r0
            r1.mRegister = r0
            r1.mSignal = r0
            r1.mCode = r0
            r1.mManuallyKill = r0
            r1.mFaultAddr = r0
            java.lang.String r0 = ""
            r1.mAbortMsg = r0
            r0 = 4
            r1.mExceptionType = r0
            return
    }

    @Override
    protected final java.lang.String getTypePrefix() {
            r1 = this;
            java.lang.String r0 = "NATIVE_"
            return r0
    }

    @Override
    public final void parseJson(org.json.JSONObject r2) {
            r1 = this;
            super.parseJson(r2)
            if (r2 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "mFingerprint"
            java.lang.String r0 = r2.optString(r0)
            r1.mFingerprint = r0
            java.lang.String r0 = "mRevision"
            java.lang.String r0 = r2.optString(r0)
            r1.mRevision = r0
            java.lang.String r0 = "mRegister"
            java.lang.String r0 = r2.optString(r0)
            r1.mRegister = r0
            java.lang.String r0 = "mSignal"
            java.lang.String r0 = r2.optString(r0)
            r1.mSignal = r0
            java.lang.String r0 = "mCode"
            java.lang.String r0 = r2.optString(r0)
            r1.mCode = r0
            java.lang.String r0 = "mManuallyKill"
            java.lang.String r0 = r2.optString(r0)
            r1.mManuallyKill = r0
            java.lang.String r0 = "mFaultAddr"
            java.lang.String r0 = r2.optString(r0)
            r1.mFaultAddr = r0
            java.lang.String r0 = "mAbortMsg"
            java.lang.String r2 = r2.optString(r0)
            r1.mAbortMsg = r2
            return
    }

    @Override
    public final org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = super.toJson()
            java.lang.String r1 = r3.mFingerprint
            java.lang.String r2 = "mFingerprint"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.mRevision
            java.lang.String r2 = "mRevision"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.mRegister
            java.lang.String r2 = "mRegister"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.mSignal
            java.lang.String r2 = "mSignal"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.mCode
            java.lang.String r2 = "mCode"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.mManuallyKill
            java.lang.String r2 = "mManuallyKill"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.mFaultAddr
            java.lang.String r2 = "mFaultAddr"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r3.mAbortMsg
            java.lang.String r2 = "mAbortMsg"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}
