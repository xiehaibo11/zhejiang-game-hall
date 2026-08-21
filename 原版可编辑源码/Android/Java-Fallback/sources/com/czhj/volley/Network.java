package com.czhj.volley;

public interface Network {
    com.czhj.volley.NetworkResponse performRequest(com.czhj.volley.Request<?> r1) throws com.czhj.volley.VolleyError;
}
