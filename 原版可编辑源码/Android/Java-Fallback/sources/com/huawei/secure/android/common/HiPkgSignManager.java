package com.huawei.secure.android.common;

@java.lang.Deprecated
public abstract class HiPkgSignManager {
    public HiPkgSignManager() {
            r0 = this;
            r0.<init>()
            return
    }

    @java.lang.Deprecated
    public static boolean doCheckArchiveApk(android.content.Context r0, java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.huawei.secure.android.common.sign.HiPkgSignManager.doCheckArchiveApk(r0, r1, r2, r3)
            return r0
    }

    @java.lang.Deprecated
    public static boolean doCheckInstalled(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            boolean r0 = com.huawei.secure.android.common.sign.HiPkgSignManager.doCheckInstalled(r0, r1, r2)
            return r0
    }

    @java.lang.Deprecated
    public static byte[] getInstalledAPPSignature(android.content.Context r0, java.lang.String r1) {
            byte[] r0 = com.huawei.secure.android.common.sign.HiPkgSignManager.getInstalledAPPSignature(r0, r1)
            return r0
    }

    @java.lang.Deprecated
    public static java.lang.String getInstalledAppHash(android.content.Context r0, java.lang.String r1) {
            java.lang.String r0 = com.huawei.secure.android.common.sign.HiPkgSignManager.getInstalledAppHash(r0, r1)
            return r0
    }

    @java.lang.Deprecated
    public static byte[] getUnInstalledAPPSignature(android.content.Context r0, java.lang.String r1) {
            byte[] r0 = com.huawei.secure.android.common.sign.HiPkgSignManager.getUnInstalledAPPSignature(r0, r1)
            return r0
    }

    @java.lang.Deprecated
    public static java.lang.String getUnInstalledAppHash(android.content.Context r0, java.lang.String r1) {
            java.lang.String r0 = com.huawei.secure.android.common.sign.HiPkgSignManager.getUnInstalledAppHash(r0, r1)
            return r0
    }
}
