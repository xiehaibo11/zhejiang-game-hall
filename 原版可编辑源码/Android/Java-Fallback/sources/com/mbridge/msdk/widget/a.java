package com.mbridge.msdk.widget;

public abstract class a implements android.view.View.OnClickListener {
    private long a;

    public a() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            return
    }

    protected abstract void a(android.view.View r1);

    @Override
    public void onClick(android.view.View r7) {
            r6 = this;
            java.util.Calendar r0 = java.util.Calendar.getInstance()
            long r0 = r0.getTimeInMillis()
            long r2 = r6.a
            long r2 = r0 - r2
            r4 = 2000(0x7d0, double:9.88E-321)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L17
            r6.a = r0
            r6.a(r7)
        L17:
            return
    }
}
