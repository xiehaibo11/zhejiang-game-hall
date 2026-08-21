package com.kwad.sdk.core.report;

import android.content.Context;
import android.content.SharedPreferences;
import java.util.UUID;

/* JADX INFO: loaded from: classes2.dex */
public final class x {
    private static Context PG;
    private static String asD = Co();
    private static long asE = 0;

    public static String Ck() {
        com.kwad.sdk.core.e.c.d("ReportIdManager", ">> updateSessionId");
        String strCo = Co();
        asD = strCo;
        return strCo;
    }

    public static String Cl() {
        return asD;
    }

    public static long Cm() {
        long jBe = be(PG);
        b(PG, 1 + jBe);
        return jBe;
    }

    public static long Cn() {
        return asE;
    }

    private static String Co() {
        return UUID.randomUUID().toString();
    }

    private static boolean b(Context context, long j) {
        if (context == null) {
            return false;
        }
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("ksadsdk_seq", 0).edit();
        editorEdit.putLong("seq", j);
        return editorEdit.commit();
    }

    private static long be(Context context) {
        SharedPreferences sharedPreferences;
        if (context == null || (sharedPreferences = context.getSharedPreferences("ksadsdk_seq", 0)) == null) {
            return 0L;
        }
        return sharedPreferences.getLong("seq", 1L);
    }

    public static void init(Context context) {
        PG = context;
    }
}
