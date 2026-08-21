package com.ss.android.downloadlib.utils;

import java.io.File;

/* JADX INFO: loaded from: classes3.dex */
public class c {
    public static long rg(File file) {
        if (file == null || !file.exists()) {
            return 0L;
        }
        return rg(file, file.lastModified(), 0);
    }

    private static long rg(File file, long j, int i) {
        File[] fileArrListFiles;
        if (file != null && file.exists()) {
            j = Math.max(j, file.lastModified());
            int i2 = i + 1;
            if (i2 >= 50) {
                return j;
            }
            if (file.isDirectory() && (fileArrListFiles = file.listFiles()) != null) {
                for (File file2 : fileArrListFiles) {
                    j = Math.max(j, rg(file2, j, i2));
                }
            }
        }
        return j;
    }
}
