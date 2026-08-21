package com.bianfeng.paylib.action;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.thridlibrary.GsonUtils;
import com.bianfeng.utilslib.UtilsSdk;
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.Map;
import java.util.Observable;
import java.util.TreeMap;
import org.json.JSONObject;

public abstract class ActionSupport<T> extends Observable implements HttpListener {
    protected ActionAttachment attachment;
    protected Context context;
    protected TreeMap<String, String> gContent;
    protected HttpHelper httpHelper;
    protected String pContent;

    protected abstract String getURL();

    public abstract JSONObject onPrepareData(Map<String, String> map) throws Exception;

    protected abstract T onSuccess(ResponseResult responseResult) throws Exception;

    public void setAttachment(ActionAttachment actionAttachment) {
        this.attachment = actionAttachment;
    }

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
            return GsonUtils.getInstance().getFromMap(GsonUtils.getInstance().toJson(this.processedResult));
        }

        public String messageFail() {
            return this.code + "|" + this.msg;
        }
    }

    public ActionSupport(Context context) {
        this.context = context;
        HttpHelper httpHelper = new HttpHelper(context);
        this.httpHelper = httpHelper;
        httpHelper.setMethod(2);
        this.gContent = new TreeMap<>();
    }

    public void actionStart() {
        try {
            doRequest(getURL());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void putReqData(Map<String, String> map) {
        try {
            JSONObject jSONObjectOnPrepareData = onPrepareData(map);
            if (jSONObjectOnPrepareData != null) {
                this.pContent = jSONObjectOnPrepareData.toString();
                UtilsSdk.getLogger().i("putReqData：" + this.pContent);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void doRequest(String str) {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : this.gContent.entrySet()) {
            sb.append("&" + entry.getKey() + ContainerUtils.KEY_VALUE_DELIMITER + entry.getValue());
        }
        if (sb.length() > 0) {
            str = str + "?" + sb.substring(1);
        }
        ActionAttachment actionAttachment = this.attachment;
        if (actionAttachment != null) {
            actionAttachment.onStart(this.context);
        }
        this.httpHelper.request(str, this.pContent, this);
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

    private void parseResponseResult(ResponseResult responseResult) {
        try {
            showDebugLog(responseResult);
            if (TextUtils.isEmpty(responseResult.getSrcRes())) {
                UtilsSdk.getLogger().e(String.format("do action response error code = %d msg = %s", Integer.valueOf(responseResult.getCode()), responseResult.getMsg()));
            } else {
                JSONObject jSONObject = new JSONObject(responseResult.getSrcRes());
                if ("ERROR".equalsIgnoreCase(jSONObject.optString("trade_request_type"))) {
                    responseResult.setCode(603);
                    UtilsSdk.getLogger().e("ymnsdk", jSONObject.toString());
                    responseResult.setMsg(jSONObject.getString("trade_request_content"));
                } else {
                    responseResult.setCode(0);
                    responseResult.setData(jSONObject);
                }
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
        sb.append("[REQUEST] " + getURL());
        sb.append("\n");
        sb.append("[CONTENT] " + this.pContent);
        sb.append("\n");
        sb.append("[RESPONSE] " + responseResult.getSrcRes());
        UtilsSdk.getLogger().dRich(sb.toString());
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
        ActionAttachment actionAttachment = this.attachment;
        if (actionAttachment != null) {
            actionAttachment.onEnd(this.context);
        }
        notifyObservers(responseResult);
    }

    protected String formatUrl(String str) {
        return String.format("%s/%s", "v2", str);
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
