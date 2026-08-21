package com.kwad.sdk.m;

import android.content.Context;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.ah;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class k {
    private static a aMK;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public List<String> aML;
        public List<C0226a> aMM;

        /* JADX INFO: renamed from: com.kwad.sdk.m.k$a$a, reason: collision with other inner class name */
        public static class C0226a extends com.kwad.sdk.core.response.a.a {
            public String aMN;
            public String aMO;
        }
    }

    private static a KS() {
        a aVar = aMK;
        if (aVar != null) {
            return aVar;
        }
        JSONObject jSONObject = (JSONObject) ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).getAppConfigData(null, new com.kwad.sdk.g.b<JSONObject, JSONObject>() { // from class: com.kwad.sdk.m.k.1
            private static JSONObject D(JSONObject jSONObject2) {
                return jSONObject2.optJSONObject("wrapperBlackConfig");
            }

            @Override // com.kwad.sdk.g.b
            public final /* synthetic */ JSONObject apply(JSONObject jSONObject2) {
                return D(jSONObject2);
            }
        });
        a aVar2 = new a();
        aMK = aVar2;
        try {
            aVar2.parseJson(jSONObject);
        } catch (Throwable unused) {
        }
        return aMK;
    }

    private static boolean a(Context context, a aVar) {
        String name = context.getClass().getName();
        Iterator it = new CopyOnWriteArrayList(aVar.aML).iterator();
        while (it.hasNext()) {
            if (ah.a((String) it.next(), name)) {
                com.kwad.sdk.core.e.c.d("WrapperBlackHelper", "isBlackClass");
                return true;
            }
        }
        return false;
    }

    private static boolean a(StackTraceElement stackTraceElement, a aVar) {
        String className = stackTraceElement.getClassName();
        String methodName = stackTraceElement.getMethodName();
        for (a.C0226a c0226a : new CopyOnWriteArrayList(aVar.aMM)) {
            String str = c0226a.aMN;
            String str2 = c0226a.aMO;
            if (ah.a(str, className) && ah.a(str2, methodName)) {
                com.kwad.sdk.core.e.c.d("WrapperBlackHelper", "isBlackMethod");
                return true;
            }
        }
        return false;
    }

    public static boolean dp(Context context) {
        a aVarKS = KS();
        if (ah.K(aVarKS.aML) || ah.K(aVarKS.aMM) || !a(context, aVarKS)) {
            return false;
        }
        for (StackTraceElement stackTraceElement : Thread.currentThread().getStackTrace()) {
            if (a(stackTraceElement, aVarKS)) {
                return true;
            }
        }
        return false;
    }
}
