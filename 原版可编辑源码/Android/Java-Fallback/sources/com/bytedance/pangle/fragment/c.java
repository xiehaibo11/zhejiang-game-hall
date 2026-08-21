package com.bytedance.pangle.fragment;

public final class c implements android.app.Application.ActivityLifecycleCallbacks {
    android.app.Fragment a;

    public c(android.app.Fragment r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public final void onActivityCreated(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityDestroyed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityPaused(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityPostSaveInstanceState(android.app.Activity r10, android.os.Bundle r11) {
            r9 = this;
            java.lang.String r0 = "mActive"
            android.app.Fragment r1 = r9.a
            android.app.Activity r1 = r1.getActivity()
            if (r1 == r10) goto Lb
            return
        Lb:
            java.lang.String r10 = "android:fragments"
            android.os.Parcelable r10 = r11.getParcelable(r10)     // Catch: java.lang.Throwable -> L88
            if (r10 != 0) goto L14
            return
        L14:
            java.lang.Object r11 = com.bytedance.pangle.util.FieldUtils.readField(r10, r0)     // Catch: java.lang.Throwable -> L88
            java.lang.Object[] r11 = (java.lang.Object[]) r11     // Catch: java.lang.Throwable -> L88
            java.lang.Object[] r11 = (java.lang.Object[]) r11     // Catch: java.lang.Throwable -> L88
            if (r11 != 0) goto L1f
            return
        L1f:
            r1 = 0
            int r2 = r11.length     // Catch: java.lang.Throwable -> L88
            r3 = 0
            r4 = r3
        L23:
            if (r4 >= r2) goto L54
            r5 = r11[r4]     // Catch: java.lang.Throwable -> L88
            java.lang.String r6 = "mTag"
            java.lang.Object r6 = com.bytedance.pangle.util.FieldUtils.readField(r5, r6)     // Catch: java.lang.Throwable -> L88
            java.lang.String r7 = "androidx.lifecycle.LifecycleDispatcher.report_fragment_tag_plugin"
            boolean r7 = r7.equals(r6)     // Catch: java.lang.Throwable -> L88
            if (r7 == 0) goto L36
            goto L4f
        L36:
            boolean r7 = r6 instanceof java.lang.String     // Catch: java.lang.Throwable -> L88
            if (r7 == 0) goto L51
            r7 = r6
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L88
            java.lang.String r8 = "androidx.lifecycle.LifecycleDispatcher.report_fragment_tag_pangle"
            boolean r7 = r7.contains(r8)     // Catch: java.lang.Throwable -> L88
            if (r7 != 0) goto L4f
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L88
            java.lang.String r7 = "android.arch.lifecycle.LifecycleDispatcher.report_fragment_tag_pangle"
            boolean r6 = r6.contains(r7)     // Catch: java.lang.Throwable -> L88
            if (r6 == 0) goto L51
        L4f:
            r1 = r5
            goto L54
        L51:
            int r4 = r4 + 1
            goto L23
        L54:
            if (r1 == 0) goto L87
            java.lang.String r2 = "android.app.FragmentState"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L88
            int r4 = r11.length     // Catch: java.lang.Throwable -> L88
            int r4 = r4 + (-1)
            java.lang.Object r2 = java.lang.reflect.Array.newInstance(r2, r4)     // Catch: java.lang.Throwable -> L88
            java.lang.Object[] r2 = (java.lang.Object[]) r2     // Catch: java.lang.Throwable -> L88
            java.lang.Object[] r2 = (java.lang.Object[]) r2     // Catch: java.lang.Throwable -> L88
            int r4 = r11.length     // Catch: java.lang.Throwable -> L88
            int r4 = r4 + (-1)
            int[] r4 = new int[r4]     // Catch: java.lang.Throwable -> L88
            r5 = r3
        L6d:
            int r6 = r11.length     // Catch: java.lang.Throwable -> L88
            if (r3 >= r6) goto L7f
            r6 = r11[r3]     // Catch: java.lang.Throwable -> L88
            if (r6 == r1) goto L7c
            r6 = r11[r3]     // Catch: java.lang.Throwable -> L88
            r2[r5] = r6     // Catch: java.lang.Throwable -> L88
            r4[r5] = r3     // Catch: java.lang.Throwable -> L88
            int r5 = r5 + 1
        L7c:
            int r3 = r3 + 1
            goto L6d
        L7f:
            com.bytedance.pangle.util.FieldUtils.writeField(r10, r0, r2)     // Catch: java.lang.Throwable -> L88
            java.lang.String r11 = "mAdded"
            com.bytedance.pangle.util.FieldUtils.writeField(r10, r11, r4)     // Catch: java.lang.Throwable -> L88
        L87:
            return
        L88:
            r10 = move-exception
            r10.printStackTrace()
            return
    }

    @Override
    public final void onActivityResumed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public final void onActivitySaveInstanceState(android.app.Activity r10, android.os.Bundle r11) {
            r9 = this;
            java.lang.String r0 = "mActive"
            android.app.Fragment r1 = r9.a
            android.app.Activity r1 = r1.getActivity()
            if (r1 == r10) goto Lb
            return
        Lb:
            java.lang.String r10 = "android:fragments"
            android.os.Parcelable r10 = r11.getParcelable(r10)     // Catch: java.lang.Throwable -> L88
            if (r10 != 0) goto L14
            return
        L14:
            java.lang.Object r11 = com.bytedance.pangle.util.FieldUtils.readField(r10, r0)     // Catch: java.lang.Throwable -> L88
            java.lang.Object[] r11 = (java.lang.Object[]) r11     // Catch: java.lang.Throwable -> L88
            java.lang.Object[] r11 = (java.lang.Object[]) r11     // Catch: java.lang.Throwable -> L88
            if (r11 != 0) goto L1f
            return
        L1f:
            r1 = 0
            int r2 = r11.length     // Catch: java.lang.Throwable -> L88
            r3 = 0
            r4 = r3
        L23:
            if (r4 >= r2) goto L54
            r5 = r11[r4]     // Catch: java.lang.Throwable -> L88
            java.lang.String r6 = "mTag"
            java.lang.Object r6 = com.bytedance.pangle.util.FieldUtils.readField(r5, r6)     // Catch: java.lang.Throwable -> L88
            java.lang.String r7 = "androidx.lifecycle.LifecycleDispatcher.report_fragment_tag_plugin"
            boolean r7 = r7.equals(r6)     // Catch: java.lang.Throwable -> L88
            if (r7 == 0) goto L36
            goto L4f
        L36:
            boolean r7 = r6 instanceof java.lang.String     // Catch: java.lang.Throwable -> L88
            if (r7 == 0) goto L51
            r7 = r6
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L88
            java.lang.String r8 = "androidx.lifecycle.LifecycleDispatcher.report_fragment_tag_pangle"
            boolean r7 = r7.contains(r8)     // Catch: java.lang.Throwable -> L88
            if (r7 != 0) goto L4f
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L88
            java.lang.String r7 = "android.arch.lifecycle.LifecycleDispatcher.report_fragment_tag_pangle"
            boolean r6 = r6.contains(r7)     // Catch: java.lang.Throwable -> L88
            if (r6 == 0) goto L51
        L4f:
            r1 = r5
            goto L54
        L51:
            int r4 = r4 + 1
            goto L23
        L54:
            if (r1 == 0) goto L87
            java.lang.String r2 = "android.app.FragmentState"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L88
            int r4 = r11.length     // Catch: java.lang.Throwable -> L88
            int r4 = r4 + (-1)
            java.lang.Object r2 = java.lang.reflect.Array.newInstance(r2, r4)     // Catch: java.lang.Throwable -> L88
            java.lang.Object[] r2 = (java.lang.Object[]) r2     // Catch: java.lang.Throwable -> L88
            java.lang.Object[] r2 = (java.lang.Object[]) r2     // Catch: java.lang.Throwable -> L88
            int r4 = r11.length     // Catch: java.lang.Throwable -> L88
            int r4 = r4 + (-1)
            int[] r4 = new int[r4]     // Catch: java.lang.Throwable -> L88
            r5 = r3
        L6d:
            int r6 = r11.length     // Catch: java.lang.Throwable -> L88
            if (r3 >= r6) goto L7f
            r6 = r11[r3]     // Catch: java.lang.Throwable -> L88
            if (r6 == r1) goto L7c
            r6 = r11[r3]     // Catch: java.lang.Throwable -> L88
            r2[r5] = r6     // Catch: java.lang.Throwable -> L88
            r4[r5] = r3     // Catch: java.lang.Throwable -> L88
            int r5 = r5 + 1
        L7c:
            int r3 = r3 + 1
            goto L6d
        L7f:
            com.bytedance.pangle.util.FieldUtils.writeField(r10, r0, r2)     // Catch: java.lang.Throwable -> L88
            java.lang.String r11 = "mAdded"
            com.bytedance.pangle.util.FieldUtils.writeField(r10, r11, r4)     // Catch: java.lang.Throwable -> L88
        L87:
            return
        L88:
            r10 = move-exception
            r10.printStackTrace()
            return
    }

    @Override
    public final void onActivityStarted(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityStopped(android.app.Activity r1) {
            r0 = this;
            return
    }
}
