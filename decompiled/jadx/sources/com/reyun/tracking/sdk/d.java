package com.reyun.tracking.sdk;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.support.v4.os.EnvironmentCompat;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
final class d extends Handler {
    d(Looper looper) {
        super(looper);
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        if (Tracking.m_context == null) {
            return;
        }
        if (message.what == 2) {
            com.reyun.tracking.utils.f.b(Tracking.m_context, Tracking.XML_INTERVAL, "interval", message.arg1);
        }
        if (!com.reyun.tracking.utils.f.a(Tracking.m_context, Tracking.XML_INSTALL, Tracking.m_appKey, "_default_").equals("_default_")) {
            com.reyun.tracking.a.a.d(Tracking.TAG, "has send install");
            boolean unused = Tracking.isInstallSent = true;
            Tracking.setStartupInternal((Map) message.obj);
            return;
        }
        com.reyun.tracking.utils.f.b(Tracking.m_context, Tracking.XML_INSTALL, Tracking.m_appKey, "installed");
        com.reyun.tracking.a.a.a(Tracking.TAG, "============send install event=========");
        JSONObject jSONObjectA = null;
        try {
            jSONObjectA = com.reyun.tracking.a.h.a(Tracking.m_context, Tracking.m_appKey, "install", EnvironmentCompat.MEDIA_UNKNOWN, Tracking.m_channelid, false);
            if (Tracking.sInstallParams != null) {
                com.reyun.tracking.a.a.a(Tracking.sInstallParams, jSONObjectA);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        JSONObject jSONObject = jSONObjectA;
        if (jSONObject != null) {
            Tracking.sendOrSava("install", "install", jSONObject, "receive/tkio/install", 3, (Map) message.obj);
        }
    }
}
