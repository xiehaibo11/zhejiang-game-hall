package com.czhj.volley;

public interface Network {
    NetworkResponse performRequest(Request<?> request) throws VolleyError;
}
