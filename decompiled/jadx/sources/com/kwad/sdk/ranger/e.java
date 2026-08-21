package com.kwad.sdk.ranger;

import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import java.util.List;
import java.util.Random;
import java.util.concurrent.TimeUnit;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class e {
    public static final String TAG = e.class.getSimpleName();

    private static void a(d dVar) {
        try {
            a.a(dVar);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.e(TAG, Log.getStackTraceString(th));
        }
    }

    public static void d(d dVar) {
        if (new Random().nextFloat() >= dVar.aGJ) {
            com.kwad.sdk.core.e.c.d(TAG, "config.sampleRate：" + dVar.aGJ + " return");
            return;
        }
        if (dVar.Hq()) {
            e(dVar);
        }
        if (dVar.Hr()) {
            a(dVar);
        }
        if (dVar.Hs()) {
            f(dVar);
        }
    }

    public static void dG(final String str) {
        g.schedule(new aw() { // from class: com.kwad.sdk.ranger.e.1
            @Override // com.kwad.sdk.utils.aw
            public final void doTask() {
                String str2 = str;
                if (TextUtils.isEmpty(str2)) {
                    com.kwad.sdk.core.e.c.w(e.TAG, "config is empty");
                    return;
                }
                d dVarFm = e.fm(str2);
                if (dVarFm != null) {
                    com.kwad.sdk.core.e.c.d(e.TAG, "config:" + dVarFm.toJson().toString());
                }
                if (dVarFm == null || dVarFm.Hp()) {
                    return;
                }
                e.d(dVarFm);
            }
        }, 0L, TimeUnit.SECONDS);
    }

    private static void e(d dVar) {
        List<String> list = dVar.aGG;
        if (list == null || list.isEmpty()) {
            return;
        }
        try {
            RangerHelper.c(dVar);
            RangerHelper.replaceInternal();
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.e(TAG, Log.getStackTraceString(th));
        }
    }

    private static void f(d dVar) {
        b.Hn().b(dVar);
    }

    public static d fm(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            d dVar = new d();
            dVar.parseJson(jSONObject);
            return dVar;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.w(TAG, e);
            return null;
        }
    }
}
