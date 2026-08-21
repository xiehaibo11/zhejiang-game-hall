package com.czhj.volley.toolbox;

public class Volley {
    private static final java.lang.String a = "volley";

    public Volley() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.czhj.volley.RequestQueue a(android.content.Context r0, com.czhj.volley.Network r1) {
            com.czhj.volley.RequestQueue r0 = new com.czhj.volley.RequestQueue
            r0.<init>(r1)
            r0.start()
            return r0
    }

    public static com.czhj.volley.RequestQueue newRequestQueue(android.content.Context r1) {
            r0 = 0
            com.czhj.volley.toolbox.BaseHttpStack r0 = (com.czhj.volley.toolbox.BaseHttpStack) r0
            com.czhj.volley.RequestQueue r1 = newRequestQueue(r1, r0)
            return r1
    }

    public static com.czhj.volley.RequestQueue newRequestQueue(android.content.Context r1, com.czhj.volley.toolbox.BaseHttpStack r2) {
            if (r2 != 0) goto Ld
            com.czhj.volley.toolbox.BasicNetwork r2 = new com.czhj.volley.toolbox.BasicNetwork
            com.czhj.volley.toolbox.HurlStack r0 = new com.czhj.volley.toolbox.HurlStack
            r0.<init>()
            r2.<init>(r0)
            goto L13
        Ld:
            com.czhj.volley.toolbox.BasicNetwork r0 = new com.czhj.volley.toolbox.BasicNetwork
            r0.<init>(r2)
            r2 = r0
        L13:
            com.czhj.volley.RequestQueue r1 = a(r1, r2)
            return r1
    }
}
