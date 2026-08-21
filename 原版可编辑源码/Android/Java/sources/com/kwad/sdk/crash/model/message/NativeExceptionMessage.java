package com.kwad.sdk.crash.model.message;

import com.kwad.sdk.utils.t;
import org.json.JSONObject;

public final class NativeExceptionMessage extends ExceptionMessage {
    private static final long serialVersionUID = -7790706181005700630L;
    public String mFingerprint = "Unknown";
    public String mRevision = "Unknown";
    public String mRegister = "Unknown";
    public String mSignal = "Unknown";
    public String mCode = "Unknown";
    public String mManuallyKill = "Unknown";
    public String mFaultAddr = "Unknown";
    public String mAbortMsg = "";

    public NativeExceptionMessage() {
        this.mExceptionType = 4;
    }

    @Override
    protected final String getTypePrefix() {
        return "NATIVE_";
    }

    @Override
    public final void parseJson(JSONObject jSONObject) {
        super.parseJson(jSONObject);
        if (jSONObject == null) {
            return;
        }
        this.mFingerprint = jSONObject.optString("mFingerprint");
        this.mRevision = jSONObject.optString("mRevision");
        this.mRegister = jSONObject.optString("mRegister");
        this.mSignal = jSONObject.optString("mSignal");
        this.mCode = jSONObject.optString("mCode");
        this.mManuallyKill = jSONObject.optString("mManuallyKill");
        this.mFaultAddr = jSONObject.optString("mFaultAddr");
        this.mAbortMsg = jSONObject.optString("mAbortMsg");
    }

    @Override
    public final JSONObject toJson() {
        JSONObject json = super.toJson();
        t.putValue(json, "mFingerprint", this.mFingerprint);
        t.putValue(json, "mRevision", this.mRevision);
        t.putValue(json, "mRegister", this.mRegister);
        t.putValue(json, "mSignal", this.mSignal);
        t.putValue(json, "mCode", this.mCode);
        t.putValue(json, "mManuallyKill", this.mManuallyKill);
        t.putValue(json, "mFaultAddr", this.mFaultAddr);
        t.putValue(json, "mAbortMsg", this.mAbortMsg);
        return json;
    }
}
