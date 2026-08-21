package com.bytedance.pangle.fragment;

public class ZeusDialogFragmentV4 extends android.support.v4.app.DialogFragment {
    android.app.Application.ActivityLifecycleCallbacks callbacks;

    public ZeusDialogFragmentV4() {
            r1 = this;
            r1.<init>()
            com.bytedance.pangle.fragment.b r0 = new com.bytedance.pangle.fragment.b
            r0.<init>(r1)
            r1.callbacks = r0
            java.lang.Class r0 = r1.getClass()
            com.bytedance.pangle.fragment.a.a(r0)
            return
    }

    @Override
    public android.content.Context getContext() {
            r4 = this;
            android.content.Context r0 = super.getContext()     // Catch: java.lang.reflect.InvocationTargetException -> L18 java.lang.IllegalAccessException -> L1d java.lang.NoSuchMethodException -> L22
            java.lang.Class r1 = r4.getClass()     // Catch: java.lang.reflect.InvocationTargetException -> L18 java.lang.IllegalAccessException -> L1d java.lang.NoSuchMethodException -> L22
            java.lang.String r2 = "_GET_PLUGIN_PKG"
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L18 java.lang.IllegalAccessException -> L1d java.lang.NoSuchMethodException -> L22
            java.lang.Object r1 = com.bytedance.pangle.util.MethodUtils.invokeStaticMethod(r1, r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L18 java.lang.IllegalAccessException -> L1d java.lang.NoSuchMethodException -> L22
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.reflect.InvocationTargetException -> L18 java.lang.IllegalAccessException -> L1d java.lang.NoSuchMethodException -> L22
            android.content.Context r0 = com.bytedance.pangle.transform.ZeusTransformUtils.wrapperContext(r0, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L18 java.lang.IllegalAccessException -> L1d java.lang.NoSuchMethodException -> L22
            return r0
        L18:
            r0 = move-exception
            r0.printStackTrace()
            goto L26
        L1d:
            r0 = move-exception
            r0.printStackTrace()
            goto L26
        L22:
            r0 = move-exception
            r0.printStackTrace()
        L26:
            android.content.Context r0 = super.getContext()
            return r0
    }

    @Override
    public void onAttach(android.content.Context r2) {
            r1 = this;
            super.onAttach(r2)
            android.app.Application r2 = com.bytedance.pangle.Zeus.getAppApplication()
            android.app.Application$ActivityLifecycleCallbacks r0 = r1.callbacks
            r2.registerActivityLifecycleCallbacks(r0)
            return
    }

    @Override
    public android.app.Dialog onCreateDialog(android.os.Bundle r5) {
            r4 = this;
            android.app.Dialog r5 = new android.app.Dialog     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L26 java.lang.NoSuchMethodException -> L2b
            android.content.Context r0 = r4.getContext()     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L26 java.lang.NoSuchMethodException -> L2b
            java.lang.Class r1 = r4.getClass()     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L26 java.lang.NoSuchMethodException -> L2b
            java.lang.String r2 = "_GET_PLUGIN_PKG"
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L26 java.lang.NoSuchMethodException -> L2b
            java.lang.Object r1 = com.bytedance.pangle.util.MethodUtils.invokeStaticMethod(r1, r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L26 java.lang.NoSuchMethodException -> L2b
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L26 java.lang.NoSuchMethodException -> L2b
            android.content.Context r0 = com.bytedance.pangle.transform.ZeusTransformUtils.wrapperContext(r0, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L26 java.lang.NoSuchMethodException -> L2b
            int r1 = r4.getTheme()     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L26 java.lang.NoSuchMethodException -> L2b
            r5.<init>(r0, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L21 java.lang.IllegalAccessException -> L26 java.lang.NoSuchMethodException -> L2b
            return r5
        L21:
            r5 = move-exception
            r5.printStackTrace()
            goto L2f
        L26:
            r5 = move-exception
            r5.printStackTrace()
            goto L2f
        L2b:
            r5 = move-exception
            r5.printStackTrace()
        L2f:
            r5 = 0
            return r5
    }

    @Override
    public void onDetach() {
            r2 = this;
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            android.app.Application$ActivityLifecycleCallbacks r1 = r2.callbacks
            r0.unregisterActivityLifecycleCallbacks(r1)
            super.onDetach()
            return
    }
}
