package com.bianfeng.ymnsdk.actionv2;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.action.ActionAttachment;
import com.bianfeng.ymnsdk.action.HttpListener;
import com.bianfeng.ymnsdk.entity.PayTokenEntity;
import com.bianfeng.ymnsdk.feature.e;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.HashMap;
import java.util.Map;
import java.util.Observable;
import java.util.TreeMap;
import org.json.JSONException;
import org.json.JSONObject;

public abstract class ActionSupportV2<T> extends Observable implements HttpListener {
    protected static final String TAG = "ActionSupportV2";
    protected ActionAttachment attachment;
    protected Context context;
    protected TreeMap<String, String> gContent;
    protected HttpHelperV2 httpHelper;
    protected String pContent;
    private PayTokenEntity.PayloadEntity payloadEntity;
    private String trace;
    private String url;

    public ActionSupportV2(Context context) {
        this.context = context;
        this.httpHelper = new HttpHelperV2(context);
        this.httpHelper.setMethod(2);
        this.gContent = new TreeMap<>();
    }

    private void notifyResponseResult(ResponseResult responseResult) {
        setChanged();
        if (responseResult.isResponsed()) {
            try {
                if (responseResult.isOk()) {
                    responseResult.processedResult = onSuccess(responseResult);
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
            e.i(this.context);
            YmnURLManagerV2.notifyRequestSuccess();
        } else {
            e.h(this.context);
            YmnURLManagerV2.notifyRequestFailure();
        }
        notifyObservers(responseResult);
    }

    private void parseResponseResult(ResponseResult responseResult) {
        try {
            showDebugLog(responseResult);
            String srcRes = responseResult.getSrcRes();
            if (TextUtils.isEmpty(srcRes)) {
                Logger.i(TAG, String.format("do action response error code = %d msg = %s", Integer.valueOf(responseResult.getCode()), responseResult.getMsg()));
            } else if (YmnGsonUtil.isJsonObject(srcRes)) {
                JSONObject jSONObject = new JSONObject(responseResult.getSrcRes());
                if ("ERROR".equalsIgnoreCase(jSONObject.optString("trade_request_type"))) {
                    responseResult.setCode(603);
                    responseResult.setData(jSONObject);
                } else {
                    responseResult.setCode(0);
                    responseResult.setData(jSONObject);
                }
            } else if (YmnGsonUtil.isJsonArrayObject(srcRes)) {
                responseResult.setCode(0);
            }
        } catch (Exception e) {
            e.printStackTrace();
            responseResult.setCode(602);
            responseResult.setMsg("parse response json error");
        }
    }

    private void showDebugLog(ResponseResult responseResult) {
        StringBuilder sb = new StringBuilder();
        sb.append("[CONTEXT] " + this.context);
        sb.append("\n");
        sb.append("[REQUEST] " + this.url);
        sb.append("\n");
        sb.append("[CONTENT] " + this.pContent);
        sb.append("\n");
        sb.append("[RESPONSE] " + responseResult.getSrcRes());
        Logger.dRich(sb.toString());
    }

    public void actionStart() {
        try {
            Logger.i("ActionSupportV2 actionStart ");
            this.url = getURL();
            doRequest(this.url);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void doRequest(String str) {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : this.gContent.entrySet()) {
            sb.append("&" + entry.getKey() + "=" + entry.getValue());
        }
        if (sb.length() > 0) {
            str = str + "?" + sb.substring(1);
        }
        this.httpHelper.request(str, this.pContent, this.payloadEntity, this.trace, this);
    }

    protected String formatUrl(String str) {
        return String.format("%s/%s", YmnURLManagerV2.getHost(HostConstant.trade), str);
    }

    protected abstract String getURL();

    @Override
    public void onComplete(String str) {
        processResponseResult(new ResponseResult(str));
    }

    public void onEndAttachment() {
        ActionAttachment actionAttachment = this.attachment;
        if (actionAttachment != null) {
            actionAttachment.onEnd(this.context);
            this.attachment = null;
        }
    }

    @Override
    public void onError(int i, String str) {
        processResponseResult(new ResponseResult(i, str));
    }

    public abstract JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws Exception;

    public void onStartAttachment() {
        ActionAttachment actionAttachment = this.attachment;
        if (actionAttachment != null) {
            actionAttachment.onStart(this.context);
        }
    }

    protected abstract T onSuccess(ResponseResult responseResult) throws Exception;

    public void processResponseResult(final ResponseResult responseResult) {
        parseResponseResult(responseResult);
        Context context = this.context;
        if (context instanceof Activity) {
            ((Activity) context).runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    ActionSupportV2.this.notifyResponseResult(responseResult);
                }
            });
        } else {
            notifyResponseResult(responseResult);
        }
    }

