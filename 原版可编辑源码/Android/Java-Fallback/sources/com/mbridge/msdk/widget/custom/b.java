package com.mbridge.msdk.widget.custom;

public final class b {
    private com.mbridge.msdk.widget.custom.DownloadMessageDialog a;
    private android.content.Context b;
    private final com.mbridge.msdk.widget.custom.CustomViewMessageWrap c;
    private final com.mbridge.msdk.widget.custom.a d;
    private com.mbridge.msdk.widget.custom.a.d e;

    public b(com.mbridge.msdk.widget.custom.DownloadMessageDialog r1, android.content.Context r2, com.mbridge.msdk.widget.custom.CustomViewMessageWrap r3, com.mbridge.msdk.widget.custom.a r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            return
    }

    public final android.view.View a(int r9, int r10) throws java.lang.Exception {
            r8 = this;
            android.content.Context r0 = r8.b
            com.mbridge.msdk.widget.custom.b.c r0 = com.mbridge.msdk.widget.custom.b.c.a(r0)
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r1 = r8.c
            java.lang.String r1 = r1.getLayoutFilePath()
            android.view.View r0 = r0.a(r1)
            com.mbridge.msdk.widget.custom.a.d r7 = new com.mbridge.msdk.widget.custom.a.d
            com.mbridge.msdk.widget.custom.CustomViewMessageWrap r2 = r8.c
            com.mbridge.msdk.widget.custom.a r3 = r8.d
            com.mbridge.msdk.widget.custom.DownloadMessageDialog r4 = r8.a
            r1 = r7
            r5 = r9
            r6 = r10
            r1.<init>(r2, r3, r4, r5, r6)
            r8.e = r7
            r9 = r0
            android.view.ViewGroup r9 = (android.view.ViewGroup) r9
            r7.a(r9)
            return r0
    }

    public final com.mbridge.msdk.widget.custom.baseview.MBButton a() {
            r1 = this;
            com.mbridge.msdk.widget.custom.a.d r0 = r1.e
            if (r0 == 0) goto L9
            com.mbridge.msdk.widget.custom.baseview.MBButton r0 = r0.a()
            return r0
        L9:
            r0 = 0
            return r0
    }
}
