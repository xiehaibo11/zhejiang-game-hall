package com.mbridge.msdk.out;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.interstitial.c.a;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class MBInterstitialHandler {
    private a mController;

    public MBInterstitialHandler(Context context, Map<String, Object> map) {
        if (this.mController == null) {
            this.mController = new a();
        }
        if (map != null && map.containsKey("unit_id")) {
            String str = (String) map.get("unit_id");
            if (!TextUtils.isEmpty(str)) {
                String strF = ae.f(str);
                if (!TextUtils.isEmpty(strF)) {
                    ae.a(str, strF);
                }
            }
        }
        this.mController.a(context, map);
        if (com.mbridge.msdk.foundation.controller.a.f().j() != null || context == null) {
            return;
        }
        com.mbridge.msdk.foundation.controller.a.f().b(context);
    }

    public void preload() {
        try {
            if (this.mController != null) {
                this.mController.a();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public String getRequestId() {
        a aVar = this.mController;
        return aVar != null ? aVar.b() : "";
    }

    public void show() {
        try {
            this.mController.c();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void setInterstitialListener(InterstitialListener interstitialListener) {
        try {
            if (this.mController != null) {
                this.mController.a(interstitialListener);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
