package com.czhj.volley;

public interface RetryPolicy {
    int getCurrentConnectTimeoutMs();

    int getCurrentRetryCount();

    int getCurrentTimeout();

    void retry(com.czhj.volley.VolleyError r1) throws com.czhj.volley.VolleyError;
}
