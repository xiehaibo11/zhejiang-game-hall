package com.bianfeng.ymnsdk.actionv2;

import android.app.Activity;
import android.content.Context;
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
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.Map;
import java.util.Observable;
import java.util.TreeMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public abstract class ActionSupportV3<T> extends Observable implements HttpListener {
    protected static final String TAG = "ActionSupport";
    protected ActionAttachment attachment;
    protected Context context;
    protected TreeMap<String, String> gContent;
    protected HttpHelper httpHelper;
    protected String pContent;
    private String url;

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
            Gson gson = new Gson();
            return (Map) gson.fromJson(gson.toJson(this.processedResult), (Class) Map.class);
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

    public ActionSupportV3(Context context) {
        this.context = context;
        this.httpHelper = new HttpHelper(context);
        this.httpHelper.setMethod(2);
        this.gContent = new TreeMap<>();
    }

    public void actionStart() {
        try {
            this.url = getURL();
            doRequest(this.url);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void putReqData(IPlugin plugin, Object... datas) {
        this.pContent = datas[0].toString();
        try {
            onPrepareData(plugin, datas);
        } catch (Exception e) {
            e.printStackTrace();
            Logger.i("putReqData" + e.getMessage());
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
        Logger.d("doRequest doRequest" + url);
        String str = this.pContent;
        if (str != null) {
            this.httpHelper.createHttpRequest(url, str, this);
        }
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
            ((Activity) context).runOnUiThread(new Runnable() { // from class: com.bianfeng.ymnsdk.actionv2.ActionSupportV3.1
                @Override // java.lang.Runnable
                public void run() throws YmnsdkException {
                    ActionSupportV3.this.notifyResponseResult(result);
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
                result.code = obj.getInt("code");
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
        builder.append("[REQUEST] " + this.url);
        builder.append("\n");
        builder.append("[CONTENT] " + this.pContent);
        builder.append("\n");
        builder.append("[RESPONSE] " + result.srcRes);
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
        String urlHost = YmnURLManagerV2.getHost(HostConstant.login);
        return String.format("%s/%s", urlHost, action);
    }
}
