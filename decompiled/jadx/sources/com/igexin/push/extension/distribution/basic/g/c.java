package com.igexin.push.extension.distribution.basic.g;

import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes2.dex */
public class c {
    public static int a(String str, String str2) {
        try {
            Pattern patternCompile = Pattern.compile("([a-zA-Z_-])*");
            String[] strArrSplit = str.split("\\.");
            String[] strArrSplit2 = str2.split("\\.");
            if (strArrSplit.length < 4 || strArrSplit2.length < 4) {
                return -1;
            }
            strArrSplit[3] = patternCompile.matcher(strArrSplit[3]).replaceAll("");
            strArrSplit2[3] = patternCompile.matcher(strArrSplit2[3]).replaceAll("");
            long j = 0;
            long j2 = 0;
            int i = 0;
            while (true) {
                long j3 = 1;
                if (i >= 4) {
                    break;
                }
                for (int i2 = 0; i2 < 3 - i; i2++) {
                    j3 *= 100;
                }
                j2 += Long.parseLong(strArrSplit[i]) * j3;
                i++;
            }
            for (int i3 = 0; i3 < 4; i3++) {
                long j4 = 1;
                for (int i4 = 0; i4 < 3 - i3; i4++) {
                    j4 *= 100;
                }
                j += Long.parseLong(strArrSplit2[i3]) * j4;
            }
            if (j2 > j) {
                return 1;
            }
            return j2 == j ? 0 : -1;
        } catch (Exception unused) {
            return -1;
        }
    }
}
