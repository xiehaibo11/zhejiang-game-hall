package com.mbridge.msdk.widget;

public class MBAdChoice extends com.mbridge.msdk.widget.MBImageView {
    private static java.lang.String a = "MBAdChoice";
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private android.content.Context e;


    static {
            return
    }

    public MBAdChoice(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = ""
            r1.b = r0
            r1.c = r0
            r1.d = r0
            r1.e = r2
            r1.b()
            return
    }

    public MBAdChoice(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r2 = ""
            r0.b = r2
            r0.c = r2
            r0.d = r2
            r0.e = r1
            r0.b()
            return
    }

    public MBAdChoice(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r2 = ""
            r0.b = r2
            r0.c = r2
            r0.d = r2
            r0.e = r1
            r0.b()
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.widget.MBAdChoice.a
            return r0
    }

    private void b() {
            r1 = this;
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_CENTER
            r1.setScaleType(r0)
            r0 = 1
            r1.setClickable(r0)
            return
    }

    @Override
    public boolean performClick() {
            r3 = this;
            java.lang.String r0 = r3.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            android.content.Context r0 = r3.e
            java.lang.String r1 = r3.d
            r2 = 0
            com.mbridge.msdk.foundation.tools.ad.a(r0, r1, r2)
        L10:
            r0 = 1
            return r0
    }

    public void setCampaign(com.mbridge.msdk.out.Campaign r4) {
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
            r1.<init>(r3)
            r4.a(r0, r1)
        L93:
            return
    }
}
