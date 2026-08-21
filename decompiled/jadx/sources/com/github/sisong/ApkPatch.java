package com.github.sisong;

/* JADX INFO: loaded from: classes.dex */
public class ApkPatch {
    public static volatile boolean isDebug;

    public static native void initApkDiff(boolean z, boolean z2);

    public static native int patch(String str, String str2, String str3, long j, String str4, int i);
}
