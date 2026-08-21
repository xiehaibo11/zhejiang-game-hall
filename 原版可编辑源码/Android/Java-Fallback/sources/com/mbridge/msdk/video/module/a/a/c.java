package com.mbridge.msdk.video.module.a.a;

public class c extends com.mbridge.msdk.video.module.a.a.j {
    public c(com.mbridge.msdk.foundation.entity.CampaignEx r1, com.mbridge.msdk.videocommon.download.a r2, com.mbridge.msdk.videocommon.b.d r3, java.lang.String r4, java.lang.String r5, com.mbridge.msdk.video.module.a.a r6, int r7, boolean r8) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    @Override
    public void a(int r10, java.lang.Object r11) {
            r9 = this;
            super.a(r10, r11)
            boolean r0 = r9.a
            if (r0 == 0) goto Ld4
            r0 = 105(0x69, float:1.47E-43)
            if (r10 == r0) goto L4c
            r1 = 106(0x6a, float:1.49E-43)
            if (r10 == r1) goto L4c
            r1 = 113(0x71, float:1.58E-43)
            if (r10 == r1) goto L4c
            r0 = 122(0x7a, float:1.71E-43)
            if (r10 == r0) goto L47
            r0 = 1
            switch(r10) {
                case 109: goto L3e;
                case 110: goto L22;
                case 111: goto L1d;
                default: goto L1b;
            }
        L1b:
            goto Ld4
        L1d:
            r9.a(r0)
            goto Ld4
        L22:
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.b
            if (r10 == 0) goto L36
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.b
            int r10 = r10.getDynamicTempCode()
            r1 = 5
            if (r10 != r1) goto L36
            java.lang.String r10 = r11.toString()
            r9.b(r10)
        L36:
            r9.b(r0)
            r9.a(r0)
            goto Ld4
        L3e:
            r10 = 2
            r9.b(r10)
            r9.a(r10)
            goto Ld4
        L47:
            r9.a()
            goto Ld4
        L4c:
            com.mbridge.msdk.foundation.controller.a r11 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r11 = r11.j()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b
            com.mbridge.msdk.video.module.b.b.d(r11, r1)
            if (r10 == r0) goto Ld4
            r6 = 1
            r7 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.b
            java.lang.String r10 = r10.getNoticeUrl()
            boolean r11 = android.text.TextUtils.isEmpty(r10)
            if (r11 != 0) goto Lc2
            java.lang.String r11 = com.mbridge.msdk.foundation.same.a.q
            boolean r11 = r10.contains(r11)
            java.lang.String r0 = "=2"
            if (r11 != 0) goto L8d
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r10)
            java.lang.String r10 = "&"
            r11.append(r10)
            java.lang.String r10 = com.mbridge.msdk.foundation.same.a.q
            r11.append(r10)
            r11.append(r0)
            java.lang.String r10 = r11.toString()
            goto Lc2
        L8d:
            android.net.Uri r11 = android.net.Uri.parse(r10)
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.q
            java.lang.String r11 = r11.getQueryParameter(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.q
            r1.append(r2)
            java.lang.String r2 = "="
            r1.append(r2)
            r1.append(r11)
            java.lang.String r11 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.q
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r10 = r10.replace(r11, r0)
        Lc2:
            r5 = r10
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r10.j()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r9.b
            java.lang.String r4 = r9.g
            int r8 = com.mbridge.msdk.click.a.a.i
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7, r8)
        Ld4:
            return
    }
}
