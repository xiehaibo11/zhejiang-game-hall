package com.kwad.sdk.api.proxy;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public abstract class IActivityProxy implements com.kwad.sdk.api.proxy.IComponentProxy {
    private android.app.Activity mActivity;

    public IActivityProxy() {
            r0 = this;
            r0.<init>()
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public <T extends android.view.View> T findViewById(int r2) {
            r1 = this;
            android.app.Activity r0 = r1.mActivity
            android.view.View r2 = r0.findViewById(r2)
            return r2
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void finish() {
            r1 = this;
            android.app.Activity r0 = r1.mActivity
            r0.finish()
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    @java.lang.Deprecated
    public android.app.Activity getActivity() {
            r1 = this;
            android.app.Activity r0 = r1.mActivity
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public android.content.Intent getIntent() {
            r1 = this;
            android.app.Activity r0 = r1.mActivity
            android.content.Intent r0 = r0.getIntent()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public android.view.Window getWindow() {
            r1 = this;
            android.app.Activity r0 = r1.mActivity
            android.view.Window r0 = r0.getWindow()
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onApplyThemeResource(android.content.res.Resources.Theme r1, int r2, boolean r3) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onBackPressed() {
            r3 = this;
            android.app.Activity r0 = r3.mActivity
            boolean r1 = r0 instanceof com.kwad.sdk.api.proxy.BaseProxyActivity
            if (r1 == 0) goto Lc
            com.kwad.sdk.api.proxy.BaseProxyActivity r0 = (com.kwad.sdk.api.proxy.BaseProxyActivity) r0     // Catch: java.lang.Exception -> Lb
            r0.superOnBackPressed()     // Catch: java.lang.Exception -> Lb
        Lb:
            return
        Lc:
            boolean r1 = r0 instanceof com.kwad.sdk.api.proxy.BaseProxyFragmentActivity
            if (r1 == 0) goto L16
            com.kwad.sdk.api.proxy.BaseProxyFragmentActivity r0 = (com.kwad.sdk.api.proxy.BaseProxyFragmentActivity) r0     // Catch: java.lang.Exception -> L15
            r0.superOnBackPressed()     // Catch: java.lang.Exception -> L15
        L15:
            return
        L16:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.app.Activity r2 = r3.mActivity
            r1.append(r2)
            java.lang.String r2 = " must be BaseProxyActivity or BaseProxyFragmentActivity"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onChildTitleChanged(android.app.Activity r1, java.lang.CharSequence r2) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    protected void onDestroy() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean onKeyDown(int r3, android.view.KeyEvent r4) {
            r2 = this;
            android.app.Activity r0 = r2.mActivity
            boolean r1 = r0 instanceof com.kwad.sdk.api.proxy.BaseProxyActivity
            if (r1 == 0) goto Ld
            com.kwad.sdk.api.proxy.BaseProxyActivity r0 = (com.kwad.sdk.api.proxy.BaseProxyActivity) r0
            boolean r3 = r0.superOnKeyDown(r3, r4)
            return r3
        Ld:
            boolean r1 = r0 instanceof com.kwad.sdk.api.proxy.BaseProxyFragmentActivity
            if (r1 == 0) goto L18
            com.kwad.sdk.api.proxy.BaseProxyFragmentActivity r0 = (com.kwad.sdk.api.proxy.BaseProxyFragmentActivity) r0
            boolean r3 = r0.superOnKeyDown(r3, r4)
            return r3
        L18:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            android.app.Activity r0 = r2.mActivity
            r4.append(r0)
            java.lang.String r0 = " must be BaseProxyActivity or BaseProxyFragmentActivity"
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean onKeyLongPress(int r3, android.view.KeyEvent r4) {
            r2 = this;
            android.app.Activity r0 = r2.mActivity
            boolean r1 = r0 instanceof com.kwad.sdk.api.proxy.BaseProxyActivity
            if (r1 == 0) goto Ld
            com.kwad.sdk.api.proxy.BaseProxyActivity r0 = (com.kwad.sdk.api.proxy.BaseProxyActivity) r0
            boolean r3 = r0.superOnKeyLongPress(r3, r4)
            return r3
        Ld:
            boolean r1 = r0 instanceof com.kwad.sdk.api.proxy.BaseProxyFragmentActivity
            if (r1 == 0) goto L18
            com.kwad.sdk.api.proxy.BaseProxyFragmentActivity r0 = (com.kwad.sdk.api.proxy.BaseProxyFragmentActivity) r0
            boolean r3 = r0.superOnKeyLongPress(r3, r4)
            return r3
        L18:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            android.app.Activity r0 = r2.mActivity
            r4.append(r0)
            java.lang.String r0 = " must be BaseProxyActivity or BaseProxyFragmentActivity"
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public boolean onKeyUp(int r3, android.view.KeyEvent r4) {
            r2 = this;
            android.app.Activity r0 = r2.mActivity
            boolean r1 = r0 instanceof com.kwad.sdk.api.proxy.BaseProxyActivity
            if (r1 == 0) goto Ld
            com.kwad.sdk.api.proxy.BaseProxyActivity r0 = (com.kwad.sdk.api.proxy.BaseProxyActivity) r0
            boolean r3 = r0.superOnKeyUp(r3, r4)
            return r3
        Ld:
            boolean r1 = r0 instanceof com.kwad.sdk.api.proxy.BaseProxyFragmentActivity
            if (r1 == 0) goto L18
            com.kwad.sdk.api.proxy.BaseProxyFragmentActivity r0 = (com.kwad.sdk.api.proxy.BaseProxyFragmentActivity) r0
            boolean r3 = r0.superOnKeyUp(r3, r4)
            return r3
        L18:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            android.app.Activity r0 = r2.mActivity
            r4.append(r0)
            java.lang.String r0 = " must be BaseProxyActivity or BaseProxyFragmentActivity"
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onNewIntent(android.content.Intent r1) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onPause() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    protected void onPostCreate(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onPostResume() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    protected void onPreCreate(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onPreDestroy() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onPrePause() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onPreResume() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onPreSaveInstanceState(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onPreStart() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onPreStop() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onRestart() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onRestoreInstanceState(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onResume() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onSaveInstanceState(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onStart() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onStop() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onTitleChanged(java.lang.CharSequence r1, int r2) {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void onUserLeaveHint() {
            r0 = this;
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void overridePendingTransition(int r2, int r3) {
            r1 = this;
            android.app.Activity r0 = r1.mActivity
            r0.overridePendingTransition(r2, r3)
            return
    }

    void setActivity(android.app.Activity r1) {
            r0 = this;
            r0.mActivity = r1
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void setContentView(int r2) {
            r1 = this;
            android.app.Activity r0 = r1.mActivity
            r0.setContentView(r2)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void setContentView(android.view.View r2) {
            r1 = this;
            android.app.Activity r0 = r1.mActivity
            r0.setContentView(r2)
            return
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public void setContentView(android.view.View r2, android.view.ViewGroup.LayoutParams r3) {
            r1 = this;
            android.app.Activity r0 = r1.mActivity
            r0.setContentView(r2, r3)
            return
    }
}
