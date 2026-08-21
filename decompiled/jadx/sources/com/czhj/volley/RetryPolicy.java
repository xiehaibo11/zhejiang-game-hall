package com.czhj.volley;

/* JADX INFO: loaded from: classes.dex */
public interface RetryPolicy {
    int getCurrentConnectTimeoutMs();

    int getCurrentRetryCount();

    int getCurrentTimeout();

    void retry(VolleyError volleyError) throws VolleyError;
}
