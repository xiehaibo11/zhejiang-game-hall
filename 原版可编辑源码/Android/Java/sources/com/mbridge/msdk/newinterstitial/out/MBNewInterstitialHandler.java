package com.mbridge.msdk.newinterstitial.out;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.c.b;
import com.mbridge.msdk.foundation.same.report.f;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.reward.a.a;

public class MBNewInterstitialHandler {
    private a a;
    private String b;

    public MBNewInterstitialHandler(Context context, String str, String str2) {
        if (com.mbridge.msdk.foundation.controller.a.f().j() == null && context != null) {
            com.mbridge.msdk.foundation.controller.a.f().b(context);
        }
        String strF = ae.f(str2);
        if (!TextUtils.isEmpty(strF)) {
            ae.a(str2, strF);
        }
        a(str, str2);
    }

    public MBNewInterstitialHandler(String str, String str2) {
        a(str, str2);
    }

    private void a(String str, String str2) {
        this.b = str2;
        try {
            if (this.a == null) {
                a aVar = new a();
                this.a = aVar;
                aVar.a(true);
            }
            this.a.b(str, str2);
            b.a().f(str2);
        } catch (Throwable th) {
            z.c("MBRewardVideoHandler", th.getMessage(), th);
        }
    }

    public void load() {
        f.a().a(this.b, "niv", false);
        a aVar = this.a;
        if (aVar != null) {
            aVar.d(true);
        }
    }

    public void loadFormSelfFilling() {
        f.a().a(this.b, "niv", false);
        a aVar = this.a;
        if (aVar != null) {
            aVar.d(false);
        }
    }

    public boolean isReady() {
        a aVar = this.a;
        if (aVar != null) {
            boolean zE = aVar.e(true);
            if (zE) {
                f.a().d(this.b, "niv", false);
            } else {
                f.a().e(this.b, "niv", false);
            }
            return zE;
        }
        f.a().e(this.b, "niv", false);
        return false;
    }

    public String getRequestId() {
        a aVar = this.a;
        return aVar != null ? aVar.b() : "";
    }

    public void show() {
        f.a().f(this.b, "niv", false);
        a aVar = this.a;
        if (aVar != null) {
            aVar.a((String) null, (String) null, (String) null);
        }
    }

    public void setRewardVideoListener(NewInterstitialListener newInterstitialListener) {
        a aVar = this.a;
        if (aVar != null) {
            aVar.a(new com.mbridge.msdk.newinterstitial.a.a(newInterstitialListener, this.b, false));
        }
    }

    public void setInterstitialVideoListener(NewInterstitialListener newInterstitialListener) {
        a aVar = this.a;
        if (aVar != null) {
            aVar.a(new com.mbridge.msdk.newinterstitial.a.a(newInterstitialListener, this.b, false));
        }
    }

    public void clearVideoCache() {
        try {
            if (this.a != null) {
                x.a();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void playVideoMute(int i) {
        a aVar = this.a;
        if (aVar != null) {
            aVar.a(i);
        }
    }

    public void setIVRewardEnable(int i, int i2) {
        a aVar = this.a;
        if (aVar != null) {
            aVar.a(i, com.mbridge.msdk.foundation.same.a.z, i2);
        }
    }

    public void setIVRewardEnable(int i, double d) {
        a aVar = this.a;
        if (aVar != null) {
            aVar.a(i, com.mbridge.msdk.foundation.same.a.y, (int) (d * 100.0d));
        }
    }

    public void setAlertDialogText(String str, String str2, String str3, String str4) {
        a aVar = this.a;
        if (aVar != null) {
            aVar.a(str, str2, str3, str4);
        }
    }
}
