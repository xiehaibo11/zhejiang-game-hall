package android.support.v7.view;

import android.content.Context;
import android.content.ContextWrapper;
import android.content.res.AssetManager;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Build;
import android.support.annotation.StyleRes;
import android.support.v7.appcompat.R;
import android.view.LayoutInflater;

public class ContextThemeWrapper extends ContextWrapper {
    private LayoutInflater mInflater;
    private Configuration mOverrideConfiguration;
    private Resources mResources;
    private Resources.Theme mTheme;
    private int mThemeResource;

    public ContextThemeWrapper() {
        super(null);
    }

    public ContextThemeWrapper(Context r1, @StyleRes int r2) {
        super(r1);
        this.mThemeResource = r2;
    }

    public ContextThemeWrapper(Context r1, Resources.Theme r2) {
        super(r1);
        this.mTheme = r2;
    }

    @Override
    protected void attachBaseContext(Context r1) {
        super.attachBaseContext(r1);
    }

    public void applyOverrideConfiguration(Configuration r2) {
        if (this.mResources != null) goto L11;
        if (this.mOverrideConfiguration != null) goto L9;
        this.mOverrideConfiguration = new Configuration(r2);
        return;
    L9:
        throw new IllegalStateException("Override configuration has already been set");
    L11:
        throw new IllegalStateException("getResources() or getAssets() has already been called");
    }

    @Override
    public Resources getResources() {
        return getResourcesInternal();
    }

    private Resources getResourcesInternal() {
        if (this.mResources != null) goto L11;
        if (this.mOverrideConfiguration != null) goto L8;
        this.mResources = super.getResources();
        goto L11
    L8:
        if (Build.VERSION.SDK_INT < 17) goto L11;
        this.mResources = createConfigurationContext(this.mOverrideConfiguration).getResources();
    L11:
        return this.mResources;
    }

    @Override
    public void setTheme(int r2) {
        if (this.mThemeResource == r2) goto L6;
        this.mThemeResource = r2;
        initializeTheme();
        return;
    }

    public int getThemeResId() {
        return this.mThemeResource;
    }

    @Override
    public Resources.Theme getTheme() {
        Resources.Theme r0 = this.mTheme;
        if (r0 == null) goto L6;
        return r0;
    L6:
        if (this.mThemeResource != 0) goto L8;
        this.mThemeResource = R.style.Theme_AppCompat_Light;
    L8:
        initializeTheme();
        return this.mTheme;
    }

    @Override
    public Object getSystemService(String r2) {
        if ("layout_inflater".equals(r2) == false) goto L10;
        if (this.mInflater != null) goto L8;
        this.mInflater = LayoutInflater.from(getBaseContext()).cloneInContext(this);
    L8:
        return this.mInflater;
    L10:
        return getBaseContext().getSystemService(r2);
    }

    protected void onApplyThemeResource(Resources.Theme r1, int r2, boolean r3) {
        r1.applyStyle(r2, true);
    }

    private void initializeTheme() {
        if (this.mTheme != null) goto L5;
        boolean r0 = true;
    L6:
        if (r0 == false) goto L10;
        this.mTheme = getResources().newTheme();
        Resources.Theme r1 = getBaseContext().getTheme();
        if (r1 == null) goto L10;
        this.mTheme.setTo(r1);
    L10:
        onApplyThemeResource(this.mTheme, this.mThemeResource, r0);
        return;
    L5:
        r0 = false;
        goto L6
    }

    @Override
    public AssetManager getAssets() {
        return getResources().getAssets();
    }
}
