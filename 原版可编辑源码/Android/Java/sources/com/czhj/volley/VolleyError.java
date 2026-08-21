package com.czhj.volley;

import android.text.TextUtils;

public class VolleyError extends Exception {
    private long a;
    protected String errorMsg;
    public final NetworkResponse networkResponse;

    public VolleyError() {
        this.networkResponse = null;
    }

    public VolleyError(NetworkResponse networkResponse) {
        this.networkResponse = networkResponse;
        if (networkResponse != null) {
            this.errorMsg = String.format("http request error status code " + networkResponse.statusCode, new Object[0]);
        }
    }

    public VolleyError(String str) {
        super(str);
        this.networkResponse = null;
    }

    public VolleyError(String str, Throwable th) {
        super(str, th);
        this.networkResponse = null;
    }

    public VolleyError(Throwable th) {
        super(th);
        this.networkResponse = null;
    }

    void a(long j) {
        this.a = j;
    }

    @Override
    public String getMessage() {
        return !TextUtils.isEmpty(this.errorMsg) ? this.errorMsg : super.getMessage();
    }

    public long getNetworkTimeMs() {
        return this.a;
    }
}
