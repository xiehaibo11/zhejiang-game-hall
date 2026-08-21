package com.kuaishou.weapon.p0;

import android.content.Context;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.jni.Engine;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class as extends dg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private JSONObject f2693a;

    public as(Context context, int i) {
        if (Engine.loadSuccess) {
            try {
                Engine engine = Engine.getInstance(context);
                int iIntValue = Integer.valueOf(cj.c).intValue();
                String strA = a(context);
                if (TextUtils.isEmpty(strA)) {
                    return;
                }
                String strEopq = engine.eopq(iIntValue, 0, i, strA);
                if (TextUtils.isEmpty(strEopq)) {
                    return;
                }
                this.f2693a = new JSONObject(strEopq);
            } catch (Throwable unused) {
            }
        }
    }

    private String a(Context context) {
        try {
            StringBuilder sb = new StringBuilder();
            h hVarA = h.a(context, "re_po_rt");
            sb.append(hVarA.b(df.aa, 1));
            sb.append(hVarA.b(df.X, 1));
            sb.append(hVarA.b(df.V, 1));
            sb.append(hVarA.b(df.Z, 1));
            sb.append(hVarA.b(df.ab, 1));
            sb.append(hVarA.b(df.ad, 1));
            sb.append(hVarA.b(df.Y, 1));
            sb.append(hVarA.b(df.U, 1));
            sb.append(hVarA.b(df.ag, 1));
            sb.append(hVarA.b(df.ae, 1));
            sb.append(hVarA.b(df.af, 1));
            return sb.toString();
        } catch (Exception unused) {
            return "";
        }
    }

    public String a(String str) {
        JSONObject jSONObject = this.f2693a;
        if (jSONObject == null) {
            return null;
        }
        try {
            return jSONObject.getString(str);
        } catch (Exception unused) {
            return null;
        }
    }

    public JSONObject a() {
        return this.f2693a;
    }

    public String b(String str) {
        JSONObject jSONObject = this.f2693a;
        if (jSONObject == null) {
            return null;
        }
        try {
            String string = jSONObject.getString(str);
            return !TextUtils.isEmpty(string) ? string.replace("\n", "").replace("\t", " ") : string;
        } catch (Exception unused) {
            return null;
        }
    }

    public JSONArray c(String str) {
        JSONObject jSONObject = this.f2693a;
        if (jSONObject == null) {
            return null;
        }
        try {
            String string = jSONObject.getString(str);
            if (TextUtils.isEmpty(string) || string.length() <= 3) {
                return null;
            }
            String strReplaceAll = string.replaceAll("\\n", "");
            if (!TextUtils.isEmpty(strReplaceAll)) {
                string = strReplaceAll;
            }
            JSONArray jSONArray = new JSONArray(string);
            if (jSONArray.length() > 1) {
                return jSONArray;
            }
            return null;
        } catch (Exception unused) {
            return null;
        }
    }

    public JSONObject d(String str) {
        JSONObject jSONObject = this.f2693a;
        if (jSONObject == null) {
            return null;
        }
        try {
            String string = jSONObject.getString(str);
            if (TextUtils.isEmpty(string) || string.length() <= 2) {
                return null;
            }
            JSONObject jSONObject2 = new JSONObject(string);
            if (jSONObject2.length() > 1) {
                return jSONObject2;
            }
            return null;
        } catch (Exception unused) {
            return null;
        }
    }

    public String e(String str) {
        JSONObject jSONObject = this.f2693a;
        if (jSONObject == null) {
            return null;
        }
        try {
            String string = jSONObject.getString(str);
            if (TextUtils.isEmpty(string)) {
                return null;
            }
            if (string.length() > 2) {
                return string;
            }
            return null;
        } catch (Exception unused) {
            return null;
        }
    }
}
