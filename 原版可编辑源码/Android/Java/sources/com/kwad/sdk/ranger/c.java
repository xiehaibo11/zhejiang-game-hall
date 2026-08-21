package com.kwad.sdk.ranger;

import okhttp3.EventListener;

public class c implements EventListener.Factory {
    public static final String TAG = "Ranger_" + c.class.getSimpleName();
    EventListener aGD;
    a aGE;

    public interface a {
    }

    public c(Object obj, a aVar) {
        this.aGD = (EventListener) obj;
        this.aGE = aVar;
    }
}
