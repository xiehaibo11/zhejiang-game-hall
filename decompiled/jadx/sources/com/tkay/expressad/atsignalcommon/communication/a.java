package com.tkay.expressad.atsignalcommon.communication;

import android.text.TextUtils;
import android.util.Base64;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.g.a.f;
import com.tkay.expressad.foundation.h.t;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6426a = a.class.getSimpleName();
    public static int b = 0;
    public static int c = 1;

    private static void a(Object obj, JSONObject jSONObject) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("data");
            if (jSONObjectOptJSONObject == null) {
                a(obj, "data is empty");
                return;
            }
            c cVarB = c.b(jSONObjectOptJSONObject);
            if (cVarB == null) {
                a(obj, "data camapign is empty");
                return;
            }
            new Thread(new AnonymousClass1(cVarB)).start();
            try {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("code", b);
                JSONObject jSONObject3 = new JSONObject();
                jSONObject3.put("id", "");
                jSONObject2.put("data", jSONObject3);
                j.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
            } catch (Exception e) {
                a(obj, e.getMessage());
                e.getMessage();
            }
        } catch (Throwable th) {
            a(obj, th.getMessage());
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.atsignalcommon.communication.a$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ c f6427a;

        AnonymousClass1(c cVar) {
            this.f6427a = cVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            try {
                a.a(this.f6427a.K(), this.f6427a);
            } catch (Throwable th) {
                String str = a.f6426a;
                th.getMessage();
            }
        }
    }

    private static void a(c cVar) {
        new Thread(new AnonymousClass1(cVar)).start();
    }

    private static void b(String str, c cVar) {
        if (f.n == null || TextUtils.isEmpty(cVar.aZ())) {
            return;
        }
        f.a(str, cVar, f.e);
    }

    private static String a(float f, float f2) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(com.tkay.expressad.foundation.g.a.cc, t.a(com.tkay.expressad.foundation.b.b.b().d(), f));
            jSONObject2.put(com.tkay.expressad.foundation.g.a.cd, t.a(com.tkay.expressad.foundation.b.b.b().d(), f2));
            jSONObject2.put(com.tkay.expressad.foundation.g.a.cf, 0);
            jSONObject2.put(com.tkay.expressad.foundation.g.a.cg, com.tkay.expressad.foundation.b.b.b().d().getResources().getConfiguration().orientation);
            jSONObject2.put(com.tkay.expressad.foundation.g.a.ch, t.c(com.tkay.expressad.foundation.b.b.b().d()));
            jSONObject.put(com.tkay.expressad.foundation.g.a.ce, jSONObject2);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject.toString();
    }

    private static String a(int i) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    private static void a(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", c);
            jSONObject.put("message", str);
            jSONObject.put("data", new JSONObject());
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private static void b(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", b);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("id", str);
            jSONObject.put("data", jSONObject2);
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            a(obj, e.getMessage());
            e.getMessage();
        }
    }

    static /* synthetic */ void a(String str, c cVar) {
        if (f.n == null || TextUtils.isEmpty(cVar.aZ())) {
            return;
        }
        f.a(str, cVar, f.e);
    }
}
