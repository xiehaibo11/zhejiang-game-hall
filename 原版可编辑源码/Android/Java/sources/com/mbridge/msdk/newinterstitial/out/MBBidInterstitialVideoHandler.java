package com.mbridge.msdk.newinterstitial.out;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.reward.a.a;

public class MBBidInterstitialVideoHandler {
    private a a;

    public MBBidInterstitialVideoHandler(Context context, String str, String str2) {
        if (com.mbridge.msdk.foundation.controller.a.f().j() == null && context != null) {
            com.mbridge.msdk.foundation.controller.a.f().b(context);
        }
        String strF = ae.f(str2);
        if (!TextUtils.isEmpty(strF)) {
            ae.a(str2, strF);
        }
        a(str, str2);
    }

    public MBBidInterstitialVideoHandler(String str, String str2) {
        a(str, str2);
    }

    private void a(String str, String str2) {
        try {
            if (this.a == null) {
                a aVar = new a();
                this.a = aVar;
                aVar.a(true);
                this.a.b(true);
            }
            this.a.b(str, str2);
        } catch (Throwable th) {
            z.c("MBBidInterstitialVideoHandler", th.getMessage(), th);
        }
    }

    public void loadFromBid(String str) {
        a aVar = this.a;
        if (aVar != null) {
            aVar.a(true, str);
        }
    }

    public void loadFormSelfFilling() {
        a aVar = this.a;
        if (aVar != null) {
            aVar.d(false);
        }
    }

    public boolean isBidReady() {
        a aVar = this.a;
        if (aVar != null) {
            return aVar.e(true);
        }
        return false;
    }

    public String getRequestId() {
        a aVar = this.a;
        return aVar != null ? aVar.b() : "";
    }

    public void showFromBid() {
        a aVar = this.a;
        if (aVar != null) {
            aVar.a((String) null, (String) null, (String) null);
        }
    }

    public void setRewardVideoListener(NewInterstitialListener newInterstitialListener) {
        a aVar = this.a;
        if (aVar != null) {
            aVar.a(new com.mbridge.msdk.newinterstitial.a.a(newInterstitialListener));
        }
    }

    public void setInterstitialVideoListener(NewInterstitialListener newInterstitialListener) {
        a aVar = this.a;
        if (aVar != null) {
            aVar.a(new com.mbridge.msdk.newinterstitial.a.a(newInterstitialListener));
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
