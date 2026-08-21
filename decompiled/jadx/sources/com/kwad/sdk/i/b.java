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

/* JADX INFO: loaded from: classes2.dex */
public class b {
    static final /* synthetic */ boolean $assertionsDisabled = false;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int aCX;
        public String aCY;
        public String sdkVersion;
    }

    /* JADX INFO: renamed from: com.kwad.sdk.i.b$b, reason: collision with other inner class name */
    public static class C0224b extends com.kwad.sdk.core.response.a.a {
        public int aCZ;
        public String aDa;
        public String aDb;
        public String aDc;
        public String aDd;
        public String aDe;
    }

    public static void Gg() {
        g.execute(new aw() { // from class: com.kwad.sdk.i.b.1
            @Override // com.kwad.sdk.utils.aw
            public final void doTask() {
                b.Gh();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void Gh() {
        a aVarA;
        JSONObject jSONObject = (JSONObject) d.zw().getAppConfigData(null, new com.kwad.sdk.g.b<JSONObject, JSONObject>() { // from class: com.kwad.sdk.i.b.2
            private static JSONObject D(JSONObject jSONObject2) {
                return jSONObject2.optJSONObject("sdkTTPerfMonitor");
            }

            @Override // com.kwad.sdk.g.b
            public final /* synthetic */ JSONObject apply(JSONObject jSONObject2) {
                return D(jSONObject2);
            }
        });
        if (jSONObject == null) {
            return;
        }
        C0224b c0224b = new C0224b();
        try {
            c0224b.parseJson(jSONObject);
            if (c0224b.aCZ == 1 && (aVarA = a(ServiceProvider.getContext().getClassLoader(), c0224b)) != null) {
                KSLoggerReporter.a(new p.a().dz(ILoggerReporter.Category.APM_LOG).b(BusinessType.OTHER).a(SubBusinessType.OTHER).dA("ad_sdk_tt_sdk_info").A(aVarA.toJson()).Cd());
            }
        } catch (Throwable unused) {
        }
    }

    private static a a(ClassLoader classLoader, C0224b c0224b) {
        Class<?> clsA = s.a(c0224b.aDa, classLoader);
        if (clsA == null) {
            return null;
        }
        a aVar = new a();
        aVar.aCX = s.fu(c0224b.aDb) ? 1 : 0;
        Object objB = s.b(clsA, c0224b.aDc, new Object[0]);
        aVar.sdkVersion = (String) s.f(objB, c0224b.aDd, new Object[0]);
        aVar.aCY = (String) s.f(objB, c0224b.aDe, new Object[0]);
        return aVar;
    }
}
