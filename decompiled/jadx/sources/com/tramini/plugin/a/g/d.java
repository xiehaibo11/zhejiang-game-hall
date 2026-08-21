package com.tramini.plugin.a.g;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static JSONObject f7867a;

    private static void a(String str) {
        try {
            f7867a = new JSONObject(str);
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
