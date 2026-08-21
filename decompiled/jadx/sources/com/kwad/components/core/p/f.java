package com.kwad.components.core.p;

import android.content.Context;
import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.core.network.p;
import com.kwad.sdk.core.response.model.SdkConfigData;
import com.kwad.sdk.core.threads.GlobalThreadPools;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.u;
import com.kwad.sdk.utils.x;
import com.kwad.sdk.utils.y;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class f {
    private static volatile boolean PE;
    private static volatile boolean PF;
    private static Context PG;
    private static final List<a> PH = new CopyOnWriteArrayList();

    public interface a {
        void a(SdkConfigData sdkConfigData);

        void on();
    }

    public static synchronized void a(Context context, a aVar) {
        if (PE) {
            com.kwad.sdk.core.e.c.d("ConfigRequestManager", "config request manager has init-ed");
            return;
        }
        PE = true;
        PG = context;
        PH.add(aVar);
        PH.add(new a() { // from class: com.kwad.components.core.p.f.1
            @Override // com.kwad.components.core.p.f.a
            public final void a(SdkConfigData sdkConfigData) {
            }

            @Override // com.kwad.components.core.p.f.a
            public final void on() {
                try {
                    Map<String, String> jSON2MapString = u.parseJSON2MapString(com.kwad.sdk.core.config.c.amt.getValue());
                    for (String str : jSON2MapString.keySet()) {
                        GlobalThreadPools.n(str, Integer.parseInt(jSON2MapString.get(str)));
                    }
                    GlobalThreadPools.CP();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTrace(th);
                }
            }
        });
        com.kwad.sdk.utils.g.execute(new aw() { // from class: com.kwad.components.core.p.f.2
            @Override // com.kwad.sdk.utils.aw
            public final void doTask() {
                y.j(f.PG, y.ca(f.PG) + 1);
                com.kwad.sdk.core.config.d.aQ(f.PG);
                for (a aVar2 : f.PH) {
                    if (aVar2 != null) {
                        aVar2.on();
                    }
                }
                f.pF();
            }
        });
    }

    public static void a(a aVar) {
        PH.add(aVar);
        if (isLoaded()) {
            aVar.on();
        }
        if (PF) {
            aVar.a(com.kwad.sdk.core.config.d.zw());
        }
    }

    static /* synthetic */ boolean aD(boolean z) {
        PF = true;
        return true;
    }

    private static boolean isLoaded() {
        return com.kwad.sdk.core.config.d.isLoaded();
    }

    public static void pF() {
        com.kwad.sdk.core.e.c.d("ConfigRequestManager", "load()");
        new m<e, SdkConfigData>() { // from class: com.kwad.components.core.p.f.3
            private static SdkConfigData au(String str) {
                y.ag(f.PG, str);
                JSONObject jSONObject = new JSONObject(str);
                SdkConfigData sdkConfigData = new SdkConfigData();
                sdkConfigData.parseJson(jSONObject);
                try {
                    com.kwad.sdk.core.config.d.xs();
                    com.kwad.sdk.core.config.d.zb();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTrace(th);
                }
                return sdkConfigData;
            }

            private static e pH() {
                return new e();
            }

            @Override // com.kwad.sdk.core.network.a
            public final /* synthetic */ com.kwad.sdk.core.network.g createRequest() {
                return pH();
            }

            @Override // com.kwad.sdk.core.network.m
            public final /* synthetic */ BaseResultData parseData(String str) {
                return au(str);
            }
        }.request(new p<e, SdkConfigData>() { // from class: com.kwad.components.core.p.f.4
            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onStartRequest(e eVar) {
                com.kwad.sdk.core.e.c.d("ConfigRequestManager", "onStartRequest request url = " + eVar.getUrl());
                super.onStartRequest(eVar);
            }

            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
            public void onError(e eVar, int i, String str) {
                super.onError(eVar, i, str);
                com.kwad.sdk.core.e.c.d("ConfigRequestManager", "onError errorCode=" + i + " errorMsg=" + str);
            }

            private static void b(SdkConfigData sdkConfigData) {
                com.kwad.sdk.core.config.b.aO(f.PG);
                com.kwad.sdk.core.config.d.c(sdkConfigData);
                f.aD(true);
                for (a aVar : f.PH) {
                    if (aVar != null) {
                        aVar.a(sdkConfigData);
                    }
                }
                if (sdkConfigData != null) {
                    com.kwad.sdk.ip.direct.a.a(sdkConfigData.httpDnsInfo);
                }
                x.Io();
                x.Ii();
                y.j(f.PG, 0);
            }

            @Override // com.kwad.sdk.core.network.p, com.kwad.sdk.core.network.h
            public final /* synthetic */ void onSuccess(com.kwad.sdk.core.network.g gVar, BaseResultData baseResultData) {
                b((SdkConfigData) baseResultData);
            }
        });
    }
}
