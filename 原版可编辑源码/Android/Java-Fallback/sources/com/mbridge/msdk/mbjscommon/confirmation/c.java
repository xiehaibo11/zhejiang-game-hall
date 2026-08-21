package com.mbridge.msdk.mbjscommon.confirmation;

public final class c implements com.mbridge.msdk.widget.dialog.a {
    private static java.lang.String a = "MBAlertDialogProxyListener";
    private com.mbridge.msdk.widget.dialog.a b;
    private android.content.Context c;
    private com.mbridge.msdk.foundation.entity.CampaignEx d;
    private java.lang.String e;
    private java.lang.String f;
    private int g;

    static {
            return
    }

    public c(com.mbridge.msdk.widget.dialog.a r2, android.content.Context r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            r0 = 2
            r1.g = r0
            r1.b = r2
            r1.c = r3
            r1.d = r4
            r1.e = r5
            r1.f = r6
            return
    }

    @Override
    public final void a() {
            r9 = this;
            com.mbridge.msdk.mbjscommon.confirmation.e r0 = com.mbridge.msdk.mbjscommon.confirmation.e.a()
            r0.b()
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.confirmation.c.a
            java.lang.String r1 = "onDialogCancel"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            android.content.Context r2 = r9.c
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r9.d
            java.lang.String r4 = r9.e
            java.lang.String r5 = r9.f
            int r6 = r9.g
            r7 = 1
            r8 = 2
            com.mbridge.msdk.foundation.same.report.e.a(r2, r3, r4, r5, r6, r7, r8)
            com.mbridge.msdk.widget.dialog.a r0 = r9.b
            if (r0 == 0) goto L24
            r0.a()
        L24:
            return
    }

    public final void a(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    @Override
    public final void b() {
            r9 = this;
            com.mbridge.msdk.mbjscommon.confirmation.e r0 = com.mbridge.msdk.mbjscommon.confirmation.e.a()
            r0.b()
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.confirmation.c.a
            java.lang.String r1 = "onDialogConfirm"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            android.content.Context r2 = r9.c
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r9.d
            java.lang.String r4 = r9.e
            java.lang.String r5 = r9.f
            int r6 = r9.g
            r7 = 0
            r8 = 2
            com.mbridge.msdk.foundation.same.report.e.a(r2, r3, r4, r5, r6, r7, r8)
            com.mbridge.msdk.widget.dialog.a r0 = r9.b
            if (r0 == 0) goto L24
            r0.b()
        L24:
            return
    }

    @Override
    public final void c() {
            r9 = this;
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.confirmation.c.a
            java.lang.String r1 = "onDialogCancel"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            android.content.Context r2 = r9.c
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r9.d
            java.lang.String r4 = r9.e
            java.lang.String r5 = r9.f
            int r6 = r9.g
            r7 = 2
            r8 = 2
            com.mbridge.msdk.foundation.same.report.e.a(r2, r3, r4, r5, r6, r7, r8)
            com.mbridge.msdk.widget.dialog.a r0 = r9.b
            if (r0 == 0) goto L1d
            r0.c()
        L1d:
            return
    }
}
