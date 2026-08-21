package com.huawei.hms.common.internal;

import android.text.TextUtils;
import com.huawei.hms.adapter.internal.CommonCode;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.utils.JsonUtil;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class ResponseWrap {
    private static final String TAG = "ResponseWrap";
    private String body;
    private ResponseHeader responseHeader;

    public ResponseWrap(ResponseHeader responseHeader) {
        this.responseHeader = responseHeader;
    }

    public boolean fromJson(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            this.responseHeader.setStatusCode(JsonUtil.getIntValue(jSONObject, "status_code"));
            this.responseHeader.setErrorCode(JsonUtil.getIntValue(jSONObject, "error_code"));
            this.responseHeader.setErrorReason(JsonUtil.getStringValue(jSONObject, "error_reason"));
            this.responseHeader.setSrvName(JsonUtil.getStringValue(jSONObject, "srv_name"));
            this.responseHeader.setApiName(JsonUtil.getStringValue(jSONObject, "api_name"));
            this.responseHeader.setAppID(JsonUtil.getStringValue(jSONObject, "app_id"));
            this.responseHeader.setPkgName(JsonUtil.getStringValue(jSONObject, "pkg_name"));
            this.responseHeader.setSessionId(JsonUtil.getStringValue(jSONObject, "session_id"));
            this.responseHeader.setTransactionId(JsonUtil.getStringValue(jSONObject, CommonCode.MapKey.TRANSACTION_ID));
            this.responseHeader.setResolution(JsonUtil.getStringValue(jSONObject, CommonCode.MapKey.HAS_RESOLUTION));
            this.body = JsonUtil.getStringValue(jSONObject, TtmlNode.TAG_BODY);
            return true;
        } catch (JSONException e) {
            HMSLog.e(TAG, "fromJson failed: " + e.getMessage());
            return false;
        }
    }

    public String getBody() {
        if (TextUtils.isEmpty(this.body)) {
            this.body = new JSONObject().toString();
        }
        return this.body;
    }

    public ResponseHeader getResponseHeader() {
        return this.responseHeader;
    }

    public void setBody(String str) {
        this.body = str;
    }

    public void setResponseHeader(ResponseHeader responseHeader) {
        this.responseHeader = responseHeader;
    }

    public String toJson() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("status_code", this.responseHeader.getStatusCode());
            jSONObject.put("error_code", this.responseHeader.getErrorCode());
            jSONObject.put("error_reason", this.responseHeader.getErrorReason());
            jSONObject.put("srv_name", this.responseHeader.getSrvName());
            jSONObject.put("api_name", this.responseHeader.getApiName());
            jSONObject.put("app_id", this.responseHeader.getAppID());
            jSONObject.put("pkg_name", this.responseHeader.getPkgName());
            jSONObject.put(CommonCode.MapKey.TRANSACTION_ID, this.responseHeader.getTransactionId());
            jSONObject.put(CommonCode.MapKey.HAS_RESOLUTION, this.responseHeader.getResolution());
            String sessionId = this.responseHeader.getSessionId();
            if (!TextUtils.isEmpty(sessionId)) {
                jSONObject.put("session_id", sessionId);
            }
            if (!TextUtils.isEmpty(this.body)) {
                jSONObject.put(TtmlNode.TAG_BODY, this.body);
            }
        } catch (JSONException e) {
            HMSLog.e(TAG, "toJson failed: " + e.getMessage());
        }
        return jSONObject.toString();
    }

    public String toString() {
        return "ResponseWrap{body='" + this.body + "', responseHeader=" + this.responseHeader + '}';
    }
}
