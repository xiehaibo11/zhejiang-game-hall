package com.kwad.sdk.crash.online.monitor;

import android.text.TextUtils;
import com.kwad.sdk.crash.online.monitor.a.c;
import com.kwad.sdk.crash.online.monitor.block.d;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static volatile boolean hasInit;

    private static c EV() {
        c cVar = new c();
        cVar.aBi = new com.kwad.sdk.crash.online.monitor.a.a();
        cVar.aBi.aAZ = 5;
        return cVar;
    }

    static /* synthetic */ boolean access$002(boolean z) {
        hasInit = true;
        return true;
    }

    public static void dG(final String str) {
        g.execute(new aw() { // from class: com.kwad.sdk.crash.online.monitor.a.1
            @Override // com.kwad.sdk.utils.aw
            public final void doTask() {
                if (a.hasInit) {
                    return;
                }
                com.kwad.sdk.core.e.c.d("perfMonitor.MonitorManager", "configStr:" + str);
                c cVarEz = a.ez(str);
                com.kwad.sdk.core.e.c.d("perfMonitor.MonitorManager", cVarEz.toJson().toString());
                d.d(cVarEz.aBi);
                a.access$002(true);
            }
        });
    }

    public static c ez(String str) {
        if (TextUtils.isEmpty(str)) {
            return EV();
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            c cVar = new c();
            cVar.parseJson(jSONObject);
            return cVar;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.w("perfMonitor.MonitorManager", e);
            return EV();
        }
    }
}
