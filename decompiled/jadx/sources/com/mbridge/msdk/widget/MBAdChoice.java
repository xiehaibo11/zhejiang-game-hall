package com.mbridge.msdk.widget;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.out.BaseTrackingListener;

/* JADX INFO: loaded from: classes3.dex */
public class MBAdChoice extends MBImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f4407a = "MBAdChoice";
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
        To view partially-correct add '--show-bad-code' argument
    */
    public void setCampaign(com.mbridge.msdk.out.Campaign r4) {
        /*
            r3 = this;
            boolean r0 = r4 instanceof com.mbridge.msdk.foundation.entity.CampaignEx
            if (r0 == 0) goto L93
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4
            r0 = 1
            r1 = 0
            if (r4 == 0) goto L40
            com.mbridge.msdk.foundation.entity.CampaignEx$a r2 = r4.getAdchoice()
            if (r2 == 0) goto L40
            com.mbridge.msdk.foundation.entity.CampaignEx$a r2 = r4.getAdchoice()
            java.lang.String r2 = r2.e()
            r3.b = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L40
            com.mbridge.msdk.foundation.entity.CampaignEx$a r2 = r4.getAdchoice()
            java.lang.String r2 = r2.d()
            r3.d = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L40
            com.mbridge.msdk.foundation.entity.CampaignEx$a r4 = r4.getAdchoice()
            java.lang.String r4 = r4.f()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L40
            r4 = r0
            goto L41
        L40:
            r4 = r1
        L41:
            if (r4 != 0) goto L7a
            com.mbridge.msdk.c.b r4 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            com.mbridge.msdk.c.a r4 = r4.b(r2)
            if (r4 == 0) goto L78
            java.lang.String r2 = r4.ax()
            r3.b = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L78
            java.lang.String r2 = r4.az()
            r3.d = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L78
            java.lang.String r4 = r4.ay()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L78
            goto L79
        L78:
            r0 = r1
        L79:
            r4 = r0
        L7a:
            java.lang.String r0 = r3.b
            r3.setImageUrl(r0)
            if (r4 == 0) goto L93
            android.content.Context r4 = r3.e
            if (r4 == 0) goto L93
            com.mbridge.msdk.foundation.same.c.b r4 = com.mbridge.msdk.foundation.same.c.b.a(r4)
            java.lang.String r0 = r3.b
            com.mbridge.msdk.widget.MBAdChoice$1 r1 = new com.mbridge.msdk.widget.MBAdChoice$1
            r1.<init>()
            r4.a(r0, r1)
        L93:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.widget.MBAdChoice.setCampaign(com.mbridge.msdk.out.Campaign):void");
    }

    @Override // android.view.View
    public boolean performClick() {
        if (TextUtils.isEmpty(this.d)) {
            return true;
        }
        ad.a(this.e, this.d, (BaseTrackingListener) null);
        return true;
    }
}
