package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DownloadingUtils {
    public static long[] processArray = {0, 1, 2, 4, 8, 16, 32, 64, 99, 100};

    public static boolean inProcessArray(long j) {
        int i = 0;
        while (true) {
            long[] jArr = processArray;
            if (i >= jArr.length) {
                return false;
            }
            if (j == jArr[i]) {
                return true;
            }
            i++;
        }
    }
}
