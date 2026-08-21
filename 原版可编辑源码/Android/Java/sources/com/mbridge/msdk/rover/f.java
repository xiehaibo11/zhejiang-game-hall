package com.mbridge.msdk.rover;

import com.mbridge.msdk.foundation.same.net.k;
import org.json.JSONObject;

public abstract class f extends com.mbridge.msdk.foundation.same.net.f<JSONObject> {
    public abstract void a();

    public abstract void a(String str);

    @Override
    public void onSuccess(k<JSONObject> kVar) {
        a();
    }

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        a(aVar.a + "");
    }
}
