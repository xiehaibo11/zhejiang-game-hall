package com.bytedance.pangle.transform;

import android.support.v4.app.FragmentActivity;

/* JADX INFO: loaded from: classes.dex */
public class HostPartUtils {
    private Class fragmentActivityClazz;

    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final HostPartUtils f1599a = new HostPartUtils();
    }

    public HostPartUtils() {
        try {
            this.fragmentActivityClazz = FragmentActivity.class;
        } catch (Throwable unused) {
        }
    }

    public static final Class getFragmentActivityClass() {
        return a.f1599a.fragmentActivityClazz;
    }

    public static FragmentActivity getFragmentActivity(Object obj, String str) {
        return (FragmentActivity) ZeusTransformUtils._getActivity(obj, str);
    }
}
