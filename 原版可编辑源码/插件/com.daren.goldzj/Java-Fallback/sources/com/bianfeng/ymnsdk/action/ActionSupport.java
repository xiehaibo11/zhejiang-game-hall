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
import java.util.Iterator;
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

    public class ResponseResult<T> {
        public int code;
        public JSONObject data;
        public Object ext;
        public String msg;
        public T processedResult;
        public JSONObject srcObj;
        public String srcRes;
        final ActionSupport this$0;

        public ResponseResult(ActionSupport r1, String r2) {
            this.this$0 = r1;
            this.code = 999;
            this.srcRes = r2;
        }

        public String dataAsString() {
            return this.data.toString();
        }

        public String getExtData(String r3) {
            Object r0 = this.ext;
            if (r0 != null) goto L5;
            return "unknow";
        L5:
            if ((r0 instanceof JSONObject) == true) goto L7;
            return "unknow";
        L7:
            return ((JSONObject) r0).optString(r3);
        }

        public boolean isOk() {
            if (this.code != 0) goto L5;
            return true;
        L5:
            return false;
        }

        public boolean isResponsed() {
            return !TextUtils.isEmpty(this.srcRes);
        }

        public String messageFail() {
            return this.code + "|" + this.msg;
        }

        public Map<String, String> processedResultAsMap() {
            return YmnGsonUtil.getMapFrom(this.processedResult);
        L5:
            return new HashMap();
        }

        public ResponseResult(ActionSupport r1, int r2, String r3) {
            this.this$0 = r1;
            this.code = 999;
            this.code = r2;
            this.msg = r3;
        }
    }

    public ActionSupport(Context r2) {
        this.context = r2;
        this.httpHelper = new HttpHelper(r2);
        this.httpHelper.setMethod(2);
        this.gContent = new TreeMap();
    }

    static void access$000(ActionSupport r0, ResponseResult r1) {
        r0.notifyResponseResult(r1);
    }

    private void notifyResponseResult(ResponseResult r4) {
        setChanged();
        if (r4.isResponsed() == true) goto L14;
        com.bianfeng.ymnsdk.feature.e.h(this.context);
        YmnURLManagerV2.notifyRequestFailure();
    L12:
        notifyObservers(r4);
        return;
    L14:
    L8:
        e = move-exception;
        Logger.i("notifyResponseResult result.isOk()" + e.getMessage());
    L10:
        com.bianfeng.ymnsdk.feature.e.i(this.context);
        YmnURLManagerV2.notifyRequestSuccess();
        goto L12
    L5:
        if (r4.isOk() == false) goto L10;
        r4.processedResult = onSuccess(r4);     // Catch: Exception -> L8
        goto L10
    }

    private void parseResponseResult(ResponseResult r6) {
        showDebugLog(r6);     // Catch: Exception -> L8
        if (TextUtils.isEmpty(r6.srcRes) == true) goto L5;
        JSONObject r0 = new JSONObject(r6.srcRes);     // Catch: Exception -> L8
        r6.srcObj = r0;     // Catch: Exception -> L8
        r6.code = r0.optInt("code");     // Catch: Exception -> L8
        r6.msg = r0.optString(NotificationCompat.CATEGORY_MESSAGE);     // Catch: Exception -> L8
        r6.data = r0.optJSONObject("data");     // Catch: Exception -> L8
        r6.ext = r0.opt("ext");     // Catch: Exception -> L8
    L11:
        return;
    L5:
        Logger.e(TAG, String.format("do action response error code = %d msg = %s", new Object[]{Integer.valueOf(r6.code), r6.msg}));     // Catch: Exception -> L8
    L8:
        e = move-exception;
        e.printStackTrace();
        r6.code = 602;
        r6.msg = "parse response json error";
    }

    private void processResponseResult(final ResponseResult r3) {
        parseResponseResult(r3);
        Context r0 = this.context;
        if ((r0 instanceof Activity) == false) goto L5;
        ((Activity) r0).runOnUiThread(new 1(this, r3));
        return;
    L5:
        notifyResponseResult(r3);
    }

    private void setTransactionIdToBase(JSONObject r3) throws JSONException {
        if (TextUtils.isEmpty(this.transactionId) == false) goto L5;
        r3.put(AnalyticsData.KEY_TRANSACTIONID, YmnDataFunUtils.getInstance().getInitTrace());
        return;
    L5:
        r3.put(AnalyticsData.KEY_TRANSACTIONID, this.transactionId);
    }

    private void showDebugLog(ResponseResult r5) {
        StringBuilder r0 = new StringBuilder();
        r0.append("[CONTEXT] " + this.context);
        r0.append("\n");
        r0.append("[REQUEST] " + this.mUrl);
        r0.append("\n");
        r0.append("[CONTENT] " + this.pContent);
        r0.append("\n");
        r0.append("[RESPONSE] " + r5.srcRes);
        Logger.dRich(r0.toString());
    }

    public void actionStart() {
        this.mUrl = getURL();     // Catch: Exception -> L4
        doRequest(this.mUrl);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void doRequest(String r6) throws YmnsdkException {
        StringBuilder r0 = new StringBuilder();
        Iterator<Map.Entry<String, String>> r1 = this.gContent.entrySet().iterator();
    L4:
        if (r1.hasNext() == false) goto L7;
        Map.Entry<String, String> r2 = r1.next();
        r0.append("&" + r2.getKey() + "=" + r2.getValue());
        goto L4
    L7:
        if (r0.length() <= 0) goto L10;
        r6 = r6 + "?" + r0.substring(1);
    L10:
        if (this.httpHelper.isGetMethod() == false) goto L15;
        if (this.gContent == null) goto L19;
        this.httpHelper.createHttpRequest(r6, "", this);
        return;
    L19:
        return;
    L15:
        if (this.pContent == null) goto L21;
        this.httpHelper.createHttpRequest(r6, SecurityUtil.getInstance().urlEncode(this.pContent), this);
        return;
    }

    protected Object formatType(Object r3) {
        if ((r3 instanceof String) == true) goto L8;
    L6:
        return r3;
    L8:
        return new JSONObject(String.valueOf(r3));
    }

    protected String formatUrl(String r4) {
        return String.format("%s/%s/%s", new Object[]{YmnURLManagerV2.getHost(HostConstant.ymn), "v1", r4});
    }

    protected abstract String getURL();

    @Override
    public void onComplete(String r2) {
        processResponseResult(new ResponseResult(this, r2));
    }

    public void onEndAttachment() {
        ActionAttachment r0 = this.attachment;
        if (r0 == null) goto L6;
        r0.onEnd(this.context);
        this.attachment = null;
        return;
    }

    @Override
    public void onError(int r2, String r3) {
        processResponseResult(new ResponseResult(this, r2, r3));
    }

    public abstract JSONObject onPrepareData(IPlugin r1, Object... r2) throws YmnsdkException;

    public void onStartAttachment() {
        ActionAttachment r0 = this.attachment;
        if (r0 == null) goto L6;
        r0.onStart(this.context);
        return;
    }

    protected abstract T onSuccess(ResponseResult r1) throws Exception;

    protected void putBasicData(JSONObject r5) throws YmnsdkException {
        YmnDataFunUtils r0 = YmnDataFunUtils.getInstance();     // Catch: Exception -> L36
        r5.put("appid", r0.getAppContext().getAppId());     // Catch: Exception -> L36
        r5.put("channel", r0.getChannelId());     // Catch: Exception -> L36
        r5.put("package_id", r0.getAppContext().getIdentify_id());     // Catch: Exception -> L36
        JSONObject r1 = new JSONObject();     // Catch: Exception -> L36
        r1.put("df_ver", r0.getPlatformUtils().getDatafun_ver());     // Catch: Exception -> L36
        r1.put("app_key", r0.getAppContext().getAppId());     // Catch: Exception -> L36
        r1.put("group_id", r0.getGroupId());     // Catch: Exception -> L36
        r1.put("device_id", r0.getDeviceInfo().getDeviceId());     // Catch: Exception -> L36
        r1.put("version_code", r0.getAppContext().getVerCode());     // Catch: Exception -> L36
        r1.put("version_name", r0.getAppContext().getVerName());     // Catch: Exception -> L36
        r1.put("device_mobile", r0.getDeviceInfo().getDeviceModel());     // Catch: Exception -> L36
        r1.put("device_network", r0.getDeviceInfo().getNetChannelStr());     // Catch: Exception -> L36
        r1.put("device_os", r0.getDeviceInfo().getDeviceOS());     // Catch: Exception -> L36
        r1.put("device_os_version", r0.getDeviceInfo().getOsVersion());     // Catch: Exception -> L36
        r1.put("device_pixel", r0.getDeviceInfo().getDevicePixel());     // Catch: Exception -> L36
        r1.put("device_type", r0.getAppContext().getDeviceType());     // Catch: Exception -> L36
        r1.put("device_version_code", r0.getDeviceInfo().getDeviceVersionCode());     // Catch: Exception -> L36
        setTransactionIdToBase(r1);     // Catch: Exception -> L36
        r5.put("base", r1);     // Catch: Exception -> L36
        return;
    L36:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public void putReqData(IPlugin r4, Object... r5) {
        this.gContent.put("os", "android");     // Catch: YmnsdkException -> L8
        this.gContent.put("mid", YmnDataFunUtils.getInstance().getDeviceInfo().getDeviceId());     // Catch: YmnsdkException -> L8
        JSONObject r42 = onPrepareData(r4, r5);     // Catch: YmnsdkException -> L8
        if (r42 == null) goto L13;
        putBasicData(r42);     // Catch: YmnsdkException -> L8
        this.pContent = r42.toString();     // Catch: YmnsdkException -> L8
        return;
    L13:
        return;
    L8:
        e = move-exception;
        Logger.i("putReqData" + e.getLocalizedMessage());
        e.printStackTrace();
    }

    public void setAttachment(ActionAttachment r1) {
        this.attachment = r1;
    }

    public void setTransactionId(String r1) {
        this.transactionId = r1;
    }
}
