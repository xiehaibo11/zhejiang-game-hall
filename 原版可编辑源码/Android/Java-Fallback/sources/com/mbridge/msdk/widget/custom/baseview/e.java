package com.mbridge.msdk.widget.custom.baseview;

final class e {
    private boolean a;
    private int b;

    public e(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton r2) {
            r1 = this;
            r1.<init>()
            boolean r0 = r2.isEnabled()
            r1.a = r0
            int r2 = r2.getProgress()
            r1.b = r2
            return
    }

    public final void a(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton r1) {
            r0 = this;
            int r1 = r1.getProgress()
            r0.b = r1
            return
    }

    public final void b(com.mbridge.msdk.widget.custom.baseview.MBCircularProgressButton r3) {
            r2 = this;
            int r0 = r3.getProgress()
            int r1 = r2.b
            if (r0 == r1) goto L10
            int r0 = r3.getProgress()
            r3.setProgress(r0)
            goto L1f
        L10:
            boolean r0 = r3.isEnabled()
            boolean r1 = r2.a
            if (r0 == r1) goto L1f
            boolean r0 = r3.isEnabled()
            r3.setEnabled(r0)
        L1f:
            return
    }
}
