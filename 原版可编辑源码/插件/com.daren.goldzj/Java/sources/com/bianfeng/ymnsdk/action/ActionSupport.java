package com.bianfeng.ymnsdk.action;

import android.app.Activity;
import android.content.Context;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2;
import com.bianfeng.ymnsdk.util.AnalyticsData;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.HashMap;
import java.util.Map;
import java.util.Observable;
import java.util.TreeMap;
import org.json.JSONException;
import org.json.JSONObject;

public abstract class ActionSupport<T> extends Observable implements HttpListener {
    protected static final String TAG = "Ymn_ActionSupport";
    protected ActionAttachment attachment;
    protected Context context;
    protected TreeMap<String, String> gContent;
    protected HttpHelper httpHelper;
    private String mUrl;
    protected String pContent;
    private String transactionId;

    public ActionSupport(Context context) {
        this.context = context;
        this.httpHelper = new HttpHelper(context);
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
                Logger.i("notifyResponseResult result.isOk()" + e.getMessage());
            }
            com.bianfeng.ymnsdk.feature.e.i(this.context);
            YmnURLManagerV2.notifyRequestSuccess();
        } else {
            com.bianfeng.ymnsdk.feature.e.h(this.context);
            YmnURLManagerV2.notifyRequestFailure();
        }
        notifyObservers(responseResult);
    }

    private void parseResponseResult(ResponseResult responseResult) {
        try {
            showDebugLog(responseResult);
            if (TextUtils.isEmpty(responseResult.srcRes)) {
                Logger.e(TAG, String.format("do action response error code = %d msg = %s", Integer.valueOf(responseResult.code), responseResult.msg));
            } else {
                JSONObject jSONObject = new JSONObject(responseResult.srcRes);
                responseResult.srcObj = jSONObject;
                responseResult.code = jSONObject.optInt("code");
                responseResult.msg = jSONObject.optString(NotificationCompat.CATEGORY_MESSAGE);
                responseResult.data = jSONObject.optJSONObject("data");
                responseResult.ext = jSONObject.opt("ext");
            }
        } catch (Exception e) {
            e.printStackTrace();
            responseResult.code = 602;
            responseResult.msg = "parse response json error";
        }
    }

    private void processResponseResult(final ResponseResult responseResult) {
        parseResponseResult(responseResult);
        Context context = this.context;
        if (context instanceof Activity) {
            ((Activity) context).runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    ActionSupport.this.notifyResponseResult(responseResult);
                }
            });
        } else {
            notifyResponseResult(responseResult);
        }
    }

    private void setTransactionIdToBase(JSONObject jSONObject) throws JSONException {
        if (TextUtils.isEmpty(this.transactionId)) {
            jSONObject.put(AnalyticsData.KEY_TRANSACTIONID, YmnDataFunUtils.getInstance().getInitTrace());
        } else {
            jSONObject.put(AnalyticsData.KEY_TRANSACTIONID, this.transactionId);
        }
    }

    private void showDebugLog(ResponseResult responseResult) {
        StringBuilder sb = new StringBuilder();
        sb.append("[CONTEXT] " + this.context);
        sb.append("\n");
        sb.append("[REQUEST] " + this.mUrl);
        sb.append("\n");
        sb.append("[CONTENT] " + this.pContent);
        sb.append("\n");
        sb.append("[RESPONSE] " + responseResult.srcRes);
        Logger.dRich(sb.toString());
    }

    public void actionStart() {
        try {
            this.mUrl = getURL();
            doRequest(this.mUrl);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void doRequest(String str) throws YmnsdkException {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : this.gContent.entrySet()) {
            sb.append("&" + entry.getKey() + "=" + entry.getValue());
        }
        if (sb.length() > 0) {
            str = str + "?" + sb.substring(1);
        }
        if (this.httpHelper.isGetMethod()) {
            if (this.gContent != null) {
                this.httpHelper.createHttpRequest(str, "", this);
            }
        } else if (this.pContent != null) {
            this.httpHelper.createHttpRequest(str, SecurityUtil.getInstance().urlEncode(this.pContent), this);
        }
    }

    protected Object formatType(Object obj) {
        if (obj instanceof String) {
            try {
                return new JSONObject(String.valueOf(obj));
            } catch (Exception unused) {
            }
        }
        return obj;
    }

    protected String formatUrl(String str) {
        return String.format("%s/%s/%s", YmnURLManagerV2.getHost(HostConstant.ymn), "v1", str);
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

    public abstract JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnsdkException;

    public void onStartAttachment() {
        ActionAttachment actionAttachment = this.attachment;
        if (actionAttachment != null) {
            actionAttachment.onStart(this.context);
        }
    }

    protected abstract T onSuccess(ResponseResult responseResult) throws Exception;

    protected void putBasicData(JSONObject jSONObject) throws YmnsdkException {
        try {
            YmnDataFunUtils ymnDataFunUtils = YmnDataFunUtils.getInstance();
            jSONObject.put("appid", ymnDataFunUtils.getAppContext().getAppId());
            jSONObject.put("channel", ymnDataFunUtils.getChannelId());
            jSONObject.put("package_id", ymnDataFunUtils.getAppContext().getIdentify_id());
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("df_ver", ymnDataFunUtils.getPlatformUtils().getDatafun_ver());
            jSONObject2.put("app_key", ymnDataFunUtils.getAppContext().getAppId());
            jSONObject2.put("group_id", ymnDataFunUtils.getGroupId());
            jSONObject2.put("device_id", ymnDataFunUtils.getDeviceInfo().getDeviceId());
            jSONObject2.put("version_code", ymnDataFunUtils.getAppContext().getVerCode());
            jSONObject2.put("version_name", ymnDataFunUtils.getAppContext().getVerName());
            jSONObject2.put("device_mobile", ymnDataFunUtils.getDeviceInfo().getDeviceModel());
            jSONObject2.put("device_network", ymnDataFunUtils.getDeviceInfo().getNetChannelStr());
            jSONObject2.put("device_os", ymnDataFunUtils.getDeviceInfo().getDeviceOS());
            jSONObject2.put("device_os_version", ymnDataFunUtils.getDeviceInfo().getOsVersion());
            jSONObject2.put("device_pixel", ymnDataFunUtils.getDeviceInfo().getDevicePixel());
            jSONObject2.put("device_type", ymnDataFunUtils.getAppContext().getDeviceType());
            jSONObject2.put("device_version_code", ymnDataFunUtils.getDeviceInfo().getDeviceVersionCode());
            setTransactionIdToBase(jSONObject2);
            jSONObject.put("base", jSONObject2);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    public void putReqData(IPlugin iPlugin, Object... objArr) {
        try {
            this.gContent.put("os", "android");
            this.gContent.put("mid", YmnDataFunUtils.getInstance().getDeviceInfo().getDeviceId());
            JSONObject jSONObjectOnPrepareData = onPrepareData(iPlugin, objArr);
            if (jSONObjectOnPrepareData != null) {
                putBasicData(jSONObjectOnPrepareData);
                this.pContent = jSONObjectOnPrepareData.toString();
            }
        } catch (YmnsdkException e) {
            Logger.i("putReqData" + e.getLocalizedMessage());
            e.printStackTrace();
        }
    }

    public void setAttachment(ActionAttachment actionAttachment) {
        this.attachment = actionAttachment;
    }

    public void setTransactionId(String str) {
        this.transactionId = str;
    }

    public class ResponseResult<T> {
        public int code;
        public JSONObject data;
        public Object ext;
        public String msg;
        public T processedResult;
        public JSONObject srcObj;
        public String srcRes;

        public ResponseResult(String str) {
            this.code = 999;
            this.srcRes = str;
        }

        public String dataAsString() {
            return this.data.toString();
        }

        public String getExtData(String str) {
            Object obj = this.ext;
            return (obj == null || !(obj instanceof JSONObject)) ? "unknow" : ((JSONObject) obj).optString(str);
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
                return YmnGsonUtil.getMapFrom(this.processedResult);
            } catch (YmnsdkException unused) {
                return new HashMap();
            }
        }

        public ResponseResult(int i, String str) {
            this.code = 999;
            this.code = i;
            this.msg = str;
        }
    }
}
