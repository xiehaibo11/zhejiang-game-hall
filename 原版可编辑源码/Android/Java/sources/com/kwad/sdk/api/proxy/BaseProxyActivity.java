package com.kwad.sdk.api.proxy;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Bundle;
import android.os.SystemClock;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import com.kwad.sdk.api.core.ComponentDestroyer;
import com.kwad.sdk.api.loader.Loader;
import com.kwad.sdk.api.loader.Wrapper;

public abstract class BaseProxyActivity extends Activity {
    static final boolean $assertionsDisabled = false;
    public static final String KEY_START_TIME = "key_start_time";
    private IActivityProxy mDelegate;

    @Override
    protected void attachBaseContext(Context context) {
        this.mDelegate = getDelegate(context);
        super.attachBaseContext(Wrapper.wrapContextIfNeed(context));
        this.mDelegate.setActivity(this);
    }

    @Override
    public Context createConfigurationContext(Configuration configuration) {
        return Wrapper.wrapContextIfNeed(super.createConfigurationContext(configuration));
    }

    protected abstract IActivityProxy getDelegate(Context context);

    @Override
    public Intent getIntent() {
        ClassLoader externalClassLoader = Loader.get().getExternalClassLoader();
        if (externalClassLoader == null) {
            return super.getIntent();
        }
        Intent intent = super.getIntent();
        intent.setExtrasClassLoader(externalClassLoader);
        return intent;
    }

    @Override
    public LayoutInflater getLayoutInflater() {
        return Wrapper.wrapInflaterIfNeed(super.getLayoutInflater());
    }

    @Override
    public Resources getResources() {
        Resources resources = super.getResources();
        Resources externalResource = Loader.get().getExternalResource();
        return externalResource != null ? externalResource : resources;
    }

    @Override
    protected void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
        this.mDelegate.onActivityResult(i, i2, intent);
    }

    @Override
    protected void onApplyThemeResource(Resources.Theme theme, int i, boolean z) {
        super.onApplyThemeResource(theme, i, z);
        this.mDelegate.onApplyThemeResource(theme, i, z);
    }

    @Override
    public void onBackPressed() {
        this.mDelegate.onBackPressed();
    }

    @Override
    protected void onChildTitleChanged(Activity activity, CharSequence charSequence) {
        super.onChildTitleChanged(activity, charSequence);
        this.mDelegate.onChildTitleChanged(activity, charSequence);
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        this.mDelegate.onConfigurationChanged(configuration);
    }

    @Override
    protected void onCreate(Bundle bundle) {
        this.mDelegate.onPreCreate(bundle);
        super.onCreate(bundle);
        this.mDelegate.onCreate(bundle);
    }

    @Override
    protected void onDestroy() {
        this.mDelegate.onPreDestroy();
        super.onDestroy();
        this.mDelegate.onDestroy();
        ComponentDestroyer.destroyActivity(this);
        Wrapper.onDestroy(this);
    }

    @Override
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        return this.mDelegate.onKeyDown(i, keyEvent);
    }

    @Override
    public boolean onKeyLongPress(int i, KeyEvent keyEvent) {
        return this.mDelegate.onKeyLongPress(i, keyEvent);
    }

    @Override
    public boolean onKeyUp(int i, KeyEvent keyEvent) {
        return this.mDelegate.onKeyUp(i, keyEvent);
    }

    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        this.mDelegate.onNewIntent(intent);
    }

    @Override
    protected void onPause() {
        this.mDelegate.onPrePause();
        super.onPause();
        this.mDelegate.onPause();
    }

    @Override
    protected void onPostCreate(Bundle bundle) {
        super.onPostCreate(bundle);
        this.mDelegate.onPostCreate(bundle);
    }

    @Override
    protected void onPostResume() {
        super.onPostResume();
        this.mDelegate.onPostResume();
    }

    @Override
    protected void onRestart() {
        super.onRestart();
        this.mDelegate.onRestart();
    }

    @Override
    protected void onRestoreInstanceState(Bundle bundle) {
        super.onRestoreInstanceState(bundle);
        this.mDelegate.onRestoreInstanceState(bundle);
    }

    @Override
    protected void onResume() {
        this.mDelegate.onPreResume();
        super.onResume();
        this.mDelegate.onResume();
    }

    @Override
    protected void onSaveInstanceState(Bundle bundle) {
        this.mDelegate.onPreSaveInstanceState(bundle);
        super.onSaveInstanceState(bundle);
        this.mDelegate.onSaveInstanceState(bundle);
    }

    @Override
    protected void onStart() {
        this.mDelegate.onPreStart();
        super.onStart();
        this.mDelegate.onStart();
    }

    @Override
    protected void onStop() {
        this.mDelegate.onPreStop();
        super.onStop();
        this.mDelegate.onStop();
    }

    @Override
    protected void onTitleChanged(CharSequence charSequence, int i) {
        super.onTitleChanged(charSequence, i);
        this.mDelegate.onTitleChanged(charSequence, i);
    }

    @Override
    protected void onUserLeaveHint() {
        super.onUserLeaveHint();
        this.mDelegate.onUserLeaveHint();
    }

    @Override
    public void startActivity(Intent intent) {
        if (intent != null) {
            intent.putExtra("key_start_time", SystemClock.uptimeMillis());
        }
        super.startActivity(intent);
    }

    public void superOnBackPressed() {
        super.onBackPressed();
    }

    public boolean superOnKeyDown(int i, KeyEvent keyEvent) {
        return super.onKeyDown(i, keyEvent);
    }

    public boolean superOnKeyLongPress(int i, KeyEvent keyEvent) {
        return super.onKeyLongPress(i, keyEvent);
    }

    public boolean superOnKeyUp(int i, KeyEvent keyEvent) {
        return super.onKeyUp(i, keyEvent);
    }
}
