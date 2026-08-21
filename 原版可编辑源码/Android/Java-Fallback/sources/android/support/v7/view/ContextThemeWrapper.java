package android.support.v7.view;

public class ContextThemeWrapper extends android.content.ContextWrapper {
    private android.view.LayoutInflater mInflater;
    private android.content.res.Configuration mOverrideConfiguration;
    private android.content.res.Resources mResources;
    private android.content.res.Resources.Theme mTheme;
    private int mThemeResource;

    public ContextThemeWrapper() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public ContextThemeWrapper(android.content.Context r1, int r2) {
            r0 = this;
            r0.<init>(r1)
            r0.mThemeResource = r2
            return
    }

    public ContextThemeWrapper(android.content.Context r1, android.content.res.Resources.Theme r2) {
            r0 = this;
            r0.<init>(r1)
            r0.mTheme = r2
            return
    }

    private android.content.res.Resources getResourcesInternal() {
            r2 = this;
            android.content.res.Resources r0 = r2.mResources
            if (r0 != 0) goto L21
            android.content.res.Configuration r0 = r2.mOverrideConfiguration
            if (r0 != 0) goto Lf
            android.content.res.Resources r0 = super.getResources()
            r2.mResources = r0
            goto L21
        Lf:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L21
            android.content.res.Configuration r0 = r2.mOverrideConfiguration
            android.content.Context r0 = r2.createConfigurationContext(r0)
            android.content.res.Resources r0 = r0.getResources()
            r2.mResources = r0
        L21:
            android.content.res.Resources r0 = r2.mResources
            return r0
    }

    private void initializeTheme() {
            r3 = this;
            android.content.res.Resources$Theme r0 = r3.mTheme
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            if (r0 == 0) goto L22
            android.content.res.Resources r1 = r3.getResources()
            android.content.res.Resources$Theme r1 = r1.newTheme()
            r3.mTheme = r1
            android.content.Context r1 = r3.getBaseContext()
            android.content.res.Resources$Theme r1 = r1.getTheme()
            if (r1 == 0) goto L22
            android.content.res.Resources$Theme r2 = r3.mTheme
            r2.setTo(r1)
        L22:
            android.content.res.Resources$Theme r1 = r3.mTheme
            int r2 = r3.mThemeResource
            r3.onApplyThemeResource(r1, r2, r0)
            return
    }

    public void applyOverrideConfiguration(android.content.res.Configuration r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.mResources
            if (r0 != 0) goto L18
            android.content.res.Configuration r0 = r1.mOverrideConfiguration
            if (r0 != 0) goto L10
            android.content.res.Configuration r0 = new android.content.res.Configuration
            r0.<init>(r2)
            r1.mOverrideConfiguration = r0
            return
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "Override configuration has already been set"
            r2.<init>(r0)
            throw r2
        L18:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "getResources() or getAssets() has already been called"
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected void attachBaseContext(android.content.Context r1) {
            r0 = this;
            super.attachBaseContext(r1)
            return
    }

    @Override
    public android.content.res.AssetManager getAssets() {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            android.content.res.AssetManager r0 = r0.getAssets()
            return r0
    }

    @Override
    public android.content.res.Resources getResources() {
            r1 = this;
            android.content.res.Resources r0 = r1.getResourcesInternal()
            return r0
    }

    @Override
    public java.lang.Object getSystemService(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "layout_inflater"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L1d
            android.view.LayoutInflater r2 = r1.mInflater
            if (r2 != 0) goto L1a
            android.content.Context r2 = r1.getBaseContext()
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)
            android.view.LayoutInflater r2 = r2.cloneInContext(r1)
            r1.mInflater = r2
        L1a:
            android.view.LayoutInflater r2 = r1.mInflater
            return r2
        L1d:
            android.content.Context r0 = r1.getBaseContext()
            java.lang.Object r2 = r0.getSystemService(r2)
            return r2
    }

    @Override
    public android.content.res.Resources.Theme getTheme() {
            r1 = this;
            android.content.res.Resources$Theme r0 = r1.mTheme
            if (r0 == 0) goto L5
            return r0
        L5:
            int r0 = r1.mThemeResource
            if (r0 != 0) goto Ld
            int r0 = android.support.v7.appcompat.R.style.Theme_AppCompat_Light
            r1.mThemeResource = r0
        Ld:
            r1.initializeTheme()
            android.content.res.Resources$Theme r0 = r1.mTheme
            return r0
    }

    public int getThemeResId() {
            r1 = this;
            int r0 = r1.mThemeResource
            return r0
    }

    protected void onApplyThemeResource(android.content.res.Resources.Theme r1, int r2, boolean r3) {
            r0 = this;
            r3 = 1
            r1.applyStyle(r2, r3)
            return
    }

    @Override
    public void setTheme(int r2) {
            r1 = this;
            int r0 = r1.mThemeResource
            if (r0 == r2) goto L9
            r1.mThemeResource = r2
            r1.initializeTheme()
        L9:
            return
    }
}
