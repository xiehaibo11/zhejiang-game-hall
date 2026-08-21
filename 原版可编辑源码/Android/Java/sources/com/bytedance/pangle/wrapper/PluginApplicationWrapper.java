package com.bytedance.pangle.wrapper;

import android.app.Application;
import android.content.ContextWrapper;
import android.content.Intent;
import android.content.IntentSender;
import android.content.res.Configuration;
import android.os.Bundle;
import com.bytedance.pangle.PluginContext;
import com.bytedance.pangle.util.FieldUtils;
import com.bytedance.pangle.util.i;
import java.io.File;

public class PluginApplicationWrapper extends Application {
    public Application mOriginApplication;
    public PluginContext mPluginContext;

    public PluginApplicationWrapper(Application application, PluginContext pluginContext) {
        this.mOriginApplication = application;
        this.mPluginContext = pluginContext;
        try {
            FieldUtils.writeField(this, "mBase", pluginContext);
            if (i.a()) {
                return;
            }
            FieldUtils.writeField(FieldUtils.getField(ContextWrapper.class, "mBase"), this, pluginContext);
        } catch (IllegalAccessException e) {
            e.printStackTrace();
        }
    }

    @Override
    public void onCreate() {
        this.mOriginApplication.onCreate();
    }

    @Override
    public void onTerminate() {
        this.mOriginApplication.onTerminate();
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        this.mOriginApplication.onConfigurationChanged(configuration);
    }

    @Override
    public void onLowMemory() {
        this.mOriginApplication.onLowMemory();
    }

    @Override
    public void onTrimMemory(int i) {
        this.mOriginApplication.onTrimMemory(i);
    }

    @Override
    public void registerActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        this.mOriginApplication.registerActivityLifecycleCallbacks(activityLifecycleCallbacks);
    }

    @Override
    public void unregisterActivityLifecycleCallbacks(Application.ActivityLifecycleCallbacks activityLifecycleCallbacks) {
        this.mOriginApplication.unregisterActivityLifecycleCallbacks(activityLifecycleCallbacks);
    }

    @Override
    public void registerOnProvideAssistDataListener(Application.OnProvideAssistDataListener onProvideAssistDataListener) {
        this.mOriginApplication.registerOnProvideAssistDataListener(onProvideAssistDataListener);
    }

    @Override
    public void unregisterOnProvideAssistDataListener(Application.OnProvideAssistDataListener onProvideAssistDataListener) {
        this.mOriginApplication.unregisterOnProvideAssistDataListener(onProvideAssistDataListener);
    }

    @Override
    public void setTheme(int i) {
        this.mOriginApplication.setTheme(i);
    }

    @Override
    public void startActivity(Intent intent) {
        this.mOriginApplication.startActivity(intent);
    }

    @Override
    public void startActivity(Intent intent, Bundle bundle) {
        this.mOriginApplication.startActivity(intent, bundle);
    }

    @Override
    public void startActivities(Intent[] intentArr) {
        this.mOriginApplication.startActivities(intentArr);
    }

    @Override
    public void startActivities(Intent[] intentArr, Bundle bundle) {
        this.mOriginApplication.startActivities(intentArr, bundle);
    }

    @Override
    public void startIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3) {
        this.mOriginApplication.startIntentSender(intentSender, intent, i, i2, i3);
    }

    @Override
    public void startIntentSender(IntentSender intentSender, Intent intent, int i, int i2, int i3, Bundle bundle) {
        this.mOriginApplication.startIntentSender(intentSender, intent, i, i2, i3, bundle);
    }

    @Override
    public File getDataDir() {
        return this.mPluginContext.getDataDir();
    }
}
