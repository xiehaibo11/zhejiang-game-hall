package com.kwad.sdk.ip.direct;

import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.text.TextUtils;
import com.kwad.sdk.core.NetworkMonitor;
import com.kwad.sdk.core.response.model.HttpDnsInfo;
import com.kwad.sdk.h;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.e;
import com.kwad.sdk.service.a.f;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Random;
import java.util.concurrent.PriorityBlockingQueue;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static int aCg = -1;
    private static volatile boolean aCh;
    private static c aCp;
    private static HandlerThread aCq;
    private static Handler aCr;
    private static List<HttpDnsInfo.IpInfo> aCi = new ArrayList();
    private static List<HttpDnsInfo.IpInfo> aCj = new ArrayList();
    private static List<HttpDnsInfo.IpInfo> aCk = new ArrayList();
    private static List<c> aCl = new ArrayList();
    private static List<c> aCm = new ArrayList();
    private static PriorityBlockingQueue<c> aCn = new PriorityBlockingQueue<>();
    private static AtomicInteger aCo = new AtomicInteger(0);
    private static volatile boolean aCs = false;
    private static float aCt = -1.0f;
    private static float aCu = -1.0f;
    private static float aCv = -1.0f;
    private static int aCw = 0;
    private static volatile boolean aCx = false;
    private static volatile boolean aCy = false;
    private static NetworkMonitor.a aCz = new NetworkMonitor.a() { // from class: com.kwad.sdk.ip.direct.a.1
        @Override // com.kwad.sdk.core.NetworkMonitor.a
        public final void a(NetworkMonitor.NetworkState networkState) {
            com.kwad.sdk.core.e.c.d("IpDirect_Helper", "*********onNetworkChange");
            if (!a.aCy) {
                a.access$002(true);
            } else {
                a.access$102(true);
                com.kwad.sdk.core.e.c.d("IpDirect_Helper", "*********onNetworkChange sHasNetChanged true");
            }
        }
    };
    private static Runnable aCA = new Runnable() { // from class: com.kwad.sdk.ip.direct.a.3
        @Override // java.lang.Runnable
        public final void run() {
            a.FK();
        }
    };

    private static void C(List<HttpDnsInfo.IpInfo> list) {
        b(list, aCl);
        if (aCl.isEmpty()) {
            return;
        }
        Iterator<c> it = aCl.iterator();
        float fGb = 0.0f;
        while (it.hasNext()) {
            fGb += it.next().Gb();
        }
        aCt = fGb / aCl.size();
    }

    private static void D(List<HttpDnsInfo.IpInfo> list) {
        b(list, aCm);
        if (aCm.isEmpty()) {
            return;
        }
        int weight = 0;
        float weight2 = 0.0f;
        for (c cVar : aCm) {
            weight += cVar.getWeight();
            weight2 += cVar.getWeight() * cVar.Gb();
        }
        if (weight != 0) {
            aCu = weight2 / weight;
        }
    }

    private static void FF() {
        Handler handler;
        if (aCs || (handler = aCr) == null) {
            return;
        }
        handler.obtainMessage(1).sendToTarget();
    }

    public static String FG() {
        c cVar = aCp;
        return cVar != null ? cVar.getIp() : "";
    }

    public static float FH() {
        return aCt;
    }

    public static float FI() {
        return aCu;
    }

    public static float FJ() {
        return aCv;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void FK() {
        FP();
        List<HttpDnsInfo.IpInfo> list = aCi;
        List<HttpDnsInfo.IpInfo> list2 = aCj;
        clear();
        if (aCs) {
            com.kwad.sdk.core.e.c.d("IpDirect_Helper", "is picking return");
            return;
        }
        com.kwad.sdk.core.e.c.d("IpDirect_Helper", "start pick");
        aCs = true;
        C(list);
        D(list2);
        if (aCl.isEmpty() && aCm.isEmpty()) {
            f fVar = (f) ServiceProvider.get(f.class);
            if (fVar == null) {
                aCs = false;
                return;
            } else {
                if (!fVar.xF()) {
                    com.kwad.sdk.core.e.c.d("IpDirect_Helper", "isIpPreferEnable:false");
                    aCs = false;
                    return;
                }
                FN();
            }
        }
        aCs = false;
        com.kwad.sdk.core.e.c.d("IpDirect_Helper", "end pick");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void FL() {
        if (FM()) {
            return;
        }
        FO();
    }

    private static boolean FM() {
        List<c> list = aCl;
        List<c> list2 = aCm;
        if (!list.isEmpty()) {
            aCp = list.get(new Random().nextInt(list.size()));
            com.kwad.sdk.core.e.c.d("IpDirect_Helper", "set from recommend:" + aCp);
            aCw = 1;
            return true;
        }
        int i = 0;
        if (list2.isEmpty()) {
            return false;
        }
        Random random = new Random();
        Iterator<c> it = list2.iterator();
        int weight = 0;
        while (it.hasNext()) {
            weight += it.next().getWeight();
        }
        int iNextInt = random.nextInt(weight);
        int i2 = 0;
        while (true) {
            if (i2 >= list2.size()) {
                break;
            }
            iNextInt -= list2.get(i2).getWeight();
            if (iNextInt < 0) {
                i = i2;
                break;
            }
            i2++;
        }
        aCp = list2.get(i);
        com.kwad.sdk.core.e.c.d("IpDirect_Helper", "set from backUp:" + aCp);
        aCw = 2;
        return true;
    }

    private static void FN() {
        List<HttpDnsInfo.IpInfo> list = aCk;
        if (list.isEmpty()) {
            return;
        }
        for (HttpDnsInfo.IpInfo ipInfo : list) {
            if (ipInfo != null && !TextUtils.isEmpty(ipInfo.ip)) {
                c cVarF = b.f(ipInfo.ip, aCg);
                if (cVarF.isSuccess()) {
                    aCn.offer(cVarF);
                }
            }
        }
        c cVarPeek = aCn.peek();
        if (cVarPeek != null) {
            aCv = cVarPeek.Gb();
        }
    }

    private static void FO() {
        if (aCn.isEmpty()) {
            return;
        }
        c cVarPeek = aCn.peek();
        if (cVarPeek.Gb() < aCg) {
            aCp = cVarPeek;
            com.kwad.sdk.core.e.c.d("IpDirect_Helper", "set from Other:" + aCp);
            aCw = 3;
        }
    }

    private static void FP() {
        if (aCg == -1) {
            f fVar = (f) ServiceProvider.get(f.class);
            if (fVar != null) {
                aCg = fVar.xG();
            } else {
                aCg = 200;
            }
        }
    }

    private static boolean FQ() {
        if (aCx) {
            com.kwad.sdk.core.e.c.d("IpDirect_Helper", "sHasNetChanged direct can not use");
            return false;
        }
        int i = aCo.get();
        com.kwad.sdk.core.e.c.d("IpDirect_Helper", "value:" + i);
        return i <= 3;
    }

    private static void FR() {
        aCo.getAndIncrement();
        com.kwad.sdk.core.e.c.d("IpDirect_Helper", "addFailedTimes:" + aCo.intValue());
    }

    public static void FS() {
        c cVar;
        Handler handler;
        if (!aCh || (cVar = aCp) == null || TextUtils.isEmpty(cVar.getIp()) || (handler = aCr) == null) {
            return;
        }
        handler.obtainMessage(2).sendToTarget();
    }

    public static void FT() {
        FR();
        FU();
        FV();
        aCw = 0;
        FL();
        FK();
    }

    private static void FU() {
        HttpDnsInfo.IpInfo ipInfo;
        HttpDnsInfo.IpInfo next;
        c cVar = aCp;
        String ip = cVar == null ? "" : cVar.getIp();
        if (TextUtils.isEmpty(ip)) {
            return;
        }
        Iterator<HttpDnsInfo.IpInfo> it = aCi.iterator();
        while (true) {
            ipInfo = null;
            if (!it.hasNext()) {
                next = null;
                break;
            }
            next = it.next();
            if (next != null && TextUtils.equals(ip, next.ip)) {
                break;
            }
        }
        if (next != null) {
            aCi.remove(next);
            next = null;
        }
        Iterator<HttpDnsInfo.IpInfo> it2 = aCj.iterator();
        while (true) {
            if (!it2.hasNext()) {
                break;
            }
            HttpDnsInfo.IpInfo next2 = it2.next();
            if (next2 != null && TextUtils.equals(ip, next2.ip)) {
                next = next2;
                break;
            }
        }
        if (next != null) {
            aCj.remove(next);
        } else {
            ipInfo = next;
        }
        Iterator<HttpDnsInfo.IpInfo> it3 = aCk.iterator();
        while (true) {
            if (!it3.hasNext()) {
                break;
            }
            HttpDnsInfo.IpInfo next3 = it3.next();
            if (next3 != null && TextUtils.equals(ip, next3.ip)) {
                ipInfo = next3;
                break;
            }
        }
        if (ipInfo != null) {
            aCk.remove(ipInfo);
        }
    }

    private static void FV() {
        c next;
        if (aCp == null) {
            return;
        }
        List<c> list = aCl;
        if (list != null && !list.isEmpty() && aCl.contains(aCp)) {
            aCl.remove(aCp);
            com.kwad.sdk.core.e.c.d("IpDirect_Helper", "sRecommendEntityList remove:" + aCp);
        }
        List<c> list2 = aCm;
        if (list2 != null && !list2.isEmpty()) {
            if (aCm.contains(aCp)) {
                aCm.remove(aCp);
                com.kwad.sdk.core.e.c.d("IpDirect_Helper", "sBackUpIpEntityList remove:" + aCp);
            }
            Iterator<c> it = aCm.iterator();
            while (true) {
                if (!it.hasNext()) {
                    next = null;
                    break;
                }
                next = it.next();
                if (next != null && TextUtils.equals(next.getIp(), aCp.getIp())) {
                    com.kwad.sdk.core.e.c.d("IpDirect_Helper", "set removeEntity:" + next.getIp());
                    break;
                }
            }
            if (next != null) {
                aCm.remove(next);
                com.kwad.sdk.core.e.c.d("IpDirect_Helper", "sBackUpIpEntityList remove removeEntity:" + next);
            }
        }
        c cVarPeek = aCn.peek();
        if (cVarPeek != null && cVarPeek == aCp) {
            aCn.poll();
        }
        aCp = null;
    }

    public static void a(HttpDnsInfo httpDnsInfo) {
        if (httpDnsInfo == null) {
            return;
        }
        f fVar = (f) ServiceProvider.get(f.class);
        if (fVar == null) {
            com.kwad.sdk.core.e.c.w("IpDirect_Helper", "sdkConfigProvider == null");
            return;
        }
        boolean zXE = fVar.xE();
        aCh = zXE;
        com.kwad.sdk.core.e.c.d("IpDirect_Helper", "isEnable:" + zXE);
        if (zXE) {
            com.kwad.sdk.core.e.c.d("IpDirect_Helper", httpDnsInfo.toString());
            aCi = httpDnsInfo.recommendList;
            aCj = httpDnsInfo.backUpList;
            aCk = httpDnsInfo.otherList;
            if (aCi.isEmpty() && aCj.isEmpty() && aCk.isEmpty()) {
                com.kwad.sdk.core.e.c.w("IpDirect_Helper", "HttpDnsInfo is empty");
            } else {
                init();
                FF();
            }
        }
    }

    static /* synthetic */ boolean access$002(boolean z) {
        aCy = true;
        return true;
    }

    static /* synthetic */ boolean access$102(boolean z) {
        aCx = true;
        return true;
    }

    private static void b(List<HttpDnsInfo.IpInfo> list, List<c> list2) {
        if (list == null) {
            return;
        }
        for (HttpDnsInfo.IpInfo ipInfo : list) {
            if (ipInfo != null && !TextUtils.isEmpty(ipInfo.ip)) {
                com.kwad.sdk.core.e.c.d("IpDirect_Helper", ipInfo.toString());
                c cVarF = b.f(ipInfo.ip, aCg);
                cVarF.cF(ipInfo.weight);
                if (cVarF.isSuccess() && cVarF.Gb() < aCg) {
                    list2.add(cVarF);
                }
            }
        }
    }

    private static void clear() {
        aCl.clear();
        aCm.clear();
        aCn.clear();
    }

    public static String eV(String str) {
        String str2;
        if (!aCh) {
            str2 = "getIpByHost return by sIpDirectEnable false";
        } else if (eW(str)) {
            str2 = "isHostInvalid:false ：" + str;
        } else {
            if (FQ()) {
                String strFG = FG();
                com.kwad.sdk.core.e.c.d("IpDirect_Helper", "getIpByHost ip:" + strFG);
                return strFG;
            }
            str2 = "canUseIpDirect:false";
        }
        com.kwad.sdk.core.e.c.d("IpDirect_Helper", str2);
        return "";
    }

    private static boolean eW(String str) {
        boolean z = !TextUtils.equals("https://" + str, h.wZ());
        if (z) {
            com.kwad.sdk.core.e.c.d("IpDirect_Helper", "非核心域名 current host:" + h.wZ() + "try direct host:https://" + str);
        }
        return z;
    }

    public static int getType() {
        return aCw;
    }

    private static void init() {
        if (aCq != null) {
            return;
        }
        HandlerThread handlerThread = new HandlerThread("IpDirectHelper");
        aCq = handlerThread;
        handlerThread.start();
        aCr = new Handler(aCq.getLooper()) { // from class: com.kwad.sdk.ip.direct.a.2
            @Override // android.os.Handler
            public final void handleMessage(Message message) {
                int i = message.what;
                if (i == 1) {
                    a.FK();
                    a.FL();
                } else {
                    if (i != 2) {
                        return;
                    }
                    a.FT();
                }
            }
        };
        e eVar = (e) ServiceProvider.get(e.class);
        if (eVar != null) {
            NetworkMonitor.getInstance().a(eVar.getContext(), aCz);
        }
    }
}
