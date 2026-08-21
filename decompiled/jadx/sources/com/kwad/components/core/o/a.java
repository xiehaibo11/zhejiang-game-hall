package com.kwad.components.core.o;

import android.content.Context;
import com.kwad.components.core.n.a.b;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.sdk.collector.f;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.report.i;
import com.kwad.sdk.core.report.r;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.internal.api.SceneImpl;
import com.kwad.sdk.utils.InstalledAppInfoManager;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import com.kwad.sdk.utils.l;
import com.kwad.sdk.utils.t;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static boolean Py;

    /* JADX INFO: renamed from: com.kwad.components.core.o.a$a, reason: collision with other inner class name */
    static final class C0157a {
        private static final a PA = new a();
    }

    protected a() {
    }

    private static r a(long j, AdTemplate adTemplate, String str) {
        return new r(j, adTemplate, str);
    }

    private static r b(long j, AdTemplate adTemplate) {
        return new r(j, adTemplate);
    }

    public static a pA() {
        return C0157a.PA;
    }

    public static r z(long j) {
        return new r(j);
    }

    public final void U(AdTemplate adTemplate) {
        i.a(b(10007L, adTemplate));
    }

    public final void V(AdTemplate adTemplate) {
        i.a(b(10208L, adTemplate));
    }

    public final void W(AdTemplate adTemplate) {
        i.a(b(10209L, adTemplate));
    }

    public final void a(int i, AdTemplate adTemplate, String str) {
        i.a(a(i, adTemplate, str));
    }

    public final void a(long j, int i) {
        if (d.zR()) {
            r rVarZ = z(20000L);
            rVarZ.timestamp = System.currentTimeMillis();
            rVarZ.ast = i;
            rVarZ.posId = j;
            rVarZ.asu = BuildConfig.VERSION_CODE;
            i.a(rVarZ);
        }
    }

    public final void a(b bVar) {
        r rVarZ = z(10215L);
        rVarZ.Pp = bVar.Pp;
        rVarZ.Pv = bVar.Pv;
        rVarZ.Pw = bVar.Pw;
        rVarZ.Px = bVar.Px;
        i.a(rVarZ);
    }

    public final void a(AdTemplate adTemplate, int i, int i2) {
        r rVarB = b(12006L, adTemplate);
        rVarB.UQ = i;
        rVarB.arz = i2;
        i.a(rVarB);
    }

    public final void a(AdTemplate adTemplate, long j, int i) {
        r rVarB = b(104L, adTemplate);
        rVarB.clickTime = l.cC(adTemplate);
        rVarB.arY = j;
        rVarB.arZ = i;
        i.a(rVarB);
    }

    public final void a(AdTemplate adTemplate, long j, long j2, int i) {
        r rVarB = b(10203L, adTemplate);
        rVarB.Xf = j;
        rVarB.blockDuration = j2;
        rVarB.ary = i;
        i.a(rVarB);
    }

    public final void a(AdTemplate adTemplate, String str, String str2) {
        r rVarB = b(10003L, adTemplate);
        rVarB.arJ = str;
        rVarB.errorMsg = str2;
        i.a(rVarB);
    }

    public final void a(SceneImpl sceneImpl, boolean z, String str) {
        r rVarZ = z(10216L);
        rVarZ.arU = z;
        rVarZ.arV = str;
        rVarZ.PN = sceneImpl;
        i.a(rVarZ);
    }

    public final void a(boolean z, List<Integer> list) {
        r rVarZ = z(10204L);
        rVarZ.arU = z;
        if (list.size() > 0) {
            JSONArray jSONArray = new JSONArray();
            Iterator<Integer> it = list.iterator();
            while (it.hasNext()) {
                jSONArray.put(it.next());
            }
            rVarZ.arT = jSONArray;
        }
        i.a(rVarZ);
    }

    public final void aA(int i) {
        r rVarZ = z(10104L);
        rVarZ.arK = i;
        i.a(rVarZ);
    }

    public final void aB(int i) {
        r rVarZ = z(10107L);
        rVarZ.arL = i;
        i.a(rVarZ);
    }

    public final void ai(Context context) {
        r rVarZ = z(11L);
        JSONArray[] jSONArrayArrC = InstalledAppInfoManager.c(context, d.xA());
        rVarZ.arC = jSONArrayArrC[0];
        rVarZ.arD = jSONArrayArrC[1];
        i.a(rVarZ);
    }

    public final void b(AdTemplate adTemplate, int i, int i2) {
        r rVarB = b(10002L, adTemplate);
        rVarB.Cf();
        rVarB.arJ = com.kwad.sdk.core.response.b.d.bY(adTemplate) ? com.kwad.sdk.core.response.b.a.F(com.kwad.sdk.core.response.b.d.cg(adTemplate)) : com.kwad.sdk.core.response.b.d.ci(adTemplate);
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("what", i);
            jSONObject.put("extra", i2);
            rVarB.errorMsg = jSONObject.toString();
        } catch (JSONException e) {
            c.printStackTraceOnly(e);
        }
        i.a(rVarB);
    }

    public final void b(AdTemplate adTemplate, String str, String str2) {
        r rVarB = b(10005L, adTemplate);
        rVarB.arJ = com.kwad.sdk.core.response.b.d.bY(adTemplate) ? com.kwad.sdk.core.response.b.a.F(com.kwad.sdk.core.response.b.d.cg(adTemplate)) : com.kwad.sdk.core.response.b.d.ci(adTemplate);
        rVarB.arJ = str;
        rVarB.errorMsg = str2;
        i.a(rVarB);
    }

    public final void c(AdTemplate adTemplate, int i, String str) {
        r rVarB = b(10109L, adTemplate);
        rVarB.arL = 1;
        rVarB.arM = str;
        i.a(rVarB);
    }

    public final void c(JSONArray jSONArray) {
        r rVarZ = z(10200L);
        rVarZ.arO = jSONArray;
        i.a(rVarZ);
    }

    public final void d(AdTemplate adTemplate, int i, String str) {
        r rVarB = b(107L, adTemplate);
        rVarB.errorCode = i;
        rVarB.errorMsg = str;
        i.a(rVarB);
    }

    public final void e(String str, String str2, boolean z) {
        r rVarZ = z(12200L);
        rVarZ.asr = str;
        rVarZ.ass = str2;
        i.a(rVarZ, z);
    }

    public final void e(JSONObject jSONObject, int i) {
        r rVarZ = z(10201L);
        t.putValue(jSONObject, "appChangeType", i);
        rVarZ.arN = jSONObject;
        i.a(rVarZ);
    }

    public final void f(AdTemplate adTemplate, int i) {
        r rVarB = b(10108L, adTemplate);
        rVarB.arL = i;
        i.a(rVarB);
    }

    public final void f(AdTemplate adTemplate, long j) {
        r rVarB = b(10202L, adTemplate);
        rVarB.arS = j;
        i.a(rVarB);
    }

    public final void g(AdTemplate adTemplate, int i) {
        if (d.zR()) {
            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
            r rVarZ = z(20000L);
            rVarZ.timestamp = System.currentTimeMillis();
            rVarZ.ast = i;
            rVarZ.trace = adInfoCg.trace;
            rVarZ.asu = BuildConfig.VERSION_CODE;
            rVarZ.posId = com.kwad.sdk.core.response.b.d.bZ(adTemplate);
            i.a(rVarZ);
        }
    }

    public final void g(AdTemplate adTemplate, long j) {
        r rVarB = b(10206L, adTemplate);
        rVarB.asi = j;
        i.a(rVarB);
    }

    public final void h(AdTemplate adTemplate, long j) {
        r rVarB = b(10207L, adTemplate);
        rVarB.asj = j;
        i.a(rVarB);
    }

    public final void pB() {
        if (Py) {
            return;
        }
        Py = true;
        g.execute(new aw() { // from class: com.kwad.components.core.o.a.1
            @Override // com.kwad.sdk.utils.aw
            public final void doTask() {
                r rVarZ = a.z(8L);
                rVarZ.ask = f.yH();
                i.a(rVarZ);
            }
        });
    }

    public final void pC() {
        i.a(z(10101L));
    }

    public final void pD() {
        i.a(z(10106L));
    }
}
