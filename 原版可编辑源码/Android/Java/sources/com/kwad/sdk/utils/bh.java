package com.kwad.sdk.utils;

import java.util.Formatter;
import java.util.Locale;

public final class bh {
    public static String V(long j) {
        if (j <= 0 || j >= 86400000) {
            return "00:00";
        }
        try {
            long j2 = j / 1000;
            long j3 = j2 % 60;
            long j4 = (j2 / 60) % 60;
            long j5 = j2 / com.tkay.expressad.d.a.b.P;
            Formatter formatter = new Formatter(new StringBuilder(), Locale.getDefault());
            return j5 > 0 ? formatter.format("%d:%02d:%02d", Long.valueOf(j5), Long.valueOf(j4), Long.valueOf(j3)).toString() : formatter.format("%02d:%02d", Long.valueOf(j4), Long.valueOf(j3)).toString();
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return "";
        }
    }
}
