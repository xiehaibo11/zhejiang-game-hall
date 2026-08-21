package com.reyun.tracking.sdk;

import android.os.Message;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

final class f implements com.reyun.tracking.utils.n {
    final Map a;

    f(Map map) {
        this.a = map;
    }

    @Override
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
        messageObtainMessage.obj = this.a;
        messageObtainMessage.arg1 = (int) j;
        messageObtainMessage.what = 2;
        Tracking.myTimehandler.sendMessage(messageObtainMessage);
    }

    @Override
    public void a(Throwable th, String str) {
        if (Tracking.myTimehandler == null) {
            return;
        }
        Tracking.myTimehandler.removeCallbacksAndMessages(null);
        Message messageObtainMessage = Tracking.myTimehandler.obtainMessage();
        messageObtainMessage.what = 1;
        messageObtainMessage.obj = this.a;
        Tracking.myTimehandler.sendMessage(messageObtainMessage);
    }
}
