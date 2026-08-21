package com.kwad.sdk.core.request.model;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.bf;
import com.kwad.sdk.utils.k;
import com.kwad.sdk.utils.t;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a implements com.kwad.sdk.core.b {
    private static JSONObject atI;
    private String appId;
    private String atJ;
    private String name;
    private String packageName;
    private String version;

    private static boolean C(JSONObject jSONObject) {
        if (jSONObject == null) {
            return false;
        }
        String strOptString = jSONObject.optString(com.tkay.expressad.videocommon.e.b.u);
        String strOptString2 = jSONObject.optString("name");
        return !TextUtils.isEmpty(strOptString2) && !TextUtils.isEmpty(strOptString) && strOptString.equals(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getAppId()) && strOptString2.equals(((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getAppName());
    }

    public static JSONObject Cr() {
        if (!C(atI)) {
            atI = Cs().toJson();
        }
        return atI;
    }

    private static a Cs() {
        a aVar = new a();
        com.kwad.sdk.service.a.e eVar = (com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class);
        aVar.appId = eVar.getAppId();
        aVar.name = eVar.getAppName();
        Context context = eVar.getContext();
        if (context != null) {
            aVar.packageName = context.getPackageName();
            aVar.version = k.bQ(context);
        }
        aVar.atJ = com.kwad.sdk.utils.e.bG(context);
        if (!TextUtils.isEmpty(bf.getAppId())) {
            aVar.appId = bf.getAppId();
        }
        if (!TextUtils.isEmpty(bf.getPackageName())) {
            aVar.packageName = bf.getPackageName();
        }
        return aVar;
    }

    @Override // com.kwad.sdk.core.b
    public final void parseJson(JSONObject jSONObject) {
    }

    @Override // com.kwad.sdk.core.b
    public final JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, com.tkay.expressad.videocommon.e.b.u, this.appId);
        t.putValue(jSONObject, "name", this.name);
        t.putValue(jSONObject, DBDefinition.PACKAGE_NAME, this.packageName);
        t.putValue(jSONObject, "version", this.version);
        t.putValue(jSONObject, "sha1", this.atJ);
        return jSONObject;
    }
}
