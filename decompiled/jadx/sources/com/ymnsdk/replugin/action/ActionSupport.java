package com.ymnsdk.replugin.action;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.Map;
import java.util.Observable;
import java.util.TreeMap;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public abstract class ActionSupport<T> extends Observable implements HttpListener {
    protected static final String TAG = "Replugin_ActionSupport";
    protected ActionAttachment attachment;
    protected Context context;
    protected Map<String, String> gContent;
    protected HttpHelper httpHelper;
    private String mUrl;
    protected String pContent;
    private String transactionId;

    protected abstract String getURL();

    public abstract JSONObject onPrepareData(Object... objArr) throws Exception;

    protected abstract T onSuccess(ResponseResult responseResult) throws Exception;

    public void setAttachment(ActionAttachment actionAttachment) {
        this.attachment = actionAttachment;
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

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
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

        public boolean isAllow() {
            return this.code == 0;
        }

        public boolean isNotAllow() {
            return this.code == 1;
        }

        public Map<String, String> processedResultAsMap() {
            try {
                return GsonUtils.getInstance().getMapFrom(GsonUtils.getInstance().toJson(this.processedResult));
            } catch (Exception unused) {
                return new HashMap();
            }
        }

        public String dataAsString() {
            return this.data.toString();
        }

        public String messageFail() {
            return this.code + "|" + this.msg;
        }

        public String getExtData(String str) {
            Object obj = this.ext;
            return (obj == null || !(obj instanceof JSONObject)) ? "unknow" : ((JSONObject) obj).optString(str);
        }
    }

    public ActionSupport(Context context) {
        this.context = context;
        HttpHelper httpHelper = new HttpHelper(context);
        this.httpHelper = httpHelper;
        httpHelper.setMethod(2);
        this.gContent = new TreeMap();
    }

    public void actionStart() {
        try {
            String url = getURL();
            this.mUrl = url;
            doRequest(url);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void putGetData(Object... objArr) {
        try {
            JSONObject jSONObjectOnPrepareData = onPrepareData(objArr);
            if (jSONObjectOnPrepareData != null) {
                this.gContent = GsonUtils.getInstance().getMapFrom(jSONObjectOnPrepareData.toString());
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void putReqData(Object... objArr) {
        try {
            JSONObject jSONObjectOnPrepareData = onPrepareData(objArr);
            if (jSONObjectOnPrepareData != null) {
                this.pContent = jSONObjectOnPrepareData.toString();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void setTransactionId(String str) {
        this.transactionId = str;
    }

    public void doRequest(String str) throws Exception {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : this.gContent.entrySet()) {
            sb.append("&" + entry.getKey() + ContainerUtils.KEY_VALUE_DELIMITER + entry.getValue());
        }
        if (sb.length() > 0) {
            str = str + "?" + sb.substring(1);
        }
        if (this.httpHelper.isGetMethod()) {
            if (this.gContent != null) {
                this.httpHelper.createHttpRequest(str, "", this);
            }
        } else {
            String str2 = this.pContent;
            if (str2 != null) {
                this.httpHelper.createHttpRequest(str, str2, this);
            }
        }
    }

    @Override // com.ymnsdk.replugin.action.HttpListener
    public void onComplete(String str) {
        processResponseResult(new ResponseResult(str));
    }

    @Override // com.ymnsdk.replugin.action.HttpListener
    public void onError(int i, String str) {
        processResponseResult(new ResponseResult(i, str));
    }

    private void processResponseResult(final ResponseResult responseResult) {
        parseResponseResult(responseResult);
        Context context = this.context;
        if (context instanceof Activity) {
            ((Activity) context).runOnUiThread(new Runnable() { // from class: com.ymnsdk.replugin.action.ActionSupport.1
                @Override // java.lang.Runnable
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
            if (!TextUtils.isEmpty(responseResult.srcRes)) {
                JSONObject jSONObject = new JSONObject(responseResult.srcRes);
                responseResult.srcObj = jSONObject;
                if (jSONObject.has("code")) {
                    responseResult.code = jSONObject.optInt("code");
                    responseResult.msg = jSONObject.optString("message");
                    responseResult.data = jSONObject.optJSONObject("data");
                } else {
                    responseResult.code = 0;
                    responseResult.data = jSONObject;
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
            responseResult.code = 602;
            responseResult.msg = "parse response json error";
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void notifyResponseResult(ResponseResult responseResult) {
        setChanged();
        if (responseResult.isResponsed()) {
            try {
                if (responseResult.isOk()) {
                    responseResult.processedResult = onSuccess(responseResult);
                }
            } catch (Exception unused) {
            }
        }
        notifyObservers(responseResult);
    }

    protected String formatUrl(String str) {
        return String.format("%s/%s/%s", URLManager.getHost(), "v1", str);
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

    public String encode(String str) throws Exception {
        try {
            return URLEncoder.encode(str, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            throw new Exception(TAG, e);
        }
    }
}
