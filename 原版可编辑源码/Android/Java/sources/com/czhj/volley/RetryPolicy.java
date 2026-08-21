package com.czhj.volley;

public interface RetryPolicy {
    int getCurrentConnectTimeoutMs();

    int getCurrentRetryCount();

    int getCurrentTimeout();

    void retry(VolleyError volleyError) throws VolleyError;
}
