package com.czhj.sdk.common.network;

import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.DefaultRetryPolicy;
import com.czhj.volley.NetworkResponse;
import com.czhj.volley.ParseError;
import com.czhj.volley.Response;
import com.czhj.volley.VolleyError;
import com.czhj.volley.toolbox.HttpHeaderParser;
import org.json.JSONObject;

public class JsonRequest extends SigmobRequest<JSONObject> {
    protected static final String PROTOCOL_CHARSET = "utf-8";
    private static final int a = 0;
    private final Listener b;

    public interface Listener extends Response.ErrorListener {
        void onSuccess(JSONObject jSONObject);
    }

    public JsonRequest(String str, Listener listener, int i) {
        super(str, 0, listener);
        this.b = listener;
        setRetryPolicy(new DefaultRetryPolicy(10000, 2, 0.0f));
        setShouldCache(false);
    }

    @Override
    public void deliverError(VolleyError volleyError) {
        SigmobLog.e("send tracking: " + getUrl() + " fail");
        super.deliverError(volleyError);
    }

    @Override
    protected void deliverResponse(JSONObject jSONObject) {
        Listener listener;
        synchronized (this.mLock) {
            listener = this.b;
        }
        SigmobLog.i("send tracking: " + getUrl() + " success");
        if (listener != null) {
            listener.onSuccess(jSONObject);
        }
    }

    @Override
    protected Response<JSONObject> parseNetworkResponse(NetworkResponse networkResponse) {
        try {
            return Response.success(new JSONObject(new String(networkResponse.data, HttpHeaderParser.parseCharset(networkResponse.headers, "utf-8"))), HttpHeaderParser.parseCacheHeaders(networkResponse));
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return Response.error(new ParseError(th));
        }
    }
}
