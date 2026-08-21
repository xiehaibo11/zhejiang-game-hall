package com.kwad.components.core.n;

public abstract class f extends com.kwad.sdk.api.proxy.IFragmentActivityProxy {
    private final com.kwad.sdk.l.a.a mBackPressDelete;
    public android.content.Context mContext;
    private final com.kwad.components.core.n.a.a mPageMonitor;
    public android.view.View mRootView;

    public f() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.n.a.a r0 = new com.kwad.components.core.n.a.a
            r0.<init>()
            r1.mPageMonitor = r0
            com.kwad.sdk.l.a.a r0 = new com.kwad.sdk.l.a.a
            r0.<init>()
            r1.mBackPressDelete = r0
            return
    }

    public void addBackPressable(com.kwad.sdk.l.a.b r2) {
            r1 = this;
            com.kwad.sdk.l.a.a r0 = r1.mBackPressDelete
            r0.addBackPressable(r2)
            return
    }

    public void addBackPressable(com.kwad.sdk.l.a.b r2, int r3) {
            r1 = this;
            com.kwad.sdk.l.a.a r0 = r1.mBackPressDelete
            r0.addBackPressable(r2, r3)
            return
    }

    @Override
    public <T extends android.view.View> T findViewById(int r2) {
            r1 = this;
            android.view.View r0 = r1.mRootView
            android.view.View r0 = r0.findViewById(r2)
            if (r0 == 0) goto L9
            return r0
        L9:
            android.view.View r2 = super.findViewById(r2)
            return r2
    }

    @Override
    public android.content.Intent getIntent() {
            r1 = this;
            android.content.Intent r0 = super.getIntent()
            com.kwad.components.core.t.j.c(r0)
            return r0
    }

    protected abstract java.lang.String getPageName();

    @Override
    public void onBackPressed() {
            r1 = this;
            com.kwad.sdk.l.a.a r0 = r1.mBackPressDelete
            boolean r0 = r0.bP()
            if (r0 != 0) goto Lb
            super.onBackPressed()
        Lb:
            return
    }

    @Override
    public void onCreate(android.os.Bundle r4) {
            r3 = this;
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()     // Catch: java.lang.Throwable -> L45
            boolean r0 = r0.hasInitFinish()     // Catch: java.lang.Throwable -> L45
            if (r0 != 0) goto Le
            r3.finish()     // Catch: java.lang.Throwable -> L45
            return
        Le:
            super.onCreate(r4)     // Catch: java.lang.Throwable -> L45
            android.app.Activity r4 = r3.getActivity()     // Catch: java.lang.Throwable -> L45
            int r0 = com.kwad.sdk.R.style.Theme_AppCompat_Light_NoActionBar     // Catch: java.lang.Throwable -> L45
            r4.setTheme(r0)     // Catch: java.lang.Throwable -> L45
            android.app.Activity r4 = r3.getActivity()     // Catch: java.lang.Throwable -> L45
            android.content.Context r4 = com.kwad.sdk.m.l.wrapContextIfNeed(r4)     // Catch: java.lang.Throwable -> L45
            r3.mContext = r4     // Catch: java.lang.Throwable -> L45
            android.content.Intent r4 = r3.getIntent()     // Catch: java.lang.Throwable -> L45
            r0 = 0
            if (r4 == 0) goto L32
            java.lang.String r2 = "key_start_time"
            long r0 = r4.getLongExtra(r2, r0)     // Catch: java.lang.Throwable -> L45
        L32:
            com.kwad.components.core.n.a.a r4 = r3.mPageMonitor     // Catch: java.lang.Throwable -> L45
            java.lang.Class r2 = r3.getClass()     // Catch: java.lang.Throwable -> L45
            java.lang.String r2 = r2.getSimpleName()     // Catch: java.lang.Throwable -> L45
            r4.at(r2)     // Catch: java.lang.Throwable -> L45
            com.kwad.components.core.n.a.a r4 = r3.mPageMonitor     // Catch: java.lang.Throwable -> L45
            r4.y(r0)     // Catch: java.lang.Throwable -> L45
            return
        L45:
            r4 = move-exception
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r0 = r0.getIsExternal()
            if (r0 == 0) goto L57
            com.kwad.components.core.d.a.b(r4)
            r3.finish()
            return
        L57:
            throw r4
    }

    @Override
    public void onDestroy() {
            r2 = this;
            super.onDestroy()
            android.app.Activity r0 = r2.getActivity()
            android.view.Window r1 = r2.getWindow()
            com.kwad.components.core.t.f.destroyActivity(r0, r1)
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            super.onResume()
            com.kwad.components.core.n.a.a r0 = r1.mPageMonitor
            r1.getActivity()
            r0.pz()
            return
    }

    public void removeBackPressable(com.kwad.sdk.l.a.b r2) {
            r1 = this;
            com.kwad.sdk.l.a.a r0 = r1.mBackPressDelete
            r0.removeBackPressable(r2)
            return
    }

    @Override
    public void setContentView(int r3) {
            r2 = this;
            android.content.Context r0 = r2.mContext
            r1 = 0
            android.view.View r3 = com.kwad.sdk.m.l.inflate(r0, r3, r1)
            r2.mRootView = r3
            super.setContentView(r3)
            return
    }
}
