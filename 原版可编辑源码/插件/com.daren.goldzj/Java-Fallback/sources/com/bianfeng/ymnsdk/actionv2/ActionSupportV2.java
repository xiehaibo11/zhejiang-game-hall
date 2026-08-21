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
import java.util.Iterator;
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

    public static class ResponseResult<T> {
        private int code;
        private JSONObject data;
        private String msg;
        private T processedResult;
        private String srcRes;

        public ResponseResult(String r2) {
            this.code = 999;
            this.srcRes = r2;
        }

        /* JADX WARN: Multi-variable type inference failed */
        static Object access$102(ResponseResult r0, Object r1) {
            r0.processedResult = r1;
            return r1;
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
            return YmnGsonUtil.getMapFrom(YmnGsonUtil.toJson(this.processedResult));
        L4:
            e = move-exception;
            e.printStackTrace();
            return new HashMap();
        }

        public void setCode(int r1) {
            this.code = r1;
        }

        public void setData(JSONObject r1) {
            this.data = r1;
        }

        public void setMsg(String r1) {
            this.msg = r1;
        }

        public void setProcessedResult(T r1) {
            this.processedResult = r1;
        }

        public void setSrcRes(String r1) {
            this.srcRes = r1;
        }

        public ResponseResult(int r2, String r3) {
            this.code = 999;
            this.code = r2;
            this.msg = r3;
        }
    }

    public ActionSupportV2(Context r2) {
        this.context = r2;
        this.httpHelper = new HttpHelperV2(r2);
        this.httpHelper.setMethod(2);
        this.gContent = new TreeMap();
    }

    static void access$000(ActionSupportV2 r0, ResponseResult r1) {
        r0.notifyResponseResult(r1);
    }

    private void notifyResponseResult(ResponseResult r2) {
        setChanged();
        if (r2.isResponsed() == true) goto L14;
        e.h(this.context);
        YmnURLManagerV2.notifyRequestFailure();
    L12:
        notifyObservers(r2);
        return;
    L14:
    L8:
        e = move-exception;
        e.printStackTrace();
    L10:
        e.i(this.context);
        YmnURLManagerV2.notifyRequestSuccess();
        goto L12
    L5:
        if (r2.isOk() == false) goto L10;
        ResponseResult.access$102(r2, onSuccess(r2));     // Catch: Exception -> L8
        goto L10
    }

    private void parseResponseResult(ResponseResult r6) {
        showDebugLog(r6);     // Catch: Exception -> L17
        String r0 = r6.getSrcRes();     // Catch: Exception -> L17
        if (TextUtils.isEmpty(r0) == false) goto L8;
        Logger.i(TAG, String.format("do action response error code = %d msg = %s", new Object[]{Integer.valueOf(r6.getCode()), r6.getMsg()}));     // Catch: Exception -> L17
    L20:
        return;
    L8:
        if (YmnGsonUtil.isJsonObject(r0) == false) goto L14;
        JSONObject r02 = new JSONObject(r6.getSrcRes());     // Catch: Exception -> L17
        if ("ERROR".equalsIgnoreCase(r02.optString("trade_request_type")) == false) goto L12;
        r6.setCode(603);     // Catch: Exception -> L17
        r6.setData(r02);     // Catch: Exception -> L17
        goto L20
    L12:
        r6.setCode(0);     // Catch: Exception -> L17
        r6.setData(r02);     // Catch: Exception -> L17
        goto L20
    L14:
        if (YmnGsonUtil.isJsonArrayObject(r0) == false) goto L20;
        r6.setCode(0);     // Catch: Exception -> L17
    L17:
        e = move-exception;
        e.printStackTrace();
        r6.setCode(602);
        r6.setMsg("parse response json error");
    }

    private void showDebugLog(ResponseResult r5) {
        StringBuilder r0 = new StringBuilder();
        r0.append("[CONTEXT] " + this.context);
        r0.append("\n");
        r0.append("[REQUEST] " + this.url);
        r0.append("\n");
        r0.append("[CONTENT] " + this.pContent);
        r0.append("\n");
        r0.append("[RESPONSE] " + r5.getSrcRes());
        Logger.dRich(r0.toString());
    }

    public void actionStart() {
        Logger.i("ActionSupportV2 actionStart ");     // Catch: Exception -> L4
        this.url = getURL();     // Catch: Exception -> L4
        doRequest(this.url);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void doRequest(String r7) {
        StringBuilder r0 = new StringBuilder();
        Iterator<Map.Entry<String, String>> r1 = this.gContent.entrySet().iterator();
    L4:
        if (r1.hasNext() == false) goto L7;
        Map.Entry<String, String> r2 = r1.next();
        r0.append("&" + r2.getKey() + "=" + r2.getValue());
        goto L4
    L7:
        if (r0.length() <= 0) goto L9;
        r7 = r7 + "?" + r0.substring(1);
    L9:
        this.httpHelper.request(r7, this.pContent, this.payloadEntity, this.trace, this);
    }

    protected String formatUrl(String r4) {
        return String.format("%s/%s", new Object[]{YmnURLManagerV2.getHost(HostConstant.trade), r4});
    }

    protected abstract String getURL();

    @Override
    public void onComplete(String r2) {
        processResponseResult(new ResponseResult(r2));
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
        processResponseResult(new ResponseResult(r2, r3));
    }

    public abstract JSONObject onPrepareData(IPlugin r1, Object... r2) throws Exception;

    public void onStartAttachment() {
        ActionAttachment r0 = this.attachment;
        if (r0 == null) goto L6;
        r0.onStart(this.context);
        return;
    }

    protected abstract T onSuccess(ResponseResult r1) throws Exception;

    public void processResponseResult(final ResponseResult r3) {
        parseResponseResult(r3);
        Context r0 = this.context;
        if ((r0 instanceof Activity) == false) goto L5;
        ((Activity) r0).runOnUiThread(new 1(this, r3));
        return;
    L5:
        notifyResponseResult(r3);
    }

    protected void putBasicData(JSONObject r5) throws JSONException {
        YmnDataFunUtils r0 = YmnDataFunUtils.getInstance();
        JSONObject r1 = new JSONObject();
        r1.put("client_ip", "");
        r1.put("device_id", r0.getDeviceInfo().getDeviceId());
        r1.put("device_mobile", r0.getDeviceInfo().getDeviceModel());
        r1.put("device_network", r0.getDeviceInfo().getNetChannelStr());
        r1.put("device_os", r0.getDeviceInfo().getDeviceOS());
        r1.put("device_os_version", r0.getDeviceInfo().getOsVersion());
        r1.put("device_pixel", r0.getDeviceInfo().getDevicePixel());
        r1.put("device_type", r0.getAppContext().getDeviceType());
        r1.put("device_version_code", r0.getDeviceInfo().getDeviceVersionCode());
        r5.put(IPaymentFeature.ARG_CLIENT_INFO_V2, r1);
    }

    public void putReqData(IPlugin r1, Object... r2) throws YmnsdkException {
        JSONObject r12 = onPrepareData(r1, r2);     // Catch: Exception -> L6
        if (r12 == null) goto L11;
        putBasicData(r12);     // Catch: Exception -> L6
        this.pContent = r12.toString();     // Catch: Exception -> L6
        return;
    L11:
        return;
    L6:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    public void setAttachment(ActionAttachment r1) {
        this.attachment = r1;
    }

    public void setPayloadEntity(String r2, String r3, String r4) {
        this.payloadEntity = new PayTokenEntity.PayloadEntity(r2, r3);
        this.trace = r4;
    }
}
