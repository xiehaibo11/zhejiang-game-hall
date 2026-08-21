package com.mbridge.msdk.advanced.c;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.NativeAdvancedAdListener;
import java.util.Random;

/* JADX INFO: compiled from: NativeAdvancedShowListenerImpl.java */
/* JADX INFO: loaded from: classes2.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private NativeAdvancedAdListener f3087a;
    private CampaignEx b;
    private boolean c;
    private c d;

    public d(c cVar, NativeAdvancedAdListener nativeAdvancedAdListener, double d, CampaignEx campaignEx) {
        this.d = cVar;
        this.f3087a = nativeAdvancedAdListener;
        this.b = campaignEx;
        this.c = a(d, campaignEx);
    }

    public final void a(MBridgeIds mBridgeIds) {
        c cVar = this.d;
        if (cVar != null) {
            cVar.f3084a = true;
        }
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("load_to=");
        stringBuffer.append("0");
        stringBuffer.append("&");
        stringBuffer.append("allow_skip=");
        stringBuffer.append(this.d.c());
        stringBuffer.append("&");
        e.a(com.mbridge.msdk.foundation.controller.a.f().j(), this.b, mBridgeIds.getUnitId(), stringBuffer.toString());
        NativeAdvancedAdListener nativeAdvancedAdListener = this.f3087a;
        if (nativeAdvancedAdListener == null || this.c) {
            return;
        }
        nativeAdvancedAdListener.onLogImpression(mBridgeIds);
    }

    public final void a(MBridgeIds mBridgeIds, String str) {
        e.b(com.mbridge.msdk.foundation.controller.a.f().j(), this.b, mBridgeIds.getUnitId(), str);
    }

    public final void b(MBridgeIds mBridgeIds) {
        NativeAdvancedAdListener nativeAdvancedAdListener = this.f3087a;
        if (nativeAdvancedAdListener == null || this.c) {
            return;
        }
        nativeAdvancedAdListener.onClick(mBridgeIds);
    }

    public final void c(MBridgeIds mBridgeIds) {
        NativeAdvancedAdListener nativeAdvancedAdListener = this.f3087a;
        if (nativeAdvancedAdListener != null) {
            nativeAdvancedAdListener.onClose(mBridgeIds);
            c cVar = this.d;
            if (cVar != null) {
                cVar.f3084a = false;
            }
        }
    }

    public final void d(MBridgeIds mBridgeIds) {
        NativeAdvancedAdListener nativeAdvancedAdListener = this.f3087a;
        if (nativeAdvancedAdListener != null) {
            nativeAdvancedAdListener.onLeaveApp(mBridgeIds);
        }
    }

    public final void e(MBridgeIds mBridgeIds) {
        NativeAdvancedAdListener nativeAdvancedAdListener = this.f3087a;
        if (nativeAdvancedAdListener != null) {
            nativeAdvancedAdListener.showFullScreen(mBridgeIds);
        }
    }

    public final void f(MBridgeIds mBridgeIds) {
        NativeAdvancedAdListener nativeAdvancedAdListener = this.f3087a;
        if (nativeAdvancedAdListener != null) {
            nativeAdvancedAdListener.closeFullScreen(mBridgeIds);
        }
    }

    private boolean a(double d, CampaignEx campaignEx) {
        long j;
        com.mbridge.msdk.c.a aVarB;
        try {
            String strK = com.mbridge.msdk.foundation.controller.a.f().k();
            long j2 = 0;
            if (TextUtils.isEmpty(strK) || (aVarB = com.mbridge.msdk.c.b.a().b(strK)) == null) {
                j = 0;
            } else {
                long jW = aVarB.W() * 1000;
                long jAg = 1000 * aVarB.ag();
                j = jW;
                j2 = jAg;
            }
            z.d("NativeAdvancedShowListenerImpl", "cbp : " + d + " plct : " + j2 + " plctb : " + j);
            if (campaignEx != null) {
                if (campaignEx.isSpareOffer(j2, j)) {
                    campaignEx.setSpareOfferFlag(1);
                    return true;
                }
                campaignEx.setSpareOfferFlag(0);
            }
            if (campaignEx == null || campaignEx.isBidCampaign() || d == 1.0d) {
                return false;
            }
            double dNextDouble = new Random().nextDouble();
            StringBuilder sb = new StringBuilder();
            sb.append("hit : ");
            sb.append(dNextDouble);
            sb.append(" ");
            sb.append(dNextDouble > d);
            z.d("NativeAdvancedShowListenerImpl", sb.toString());
            return dNextDouble > d;
        } catch (Exception e) {
            z.c("NativeAdvancedShowListenerImpl", "CBPERROR", e);
            return false;
        }
    }
}
