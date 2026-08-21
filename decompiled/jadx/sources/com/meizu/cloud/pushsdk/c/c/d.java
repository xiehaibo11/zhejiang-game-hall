package com.meizu.cloud.pushsdk.c.c;

import cz.msebera.android.httpclient.client.methods.HttpPatch;

/* JADX INFO: loaded from: classes3.dex */
public class d {
    public static boolean a(String str) {
        return "POST".equals(str) || "PUT".equals(str) || HttpPatch.METHOD_NAME.equals(str) || "PROPPATCH".equals(str) || "REPORT".equals(str);
    }

    public static boolean b(String str) {
        return a(str) || "OPTIONS".equals(str) || "DELETE".equals(str) || "PROPFIND".equals(str) || "MKCOL".equals(str) || "LOCK".equals(str);
    }
}
