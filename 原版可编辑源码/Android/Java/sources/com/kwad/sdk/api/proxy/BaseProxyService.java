package com.kwad.sdk.api.proxy;

import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import com.kwad.sdk.api.loader.Loader;
import com.kwad.sdk.api.loader.Wrapper;

public abstract class BaseProxyService extends Service {
    private IServiceProxy mDelegate;
    private Context mNewBase;

    @Override
    protected void attachBaseContext(Context context) {
        this.mNewBase = context;
        this.mDelegate = getDelegate(context);
        super.attachBaseContext(Wrapper.wrapContextIfNeed(context));
    }

    protected abstract IServiceProxy getDelegate(Context context);

    @Override
    public IBinder onBind(Intent intent) {
        ClassLoader externalClassLoader = Loader.get().getExternalClassLoader();
        if (externalClassLoader != null) {
            intent.setExtrasClassLoader(externalClassLoader);
        }
        return this.mDelegate.onBind(this, intent);
    }

    @Override
    public void onCreate() {
        super.onCreate();
        this.mDelegate.onCreate(this);
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        this.mDelegate.onDestroy(this);
        Wrapper.onDestroy(this.mNewBase);
    }

    @Override
    public void onRebind(Intent intent) {
        super.onRebind(intent);
        ClassLoader externalClassLoader = Loader.get().getExternalClassLoader();
        if (externalClassLoader != null) {
            intent.setExtrasClassLoader(externalClassLoader);
        }
        this.mDelegate.onRebind(this, intent);
    }

    @Override
    public int onStartCommand(Intent intent, int i, int i2) {
        ClassLoader externalClassLoader = Loader.get().getExternalClassLoader();
        if (externalClassLoader != null && intent != null) {
            intent.setExtrasClassLoader(externalClassLoader);
        }
        return this.mDelegate.onStartCommand(this, intent, i, i2);
    }

    @Override
    public boolean onUnbind(Intent intent) {
        return this.mDelegate.onUnbind(this, intent);
    }

    public int superOnStartCommand(Intent intent, int i, int i2) {
        return super.onStartCommand(intent, i, i2);
    }

    public boolean superOnUnbind(Intent intent) {
        return super.onUnbind(intent);
    }
}
