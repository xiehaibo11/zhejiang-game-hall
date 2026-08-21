package com.czhj.volley;

public class Response<T> {
    public final com.czhj.volley.Cache.Entry cacheEntry;
    public final com.czhj.volley.VolleyError error;
    public boolean intermediate;
    public final T result;

    public interface ErrorListener {
        void onErrorResponse(com.czhj.volley.VolleyError r1);
    }

    public interface Listener<T> {
        void onResponse(T r1);
    }

    private Response(com.czhj.volley.VolleyError r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.intermediate = r0
            r0 = 0
            r1.result = r0
            r1.cacheEntry = r0
            r1.error = r2
            return
    }

    private Response(T r2, com.czhj.volley.Cache.Entry r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.intermediate = r0
            r1.result = r2
            r1.cacheEntry = r3
            r2 = 0
            r1.error = r2
            return
    }

    public static <T> com.czhj.volley.Response<T> error(com.czhj.volley.VolleyError r1) {
            com.czhj.volley.Response r0 = new com.czhj.volley.Response
            r0.<init>(r1)
            return r0
    }

    public static <T> com.czhj.volley.Response<T> success(T r1, com.czhj.volley.Cache.Entry r2) {
            com.czhj.volley.Response r0 = new com.czhj.volley.Response
            r0.<init>(r1, r2)
            return r0
    }

    public boolean isSuccess() {
            r1 = this;
            com.czhj.volley.VolleyError r0 = r1.error
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }
}
