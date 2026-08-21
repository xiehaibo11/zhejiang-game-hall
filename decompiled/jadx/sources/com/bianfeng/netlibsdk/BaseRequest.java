package com.bianfeng.netlibsdk;

import com.bianfeng.netlibsdk.utils.NetException;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import com.bianfeng.ymnsdk.utilslib.log.UtilsLogger;

/* JADX INFO: loaded from: classes.dex */
public abstract class BaseRequest extends Request<String> {
    protected static final String PROTOCOL_CHARSET = "utf-8";
    private Listener listener;

    public interface Listener<T> {
        void onFail(String str);

        void onSuccess(T t);
    }

    public <T> void setListener(Listener<T> listener) {
        this.listener = listener;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.bianfeng.netlibsdk.Request
    public void deliverResponse(String str) {
        if (this.listener == null) {
            return;
        }
        log(str);
        boolean zIsJsonArrayObject = UtilsSdk.getGsonUtils().isJsonArrayObject(str);
        boolean zIsJsonObject = UtilsSdk.getGsonUtils().isJsonObject(str);
        if (zIsJsonArrayObject || zIsJsonObject) {
            try {
                this.listener.onSuccess(UtilsSdk.getGsonUtils().fromJson(str, (Object) this.listener));
                return;
            } catch (Exception e) {
                e.printStackTrace();
                this.listener.onFail("601|参数解析出错 " + e.getCause());
                return;
            }
        }
        this.listener.onFail("601|字符串不是json对象或json数组" + str);
    }

    protected void log(String str) {
        UtilsLogger.i("BaseRequest url:" + getUrl());
        UtilsLogger.i("BaseRequest url:" + getRequestBody());
        UtilsLogger.i("BaseRequest data:" + str);
    }

    @Override // com.bianfeng.netlibsdk.Request
    public void deliverError(NetException netException) {
        if (this.listener == null) {
            return;
        }
        NetworkResponse networkResponse = netException.response;
        if (networkResponse != null) {
            this.listener.onFail(networkResponse.statusCode + "|" + networkResponse.data + "|" + networkResponse.allHeaders + "|" + networkResponse.notModified);
            return;
        }
        this.listener.onFail(netException.getMessage());
    }

    @Override // com.bianfeng.netlibsdk.Request
    protected Response<String> parseNetworkResponse(NetworkResponse networkResponse) throws NetException {
        try {
            return Response.success(new String(networkResponse.data, HttpHeaderParser.parseCharset(networkResponse.headers, "utf-8")));
        } catch (Exception e) {
            throw new NetException(e);
        }
    }
}
