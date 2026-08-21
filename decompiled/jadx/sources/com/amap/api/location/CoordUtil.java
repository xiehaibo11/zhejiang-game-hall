package com.amap.api.location;

/* JADX INFO: loaded from: classes.dex */
public class CoordUtil {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f1379a;

    public static native int convertToGcj(double[] dArr, double[] dArr2);

    public static boolean isLoadedSo() {
        return f1379a;
    }

    public static void setLoadedSo(boolean z) {
        f1379a = z;
    }
}
