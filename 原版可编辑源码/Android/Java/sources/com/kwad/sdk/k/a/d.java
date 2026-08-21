package com.kwad.sdk.k.a;

import android.content.Context;
import android.provider.Settings;
import com.kwad.sdk.utils.t;
import org.json.JSONObject;

public final class d extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    public int aGo = 0;
    public int aGp = 0;
    public int aGq = 0;
    public int aGr = 0;
    public int aGs = 0;
    public int aGt = 0;
    public int aGu = 0;

    public d(Context context) {
        if (context != null) {
            bA(Settings.Secure.getInt(context.getContentResolver(), "adb_enabled", 0) > 0);
        }
    }

    private void a(d dVar, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        dVar.aGo = jSONObject.optInt("isRoot");
        dVar.aGp = jSONObject.optInt("isXPosed");
        dVar.aGq = jSONObject.optInt("isFrameworkHooked");
        dVar.aGr = jSONObject.optInt("isVirtual");
        dVar.aGs = jSONObject.optInt("isAdbEnabled");
        dVar.aGt = jSONObject.optInt("isEmulator");
        dVar.aGu = jSONObject.optInt("isGroupControl");
        super.afterParseJson(jSONObject);
    }

    private static JSONObject b(d dVar, JSONObject jSONObject) {
        t.putValue(jSONObject, "isRoot", dVar.aGo);
        t.putValue(jSONObject, "isXPosed", dVar.aGp);
        t.putValue(jSONObject, "isFrameworkHooked", dVar.aGq);
        t.putValue(jSONObject, "isVirtual", dVar.aGr);
        t.putValue(jSONObject, "isAdbEnabled", dVar.aGs);
        t.putValue(jSONObject, "isEmulator", dVar.aGt);
        t.putValue(jSONObject, "isGroupControl", dVar.aGu);
        return jSONObject;
    }

    private void bA(boolean z) {
        this.aGs = bD(z);
    }

    private static int bD(boolean z) {
        return z ? 1 : 2;
    }

    public final void bB(boolean z) {
        this.aGt = bD(z);
    }

    public final void bC(boolean z) {
        this.aGu = bD(z);
    }

    public final void bx(boolean z) {
        this.aGo = bD(z);
    }

    public final void by(boolean z) {
        this.aGp = bD(z);
    }

    public final void bz(boolean z) {
        this.aGq = bD(z);
    }

    @Override
    public final void parseJson(JSONObject jSONObject) {
        a(this, jSONObject);
        afterParseJson(jSONObject);
    }

    @Override
    public final JSONObject toJson() {
        JSONObject jSONObjectB = b(this, new JSONObject());
        afterToJson(jSONObjectB);
        return jSONObjectB;
    }
}
