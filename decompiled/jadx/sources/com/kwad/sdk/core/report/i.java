package com.kwad.sdk.core.report;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.service.ServiceProvider;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes2.dex */
public class i extends c<r, h> {
    private static volatile boolean PE;
    private static volatile i aqU;
    private static v<r, h> aqV;

    private i() {
    }

    private static i BY() {
        if (aqU == null) {
            synchronized (i.class) {
                if (aqU == null) {
                    aqU = new i();
                }
            }
        }
        aqU.checkInit();
        return aqU;
    }

    private static boolean Q(long j) {
        w wVar = (w) ServiceProvider.get(w.class);
        return wVar != null && wVar.Q(j);
    }

    public static void a(r rVar) {
        a(rVar, false);
    }

    public static void a(r rVar, boolean z) {
        BY().b(rVar, z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // com.kwad.sdk.core.report.c
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public h a(r rVar) {
        v<r, h> vVar = aqV;
        return (h) (vVar != null ? vVar.Ci() : super.a(rVar));
    }

    private void b(final r rVar, boolean z) {
        if (rVar == null || !PE) {
            return;
        }
        if (z || Q(rVar.arp)) {
            aqU.b(new n<r>() { // from class: com.kwad.sdk.core.report.i.1
                /* JADX INFO: Access modifiers changed from: private */
                @Override // com.kwad.sdk.core.report.n
                /* JADX INFO: renamed from: BZ, reason: merged with bridge method [inline-methods] */
                public r BU() {
                    return rVar.Ce();
                }
            });
        } else {
            aqU.a(new n<r>() { // from class: com.kwad.sdk.core.report.i.2
                /* JADX INFO: Access modifiers changed from: private */
                @Override // com.kwad.sdk.core.report.n
                /* JADX INFO: renamed from: BZ, reason: merged with bridge method [inline-methods] */
                public r BU() {
                    return rVar.Ce();
                }
            });
        }
    }

    private synchronized void checkInit() {
        if (PE) {
            return;
        }
        com.kwad.sdk.service.a.e eVar = (com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class);
        if (eVar == null) {
            return;
        }
        com.kwad.sdk.service.a.f fVar = (com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class);
        if (fVar == null) {
            return;
        }
        Context context = eVar.getContext();
        if (context == null) {
            return;
        }
        int iAv = fVar.av(context);
        i(context, iAv);
        x.init(context);
        x.Ck();
        com.kwad.sdk.core.e.c.d("BatchReporter", "cache type = " + iAv);
        if (iAv == 2) {
            a(u.bd(context));
        }
        PE = true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // com.kwad.sdk.core.report.c
    /* JADX INFO: renamed from: u, reason: merged with bridge method [inline-methods] */
    public h s(List<r> list) {
        v<r, h> vVar = aqV;
        if (vVar != null) {
            return (h) vVar.Cj();
        }
        String strV = v(list);
        return !TextUtils.isEmpty(strV) ? new h(strV) : new h(list);
    }

    private static String v(List<r> list) {
        if (list.get(0) == null || TextUtils.isEmpty(list.get(0).asx)) {
            return "";
        }
        StringBuilder sb = new StringBuilder(",\"actionList\":[");
        Iterator<r> it = list.iterator();
        while (it.hasNext()) {
            sb.append(it.next().asx);
            sb.append(',');
        }
        int length = sb.length();
        sb.replace(length - 1, length, "]");
        return sb.toString();
    }

    @Override // com.kwad.sdk.core.report.c
    protected final Runnable a(Context context, o<r> oVar, AtomicInteger atomicInteger) {
        Runnable runnableCh;
        v<r, h> vVar = aqV;
        return (vVar == null || (runnableCh = vVar.Ch()) == null) ? super.a(context, oVar, atomicInteger) : runnableCh;
    }
}
