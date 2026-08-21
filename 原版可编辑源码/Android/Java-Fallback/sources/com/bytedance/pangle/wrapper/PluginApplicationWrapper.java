package com.bytedance.pangle.wrapper;

public class PluginApplicationWrapper extends android.app.Application {
    public android.app.Application mOriginApplication;
    public com.bytedance.pangle.PluginContext mPluginContext;

    public PluginApplicationWrapper(android.app.Application r2, com.bytedance.pangle.PluginContext r3) {
            r1 = this;
            java.lang.String r0 = "mBase"
            r1.<init>()
            r1.mOriginApplication = r2
            r1.mPluginContext = r3
            com.bytedance.pangle.util.FieldUtils.writeField(r1, r0, r3)     // Catch: java.lang.IllegalAccessException -> L1c
            boolean r2 = com.bytedance.pangle.util.i.a()     // Catch: java.lang.IllegalAccessException -> L1c
            if (r2 != 0) goto L1b
            java.lang.Class<android.content.ContextWrapper> r2 = android.content.ContextWrapper.class
            java.lang.reflect.Field r2 = com.bytedance.pangle.util.FieldUtils.getField(r2, r0)     // Catch: java.lang.IllegalAccessException -> L1c
            com.bytedance.pangle.util.FieldUtils.writeField(r2, r1, r3)     // Catch: java.lang.IllegalAccessException -> L1c
        L1b:
            return
        L1c:
            r2 = move-exception
            r2.printStackTrace()
            return
    }

    @Override
    public java.io.File getDataDir() {
            r1 = this;
            com.bytedance.pangle.PluginContext r0 = r1.mPluginContext
            java.io.File r0 = r0.getDataDir()
            return r0
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.onConfigurationChanged(r2)
            return
    }

    @Override
    public void onCreate() {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.onCreate()
            return
    }

    @Override
    public void onLowMemory() {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.onLowMemory()
            return
    }

    @Override
    public void onTerminate() {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.onTerminate()
            return
    }

    @Override
    public void onTrimMemory(int r2) {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.onTrimMemory(r2)
            return
    }

    @Override
    public void registerActivityLifecycleCallbacks(android.app.Application.ActivityLifecycleCallbacks r2) {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.registerActivityLifecycleCallbacks(r2)
            return
    }

    @Override
    public void registerOnProvideAssistDataListener(android.app.Application.OnProvideAssistDataListener r2) {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.registerOnProvideAssistDataListener(r2)
            return
    }

    @Override
    public void setTheme(int r2) {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.setTheme(r2)
            return
    }

    @Override
    public void startActivities(android.content.Intent[] r2) {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.startActivities(r2)
            return
    }

    @Override
    public void startActivities(android.content.Intent[] r2, android.os.Bundle r3) {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.startActivities(r2, r3)
            return
    }

    @Override
    public void startActivity(android.content.Intent r2) {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.startActivity(r2)
            return
    }

    @Override
    public void startActivity(android.content.Intent r2, android.os.Bundle r3) {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.startActivity(r2, r3)
            return
    }

    @Override
    public void startIntentSender(android.content.IntentSender r7, android.content.Intent r8, int r9, int r10, int r11) {
            r6 = this;
            android.app.Application r0 = r6.mOriginApplication
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.startIntentSender(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public void startIntentSender(android.content.IntentSender r8, android.content.Intent r9, int r10, int r11, int r12, android.os.Bundle r13) {
            r7 = this;
            android.app.Application r0 = r7.mOriginApplication
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.startIntentSender(r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    public void unregisterActivityLifecycleCallbacks(android.app.Application.ActivityLifecycleCallbacks r2) {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.unregisterActivityLifecycleCallbacks(r2)
            return
    }

    @Override
    public void unregisterOnProvideAssistDataListener(android.app.Application.OnProvideAssistDataListener r2) {
            r1 = this;
            android.app.Application r0 = r1.mOriginApplication
            r0.unregisterOnProvideAssistDataListener(r2)
            return
    }
}
