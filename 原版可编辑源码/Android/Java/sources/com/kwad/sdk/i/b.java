package com.kwad.sdk.i;

import com.kwad.components.offline.api.core.api.ILoggerReporter;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.report.p;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import com.kwad.sdk.utils.s;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.kwai.adclient.kscommerciallogger.model.SubBusinessType;
import org.json.JSONObject;

public class b {
    static final boolean $assertionsDisabled = false;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int aCX;
        public String aCY;
        public String sdkVersion;
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public int aCZ;
        public String aDa;
        public String aDb;
        public String aDc;
        public String aDd;
        public String aDe;
    }

    public static void Gg() {
        g.execute(new aw() {
            @Override
            public final void doTask() {
                b.Gh();
            }
        });
    }

    private static void Gh() {
        a aVarA;
        JSONObject jSONObject = (JSONObject) d.zw().getAppConfigData(null, new com.kwad.sdk.g.b<JSONObject, JSONObject>() {
            private static JSONObject D(JSONObject jSONObject2) {
                return jSONObject2.optJSONObject("sdkTTPerfMonitor");
            }

            @Override
            public final JSONObject apply(JSONObject jSONObject2) {
                return D(jSONObject2);
            }
        });
        if (jSONObject == null) {
            return;
        }
        b bVar = new b();
        try {
            bVar.parseJson(jSONObject);
            if (bVar.aCZ == 1 && (aVarA = a(ServiceProvider.getContext().getClassLoader(), bVar)) != null) {
                KSLoggerReporter.a(new p.a().dz(ILoggerReporter.Category.APM_LOG).b(BusinessType.OTHER).a(SubBusinessType.OTHER).dA("ad_sdk_tt_sdk_info").A(aVarA.toJson()).Cd());
            }
        } catch (Throwable unused) {
        }
    }

    private static a a(ClassLoader classLoader, b bVar) {
        Class<?> clsA = s.a(bVar.aDa, classLoader);
        if (clsA == null) {
            return null;
        }
        a aVar = new a();
        aVar.aCX = s.fu(bVar.aDb) ? 1 : 0;
        Object objB = s.b(clsA, bVar.aDc, new Object[0]);
        aVar.sdkVersion = (String) s.f(objB, bVar.aDd, new Object[0]);
        aVar.aCY = (String) s.f(objB, bVar.aDe, new Object[0]);
        return aVar;
    }
}
