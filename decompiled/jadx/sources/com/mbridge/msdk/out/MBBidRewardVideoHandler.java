package com.mbridge.msdk.out;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.report.f;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.reward.a.a;
import com.mbridge.msdk.video.bt.module.b.g;

/* JADX INFO: loaded from: classes2.dex */
public class MBBidRewardVideoHandler {
    private static final String AD_TYPE = "rv";
    private static final String TAG = "MBBidRewardVideoHandler";
    private a controller;
    private String unitId;

    public MBBidRewardVideoHandler(Context context, String str, String str2) {
        if (com.mbridge.msdk.foundation.controller.a.f().j() == null && context != null) {
            com.mbridge.msdk.foundation.controller.a.f().b(context);
        }
        String strF = ae.f(str2);
        if (!TextUtils.isEmpty(strF)) {
            ae.a(str2, strF);
        }
        initMBBidRewardVideoHandler(str, str2);
    }

    public MBBidRewardVideoHandler(String str, String str2) {
        String strF = ae.f(str2);
        if (!TextUtils.isEmpty(strF)) {
            ae.a(str2, strF);
        }
        initMBBidRewardVideoHandler(str, str2);
    }

    private void initMBBidRewardVideoHandler(String str, String str2) {
        this.unitId = str2;
        try {
            if (this.controller == null) {
                a aVar = new a();
                this.controller = aVar;
                aVar.a(false);
                this.controller.b(true);
            }
            this.controller.b(str, str2);
        } catch (Throwable th) {
            z.c(TAG, th.getMessage(), th);
        }
    }

    public void loadFromBid(String str) {
        f.a().a(this.unitId, "rv", true);
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a(true, str);
        }
    }

    public String getRequestId() {
        a aVar = this.controller;
        return aVar != null ? aVar.b() : "";
    }

    public boolean isBidReady() {
        a aVar = this.controller;
        if (aVar != null) {
            boolean zE = aVar.e(false);
            if (zE) {
                f.a().d(this.unitId, "rv", true);
            } else {
                f.a().e(this.unitId, "rv", true);
            }
            return zE;
        }
        f.a().e(this.unitId, "rv", false);
        return false;
    }

    public void showFromBid() {
        f.a().f(this.unitId, "rv", true);
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a((String) null, (String) null, (String) null);
        }
    }

    public void showFromBid(String str) {
        f.a().f(this.unitId, "rv", true);
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a((String) null, str, (String) null);
        }
    }

    public void showFromBid(String str, String str2) {
        f.a().f(this.unitId, "rv", true);
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a((String) null, str, str2);
        }
    }

    public void setRewardVideoListener(g gVar) {
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a(new com.mbridge.msdk.video.bt.module.b.a(gVar, this.unitId, true));
        }
    }

    public void clearVideoCache() {
        try {
            if (this.controller != null) {
                x.a();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void playVideoMute(int i) {
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a(i);
        }
    }

    public void setAlertDialogText(String str, String str2, String str3, String str4) {
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a(str, str2, str3, str4);
        }
    }

    public void setRewardPlus(boolean z) {
        a aVar = this.controller;
        if (aVar != null) {
            aVar.c(z);
        }
    }
}
