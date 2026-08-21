package com.mbridge.msdk.out;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.c.b;
import com.mbridge.msdk.foundation.same.report.f;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.reward.a.a;
import com.mbridge.msdk.video.bt.module.b.g;

/* JADX INFO: loaded from: classes2.dex */
public class MBRewardVideoHandler {
    private static final String AD_TYPE = "rv";
    private static final String TAG = "MBRewardVideoHandler";
    private a controller;
    private String unitId;

    public MBRewardVideoHandler(Context context, String str, String str2) {
        if (com.mbridge.msdk.foundation.controller.a.f().j() == null && context != null) {
            com.mbridge.msdk.foundation.controller.a.f().b(context);
        }
        String strF = ae.f(str2);
        if (!TextUtils.isEmpty(strF)) {
            ae.a(str2, strF);
        }
        initMBRewardVideoHandler(str, str2);
    }

    public MBRewardVideoHandler(String str, String str2) {
        String strF = ae.f(str2);
        if (!TextUtils.isEmpty(strF)) {
            ae.a(str2, strF);
        }
        initMBRewardVideoHandler(str, str2);
    }

    private void initMBRewardVideoHandler(String str, String str2) {
        this.unitId = str2;
        try {
            if (this.controller == null) {
                a aVar = new a();
                this.controller = aVar;
                aVar.a(false);
            }
            this.controller.b(str, str2);
        } catch (Throwable th) {
            z.c(TAG, th.getMessage(), th);
        }
    }

    public void load() {
        f.a().a(this.unitId, "rv", false);
        a aVar = this.controller;
        if (aVar != null) {
            aVar.d(true);
        }
    }

    public void loadFormSelfFilling() {
        f.a().a(this.unitId, "rv", false);
        a aVar = this.controller;
        if (aVar != null) {
            aVar.d(false);
        }
    }

    public boolean isReady() {
        a aVar = this.controller;
        if (aVar != null) {
            boolean zE = aVar.e(false);
            if (zE) {
                f.a().d(this.unitId, "rv", false);
            } else {
                f.a().e(this.unitId, "rv", false);
            }
            return zE;
        }
        f.a().e(this.unitId, "rv", false);
        return false;
    }

    public String getRequestId() {
        a aVar = this.controller;
        return aVar != null ? aVar.b() : "";
    }

    public void show() {
        f.a().f(this.unitId, "rv", false);
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a((String) null, (String) null, (String) null);
        }
    }

    public void show(String str) {
        f.a().f(this.unitId, "rv", false);
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a((String) null, str, (String) null);
        }
    }

    public void show(String str, String str2) {
        f.a().f(this.unitId, "rv", false);
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a((String) null, str, str2);
        }
    }

    public void setRewardVideoListener(g gVar) {
        a aVar = this.controller;
        if (aVar != null) {
            aVar.a(new com.mbridge.msdk.video.bt.module.b.a(gVar, this.unitId, false));
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

    public void clearBitmapCache() {
        try {
            b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a();
        } catch (Throwable th) {
            z.d(TAG, th.getMessage());
        }
    }
}
