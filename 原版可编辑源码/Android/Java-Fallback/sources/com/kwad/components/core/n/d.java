package com.kwad.components.core.n;

public abstract class d extends android.app.AlertDialog {
    public android.app.Activity mActivity;
    protected final android.content.Context mContext;
    protected android.view.ViewGroup zv;

    protected d(android.app.Activity r1) {
            r0 = this;
            r0.<init>(r1)
            r0.setOwnerActivity(r1)
            r0.mActivity = r1
            android.content.Context r1 = com.kwad.sdk.m.l.wrapContextIfNeed(r1)
            r0.mContext = r1
            return
    }

    protected android.view.ViewGroup cf() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void dismiss() {
            r1 = this;
            android.app.Activity r0 = r1.mActivity
            if (r0 != 0) goto L5
            return
        L5:
            com.kwad.sdk.m.l.h(r0)     // Catch: java.lang.Throwable -> L8
        L8:
            super.dismiss()     // Catch: java.lang.Throwable -> Lc
            return
        Lc:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            return
    }

    @Override
    public <T extends android.view.View> T findViewById(int r2) {
            r1 = this;
            android.view.ViewGroup r0 = r1.zv
            android.view.View r0 = r0.findViewById(r2)
            if (r0 == 0) goto L9
            return r0
        L9:
            android.view.View r2 = super.findViewById(r2)
            return r2
    }

    protected abstract void g(android.view.View r1);

    protected abstract int getLayoutId();

    protected boolean na() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            int r3 = r2.getLayoutId()     // Catch: java.lang.Throwable -> L69
            if (r3 == 0) goto L19
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Throwable -> L69
            int r0 = r2.getLayoutId()     // Catch: java.lang.Throwable -> L69
            r1 = 0
            android.view.View r3 = com.kwad.sdk.m.l.inflate(r3, r0, r1)     // Catch: java.lang.Throwable -> L69
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3     // Catch: java.lang.Throwable -> L69
        L16:
            r2.zv = r3     // Catch: java.lang.Throwable -> L69
            goto L1e
        L19:
            android.view.ViewGroup r3 = r2.cf()     // Catch: java.lang.Throwable -> L69
            goto L16
        L1e:
            android.view.ViewGroup r3 = r2.zv     // Catch: java.lang.Throwable -> L69
            r2.setContentView(r3)     // Catch: java.lang.Throwable -> L69
            boolean r3 = r2.na()     // Catch: java.lang.Throwable -> L69
            r2.setCanceledOnTouchOutside(r3)     // Catch: java.lang.Throwable -> L69
            android.view.Window r3 = r2.getWindow()     // Catch: java.lang.Throwable -> L69
            android.view.View r3 = r3.getDecorView()     // Catch: java.lang.Throwable -> L69
            r0 = 0
            r3.setPadding(r0, r0, r0, r0)     // Catch: java.lang.Throwable -> L69
            android.view.Window r3 = r2.getWindow()     // Catch: java.lang.Throwable -> L69
            android.graphics.drawable.ColorDrawable r1 = new android.graphics.drawable.ColorDrawable     // Catch: java.lang.Throwable -> L69
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L69
            r3.setBackgroundDrawable(r1)     // Catch: java.lang.Throwable -> L69
            android.view.Window r3 = r2.getWindow()     // Catch: java.lang.Throwable -> L69
            r0 = 131072(0x20000, float:1.83671E-40)
            r3.clearFlags(r0)     // Catch: java.lang.Throwable -> L69
            android.view.Window r3 = r2.getWindow()     // Catch: java.lang.Throwable -> L69
            android.view.WindowManager$LayoutParams r3 = r3.getAttributes()     // Catch: java.lang.Throwable -> L69
            r0 = -1
            r3.width = r0     // Catch: java.lang.Throwable -> L69
            r3.height = r0     // Catch: java.lang.Throwable -> L69
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Throwable -> L69
            r0.setAttributes(r3)     // Catch: java.lang.Throwable -> L69
            r3 = 1
            r2.setCancelable(r3)     // Catch: java.lang.Throwable -> L69
            android.view.ViewGroup r3 = r2.zv     // Catch: java.lang.Throwable -> L69
            r2.g(r3)     // Catch: java.lang.Throwable -> L69
            return
        L69:
            r3 = move-exception
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r0 = r0.getIsExternal()
            if (r0 == 0) goto L7b
            com.kwad.components.core.d.a.b(r3)
            r2.dismiss()
            return
        L7b:
            throw r3
    }

    @Override
    protected void onStart() {
            r1 = this;
            super.onStart()
            r0 = 0
            r1.setTitle(r0)
            return
    }

    @Override
    public void setContentView(int r3) {
            r2 = this;
            super.setContentView(r3)
            android.content.Context r0 = r2.mContext
            r1 = 0
            android.view.View r3 = com.kwad.sdk.m.l.inflate(r0, r3, r1)
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r2.zv = r3
            return
    }
}
