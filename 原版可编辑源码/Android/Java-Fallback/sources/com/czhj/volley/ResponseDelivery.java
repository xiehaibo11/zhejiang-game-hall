package com.czhj.volley;

public interface ResponseDelivery {
    void postError(com.czhj.volley.Request<?> r1, com.czhj.volley.VolleyError r2);

    void postResponse(com.czhj.volley.Request<?> r1, com.czhj.volley.Response<?> r2);

    void postResponse(com.czhj.volley.Request<?> r1, com.czhj.volley.Response<?> r2, java.lang.Runnable r3);
}
