package com.mbridge.msdk.newinterstitial.out;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.report.f;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.reward.a.a;

/* JADX INFO: loaded from: classes2.dex */
public class MBBidNewInterstitialHandler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f3849a;
    private String b;

    public MBBidNewInterstitialHandler(Context context, String str, String str2) {
        if (com.mbridge.msdk.foundation.controller.a.f().j() == null && context != null) {
            com.mbridge.msdk.foundation.controller.a.f().b(context);
        }
        String strF = ae.f(str2);
        if (!TextUtils.isEmpty(strF)) {
            ae.a(str2, strF);
        }
        a(str, str2);
    }

    public MBBidNewInterstitialHandler(String str, String str2) {
        a(str, str2);
    }

    private void a(String str, String str2) {
        this.b = str2;
        try {
            if (this.f3849a == null) {
                a aVar = new a();
                this.f3849a = aVar;
                aVar.a(true);
                this.f3849a.b(true);
            }
            this.f3849a.b(str, str2);
        } catch (Throwable th) {
            z.c("MBBidNewInterstitialHandler", th.getMessage(), th);
        }
    }

    public void loadFromBid(String str) {
        f.a().a(this.b, "niv", true);
        a aVar = this.f3849a;
        if (aVar != null) {
            aVar.a(true, str);
        }
    }

    public void loadFormSelfFilling() {
        f.a().a(this.b, "niv", true);
        a aVar = this.f3849a;
        if (aVar != null) {
            aVar.d(false);
        }
    }

    public boolean isBidReady() {
        a aVar = this.f3849a;
        if (aVar != null) {
            boolean zE = aVar.e(true);
            if (zE) {
                f.a().d(this.b, "niv", true);
            } else {
                f.a().e(this.b, "niv", true);
            }
            return zE;
        }
        f.a().e(this.b, "niv", true);
        return false;
    }

    public String getRequestId() {
        a aVar = this.f3849a;
        return aVar != null ? aVar.b() : "";
    }

    public void showFromBid() {
        f.a().f(this.b, "niv", true);
        a aVar = this.f3849a;
        if (aVar != null) {
            aVar.a((String) null, (String) null, (String) null);
        }
    }

    public void setRewardVideoListener(NewInterstitialListener newInterstitialListener) {
        a aVar = this.f3849a;
        if (aVar != null) {
            aVar.a(new com.mbridge.msdk.newinterstitial.a.a(newInterstitialListener, this.b, true));
        }
    }

    public void setInterstitialVideoListener(NewInterstitialListener newInterstitialListener) {
        a aVar = this.f3849a;
        if (aVar != null) {
            aVar.a(new com.mbridge.msdk.newinterstitial.a.a(newInterstitialListener, this.b, true));
        }
    }

    public void clearVideoCache() {
        try {
            if (this.f3849a != null) {
                x.a();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void playVideoMute(int i) {
        a aVar = this.f3849a;
        if (aVar != null) {
            aVar.a(i);
        }
    }

    public void setIVRewardEnable(int i, int i2) {
        a aVar = this.f3849a;
        if (aVar != null) {
            aVar.a(i, com.mbridge.msdk.foundation.same.a.z, i2);
        }
    }

    public void setIVRewardEnable(int i, double d) {
        a aVar = this.f3849a;
        if (aVar != null) {
            aVar.a(i, com.mbridge.msdk.foundation.same.a.y, (int) (d * 100.0d));
        }
    }

    public void setAlertDialogText(String str, String str2, String str3, String str4) {
        a aVar = this.f3849a;
        if (aVar != null) {
            aVar.a(str, str2, str3, str4);
        }
    }
}
