package com.bianfeng.ymnsdk.actionv2;

import android.app.Activity;
import android.content.Context;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.action.ActionAttachment;
import com.bianfeng.ymnsdk.action.HttpHelper;
import com.bianfeng.ymnsdk.action.HttpListener;
import com.bianfeng.ymnsdk.feature.e;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.google.gson.Gson;
import java.util.Iterator;
import java.util.Map;
import java.util.Observable;
import java.util.TreeMap;
import org.json.JSONObject;

public abstract class ActionSupportV3<T> extends Observable implements HttpListener {
    protected static final String TAG = "ActionSupport";
    protected ActionAttachment attachment;
    protected Context context;
    protected TreeMap<String, String> gContent;
    protected HttpHelper httpHelper;
    protected String pContent;
    private String url;

    public class ResponseResult<T> {
        public int code;
        public JSONObject data;
        public Object ext;
        public String msg;
        public T processedResult;
        public JSONObject srcObj;
        public String srcRes;
        final ActionSupportV3 this$0;

        public ResponseResult(ActionSupportV3 r1, String r2) {
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
            Gson r0 = new Gson();
            return (Map) r0.fromJson(r0.toJson(this.processedResult), Map.class);
        }

        public ResponseResult(ActionSupportV3 r1, int r2, String r3) {
            this.this$0 = r1;
            this.code = 999;
            this.code = r2;
            this.msg = r3;
        }
    }

    public ActionSupportV3(Context r2) {
        this.context = r2;
        this.httpHelper = new HttpHelper(r2);
        this.httpHelper.setMethod(2);
        this.gContent = new TreeMap();
    }

    static void access$000(ActionSupportV3 r0, ResponseResult r1) {
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
        r2.processedResult = onSuccess(r2);     // Catch: Exception -> L8
        goto L10
    }

    private void parseResponseResult(ResponseResult r6) {
        showDebugLog(r6);     // Catch: Exception -> L8
        if (TextUtils.isEmpty(r6.srcRes) == true) goto L5;
        JSONObject r0 = new JSONObject(r6.srcRes);     // Catch: Exception -> L8
        r6.srcObj = r0;     // Catch: Exception -> L8
        r6.code = r0.getInt("code");     // Catch: Exception -> L8
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

    private void showDebugLog(ResponseResult r5) {
        StringBuilder r0 = new StringBuilder();
        r0.append("[CONTEXT] " + this.context);
        r0.append("\n");
        r0.append("[REQUEST] " + this.url);
        r0.append("\n");
        r0.append("[CONTENT] " + this.pContent);
        r0.append("\n");
        r0.append("[RESPONSE] " + r5.srcRes);
        Logger.dRich(r0.toString());
    }

    public void actionStart() {
        this.url = getURL();     // Catch: Exception -> L4
        doRequest(this.url);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    public void doRequest(String r6) {
        StringBuilder r0 = new StringBuilder();
        Iterator<Map.Entry<String, String>> r1 = this.gContent.entrySet().iterator();
    L4:
        if (r1.hasNext() == false) goto L7;
        Map.Entry<String, String> r2 = r1.next();
        r0.append("&" + r2.getKey() + "=" + r2.getValue());
        goto L4
    L7:
        if (r0.length() <= 0) goto L9;
        r6 = r6 + "?" + r0.substring(1);
    L9:
        Logger.d("doRequest doRequest" + r6);
        String r02 = this.pContent;
        if (r02 == null) goto L14;
        this.httpHelper.createHttpRequest(r6, r02, this);
        return;
    }

    protected String formatUrl(String r4) {
        return String.format("%s/%s", new Object[]{YmnURLManagerV2.getHost(HostConstant.login), r4});
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

    public void processResponseResult(final ResponseResult r3) {
        parseResponseResult(r3);
        Context r0 = this.context;
        if ((r0 instanceof Activity) == false) goto L5;
        ((Activity) r0).runOnUiThread(new 1(this, r3));
        return;
    L5:
        notifyResponseResult(r3);
    }

    public void putReqData(IPlugin r2, Object... r3) {
        this.pContent = r3[0].toString();
        onPrepareData(r2, r3);     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
        Logger.i("putReqData" + e.getMessage());
    }

    public void setAttachment(ActionAttachment r1) {
        this.attachment = r1;
    }
}
