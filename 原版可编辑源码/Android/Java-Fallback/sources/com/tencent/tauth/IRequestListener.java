package com.tencent.tauth;

public interface IRequestListener {
    void onComplete(org.json.JSONObject r1);

    void onHttpStatusException(com.tencent.open.utils.HttpUtils.HttpStatusException r1);

    void onIOException(java.io.IOException r1);

    void onJSONException(org.json.JSONException r1);

    void onMalformedURLException(java.net.MalformedURLException r1);

    void onNetworkUnavailableException(com.tencent.open.utils.HttpUtils.NetworkUnavailableException r1);

    void onSocketTimeoutException(java.net.SocketTimeoutException r1);

    void onUnknowException(java.lang.Exception r1);
}
