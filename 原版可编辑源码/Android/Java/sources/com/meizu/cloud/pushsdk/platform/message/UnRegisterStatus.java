package com.meizu.cloud.pushsdk.platform.message;

import org.json.JSONObject;

public class UnRegisterStatus extends BasicPushStatus {
    private boolean isUnRegisterSuccess;

    public UnRegisterStatus() {
    }

    public UnRegisterStatus(String str) {
        super(str);
    }

    public boolean isUnRegisterSuccess() {
        return this.isUnRegisterSuccess;
    }

    @Override
    public void parseValueData(JSONObject jSONObject) {
        if (jSONObject.isNull("result")) {
            return;
        }
        setIsUnRegisterSuccess(jSONObject.getBoolean("result"));
    }

    public void setIsUnRegisterSuccess(boolean z) {
        this.isUnRegisterSuccess = z;
    }

    @Override
    public String toString() {
        return super.toString() + " UnRegisterStatus{isUnRegisterSuccess=" + this.isUnRegisterSuccess + '}';
    }
}
