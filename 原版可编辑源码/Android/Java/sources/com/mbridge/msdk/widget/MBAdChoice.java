package com.mbridge.msdk.widget;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.mbridge.msdk.c.b;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.c.c;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.BaseTrackingListener;
import com.mbridge.msdk.out.Campaign;

public class MBAdChoice extends MBImageView {
    private static String a = "MBAdChoice";
    private String b;
    private String c;
    private String d;
    private Context e;

    public MBAdChoice(Context context) {
        super(context);
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = context;
        b();
    }

    public MBAdChoice(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = context;
        b();
    }

    public MBAdChoice(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = context;
        b();
    }

    private void b() {
        setScaleType(ImageView.ScaleType.FIT_CENTER);
        setClickable(true);
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0040  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0078  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void setCampaign(Campaign campaign) {
        boolean z;
        Context context;
        if (campaign instanceof CampaignEx) {
            CampaignEx campaignEx = (CampaignEx) campaign;
            if (campaignEx == null || campaignEx.getAdchoice() == null) {
                z = false;
            } else {
                String strE = campaignEx.getAdchoice().e();
                this.b = strE;
                if (!TextUtils.isEmpty(strE)) {
                    String strD = campaignEx.getAdchoice().d();
                    this.d = strD;
                    if (!TextUtils.isEmpty(strD) && !TextUtils.isEmpty(campaignEx.getAdchoice().f())) {
                        z = true;
                    }
                }
            }
            if (!z) {
                com.mbridge.msdk.c.a aVarB = b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
                if (aVarB != null) {
                    String strAx = aVarB.ax();
                    this.b = strAx;
                    if (!TextUtils.isEmpty(strAx)) {
                        String strAz = aVarB.az();
                        this.d = strAz;
                        boolean z2 = (TextUtils.isEmpty(strAz) || TextUtils.isEmpty(aVarB.ay())) ? false : true;
                        z = z2;
                    }
                }
            }
            setImageUrl(this.b);
            if (!z || (context = this.e) == null) {
                return;
            }
            com.mbridge.msdk.foundation.same.c.b.a(context).a(this.b, new c() {
                @Override
                public final void onSuccessLoad(Bitmap bitmap, String str) {
                    MBAdChoice.this.setImageBitmap(bitmap);
                }

                @Override
                public final void onFailedLoad(String str, String str2) {
                    z.d(MBAdChoice.a, "AD choice load failed:" + str);
                }
            });
        }
    }

    @Override
    public boolean performClick() {
        if (TextUtils.isEmpty(this.d)) {
            return true;
        }
        ad.a(this.e, this.d, (BaseTrackingListener) null);
        return true;
    }
}
