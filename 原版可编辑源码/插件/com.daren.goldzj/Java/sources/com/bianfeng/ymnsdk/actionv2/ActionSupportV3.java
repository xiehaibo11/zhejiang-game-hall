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

    public ActionSupportV3(Context context) {
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
            if (TextUtils.isEmpty(responseResult.srcRes)) {
                Logger.e(TAG, String.format("do action response error code = %d msg = %s", Integer.valueOf(responseResult.code), responseResult.msg));
            } else {
                JSONObject jSONObject = new JSONObject(responseResult.srcRes);
                responseResult.srcObj = jSONObject;
                responseResult.code = jSONObject.getInt("code");
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

    private void showDebugLog(ResponseResult responseResult) {
        StringBuilder sb = new StringBuilder();
        sb.append("[CONTEXT] " + this.context);
        sb.append("\n");
        sb.append("[REQUEST] " + this.url);
        sb.append("\n");
        sb.append("[CONTENT] " + this.pContent);
        sb.append("\n");
        sb.append("[RESPONSE] " + responseResult.srcRes);
        Logger.dRich(sb.toString());
    }

    public void actionStart() {
        try {
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
        Logger.d("doRequest doRequest" + str);
        String str2 = this.pContent;
        if (str2 != null) {
            this.httpHelper.createHttpRequest(str, str2, this);
        }
    }

    protected String formatUrl(String str) {
        return String.format("%s/%s", YmnURLManagerV2.getHost(HostConstant.login), str);
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

    public void processResponseResult(final ResponseResult responseResult) {
        parseResponseResult(responseResult);
        Context context = this.context;
        if (context instanceof Activity) {
            ((Activity) context).runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    ActionSupportV3.this.notifyResponseResult(responseResult);
                }
            });
        } else {
            notifyResponseResult(responseResult);
        }
    }

    public void putReqData(IPlugin iPlugin, Object... objArr) {
        this.pContent = objArr[0].toString();
        try {
            onPrepareData(iPlugin, objArr);
        } catch (Exception e) {
            e.printStackTrace();
            Logger.i("putReqData" + e.getMessage());
        }
    }

    public void setAttachment(ActionAttachment actionAttachment) {
        this.attachment = actionAttachment;
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
            Gson gson = new Gson();
            return (Map) gson.fromJson(gson.toJson(this.processedResult), (Class) Map.class);
        }

        public ResponseResult(int i, String str) {
            this.code = 999;
            this.code = i;
            this.msg = str;
        }
    }
}
