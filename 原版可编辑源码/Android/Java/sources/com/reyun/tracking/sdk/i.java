package com.reyun.tracking.sdk;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

final class i extends Handler {
    i(Looper looper) {
        super(looper);
    }

    @Override
    public void handleMessage(Message message) {
        com.reyun.tracking.utils.k kVar = (com.reyun.tracking.utils.k) message.obj;
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("from", "tkio");
            jSONObject.put("data", new JSONArray(kVar.b));
        } catch (JSONException e) {
            e.printStackTrace();
        }
        com.reyun.tracking.utils.d.a(Tracking.m_context, "batch", "receive/batch", jSONObject, new j(this, kVar));
    }
}
