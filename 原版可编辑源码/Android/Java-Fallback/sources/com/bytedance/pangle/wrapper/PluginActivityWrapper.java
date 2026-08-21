package com.bytedance.pangle.wrapper;

public class PluginActivityWrapper extends com.bytedance.pangle.wrapper.GenerateActivityWrapper {


    public PluginActivityWrapper(android.app.Activity r4, com.bytedance.pangle.PluginContext r5) {
            r3 = this;
            java.lang.String r0 = "mBase"
            r3.<init>()
            r3.mOriginActivity = r4
            r3.pluginContext = r5
            android.app.Activity r1 = r3.mOriginActivity
            boolean r1 = r1.isDestroyed()
            if (r1 != 0) goto L1d
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()
            com.bytedance.pangle.wrapper.PluginActivityWrapper$1 r2 = new com.bytedance.pangle.wrapper.PluginActivityWrapper$1
            r2.<init>(r3)
            r1.registerActivityLifecycleCallbacks(r2)
        L1d:
            com.bytedance.pangle.util.FieldUtils.writeField(r3, r0, r5)     // Catch: java.lang.IllegalAccessException -> L30
            boolean r1 = com.bytedance.pangle.util.i.a()     // Catch: java.lang.IllegalAccessException -> L30
            if (r1 != 0) goto L34
            java.lang.Class<android.content.ContextWrapper> r1 = android.content.ContextWrapper.class
            java.lang.reflect.Field r0 = com.bytedance.pangle.util.FieldUtils.getField(r1, r0)     // Catch: java.lang.IllegalAccessException -> L30
            com.bytedance.pangle.util.FieldUtils.writeField(r0, r3, r5)     // Catch: java.lang.IllegalAccessException -> L30
            goto L34
        L30:
            r5 = move-exception
            r5.printStackTrace()
        L34:
            java.lang.String r5 = "mApplication"
            android.app.Application r0 = r4.getApplication()     // Catch: java.lang.IllegalAccessException -> L3e
            com.bytedance.pangle.util.FieldUtils.writeField(r3, r5, r0)     // Catch: java.lang.IllegalAccessException -> L3e
            goto L42
        L3e:
            r5 = move-exception
            r5.printStackTrace()
        L42:
            com.bytedance.pangle.util.a.a(r3, r4)
            return
    }
}
