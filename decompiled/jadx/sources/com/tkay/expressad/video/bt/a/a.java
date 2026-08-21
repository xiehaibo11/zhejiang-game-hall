package com.tkay.expressad.video.bt.a;

import android.util.Base64;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.video.bt.module.TkayBTVideoView;
import java.util.LinkedHashMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class a {
    private static final String c = a.class.getSimpleName();
    private static LinkedHashMap<String, TkayBTVideoView> e = new LinkedHashMap<>();
    private String d = "handlerNativeResult";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f7163a = 0;
    int b = 1;

    /* JADX INFO: renamed from: com.tkay.expressad.video.bt.a.a$a, reason: collision with other inner class name */
    private static final class C0476a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static a f7164a = new a();

        private C0476a() {
        }
    }

    public static a a() {
        return C0476a.f7164a;
    }

    public static void a(String str, TkayBTVideoView tkayBTVideoView) {
        e.put(str, tkayBTVideoView);
    }

    public static void a(String str) {
        e.remove(str);
    }

    /* JADX WARN: Removed duplicated region for block: B:58:0x00d8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(java.lang.Object r12, java.lang.String r13, org.json.JSONArray r14) {
        /*
            Method dump skipped, instruction units count: 369
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.video.bt.a.a.a(java.lang.Object, java.lang.String, org.json.JSONArray):void");
    }

    private static void a(int i, String str, Object obj) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            jSONObject.put("message", str);
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (JSONException e2) {
            e2.getMessage();
        } catch (Throwable th) {
            th.getMessage();
        }
    }
}
