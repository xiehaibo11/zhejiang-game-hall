package com.czhj.volley.toolbox;

import android.content.Context;
import com.czhj.volley.Network;
import com.czhj.volley.RequestQueue;

/* JADX INFO: loaded from: classes.dex */
public class Volley {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f1862a = "volley";

    private static RequestQueue a(Context context, Network network) {
        RequestQueue requestQueue = new RequestQueue(network);
        requestQueue.start();
        return requestQueue;
    }

    public static RequestQueue newRequestQueue(Context context) {
        return newRequestQueue(context, (BaseHttpStack) null);
    }

    public static RequestQueue newRequestQueue(Context context, BaseHttpStack baseHttpStack) {
        return a(context, baseHttpStack == null ? new BasicNetwork(new HurlStack()) : new BasicNetwork(baseHttpStack));
    }
}
