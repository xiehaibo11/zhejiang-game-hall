package com.alipay.sdk.authjs;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.widget.Toast;
import com.alipay.sdk.authjs.a;
import com.tkay.expressad.foundation.d.r;
import java.util.Timer;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private c f1134a;
    private Context b;

    public d(Context context, c cVar) {
        this.b = context;
        this.f1134a = cVar;
    }

    public void a(String str) {
        String string;
        JSONObject jSONObject;
        try {
            jSONObject = new JSONObject(str);
            string = jSONObject.getString(a.d);
        } catch (Exception unused) {
            string = null;
        }
        try {
            if (TextUtils.isEmpty(string)) {
                return;
            }
            JSONObject jSONObject2 = jSONObject.getJSONObject("param");
            JSONObject jSONObject3 = jSONObject2 instanceof JSONObject ? jSONObject2 : null;
            String string2 = jSONObject.getString(a.f);
            String string3 = jSONObject.getString(a.c);
            a aVar = new a("call");
            aVar.b(string3);
            aVar.c(string2);
            aVar.a(jSONObject3);
            aVar.a(string);
            a(aVar);
        } catch (Exception unused2) {
            if (TextUtils.isEmpty(string)) {
                return;
            }
            try {
                a(string, a.EnumC0005a.RUNTIME_ERROR, true);
            } catch (JSONException unused3) {
            }
        }
    }

    public void a(a aVar) throws JSONException {
        if (aVar == null) {
            return;
        }
        if (TextUtils.isEmpty(aVar.d())) {
            a(aVar.b(), a.EnumC0005a.INVALID_PARAMETER, true);
        } else {
            a(new e(this, aVar));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, a.EnumC0005a enumC0005a, boolean z) throws JSONException {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("error", enumC0005a.ordinal());
        a aVar = new a(a.b);
        aVar.a(jSONObject);
        aVar.a(str);
        if (z) {
            this.f1134a.a(aVar);
        } else {
            a(aVar);
        }
    }

    private static void a(Runnable runnable) {
        if (runnable == null) {
            return;
        }
        if (Looper.getMainLooper() == Looper.myLooper()) {
            runnable.run();
        } else {
            new Handler(Looper.getMainLooper()).post(runnable);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public a.EnumC0005a b(a aVar) {
        if (aVar != null && "toast".equals(aVar.d())) {
            c(aVar);
        }
        return a.EnumC0005a.NONE_ERROR;
    }

    private void c(a aVar) {
        JSONObject jSONObjectF = aVar.f();
        String strOptString = jSONObjectF.optString("content");
        int i = jSONObjectF.optInt(r.ag) < 2500 ? 0 : 1;
        Toast.makeText(this.b, strOptString, i).show();
        new Timer().schedule(new f(this, aVar), i);
    }
}
