package com.kwad.sdk.i;

import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.api.model.AdnName;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import com.kwad.sdk.utils.t;
import com.kwad.sdk.utils.y;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.TimeUnit;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static List<String> aCP;
    private static volatile boolean aCQ;

    /* JADX INFO: renamed from: com.kwad.sdk.i.a$a, reason: collision with other inner class name */
    public static class C0223a extends com.kwad.sdk.core.response.a.a {
        public long aCR;
        public long aCS;
        public long aCT;
        public String aCU;
        public String aCV;
        public String aCW;
        public String sdkVersion;
    }

    static class b {
        private String aCU;
        private String aCV;
        private String aCW;
        private String sdkVersion;

        private b() {
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static String a(b bVar) {
            return "exit&" + bVar.aCU + "&" + bVar.aCV + "&" + bVar.aCW + "&" + bVar.sdkVersion;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static String c(String str, String str2, String str3, String str4) {
            return str + "&" + str2 + "&" + str3 + "&" + str4 + "&" + KsAdSDKImpl.get().getSDKVersion();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static b eZ(String str) {
            String[] strArrSplit = str.split("&");
            b bVar = new b();
            bVar.aCU = strArrSplit[1];
            bVar.aCV = strArrSplit[2];
            bVar.aCW = strArrSplit[3];
            bVar.sdkVersion = strArrSplit[4];
            return bVar;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static synchronized void Gc() {
        List<C0223a> listGe = Ge();
        if (!listGe.isEmpty()) {
            c.d("DynamicRunMonitor", "monitorInfoList:" + listGe);
            JSONObject jSONObject = new JSONObject();
            t.putValue(jSONObject, "monitor_info_list", listGe);
            KSLoggerReporter.r(jSONObject);
        }
        aCQ = true;
        Gd();
    }

    private static void Gd() {
        List<String> list = aCP;
        if (list == null) {
            return;
        }
        Iterator<String> it = list.iterator();
        while (it.hasNext()) {
            eX(it.next());
        }
        aCP.clear();
    }

    private static synchronized List<C0223a> Ge() {
        ArrayList arrayList = new ArrayList();
        Map<String, ?> mapAi = y.ai(ServiceProvider.getContext(), "dynamic_monitor_info");
        if (mapAi == null) {
            return arrayList;
        }
        for (String str : mapAi.keySet()) {
            if (str.startsWith("enter")) {
                Object obj = mapAi.get(str);
                long jLongValue = obj instanceof Long ? ((Long) obj).longValue() : 0L;
                b bVarEZ = b.eZ(str);
                String strA = b.a(bVarEZ);
                Object obj2 = mapAi.get(strA);
                long jLongValue2 = jLongValue - (obj2 instanceof Long ? ((Long) obj2).longValue() : 0L);
                long j = jLongValue2 > 0 ? jLongValue2 : 0L;
                C0223a c0223a = new C0223a();
                c0223a.aCR = jLongValue;
                c0223a.aCS = j;
                c0223a.aCT = jLongValue2;
                c0223a.aCU = bVarEZ.aCU;
                c0223a.aCV = bVarEZ.aCV;
                c0223a.aCW = bVarEZ.aCW;
                c0223a.sdkVersion = bVarEZ.sdkVersion;
                arrayList.add(c0223a);
                y.ar("dynamic_monitor_info", str);
                y.ar("dynamic_monitor_info", strA);
            }
        }
        return arrayList;
    }

    public static void ah(String str, String str2) {
        e(str, str2, AdnName.OTHER);
    }

    public static void ai(String str, String str2) {
        f(str, str2, AdnName.OTHER);
    }

    private static synchronized void b(String str, String str2, String str3, String str4) {
        String strC;
        try {
            strC = b.c(str, str2, str3, str4);
        } catch (Throwable th) {
            com.kwad.components.core.d.a.b(th);
        }
        if (aCQ) {
            eX(strC);
        } else {
            eY(strC);
        }
    }

    public static void e(String str, String str2, String str3) {
        b("enter", str, str2, str3);
    }

    private static synchronized void eX(String str) {
        long jB = y.b("dynamic_monitor_info", str, 0L);
        c.d("DynamicRunMonitor", "increaseLocalCount: " + str + "--lastCount:" + jB);
        y.a("dynamic_monitor_info", str, jB + 1);
    }

    private static void eY(String str) {
        if (aCP == null) {
            aCP = new CopyOnWriteArrayList();
        }
        c.d("DynamicRunMonitor", "saveToCache: " + str);
        aCP.add(str);
    }

    public static void f(String str, String str2, String str3) {
        b("exit", str, str2, str3);
    }

    public static void report() {
        g.schedule(new aw() { // from class: com.kwad.sdk.i.a.1
            @Override // com.kwad.sdk.utils.aw
            public final void doTask() {
                a.Gc();
            }
        }, 1L, TimeUnit.SECONDS);
    }
}
