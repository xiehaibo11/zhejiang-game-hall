package com.bianfeng.seppellita.net;

import com.bianfeng.netlibsdk.HttpHeaderParser;
import com.bianfeng.netlibsdk.NetworkResponse;
import com.bianfeng.netlibsdk.Request;
import com.bianfeng.netlibsdk.Response;
import com.bianfeng.netlibsdk.utils.NetException;
import com.bianfeng.seppellita.utils.SeppellitaLogger;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public abstract class BaseSeppellitaRequest extends Request<String> {
    @Override // com.bianfeng.netlibsdk.Request
    public Map<String, String> addHeaders() {
        return null;
    }

    @Override // com.bianfeng.netlibsdk.Request
    public String getRequestBody() {
        return null;
    }

    public abstract void onFail(String str);

    public abstract void onSuc(String str);

    @Override // com.bianfeng.netlibsdk.Request
    public Response<String> parseNetworkResponse(NetworkResponse networkResponse) throws NetException {
        try {
            return Response.success(new String(networkResponse.data, HttpHeaderParser.parseCharset(networkResponse.headers, "utf-8")));
        } catch (Exception e) {
            throw new NetException(e);
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.bianfeng.netlibsdk.Request
    public void deliverResponse(String str) {
        UrlManager.getInstance().onSuc();
        log(str);
        onSuc(str);
    }

    protected void log(String str) {
        SeppellitaLogger.i("BaseSeppellitaRequest url:" + getUrl());
        SeppellitaLogger.i("BaseSeppellitaRequest body:" + getRequestBody());
        SeppellitaLogger.i("BaseSeppellitaRequest data:" + str);
    }

    @Override // com.bianfeng.netlibsdk.Request
    public void deliverError(NetException netException) {
        UrlManager.getInstance().onFail();
        NetworkResponse networkResponse = netException.response;
        if (networkResponse != null) {
            onFail(networkResponse.statusCode + "|" + networkResponse.data + "|" + networkResponse.allHeaders + "|" + networkResponse.notModified);
            return;
        }
        onFail(netException.getMessage());
    }
}
