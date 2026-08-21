package com.czhj.volley;

/* JADX INFO: loaded from: classes.dex */
public interface Network {
    NetworkResponse performRequest(Request<?> request) throws VolleyError;
}
