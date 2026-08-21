package com.kwad.components.core.n;

public abstract class c extends com.kwad.sdk.api.proxy.IActivityProxy {
    private static final java.lang.String FRAGMENTS_TAG = "android:fragments";
    public static final java.lang.String KEY_START_TIME = "key_start_time";
    private final com.kwad.sdk.l.a.a mBackPressDelete;
    public android.content.Context mContext;
    private boolean mHasCallFinish;
    private final com.kwad.components.core.n.a.a mPageMonitor;
    public android.view.View mRootView;

    public c() {
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

    private void disableFragmentRestore(android.os.Bundle r2) {
            r1 = this;
            if (r2 == 0) goto L11
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r0 = r0.getIsExternal()
            if (r0 == 0) goto L11
            java.lang.String r0 = "android:fragments"
            r2.remove(r0)
        L11:
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

    protected boolean checkIntentData(android.content.Intent r1) {
            r0 = this;
            r1 = 1
            return r1
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
    public void finish() {
            r1 = this;
            boolean r0 = r1.mHasCallFinish
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.mHasCallFinish = r0
            super.finish()
            return
    }

    @Override
    public android.content.Intent getIntent() {
            r1 = this;
            android.content.Intent r0 = super.getIntent()
            com.kwad.components.core.t.j.c(r0)
            return r0
    }

    protected abstract int getLayoutId();

    protected abstract java.lang.String getPageName();

    protected abstract void initData();

    protected abstract void initView();

    protected boolean needAdaptionScreen() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected void onActivityCreate() {
            r0 = this;
            return
    }

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
    public void onCreate(android.os.Bundle r5) {
            r4 = this;
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()     // Catch: java.lang.Throwable -> L6e
            boolean r0 = r0.hasInitFinish()     // Catch: java.lang.Throwable -> L6e
            if (r0 != 0) goto Le
            r4.finish()     // Catch: java.lang.Throwable -> L6e
            return
        Le:
            super.onCreate(r5)     // Catch: java.lang.Throwable -> L6e
            android.app.Activity r0 = r4.getActivity()     // Catch: java.lang.Throwable -> L6e
            r1 = 16973838(0x103000e, float:2.406094E-38)
            r0.setTheme(r1)     // Catch: java.lang.Throwable -> L6e
            android.app.Activity r0 = r4.getActivity()     // Catch: java.lang.Throwable -> L6e
            android.content.Context r0 = com.kwad.sdk.m.l.wrapContextIfNeed(r0)     // Catch: java.lang.Throwable -> L6e
            r4.mContext = r0     // Catch: java.lang.Throwable -> L6e
            android.content.Intent r0 = r4.getIntent()     // Catch: java.lang.Throwable -> L6e
            boolean r1 = r4.checkIntentData(r0)     // Catch: java.lang.Throwable -> L6e
            if (r1 != 0) goto L33
            r4.finish()     // Catch: java.lang.Throwable -> L6e
            return
        L33:
            android.view.Window r1 = r4.getWindow()     // Catch: java.lang.Throwable -> L6e
            r2 = 16777216(0x1000000, float:2.3509887E-38)
            r1.setFlags(r2, r2)     // Catch: java.lang.Throwable -> L6e
            r1 = 0
            if (r0 == 0) goto L46
            java.lang.String r3 = "key_start_time"
            long r1 = r0.getLongExtra(r3, r1)     // Catch: java.lang.Throwable -> L6e
        L46:
            com.kwad.components.core.n.a.a r0 = r4.mPageMonitor     // Catch: java.lang.Throwable -> L6e
            java.lang.String r3 = r4.getPageName()     // Catch: java.lang.Throwable -> L6e
            r0.at(r3)     // Catch: java.lang.Throwable -> L6e
            com.kwad.components.core.n.a.a r0 = r4.mPageMonitor     // Catch: java.lang.Throwable -> L6e
            r0.y(r1)     // Catch: java.lang.Throwable -> L6e
            int r0 = r4.getLayoutId()     // Catch: java.lang.Throwable -> L6e
            if (r0 == 0) goto L5d
            r4.setContentView(r0)     // Catch: java.lang.Throwable -> L6e
        L5d:
            r4.initData()     // Catch: java.lang.Throwable -> L6e
            r4.initView()     // Catch: java.lang.Throwable -> L6e
            com.kwad.components.core.n.h r0 = com.kwad.components.core.n.h.py()     // Catch: java.lang.Throwable -> L6e
            r0.a(r4, r5)     // Catch: java.lang.Throwable -> L6e
            r4.onActivityCreate()     // Catch: java.lang.Throwable -> L6e
            return
        L6e:
            r5 = move-exception
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            boolean r0 = r0.getIsExternal()
            if (r0 == 0) goto L80
            com.kwad.components.core.d.a.b(r5)
            r4.finish()
            return
        L80:
            throw r5
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.kwad.components.core.n.h r0 = com.kwad.components.core.n.h.py()
            r0.g(r1)
            return
    }

    @Override
    public void onPause() {
            r1 = this;
            super.onPause()
            com.kwad.components.core.n.h r0 = com.kwad.components.core.n.h.py()
            r0.f(r1)
            return
    }

    @Override
    public void onPreCreate(android.os.Bundle r4) {
            r3 = this;
            super.onPreCreate(r4)
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()     // Catch: java.lang.Throwable -> L23
            boolean r0 = r0.getIsExternal()     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L27
            boolean r0 = r3.needAdaptionScreen()     // Catch: java.lang.Throwable -> L23
            if (r0 == 0) goto L27
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L23
            r1 = 27
            if (r0 > r1) goto L27
            android.app.Activity r0 = r3.getActivity()     // Catch: java.lang.Throwable -> L23
            r1 = 1
            r2 = 0
            com.kwad.components.core.t.d.a(r0, r2, r1, r2)     // Catch: java.lang.Throwable -> L23
            goto L27
        L23:
            r0 = move-exception
            com.kwad.components.core.d.a.b(r0)
        L27:
            r3.disableFragmentRestore(r4)
            return
    }

    @Override
    public void onResume() {
            r1 = this;
            super.onResume()
            com.kwad.components.core.n.a.a r0 = r1.mPageMonitor
            r1.getActivity()
            r0.pz()
            com.kwad.components.core.n.h r0 = com.kwad.components.core.n.h.py()
            r0.e(r1)
            return
    }

    @Override
    public void onSaveInstanceState(android.os.Bundle r1) {
            r0 = this;
            super.onSaveInstanceState(r1)
            r0.disableFragmentRestore(r1)
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
