package com.czhj.sdk.common.network;

import com.czhj.sdk.common.models.Config;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.DefaultRetryPolicy;
import com.czhj.volley.NetworkResponse;
import com.czhj.volley.Response;
import com.czhj.volley.VolleyError;
import java.util.Map;

public class BuriedPointRequest extends SigmobRequest<NetworkResponse> {
    private final RequestListener a;
    private String b;

    public interface RequestListener {
        void onErrorResponse(VolleyError volleyError);

        void onSuccess();
    }

    private BuriedPointRequest(String str, String str2, RequestListener requestListener) {
        super(str, 1, null);
        this.b = "";
        this.a = requestListener;
        this.b = str2;
        setRetryPolicy(new DefaultRetryPolicy(10000, 2, 0.0f));
        setShouldCache(false);
    }

    public static void BuriedPointSend(String str, RequestListener requestListener) {
        if ((str == null || str.length() == 0) && requestListener != null) {
            requestListener.onErrorResponse(new VolleyError("body is empty"));
        }
        if (Networking.getBuriedPointRequestQueue() == null) {
            if (requestListener != null) {
                requestListener.onErrorResponse(new VolleyError("BuriedPointRequestQueue is empty"));
                return;
            }
            return;
        }
        try {
            Networking.getBuriedPointRequestQueue().add(new BuriedPointRequest(Config.sharedInstance().getLogUrl(), str, requestListener));
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            if (requestListener != null) {
                requestListener.onErrorResponse(new VolleyError("network is disconnect "));
            }
        }
    }

    @Override
    public void deliverError(VolleyError volleyError) {
        RequestListener requestListener;
        synchronized (this.mLock) {
            requestListener = this.a;
        }
        SigmobLog.i("send dclog: " + getUrl() + " onErrorResponse");
        if (requestListener != null) {
            requestListener.onErrorResponse(volleyError);
        }
    }

    @Override
    protected void deliverResponse(NetworkResponse networkResponse) {
        RequestListener requestListener;
        synchronized (this.mLock) {
            requestListener = this.a;
        }
        SigmobLog.i("send dclog: " + getUrl() + " success");
        if (requestListener != null) {
            requestListener.onSuccess();
        }
    }

    @Override
    public byte[] getBody() {
        return this.b.getBytes();
    }

    @Override
    public Map<String, String> getHeaders() {
        Map<String, String> headers = super.getHeaders();
        headers.put("gz", "on");
        return headers;
    }

    @Override
    public int getMaxLength() {
        return 100;
    }

    @Override
    protected Response<NetworkResponse> parseNetworkResponse(NetworkResponse networkResponse) {
        return Response.success(networkResponse, null);
    }
}
