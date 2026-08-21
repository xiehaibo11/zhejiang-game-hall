package com.czhj.volley.toolbox;

import android.content.Context;
import com.czhj.volley.Network;
import com.czhj.volley.RequestQueue;

public class Volley {
    private static final String a = "volley";

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