    protected void putBasicData(JSONObject jSONObject) throws JSONException {
        YmnDataFunUtils ymnDataFunUtils = YmnDataFunUtils.getInstance();
        JSONObject jSONObject2 = new JSONObject();
        jSONObject2.put("client_ip", "");
        jSONObject2.put("device_id", ymnDataFunUtils.getDeviceInfo().getDeviceId());
        jSONObject2.put("device_mobile", ymnDataFunUtils.getDeviceInfo().getDeviceModel());
        jSONObject2.put("device_network", ymnDataFunUtils.getDeviceInfo().getNetChannelStr());
        jSONObject2.put("device_os", ymnDataFunUtils.getDeviceInfo().getDeviceOS());
        jSONObject2.put("device_os_version", ymnDataFunUtils.getDeviceInfo().getOsVersion());
        jSONObject2.put("device_pixel", ymnDataFunUtils.getDeviceInfo().getDevicePixel());
        jSONObject2.put("device_type", ymnDataFunUtils.getAppContext().getDeviceType());
        jSONObject2.put("device_version_code", ymnDataFunUtils.getDeviceInfo().getDeviceVersionCode());
        jSONObject.put(IPaymentFeature.ARG_CLIENT_INFO_V2, jSONObject2);
    }

    public void putReqData(IPlugin iPlugin, Object... objArr) throws YmnsdkException {
        try {
            JSONObject jSONObjectOnPrepareData = onPrepareData(iPlugin, objArr);
            if (jSONObjectOnPrepareData != null) {
                putBasicData(jSONObjectOnPrepareData);
                this.pContent = jSONObjectOnPrepareData.toString();
            }
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public void setAttachment(ActionAttachment actionAttachment) {
        this.attachment = actionAttachment;
    }

    public void setPayloadEntity(String str, String str2, String str3) {
        this.payloadEntity = new PayTokenEntity.PayloadEntity(str, str2);
        this.trace = str3;
    }

    public static class ResponseResult<T> {
        private int code;
        private JSONObject data;
        private String msg;
        private T processedResult;
        private String srcRes;

        public ResponseResult(String str) {
            this.code = 999;
            this.srcRes = str;
        }

        public String dataAsString() {
            return this.data.toString();
        }

        public int getCode() {
            return this.code;
        }

        public JSONObject getData() {
            return this.data;
        }

        public String getMsg() {
            return this.msg;
        }

        public T getProcessedResult() {
            return this.processedResult;
        }

        public String getSrcRes() {
            return this.srcRes;
        }

        public boolean isOk() {
            return this.code == 0;
        }

        public boolean isResponsed() {
            return !TextUtils.isEmpty(this.srcRes);
        }

        public String messageFail() {
            return this.code + "|" + this.msg;
        }

        public Map<String, String> processedResultAsMap() {
            try {
                return YmnGsonUtil.getMapFrom(YmnGsonUtil.toJson(this.processedResult));
            } catch (Exception e) {
                e.printStackTrace();
                return new HashMap();
            }
        }

        public void setCode(int i) {
            this.code = i;
        }

        public void setData(JSONObject jSONObject) {
            this.data = jSONObject;
        }

        public void setMsg(String str) {
            this.msg = str;
        }

        public void setProcessedResult(T t) {
            this.processedResult = t;
        }

        public void setSrcRes(String str) {
            this.srcRes = str;
        }

        public ResponseResult(int i, String str) {
            this.code = 999;
            this.code = i;
            this.msg = str;
        }
    }
}
