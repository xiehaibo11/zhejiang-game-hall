package com.bianfeng.netlib;

import android.app.Activity;
import android.text.TextUtils;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.UtilsSdk;
import com.huawei.hms.framework.common.ContainerUtils;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.Map;
import java.util.Observable;
import java.util.TreeMap;
import org.json.JSONObject;

public abstract class ActionSupport<T> extends Observable implements HttpListener {
    protected Activity context;
    protected TreeMap<String, String> gContent;
    protected HttpHelper httpHelper;
    private String mUrl;

    protected abstract String getURL();

    protected abstract T onSuccess(ResponseResult responseResult) throws Exception;

    public class ResponseResult<T> {
        private int code;
        private JSONObject data;
        private String msg;
        private T processedResult;
        private String srcRes;

        public int getCode() {
            return this.code;
        }

        public String getMsg() {
            return this.msg;
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

        public JSONObject getData() {
            return this.data;
        }

        public T getProcessedResult() {
            return this.processedResult;
        }

        public String getSrcRes() {
            return this.srcRes;
        }

        public ResponseResult(String str) {
            this.code = 999;
            this.srcRes = str;
        }

        public ResponseResult(int i, String str) {
            this.code = 999;
            this.code = i;
            this.msg = str;
        }

        public boolean isResponsed() {
            return !TextUtils.isEmpty(this.srcRes);
        }

        public boolean isOk() {
            return this.code == 0;
        }

        public Map<String, String> processedResultAsMap() {
            return ThridSdk.getGson().fromJson(ThridSdk.getGson().toJson(this.processedResult));
        }

        public String messageFail() {
            return this.code + "|" + this.msg;
        }
    }

    public ActionSupport(Activity activity) {
        this.context = activity;
        HttpHelper httpHelper = new HttpHelper(activity);
        this.httpHelper = httpHelper;
        httpHelper.setMethod(1);
    }

    public void actionStart() {
        try {
            this.mUrl = getURL();
            doRequest();
        } catch (Exception e) {
            onError(603, "ActionSupport类中actionStart方法，请求错误" + e.getMessage());
            e.printStackTrace();
        }
    }

    public void putReqData(TreeMap<String, String> treeMap) {
        if (treeMap != null) {
            this.gContent = treeMap;
        }
    }

    public void doRequest() throws UnsupportedEncodingException {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : this.gContent.entrySet()) {
            String value = entry.getValue();
            if (TextUtils.isEmpty(value)) {
                value = "";
            }
            sb.append("&" + entry.getKey() + ContainerUtils.KEY_VALUE_DELIMITER + URLEncoder.encode(value, "utf-8"));
        }
        if (sb.length() > 0) {
            this.mUrl += "?" + sb.substring(1);
        }
        this.httpHelper.request(this.mUrl, this);
    }

    @Override
    public void onComplete(String str) {
        processResponseResult(new ResponseResult(str));
    }

    @Override
    public void onError(int i, String str) {
        processResponseResult(new ResponseResult(i, str));
    }

    public void processResponseResult(final ResponseResult responseResult) {
        parseResponseResult(responseResult);
        Activity activity = this.context;
        if (activity instanceof Activity) {
            activity.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    ActionSupport.this.notifyResponseResult(responseResult);
                }
            });
        } else {
            notifyResponseResult(responseResult);
        }
    }

    private void parseResponseResult(ResponseResult responseResult) {
        try {
            showDebugLog(responseResult);
            if (TextUtils.isEmpty(responseResult.srcRes)) {
                UtilsSdk.getLogger().e("ymnsdk", String.format("do action response error code = %d msg = %s", Integer.valueOf(responseResult.code), responseResult.msg));
            } else {
                JSONObject jSONObject = new JSONObject(responseResult.srcRes);
                responseResult.setCode(0);
                responseResult.setData(jSONObject);
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
        sb.append("[REQUEST] " + this.mUrl);
        sb.append("\n");
        sb.append("\n");
        sb.append("[RESPONSE] " + responseResult.srcRes);
        UtilsSdk.getLogger().i(sb.toString());
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
        }
        notifyObservers(responseResult);
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
}
