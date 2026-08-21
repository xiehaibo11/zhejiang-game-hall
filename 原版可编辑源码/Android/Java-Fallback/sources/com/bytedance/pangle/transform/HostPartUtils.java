package com.bytedance.pangle.transform;

public class HostPartUtils {
    private java.lang.Class fragmentActivityClazz;

    static class a {
        private static final com.bytedance.pangle.transform.HostPartUtils a = null;

        static {
                com.bytedance.pangle.transform.HostPartUtils r0 = new com.bytedance.pangle.transform.HostPartUtils
                r0.<init>()
                com.bytedance.pangle.transform.HostPartUtils.a.a = r0
                return
        }

        static com.bytedance.pangle.transform.HostPartUtils a() {
                com.bytedance.pangle.transform.HostPartUtils r0 = com.bytedance.pangle.transform.HostPartUtils.a.a
                return r0
        }
    }

    public HostPartUtils() {
            r1 = this;
            r1.<init>()
            java.lang.Class<android.support.v4.app.FragmentActivity> r0 = android.support.v4.app.FragmentActivity.class
            r1.fragmentActivityClazz = r0     // Catch: java.lang.Throwable -> L7
        L7:
            return
    }

    public static android.support.v4.app.FragmentActivity getFragmentActivity(java.lang.Object r0, java.lang.String r1) {
            android.app.Activity r0 = com.bytedance.pangle.transform.ZeusTransformUtils._getActivity(r0, r1)
            android.support.v4.app.FragmentActivity r0 = (android.support.v4.app.FragmentActivity) r0
            return r0
    }

    public static final java.lang.Class getFragmentActivityClass() {
            com.bytedance.pangle.transform.HostPartUtils r0 = com.bytedance.pangle.transform.HostPartUtils.a.a()
            java.lang.Class r0 = r0.fragmentActivityClazz
            return r0
    }
}
