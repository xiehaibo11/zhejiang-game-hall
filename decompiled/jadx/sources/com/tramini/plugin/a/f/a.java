package com.tramini.plugin.a.f;

import com.tramini.plugin.a.a.c;
import com.tramini.plugin.a.d.e;
import com.tramini.plugin.b.b;
import java.util.Random;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f7855a = a.class.getSimpleName();
    public static final int b = 0;
    public static final int c = 1;
    public static final int d = 3;
    private static a e;

    private a() {
    }

    public static a a() {
        if (e == null) {
            e = new a();
        }
        return e;
    }

    public final synchronized void a(String str, JSONObject jSONObject, JSONObject jSONObject2) {
        a(1, str, jSONObject, jSONObject2);
    }

    private synchronized void a(int i, String str, JSONObject jSONObject, JSONObject jSONObject2) {
        com.tramini.plugin.b.a aVarB = b.a(c.a().b()).b();
        if (aVarB == null) {
            return;
        }
        com.tramini.plugin.a.c.c cVar = aVarB.e().get(str);
        int iNextInt = 5000;
        if (cVar != null) {
            iNextInt = cVar.b;
            int i2 = cVar.c;
            if (iNextInt == 0 && i2 == 0) {
                iNextInt = 0;
            } else if (iNextInt != i2) {
                iNextInt += new Random().nextInt(i2 - iNextInt);
            }
        }
        c.a().a(new AnonymousClass1(str, jSONObject, jSONObject2, i), iNextInt);
    }

    public final void a(String str, String str2) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("type", 14);
            jSONObject.put("setting_id", str2);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        a(0, str, (JSONObject) null, jSONObject);
    }

    public final void a(String str, String str2, JSONObject jSONObject, JSONObject jSONObject2) {
        try {
            jSONObject2.put("sdk_time", System.currentTimeMillis());
            jSONObject2.put("type", 17);
            jSONObject2.put("setting_id", str2);
        } catch (Throwable unused) {
        }
        a(3, str, jSONObject, jSONObject2);
    }

    /* JADX INFO: renamed from: com.tramini.plugin.a.f.a$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f7856a;
        final /* synthetic */ JSONObject b;
        final /* synthetic */ JSONObject c;
        final /* synthetic */ int d;

        AnonymousClass1(String str, JSONObject jSONObject, JSONObject jSONObject2, int i) {
            this.f7856a = str;
            this.b = jSONObject;
            this.c = jSONObject2;
            this.d = i;
        }

        @Override // java.lang.Runnable
        public final void run() {
            new e(c.a().b(), this.f7856a, this.b, this.c).a(this.d, new com.tramini.plugin.a.d.b() { // from class: com.tramini.plugin.a.f.a.1.1
                @Override // com.tramini.plugin.a.d.b
                public final void a() {
                }

                @Override // com.tramini.plugin.a.d.b
                public final void a(Object obj) {
                    c.a().b(c.a().b());
                }

                @Override // com.tramini.plugin.a.d.b
                public final void b() {
                    c.a().b(c.a().b());
                }
            });
        }
    }

    private void a(int i, String str, JSONObject jSONObject, JSONObject jSONObject2, int i2) {
        c.a().a(new AnonymousClass1(str, jSONObject, jSONObject2, i), i2);
    }
}
