package com.reyun.tracking.sdk;

import android.os.Message;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
final class f implements com.reyun.tracking.utils.n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Map f4737a;

    f(Map map) {
        this.f4737a = map;
    }

    @Override // com.reyun.tracking.utils.n
    public void a(int i, Object obj) {
        String string;
        if (Tracking.myTimehandler == null) {
            return;
        }
        try {
            string = ((JSONObject) obj).getString("ts");
        } catch (JSONException unused) {
            string = "";
        }
        long j = string != "" ? Long.parseLong(string) - System.currentTimeMillis() : 0L;
        Message messageObtainMessage = Tracking.myTimehandler.obtainMessage();
        messageObtainMessage.obj = this.f4737a;
        messageObtainMessage.arg1 = (int) j;
        messageObtainMessage.what = 2;
        Tracking.myTimehandler.sendMessage(messageObtainMessage);
    }

    @Override // com.reyun.tracking.utils.n
    public void a(Throwable th, String str) {
        if (Tracking.myTimehandler == null) {
            return;
        }
        Tracking.myTimehandler.removeCallbacksAndMessages(null);
        Message messageObtainMessage = Tracking.myTimehandler.obtainMessage();
        messageObtainMessage.what = 1;
        messageObtainMessage.obj = this.f4737a;
        Tracking.myTimehandler.sendMessage(messageObtainMessage);
    }
}
