package com.kwad.sdk.api.proxy;

public abstract class BaseProxyActivity extends android.app.Activity {
    static final boolean $assertionsDisabled = false;
    public static final java.lang.String KEY_START_TIME = "key_start_time";
    private com.kwad.sdk.api.proxy.IActivityProxy mDelegate;

    static {
            return
    }

    public BaseProxyActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void attachBaseContext(android.content.Context r2) {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.getDelegate(r2)
            r1.mDelegate = r0
            android.content.Context r2 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r2)
            super.attachBaseContext(r2)
            com.kwad.sdk.api.proxy.IActivityProxy r2 = r1.mDelegate
            r2.setActivity(r1)
            return
    }

    @Override
    public android.content.Context createConfigurationContext(android.content.res.Configuration r1) {
            r0 = this;
            android.content.Context r1 = super.createConfigurationContext(r1)
            android.content.Context r1 = com.kwad.sdk.api.loader.Wrapper.wrapContextIfNeed(r1)
            return r1
    }

    protected abstract com.kwad.sdk.api.proxy.IActivityProxy getDelegate(android.content.Context r1);

    @Override
    public android.content.Intent getIntent() {
            r2 = this;
            com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
            java.lang.ClassLoader r0 = r0.getExternalClassLoader()
            if (r0 == 0) goto L12
            android.content.Intent r1 = super.getIntent()
            r1.setExtrasClassLoader(r0)
            return r1
        L12:
            android.content.Intent r0 = super.getIntent()
            return r0
    }

    @Override
    public android.view.LayoutInflater getLayoutInflater() {
            r1 = this;
            android.view.LayoutInflater r0 = super.getLayoutInflater()
            android.view.LayoutInflater r0 = com.kwad.sdk.api.loader.Wrapper.wrapInflaterIfNeed(r0)
            return r0
    }

    @Override
    public android.content.res.Resources getResources() {
            r2 = this;
            android.content.res.Resources r0 = super.getResources()
            com.kwad.sdk.api.loader.Loader r1 = com.kwad.sdk.api.loader.Loader.get()
            android.content.res.Resources r1 = r1.getExternalResource()
            if (r1 == 0) goto Lf
            return r1
        Lf:
            return r0
    }

    @Override
    protected void onActivityResult(int r2, int r3, android.content.Intent r4) {
            r1 = this;
            super.onActivityResult(r2, r3, r4)
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onActivityResult(r2, r3, r4)
            return
    }

    @Override
    protected void onApplyThemeResource(android.content.res.Resources.Theme r2, int r3, boolean r4) {
            r1 = this;
            super.onApplyThemeResource(r2, r3, r4)
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onApplyThemeResource(r2, r3, r4)
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onBackPressed()
            return
    }

    @Override
    protected void onChildTitleChanged(android.app.Activity r2, java.lang.CharSequence r3) {
            r1 = this;
            super.onChildTitleChanged(r2, r3)
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onChildTitleChanged(r2, r3)
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onConfigurationChanged(r2)
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onConfigurationChanged(r2)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onPreCreate(r2)
            super.onCreate(r2)
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onCreate(r2)
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onPreDestroy()
            super.onDestroy()
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onDestroy()
            com.kwad.sdk.api.core.ComponentDestroyer.destroyActivity(r1)
            com.kwad.sdk.api.loader.Wrapper.onDestroy(r1)
            return
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            boolean r2 = r0.onKeyDown(r2, r3)
            return r2
    }

    @Override
    public boolean onKeyLongPress(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            boolean r2 = r0.onKeyLongPress(r2, r3)
            return r2
    }

    @Override
    public boolean onKeyUp(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            boolean r2 = r0.onKeyUp(r2, r3)
            return r2
    }

    @Override
    protected void onNewIntent(android.content.Intent r2) {
            r1 = this;
            super.onNewIntent(r2)
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onNewIntent(r2)
            return
    }

    @Override
    protected void onPause() {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onPrePause()
            super.onPause()
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onPause()
            return
    }

    @Override
    protected void onPostCreate(android.os.Bundle r2) {
            r1 = this;
            super.onPostCreate(r2)
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onPostCreate(r2)
            return
    }

    @Override
    protected void onPostResume() {
            r1 = this;
            super.onPostResume()
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onPostResume()
            return
    }

    @Override
    protected void onRestart() {
            r1 = this;
            super.onRestart()
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onRestart()
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Bundle r2) {
            r1 = this;
            super.onRestoreInstanceState(r2)
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onRestoreInstanceState(r2)
            return
    }

    @Override
    protected void onResume() {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onPreResume()
            super.onResume()
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onResume()
            return
    }

    @Override
    protected void onSaveInstanceState(android.os.Bundle r2) {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onPreSaveInstanceState(r2)
            super.onSaveInstanceState(r2)
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onSaveInstanceState(r2)
            return
    }

    @Override
    protected void onStart() {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onPreStart()
            super.onStart()
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onStart()
            return
    }

    @Override
    protected void onStop() {
            r1 = this;
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onPreStop()
            super.onStop()
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onStop()
            return
    }

    @Override
    protected void onTitleChanged(java.lang.CharSequence r2, int r3) {
            r1 = this;
            super.onTitleChanged(r2, r3)
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onTitleChanged(r2, r3)
            return
    }

    @Override
    protected void onUserLeaveHint() {
            r1 = this;
            super.onUserLeaveHint()
            com.kwad.sdk.api.proxy.IActivityProxy r0 = r1.mDelegate
            r0.onUserLeaveHint()
            return
    }

    @Override
    public void startActivity(android.content.Intent r4) {
            r3 = this;
            if (r4 == 0) goto Lb
            long r0 = android.os.SystemClock.uptimeMillis()
            java.lang.String r2 = "key_start_time"
            r4.putExtra(r2, r0)
        Lb:
            super.startActivity(r4)
            return
    }

    public void superOnBackPressed() {
            r0 = this;
            super.onBackPressed()
            return
    }

    public boolean superOnKeyDown(int r1, android.view.KeyEvent r2) {
            r0 = this;
            boolean r1 = super.onKeyDown(r1, r2)
            return r1
    }

    public boolean superOnKeyLongPress(int r1, android.view.KeyEvent r2) {
            r0 = this;
            boolean r1 = super.onKeyLongPress(r1, r2)
            return r1
    }

    public boolean superOnKeyUp(int r1, android.view.KeyEvent r2) {
            r0 = this;
            boolean r1 = super.onKeyUp(r1, r2)
            return r1
    }
}
