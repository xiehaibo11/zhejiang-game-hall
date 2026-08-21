package com.bytedance.pangle.wrapper;

public class PluginFragmentActivityWrapper extends com.bytedance.pangle.wrapper.GenerateFragmentActivityWrapper {
    boolean hasInit;


    public PluginFragmentActivityWrapper(android.app.Activity r4, com.bytedance.pangle.PluginContext r5) {
            r3 = this;
            java.lang.String r0 = "mBase"
            r3.<init>()
            r1 = 1
            r3.hasInit = r1
            r1 = r4
            android.support.v4.app.FragmentActivity r1 = (android.support.v4.app.FragmentActivity) r1
            r3.mOriginActivity = r1
            r3.pluginContext = r5
            android.support.v4.app.FragmentActivity r1 = r3.mOriginActivity
            boolean r1 = r1.isDestroyed()
            if (r1 != 0) goto L23
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()
            com.bytedance.pangle.wrapper.PluginFragmentActivityWrapper$1 r2 = new com.bytedance.pangle.wrapper.PluginFragmentActivityWrapper$1
            r2.<init>(r3)
            r1.registerActivityLifecycleCallbacks(r2)
        L23:
            com.bytedance.pangle.util.FieldUtils.writeField(r3, r0, r5)     // Catch: java.lang.IllegalAccessException -> L36
            boolean r1 = com.bytedance.pangle.util.i.a()     // Catch: java.lang.IllegalAccessException -> L36
            if (r1 != 0) goto L3a
            java.lang.Class<android.content.ContextWrapper> r1 = android.content.ContextWrapper.class
            java.lang.reflect.Field r0 = com.bytedance.pangle.util.FieldUtils.getField(r1, r0)     // Catch: java.lang.IllegalAccessException -> L36
            com.bytedance.pangle.util.FieldUtils.writeField(r0, r3, r5)     // Catch: java.lang.IllegalAccessException -> L36
            goto L3a
        L36:
            r5 = move-exception
            r5.printStackTrace()
        L3a:
            java.lang.String r5 = "mApplication"
            android.app.Application r0 = r4.getApplication()     // Catch: java.lang.IllegalAccessException -> L44
            com.bytedance.pangle.util.FieldUtils.writeField(r3, r5, r0)     // Catch: java.lang.IllegalAccessException -> L44
            goto L48
        L44:
            r5 = move-exception
            r5.printStackTrace()
        L48:
            com.bytedance.pangle.util.a.a(r3, r4)
            return
    }

    @Override
    public android.arch.lifecycle.Lifecycle getLifecycle() {
            r3 = this;
            boolean r0 = r3.hasInit
            if (r0 != 0) goto L1d
            android.arch.lifecycle.LifecycleRegistry r0 = new android.arch.lifecycle.LifecycleRegistry     // Catch: java.lang.Throwable -> L1d
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L1d
            java.lang.Class r1 = r0.getClass()     // Catch: java.lang.Throwable -> L1c
            java.lang.String r2 = "mEnforceMainThread"
            java.lang.reflect.Field r1 = r1.getDeclaredField(r2)     // Catch: java.lang.Throwable -> L1c
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Throwable -> L1c
            java.lang.Boolean r2 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> L1c
            r1.set(r0, r2)     // Catch: java.lang.Throwable -> L1c
        L1c:
            return r0
        L1d:
            android.arch.lifecycle.Lifecycle r0 = super.getLifecycle()
            return r0
    }

    public android.app.Activity getOriginActivity() {
            r1 = this;
            android.support.v4.app.FragmentActivity r0 = r1.mOriginActivity
            return r0
    }
}
