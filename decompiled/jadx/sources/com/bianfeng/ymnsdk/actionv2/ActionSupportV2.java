package com.bianfeng.ymnsdk.actionv2;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.paylib.action.IPaymentFeature;
import com.bianfeng.ymnsdk.action.ActionAttachment;
import com.bianfeng.ymnsdk.action.HttpListener;
import com.bianfeng.ymnsdk.entity.PayTokenEntity;
import com.bianfeng.ymnsdk.feature.e;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.HashMap;
import java.util.Map;
import java.util.Observable;
import java.util.TreeMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
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

    protected abstract String getURL();

    public abstract JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws Exception;

    protected abstract T onSuccess(ResponseResult responseResult) throws Exception;

    public void setAttachment(ActionAttachment attachment) {
        this.attachment = attachment;
    }

    public void onStartAttachment() {
        ActionAttachment actionAttachment = this.attachment;
        if (actionAttachment != null) {
            actionAttachment.onStart(this.context);
        }
    }

    public void onEndAttachment() {
        ActionAttachment actionAttachment = this.attachment;
        if (actionAttachment != null) {
            actionAttachment.onEnd(this.context);
            this.attachment = null;
        }
    }

    public static class ResponseResult<T> {
        private int code;
        private JSONObject data;
        private String msg;
        private T processedResult;
        private String srcRes;

        public String dataAsString() {
            return this.data.toString();
        }

        public int getCode() {
            return this.code;
        }

        public String getMsg() {
            return this.msg;
        }

        public void setCode(int code) {
            this.code = code;
        }

        public void setData(JSONObject data) {
            this.data = data;
        }

        public void setMsg(String msg) {
            this.msg = msg;
        }

        public void setProcessedResult(T processedResult) {
            this.processedResult = processedResult;
        }

        public void setSrcRes(String srcRes) {
            this.srcRes = srcRes;
        }

        public JSONObject getData() {
            return this.data;
        }

        public T getProcessedResult() {
            return this.processedResult;
        }

        public String getSrcRes() {
            return this.srcRes;
        }

        public ResponseResult(String response) {
            this.code = 999;
            this.srcRes = response;
        }

        public ResponseResult(int code, String msg) {
            this.code = 999;
            this.code = code;
            this.msg = msg;
        }

        public boolean isResponsed() {
            return !TextUtils.isEmpty(this.srcRes);
        }

        public boolean isOk() {
            return this.code == 0;
        }

        public Map<String, String> processedResultAsMap() {
            try {
                return YmnGsonUtil.getMapFrom(YmnGsonUtil.toJson(this.processedResult));
            } catch (Exception e) {
                e.printStackTrace();
                return new HashMap();
            }
        }

        public String messageFail() {
            return this.code + "|" + this.msg;
        }
    }

    public ActionSupportV2(Context context) {
        this.context = context;
        this.httpHelper = new HttpHelperV2(context);
        this.httpHelper.setMethod(2);
        this.gContent = new TreeMap<>();
    }

    public void setPayloadEntity(String sub, String uid, String trace) {
        this.payloadEntity = new PayTokenEntity.PayloadEntity(sub, uid);
        this.trace = trace;
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

    protected void putBasicData(JSONObject json) throws JSONException {
        YmnDataFunUtils dataFunUtils = YmnDataFunUtils.getInstance();
        JSONObject base = new JSONObject();
        base.put(IPaymentFeature.ARG_CLIENT_IP, "");
        base.put("device_id", dataFunUtils.getDeviceInfo().getDeviceId());
        base.put("device_mobile", dataFunUtils.getDeviceInfo().getDeviceModel());
        base.put("device_network", dataFunUtils.getDeviceInfo().getNetChannelStr());
        base.put("device_os", dataFunUtils.getDeviceInfo().getDeviceOS());
        base.put("device_os_version", dataFunUtils.getDeviceInfo().getOsVersion());
        base.put("device_pixel", dataFunUtils.getDeviceInfo().getDevicePixel());
        base.put("device_type", dataFunUtils.getAppContext().getDeviceType());
        base.put("device_version_code", dataFunUtils.getDeviceInfo().getDeviceVersionCode());
        json.put("client_info", base);
    }

    public void putReqData(IPlugin plugin, Object... datas) throws YmnsdkException {
        try {
            JSONObject json = onPrepareData(plugin, datas);
            if (json != null) {
                putBasicData(json);
                this.pContent = json.toString();
            }
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public void doRequest(String url) {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : this.gContent.entrySet()) {
            sb.append("&" + entry.getKey() + ContainerUtils.KEY_VALUE_DELIMITER + entry.getValue());
        }
        if (sb.length() > 0) {
            url = url + "?" + sb.substring(1);
        }
        this.httpHelper.request(url, this.pContent, this.payloadEntity, this.trace, this);
    }

    @Override // com.bianfeng.ymnsdk.action.HttpListener
    public void onComplete(String response) throws YmnsdkException {
        ResponseResult result = new ResponseResult(response);
        processResponseResult(result);
    }

    @Override // com.bianfeng.ymnsdk.action.HttpListener
    public void onError(int code, String msg) throws YmnsdkException {
        ResponseResult result = new ResponseResult(code, msg);
        processResponseResult(result);
    }

    public void processResponseResult(final ResponseResult result) throws YmnsdkException {
        parseResponseResult(result);
        Context context = this.context;
        if (!(context instanceof Activity)) {
            notifyResponseResult(result);
        } else {
            ((Activity) context).runOnUiThread(new Runnable() { // from class: com.bianfeng.ymnsdk.actionv2.ActionSupportV2.1
                @Override // java.lang.Runnable
                public void run() throws YmnsdkException {
                    ActionSupportV2.this.notifyResponseResult(result);
                }
            });
        }
    }

    private void parseResponseResult(ResponseResult result) {
        try {
            showDebugLog(result);
            String resdata = result.getSrcRes();
            if (TextUtils.isEmpty(resdata)) {
                Logger.i(TAG, String.format("do action response error code = %d msg = %s", Integer.valueOf(result.getCode()), result.getMsg()));
            } else if (YmnGsonUtil.isJsonObject(resdata)) {
                JSONObject obj = new JSONObject(result.getSrcRes());
                String type = obj.optString("trade_request_type");
                if ("ERROR".equalsIgnoreCase(type)) {
                    result.setCode(603);
                    result.setData(obj);
                } else {
                    result.setCode(0);
                    result.setData(obj);
                }
            } else if (YmnGsonUtil.isJsonArrayObject(resdata)) {
                result.setCode(0);
            }
        } catch (Exception e) {
            e.printStackTrace();
            result.setCode(602);
            result.setMsg("parse response json error");
        }
    }

    private void showDebugLog(ResponseResult result) {
        StringBuilder builder = new StringBuilder();
        builder.append("[CONTEXT] " + this.context);
        builder.append("\n");
        builder.append("[REQUEST] " + this.url);
        builder.append("\n");
        builder.append("[CONTENT] " + this.pContent);
        builder.append("\n");
        builder.append("[RESPONSE] " + result.getSrcRes());
        Logger.dRich(builder.toString());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyResponseResult(ResponseResult result) throws YmnsdkException {
        setChanged();
        if (result.isResponsed()) {
            try {
                if (result.isOk()) {
                    result.processedResult = onSuccess(result);
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
        notifyObservers(result);
    }

    protected String formatUrl(String action) {
        String urlHost = YmnURLManagerV2.getHost(HostConstant.trade);
        return String.format("%s/%s", urlHost, action);
    }
}
