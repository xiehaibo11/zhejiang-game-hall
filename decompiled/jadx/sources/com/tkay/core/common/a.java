package com.tkay.core.common;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.MediationBidManager;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.common.f.ai;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.f.ak;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f6013a;
    private final String b = getClass().getSimpleName();
    private ConcurrentHashMap<String, ConcurrentHashMap<String, ak>> c = new ConcurrentHashMap<>();

    public static a a() {
        if (f6013a == null) {
            synchronized (a.class) {
                if (f6013a == null) {
                    f6013a = new a();
                }
            }
        }
        return f6013a;
    }

    private a() {
    }

    public final ak a(String str, int i, TYBaseAdAdapter tYBaseAdAdapter, List<? extends BaseAd> list, long j) {
        synchronized (v.a().a(str)) {
            ConcurrentHashMap<String, ak> concurrentHashMap = this.c.get(str);
            aj unitGroupInfo = tYBaseAdAdapter.getUnitGroupInfo();
            String strT = tYBaseAdAdapter.getUnitGroupInfo().t();
            if (concurrentHashMap == null) {
                concurrentHashMap = new ConcurrentHashMap<>();
                this.c.put(str, concurrentHashMap);
            }
            ak akVar = concurrentHashMap.get(strT);
            if (akVar == null) {
                akVar = new ak();
                akVar.f6143a = i;
                akVar.b = tYBaseAdAdapter.getTrackingInfo().X();
                concurrentHashMap.put(strT, akVar);
            } else {
                akVar.f6143a = i;
                akVar.b = tYBaseAdAdapter.getTrackingInfo().X();
            }
            com.tkay.core.common.f.a aVarA = akVar.a();
            if (aVarA != null && TextUtils.equals(x.a().b(str), aVarA.h().X())) {
                return akVar;
            }
            if (list != null && list.size() > 0) {
                ArrayList arrayList = new ArrayList();
                for (BaseAd baseAd : list) {
                    baseAd.setTrackingInfo(tYBaseAdAdapter.getTrackingInfo().N());
                    com.tkay.core.common.f.a aVar = new com.tkay.core.common.f.a();
                    aVar.b(i);
                    aVar.a(tYBaseAdAdapter);
                    aVar.a(baseAd);
                    aVar.c(System.currentTimeMillis());
                    aVar.b(j);
                    aVar.a(tYBaseAdAdapter.getTrackingInfo().X());
                    aVar.a(unitGroupInfo.A());
                    arrayList.add(aVar);
                }
                akVar.a(arrayList);
            } else {
                com.tkay.core.common.f.a aVar2 = new com.tkay.core.common.f.a();
                aVar2.b(i);
                aVar2.a(tYBaseAdAdapter);
                aVar2.c(System.currentTimeMillis());
                aVar2.b(j);
                aVar2.a(tYBaseAdAdapter.getTrackingInfo().X());
                aVar2.a(unitGroupInfo.A());
                ArrayList arrayList2 = new ArrayList();
                arrayList2.add(aVar2);
                akVar.a(arrayList2);
            }
            return akVar;
        }
    }

    public final com.tkay.core.common.f.a a(Context context, String str) {
        synchronized (v.a().a(str)) {
            List<com.tkay.core.common.f.a> listA = a(context, str, false, false, false, null);
            if (listA == null || listA.size() <= 0) {
                return null;
            }
            return listA.get(0);
        }
    }

    public final com.tkay.core.common.f.a a(Context context, String str, boolean z, boolean z2, Map<String, Object> map) {
        synchronized (v.a().a(str)) {
            List<com.tkay.core.common.f.a> listA = a(context, str, z, z2, false, map);
            if (listA == null || listA.size() <= 0) {
                return null;
            }
            return listA.get(0);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:168:0x03d5 A[Catch: all -> 0x0541, TRY_LEAVE, TryCatch #0 {, blocks: (B:7:0x001c, B:9:0x0044, B:11:0x0046, B:13:0x005c, B:16:0x0063, B:17:0x0066, B:20:0x0079, B:22:0x007f, B:24:0x008e, B:25:0x0091, B:27:0x0097, B:29:0x009e, B:31:0x00a8, B:119:0x0301, B:33:0x00cf, B:35:0x00e6, B:36:0x00ff, B:38:0x0105, B:46:0x0120, B:49:0x0131, B:54:0x013f, B:57:0x014b, B:59:0x0183, B:63:0x01a1, B:65:0x01ae, B:66:0x01b3, B:68:0x01b5, B:69:0x01be, B:73:0x01d8, B:74:0x01e0, B:79:0x01ef, B:82:0x01f9, B:106:0x025a, B:108:0x0271, B:110:0x028c, B:112:0x02af, B:113:0x02b6, B:115:0x02b8, B:116:0x02c0, B:117:0x02d3, B:40:0x010c, B:42:0x0116, B:118:0x02ea, B:122:0x0310, B:124:0x0316, B:126:0x031d, B:127:0x0320, B:129:0x0322, B:131:0x032a, B:133:0x0330, B:136:0x033b, B:138:0x0344, B:142:0x0364, B:143:0x036f, B:144:0x0384, B:146:0x0386, B:153:0x0399, B:156:0x03a1, B:158:0x03af, B:159:0x03b3, B:161:0x03b9, B:163:0x03c5, B:168:0x03d5, B:193:0x049b, B:196:0x049f, B:198:0x04d3, B:200:0x04d9, B:205:0x050a, B:208:0x0526, B:209:0x053f, B:149:0x038e), top: B:217:0x001c }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.util.List<com.tkay.core.common.f.a> a(android.content.Context r36, java.lang.String r37, boolean r38, boolean r39, boolean r40, java.util.Map<java.lang.String, java.lang.Object> r41) {
        /*
            Method dump skipped, instruction units count: 1348
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.a.a(android.content.Context, java.lang.String, boolean, boolean, boolean, java.util.Map):java.util.List");
    }

    private static void a(String str, com.tkay.core.common.f.a aVar) {
        try {
            aj unitGroupInfo = aVar.e().getUnitGroupInfo();
            com.tkay.core.common.f.l lVarM = unitGroupInfo.M();
            if (lVarM != null) {
                com.tkay.core.common.f.d dVarH = aVar.h();
                aj ajVarC = com.tkay.core.b.c.a().c(str);
                double dA = com.tkay.core.common.l.g.a(ajVarC);
                com.tkay.core.common.f.q qVar = new com.tkay.core.common.f.q();
                qVar.f6162a = 1;
                qVar.b = dA;
                qVar.e = dVarH;
                qVar.c = ajVarC;
                qVar.d = unitGroupInfo;
                lVarM.a(qVar, true);
            }
        } catch (Throwable unused) {
        }
    }

    private static void a(TYBaseAdAdapter tYBaseAdAdapter, String str, String str2, com.tkay.core.c.d dVar, aj ajVar, int i, Map<String, Object> map) {
        Map<String, Object> mapB = v.a().b(str2);
        int[] iArr = {0};
        if (mapB.containsKey(ai.O)) {
            try {
                iArr[0] = ((Integer) mapB.get(ai.O)).intValue();
            } catch (Throwable unused) {
            }
        }
        StringBuilder sb = new StringBuilder();
        sb.append(ajVar.c());
        com.tkay.core.common.f.d dVarA = com.tkay.core.common.l.s.a(str, str2, "", dVar, sb.toString(), 1, 0, iArr[0], map);
        com.tkay.core.common.l.s.a(dVarA, ajVar, i, true);
        com.tkay.core.common.l.s.a(tYBaseAdAdapter, dVarA, ajVar);
        dVarA.q = 3;
        dVarA.g(tYBaseAdAdapter.getNetworkPlacementId());
        tYBaseAdAdapter.setRefresh(false);
    }

    private static void a(JSONArray jSONArray, int i, String str, int i2, String str2, boolean z, int i3) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(RemoteMessageConst.Notification.PRIORITY, i);
            jSONObject.put("unit_id", str);
            jSONObject.put("nw_firm_id", i2);
            jSONObject.put("nw_ver", str2);
            jSONObject.put("result", z ? 1 : 0);
            if (i3 != -1) {
                jSONObject.put(com.tkay.expressad.foundation.d.r.ac, i3);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        jSONArray.put(jSONObject);
    }

    public final void a(String str, String str2) {
        ak akVarRemove;
        synchronized (v.a().a(str)) {
            ConcurrentHashMap<String, ak> concurrentHashMap = this.c.get(str);
            if (concurrentHashMap != null && concurrentHashMap.size() > 0 && (akVarRemove = concurrentHashMap.remove(str2)) != null) {
                akVarRemove.c();
            }
        }
    }

    public final void a(String str, String str2, com.tkay.core.common.f.a aVar) {
        ak akVar;
        synchronized (v.a().a(str)) {
            if (aVar == null) {
                return;
            }
            ConcurrentHashMap<String, ak> concurrentHashMap = this.c.get(str);
            if (concurrentHashMap != null && concurrentHashMap.size() > 0 && (akVar = concurrentHashMap.get(str2)) != null) {
                akVar.a(aVar);
                if (!akVar.d()) {
                    concurrentHashMap.remove(str2);
                }
            }
        }
    }

    public final void a(final Context context, final com.tkay.core.common.f.a aVar) {
        final TYBaseAdAdapter tYBaseAdAdapterE = aVar.e();
        final com.tkay.core.common.f.d dVarH = aVar.h();
        aj unitGroupInfo = tYBaseAdAdapterE != null ? tYBaseAdAdapterE.getUnitGroupInfo() : null;
        if (dVarH != null) {
            f fVarA = v.a().a(dVarH.W(), dVarH.Y());
            if (fVarA != null) {
                fVarA.a(dVarH.X(), unitGroupInfo != null ? com.tkay.core.common.l.g.a(unitGroupInfo) : 0.0d, unitGroupInfo);
            } else {
                com.tkay.core.common.k.c.a("AdManage is null--Show", "Id:" + dVarH.W() + "--format:" + dVarH.Y() + "--adsource:" + dVarH.x(), com.tkay.core.common.b.m.a().q());
            }
            b(dVarH.W(), unitGroupInfo);
            com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.a.1
                @Override // java.lang.Runnable
                public final void run() {
                    com.tkay.core.a.a.a(context).a(dVarH.Y(), dVarH.W(), dVarH.x());
                    com.tkay.core.a.c.a();
                    com.tkay.core.a.c.a(dVarH.W());
                    com.tkay.core.a.c.a().a(dVarH.W(), dVarH.x());
                    a.this.a(dVarH.W(), dVarH.x(), aVar);
                    MediationBidManager mediationBidManagerB = com.tkay.core.b.c.a().b();
                    if (mediationBidManagerB != null) {
                        mediationBidManagerB.notifyWinnerDisplay(dVarH.W(), tYBaseAdAdapterE.getUnitGroupInfo());
                    }
                }
            });
        }
    }

    public final com.tkay.core.common.f.a a(String str, aj ajVar) {
        com.tkay.core.common.f.l lVarA;
        ConcurrentHashMap<String, ak> concurrentHashMap;
        if (((ajVar.l() != 3 && ajVar.l() != 7) || ((lVarA = com.tkay.core.b.c.a().a(ajVar)) != null && !lVarA.a())) && (concurrentHashMap = this.c.get(str)) != null) {
            ak akVar = concurrentHashMap.get(ajVar.t());
            com.tkay.core.common.f.a aVarA = akVar != null ? akVar.a() : null;
            if (aVarA != null && aVarA.j()) {
                return aVarA;
            }
            if (aVarA != null) {
                a(str, aVarA);
                aVarA.k();
            }
        }
        return null;
    }

    public final void a(String str, String str2, com.tkay.core.c.d dVar) {
        com.tkay.core.common.f.a aVarA;
        synchronized (v.a().a(str)) {
            ConcurrentHashMap<String, ak> concurrentHashMap = this.c.get(str);
            if (concurrentHashMap != null && concurrentHashMap.size() != 0) {
                Iterator<Map.Entry<String, ak>> it = concurrentHashMap.entrySet().iterator();
                while (it != null && it.hasNext()) {
                    ak value = it.next().getValue();
                    if (value != null && (aVarA = value.a()) != null) {
                        if (aVarA.j()) {
                            if (!aVarA.b().equals(str2)) {
                                com.tkay.core.common.f.d dVarN = aVarA.e().getTrackingInfo().N();
                                dVarN.v = str2;
                                dVarN.q = 4;
                                com.tkay.core.common.l.s.a(dVarN, dVar);
                                com.tkay.core.common.k.c.a(dVarN, aVarA.b());
                                value.a(dVarN);
                            }
                        } else {
                            a(str, aVarA);
                            aVarA.k();
                        }
                    }
                }
            }
        }
    }

    private List<com.tkay.core.common.f.a> a(String str, boolean z) {
        ConcurrentHashMap<String, ak> concurrentHashMap = this.c.get(str);
        if (concurrentHashMap == null) {
            return null;
        }
        Iterator<Map.Entry<String, ak>> it = concurrentHashMap.entrySet().iterator();
        ArrayList arrayList = new ArrayList(3);
        com.tkay.core.common.f.a aVar = null;
        while (it.hasNext()) {
            ak value = it.next().getValue();
            com.tkay.core.common.f.a aVarA = value != null ? value.a() : null;
            boolean z2 = false;
            if (aVarA != null && aVarA.j()) {
                z2 = true;
                if (z) {
                    arrayList.add(aVarA);
                } else if (aVar == null || com.tkay.core.common.l.g.a(aVar.e().getUnitGroupInfo()) < com.tkay.core.common.l.g.a(aVarA.e().getUnitGroupInfo())) {
                    aVar = aVarA;
                }
            }
            if (!z2 && aVarA != null) {
                a(str, aVarA);
                aVarA.k();
            }
        }
        if (z) {
            Collections.sort(arrayList);
        } else if (aVar != null) {
            arrayList.add(aVar);
        }
        return arrayList;
    }

    public static void b(String str, aj ajVar) {
        if (ajVar == null) {
            return;
        }
        StringBuilder sb = new StringBuilder("Clean own ad cache :");
        sb.append(ajVar.t());
        sb.append("|||");
        sb.append(ajVar.l());
        sb.append("|||");
        sb.append(ajVar.c());
        int iL = ajVar.l();
        if (iL != 3) {
            if (iL == 4) {
                com.tkay.core.basead.b.a();
                Context contextF = com.tkay.core.common.b.m.a().f();
                com.tkay.core.basead.b.a();
                com.tkay.core.basead.b.b(contextF, com.tkay.core.basead.b.a(str, ajVar.t(), ajVar.c()));
                return;
            }
            if (iL != 7) {
                return;
            }
        }
        com.tkay.core.common.f.l lVarM = ajVar.M();
        com.tkay.core.b.c.a().a(ajVar.t());
        com.tkay.core.b.c.a();
        com.tkay.core.b.c.b(ajVar.t());
        if (lVarM == null || TextUtils.isEmpty(lVarM.token)) {
            return;
        }
        lVarM.b();
        com.tkay.core.common.a.a.a().b(com.tkay.core.common.b.m.a().f(), lVarM.token);
    }
}
