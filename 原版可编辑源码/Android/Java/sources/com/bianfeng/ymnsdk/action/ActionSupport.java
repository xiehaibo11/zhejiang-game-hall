package com.bianfeng.ymnsdk.action;

import android.app.Activity;
import android.content.Context;
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
import com.huawei.hms.framework.common.ContainerUtils;
import com.qq.e.ads.nativ.NativeUnifiedADAppInfoImpl;
import com.tencent.connect.common.Constants;
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

    protected abstract String getURL();

    public abstract JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnsdkException;

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

    public class ResponseResult<T> {
        public int code;
        public JSONObject data;
        public Object ext;
        public String msg;
        public T processedResult;
        public JSONObject srcObj;
        public String srcRes;

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
                return YmnGsonUtil.getMapFrom(this.processedResult);
            } catch (YmnsdkException e) {
                return new HashMap();
            }
        }

        public String dataAsString() {
            return this.data.toString();
        }

        public String messageFail() {
            return this.code + "|" + this.msg;
        }

        public String getExtData(String key) {
            Object obj = this.ext;
            if (obj != null && (obj instanceof JSONObject)) {
                JSONObject json = (JSONObject) obj;
                return json.optString(key);
            }
            return "unknow";
        }
    }

    public ActionSupport(Context context) {
        this.context = context;
        this.httpHelper = new HttpHelper(context);
        this.httpHelper.setMethod(2);
        this.gContent = new TreeMap<>();
    }

    public void actionStart() {
        try {
            this.mUrl = getURL();
            doRequest(this.mUrl);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    protected void putBasicData(JSONObject json) throws YmnsdkException {
        try {
            YmnDataFunUtils dataFunUtils = YmnDataFunUtils.getInstance();
            json.put("appid", dataFunUtils.getAppContext().getAppId());
            json.put("channel", dataFunUtils.getChannelId());
            json.put(Constants.PACKAGE_ID, dataFunUtils.getAppContext().getIdentify_id());
            JSONObject base = new JSONObject();
            base.put("df_ver", dataFunUtils.getPlatformUtils().getDatafun_ver());
            base.put("app_key", dataFunUtils.getAppContext().getAppId());
            base.put("group_id", dataFunUtils.getGroupId());
            base.put("device_id", dataFunUtils.getDeviceInfo().getDeviceId());
            base.put("version_code", dataFunUtils.getAppContext().getVerCode());
            base.put(NativeUnifiedADAppInfoImpl.Keys.VERSION_NAME, dataFunUtils.getAppContext().getVerName());
            base.put("device_mobile", dataFunUtils.getDeviceInfo().getDeviceModel());
            base.put("device_network", dataFunUtils.getDeviceInfo().getNetChannelStr());
            base.put("device_os", dataFunUtils.getDeviceInfo().getDeviceOS());
            base.put("device_os_version", dataFunUtils.getDeviceInfo().getOsVersion());
            base.put("device_pixel", dataFunUtils.getDeviceInfo().getDevicePixel());
            base.put("device_type", dataFunUtils.getAppContext().getDeviceType());
            base.put("device_version_code", dataFunUtils.getDeviceInfo().getDeviceVersionCode());
            setTransactionIdToBase(base);
            json.put("base", base);
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    private void setTransactionIdToBase(JSONObject base) throws JSONException {
        if (TextUtils.isEmpty(this.transactionId)) {
            base.put(AnalyticsData.KEY_TRANSACTIONID, YmnDataFunUtils.getInstance().getInitTrace());
        } else {
            base.put(AnalyticsData.KEY_TRANSACTIONID, this.transactionId);
        }
    }

    public void putReqData(IPlugin plugin, Object... datas) {
        try {
            this.gContent.put("os", "android");
            this.gContent.put("mid", YmnDataFunUtils.getInstance().getDeviceInfo().getDeviceId());
            JSONObject json = onPrepareData(plugin, datas);
            if (json != null) {
                putBasicData(json);
                this.pContent = json.toString();
            }
        } catch (YmnsdkException e) {
            Logger.i("putReqData" + e.getLocalizedMessage());
            e.printStackTrace();
        }
    }

    public void setTransactionId(String transactionId) {
        this.transactionId = transactionId;
    }

    public void doRequest(String url) throws YmnsdkException {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : this.gContent.entrySet()) {
            sb.append("&" + entry.getKey() + ContainerUtils.KEY_VALUE_DELIMITER + entry.getValue());
        }
        if (sb.length() > 0) {
            url = url + "?" + sb.substring(1);
        }
        if (this.httpHelper.isGetMethod()) {
            if (this.gContent != null) {
                this.httpHelper.createHttpRequest(url, "", this);
            }
        } else if (this.pContent != null) {
            this.httpHelper.createHttpRequest(url, SecurityUtil.getInstance().urlEncode(this.pContent), this);
        }
    }

    @Override
    public void onComplete(String response) {
        ResponseResult result = new ResponseResult(response);
        processResponseResult(result);
    }

    @Override
    public void onError(int code, String msg) {
        ResponseResult result = new ResponseResult(code, msg);
        processResponseResult(result);
    }

    private void processResponseResult(final ResponseResult result) {
        parseResponseResult(result);
        Context context = this.context;
        if (!(context instanceof Activity)) {
            notifyResponseResult(result);
        } else {
            ((Activity) context).runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    ActionSupport.this.notifyResponseResult(result);
                }
            });
        }
    }

    private void parseResponseResult(ResponseResult result) {
        try {
            showDebugLog(result);
            if (TextUtils.isEmpty(result.srcRes)) {
                Logger.e(TAG, String.format("do action response error code = %d msg = %s", Integer.valueOf(result.code), result.msg));
            } else {
                JSONObject obj = new JSONObject(result.srcRes);
                result.srcObj = obj;
                result.code = obj.optInt("code");
                result.msg = obj.optString("msg");
                result.data = obj.optJSONObject("data");
                result.ext = obj.opt("ext");
            }
        } catch (Exception e) {
            e.printStackTrace();
            result.code = 602;
            result.msg = "parse response json error";
        }
    }

    private void showDebugLog(ResponseResult result) {
        StringBuilder builder = new StringBuilder();
        builder.append("[CONTEXT] " + this.context);
        builder.append("\n");
        builder.append("[REQUEST] " + this.mUrl);
        builder.append("\n");
        builder.append("[CONTENT] " + this.pContent);
        builder.append("\n");
        builder.append("[RESPONSE] " + result.srcRes);
        Logger.dRich(builder.toString());
    }

    private void notifyResponseResult(ResponseResult result) {
        setChanged();
        if (result.isResponsed()) {
            try {
                if (result.isOk()) {
                    result.processedResult = onSuccess(result);
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
        notifyObservers(result);
    }

    protected String formatUrl(String action) {
        String urlHost = YmnURLManagerV2.getHost(HostConstant.ymn);
        return String.format("%s/%s/%s", urlHost, "v1", action);
    }

    protected Object formatType(Object obj) {
        if (obj instanceof String) {
            try {
                return new JSONObject(String.valueOf(obj));
            } catch (Exception e) {
                return obj;
            }
        }
        return obj;
    }
}
