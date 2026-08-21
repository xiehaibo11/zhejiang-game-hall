package com.tkay.expressad.exoplayer.j.a;

import android.net.Uri;

/* JADX INFO: loaded from: classes3.dex */
final class j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6715a = "exo_";
    private static final String b = "exo_redir";
    private static final String c = "exo_len";

    public static long a(i iVar) {
        return iVar.a(c);
    }

    public static void a(k kVar, long j) {
        kVar.a(c, j);
    }

    private static void a(k kVar) {
        kVar.a(c);
    }

    private static Uri b(i iVar) {
        String strA = iVar.a(b, (String) null);
        if (strA == null) {
            return null;
        }
        return Uri.parse(strA);
    }

    public static void a(k kVar, Uri uri) {
        kVar.a(b, uri.toString());
    }

    private static void b(k kVar) {
        kVar.a(b);
    }

    private j() {
    }
}
