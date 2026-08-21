package com.tkay.core.common;

import android.content.Context;
import android.os.Looper;
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

public class a {
    private static volatile a a;
    private final String b = getClass().getSimpleName();
    private ConcurrentHashMap<String, ConcurrentHashMap<String, ak>> c = new ConcurrentHashMap<>();

    public static a a() {
        if (a == null) {
            synchronized (a.class) {
                if (a == null) {
                    a = new a();
                }
            }
        }
        return a;
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
                akVar.a = i;
                akVar.b = tYBaseAdAdapter.getTrackingInfo().X();
                concurrentHashMap.put(strT, akVar);
            } else {
                akVar.a = i;
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
    */
    public final List<com.tkay.core.common.f.a> a(Context context, String str, boolean z, boolean z2, boolean z3, Map<String, Object> map) {
        boolean z4;
        int i;
        String str2;
        com.tkay.core.c.d dVar;
        aj ajVar;
        TYBaseAdAdapter tYBaseAdAdapter;
        aj ajVar2;
        boolean zIsAdReady;
        BaseAd baseAdObject;
        ArrayList arrayList;
        List<com.tkay.core.common.f.a> listA;
        int i2;
        ArrayList arrayList2;
        com.tkay.core.common.f.l lVarA;
        ConcurrentHashMap<String, ak> concurrentHashMap;
        aj ajVar3;
        TYBaseAdAdapter tYBaseAdAdapter2;
        BaseAd baseAdObject2;
        boolean zIsAdReady2;
        ArrayList arrayList3;
        synchronized (v.a().a(str)) {
            try {
                if (Looper.myLooper() != Looper.getMainLooper()) {
                    Looper.prepare();
                }
            } catch (Throwable unused) {
            }
            ArrayList arrayList4 = new ArrayList();
            JSONArray jSONArray = new JSONArray();
            ArrayList arrayList5 = new ArrayList();
            ArrayList arrayList6 = new ArrayList();
            com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(com.tkay.core.common.b.m.a().f()).a(str);
            if (dVarA == null) {
                return null;
            }
            List<aj> listA2 = x.a().a(str);
            String strB = x.a().b(str);
            if (TextUtils.isEmpty(strB)) {
                strB = com.tkay.core.common.l.g.a(context);
            }
            String str3 = strB;
            if (listA2 != null) {
                arrayList6.addAll(listA2);
            }
            ConcurrentHashMap<String, ak> concurrentHashMap2 = this.c.get(str);
            int i3 = 3;
            if (arrayList6.size() > 0) {
                int i4 = 0;
                while (i4 < arrayList6.size()) {
                    aj ajVar4 = (aj) arrayList6.get(i4);
                    if (ajVar4.c() == 35) {
                        arrayList5.add(ajVar4);
                    }
                    int iA = ajVar4.a() < 0 ? ajVar4.a() : i4;
                    if (com.tkay.core.a.c.a().a(str, ajVar4)) {
                        i2 = i4;
                        arrayList2 = arrayList5;
                        a(jSONArray, iA, ajVar4.t(), ajVar4.c(), "", false, 3);
                    } else {
                        i2 = i4;
                        arrayList2 = arrayList5;
                        int i5 = i3;
                        if (com.tkay.core.a.a.a(com.tkay.core.common.b.m.a().f()).a(str, ajVar4)) {
                            a(jSONArray, iA, ajVar4.t(), ajVar4.c(), "", false, 2);
                        } else {
                            if ((ajVar4.l() == i5 || ajVar4.l() == 7) && ((lVarA = com.tkay.core.b.c.a().a(ajVar4)) == null || lVarA.a())) {
                                concurrentHashMap = concurrentHashMap2;
                                a(jSONArray, iA, ajVar4.t(), ajVar4.c(), "", false, 5);
                            } else {
                                ak akVar = concurrentHashMap2 != null ? concurrentHashMap2.get(ajVar4.t()) : null;
                                com.tkay.core.common.f.a aVarA = akVar != null ? akVar.a() : null;
                                if (akVar != null && aVarA != null) {
                                    boolean zG = aVarA.g();
                                    boolean zI = aVarA.i();
                                    if (zG && zI) {
                                        TYBaseAdAdapter tYBaseAdAdapterE = aVarA.e();
                                        aVarA.f();
                                        int i6 = iA;
                                        com.tkay.core.common.f.a aVar = aVarA;
                                        a(jSONArray, iA, ajVar4.t(), ajVar4.c(), tYBaseAdAdapterE.getNetworkSDKVersion(), true, -1);
                                        com.tkay.core.common.f.d dVarH = aVar.h();
                                        dVarH.r(jSONArray.toString());
                                        dVarH.p(i6);
                                        if (z) {
                                            com.tkay.core.common.k.c.a(dVarH, true, -1, i6, ajVar4.t(), ajVar4.c(), tYBaseAdAdapterE.getNetworkSDKVersion(), jSONArray.toString(), str3, dVarH.q == 3, "");
                                        }
                                        if (!z3) {
                                            arrayList4.add(aVar);
                                            return arrayList4;
                                        }
                                        arrayList4.addAll(akVar.b());
                                    } else {
                                        int i7 = iA;
                                        com.tkay.core.common.f.a aVar2 = aVarA;
                                        a(str, aVar2);
                                        aVar2.k();
                                        a(jSONArray, i7, ajVar4.t(), ajVar4.c(), "", false, !zG ? 0 : 1);
                                    }
                                }
                                int i8 = iA;
                                TYBaseAdAdapter tYBaseAdAdapterA = ajVar4.J() == 2 ? com.tkay.core.common.l.i.a(ajVar4) : null;
                                if (tYBaseAdAdapterA != null) {
                                    try {
                                        boolean zInternalInitNetworkObjectByPlacementId = tYBaseAdAdapterA.internalInitNetworkObjectByPlacementId(context, dVarA.a(str, str3, ajVar4), v.a().b(str));
                                        if (zInternalInitNetworkObjectByPlacementId) {
                                            ajVar3 = ajVar4;
                                            concurrentHashMap = concurrentHashMap2;
                                            tYBaseAdAdapter2 = tYBaseAdAdapterA;
                                            try {
                                                a(tYBaseAdAdapterA, str3, str, dVarA, ajVar4, i8, map);
                                            } catch (Throwable unused2) {
                                                baseAdObject2 = null;
                                                zIsAdReady2 = false;
                                            }
                                        } else {
                                            ajVar3 = ajVar4;
                                            concurrentHashMap = concurrentHashMap2;
                                            tYBaseAdAdapter2 = tYBaseAdAdapterA;
                                        }
                                        if (TextUtils.equals(String.valueOf(dVarA.Y()), "0")) {
                                            if (zInternalInitNetworkObjectByPlacementId) {
                                                baseAdObject2 = tYBaseAdAdapter2.getBaseAdObject(context);
                                                boolean z5 = baseAdObject2 != null;
                                                zIsAdReady2 = z5;
                                            } else {
                                                baseAdObject2 = null;
                                            }
                                            zIsAdReady2 = z5;
                                        } else {
                                            zIsAdReady2 = zInternalInitNetworkObjectByPlacementId ? tYBaseAdAdapter2.isAdReady() : false;
                                            baseAdObject2 = null;
                                        }
                                    } catch (Throwable unused3) {
                                        ajVar3 = ajVar4;
                                        concurrentHashMap = concurrentHashMap2;
                                        tYBaseAdAdapter2 = tYBaseAdAdapterA;
                                    }
                                    if (zIsAdReady2) {
                                        if (baseAdObject2 != null) {
                                            ArrayList arrayList7 = new ArrayList();
                                            baseAdObject2.setTrackingInfo(tYBaseAdAdapter2.getTrackingInfo().N());
                                            arrayList7.add(baseAdObject2);
                                            arrayList3 = arrayList7;
                                        } else {
                                            arrayList3 = null;
                                        }
                                        ak akVarA = a(str, i8, tYBaseAdAdapter2, arrayList3, ajVar3.p());
                                        com.tkay.core.common.f.d dVarH2 = akVarA.a().h();
                                        dVarH2.p(i8);
                                        if (z) {
                                            com.tkay.core.common.k.c.a(dVarH2, true, -1, i8, ajVar3.t(), ajVar3.c(), tYBaseAdAdapter2.getNetworkSDKVersion(), jSONArray.toString(), str3, true, "");
                                        }
                                        if (!z3) {
                                            arrayList4.add(akVarA.a());
                                            return arrayList4;
                                        }
                                        arrayList4.addAll(akVarA.b());
                                    } else {
                                        a(jSONArray, i8, ajVar3.t(), ajVar3.c(), "", false, 4);
                                    }
                                } else {
                                    concurrentHashMap = concurrentHashMap2;
                                    a(jSONArray, i8, ajVar4.t(), ajVar4.c(), "", false, 4);
                                }
                            }
                            i4 = i2 + 1;
                            arrayList5 = arrayList2;
                            concurrentHashMap2 = concurrentHashMap;
                            i3 = 3;
                        }
                    }
                    concurrentHashMap = concurrentHashMap2;
                    i4 = i2 + 1;
                    arrayList5 = arrayList2;
                    concurrentHashMap2 = concurrentHashMap;
                    i3 = 3;
                }
            }
            ArrayList<aj> arrayList8 = arrayList5;
            if (z3) {
                if (arrayList4.size() == 0 && (listA = a(str, true)) != null) {
                    arrayList4.addAll(listA);
                }
                return arrayList4;
            }
            List<com.tkay.core.common.f.a> listA3 = a(str, false);
            com.tkay.core.common.f.a aVar3 = (listA3 == null || listA3.size() <= 0) ? null : listA3.get(0);
            if (aVar3 != null) {
                com.tkay.core.common.f.d dVarH3 = aVar3.h();
                arrayList4.add(aVar3);
                if (z) {
                    com.tkay.core.common.k.c.a(dVarH3, true, -1, arrayList6.size(), dVarH3.x(), dVarH3.H(), dVarH3.u, jSONArray.toString(), str3, dVarH3.q == 3, "");
                }
                a(jSONArray, arrayList6.size(), dVarH3.x(), dVarH3.H(), dVarH3.u, true, -1);
                return arrayList4;
            }
            if (dVarA.R() == 1) {
                z4 = true;
            } else {
                z4 = dVarA.R() == 2 ? z2 : false;
            }
            if (arrayList8.size() > 0 && z4) {
                String strB2 = s.a().b(context, str);
                if (TextUtils.isEmpty(strB2)) {
                    ajVar = null;
                    if (ajVar != null) {
                    }
                } else {
                    for (aj ajVar5 : arrayList8) {
                        if (ajVar5.g() != null && ajVar5.g().contains(strB2)) {
                            ajVar = ajVar5;
                            break;
                        }
                    }
                    ajVar = null;
                    if (ajVar != null) {
                        Map<String, Object> mapA = dVarA.a(str, str3, ajVar);
                        mapA.put(s.b, Boolean.TRUE);
                        int iIndexOf = arrayList6.indexOf(ajVar);
                        try {
                            TYBaseAdAdapter tYBaseAdAdapterA2 = com.tkay.core.common.l.i.a(ajVar);
                            boolean zInitNetworkObjectByPlacementId = tYBaseAdAdapterA2.initNetworkObjectByPlacementId(context, mapA, v.a().b(str));
                            if (zInitNetworkObjectByPlacementId) {
                                tYBaseAdAdapter = tYBaseAdAdapterA2;
                                ajVar2 = ajVar;
                                a(tYBaseAdAdapterA2, str3, str, dVarA, ajVar, iIndexOf, map);
                            } else {
                                tYBaseAdAdapter = tYBaseAdAdapterA2;
                                ajVar2 = ajVar;
                            }
                            if (TextUtils.equals(String.valueOf(dVarA.Y()), "0")) {
                                if (zInitNetworkObjectByPlacementId) {
                                    baseAdObject = tYBaseAdAdapter.getBaseAdObject(context);
                                    if (baseAdObject != null) {
                                        zIsAdReady = true;
                                    }
                                } else {
                                    baseAdObject = null;
                                }
                                zIsAdReady = false;
                            } else {
                                zIsAdReady = zInitNetworkObjectByPlacementId ? tYBaseAdAdapter.isAdReady() : false;
                                baseAdObject = null;
                            }
                            if (zIsAdReady) {
                                if (baseAdObject != null) {
                                    ArrayList arrayList9 = new ArrayList();
                                    baseAdObject.setTrackingInfo(tYBaseAdAdapter.getTrackingInfo().N());
                                    arrayList9.add(baseAdObject);
                                    arrayList = arrayList9;
                                } else {
                                    arrayList = null;
                                }
                                ak akVarA2 = a(str, iIndexOf, tYBaseAdAdapter, arrayList, ajVar2.p());
                                com.tkay.core.common.f.d dVarH4 = akVarA2.a().h();
                                dVarH4.z = 1;
                                dVarH4.p(iIndexOf);
                                dVarH4.r(jSONArray.toString());
                                if (z) {
                                    com.tkay.core.common.k.c.a(dVarH4, true, -1, iIndexOf, ajVar2.t(), ajVar2.c(), tYBaseAdAdapter.getNetworkSDKVersion(), jSONArray.toString(), str3, true, ajVar2.g());
                                }
                                arrayList4.add(akVarA2.a());
                                return arrayList4;
                            }
                        } catch (Throwable unused4) {
                        }
                    }
                }
            }
            if (z) {
                i = 1;
                str2 = str3;
                dVar = dVarA;
                com.tkay.core.common.f.d dVarA2 = com.tkay.core.common.l.s.a(str3, str, "", dVarA, "", -1, 0, 0, map);
                v vVarA = v.a();
                StringBuilder sb = new StringBuilder();
                sb.append(dVar.Y());
                f fVarA = vVarA.a(str, sb.toString());
                boolean zE = fVarA != null ? fVarA.e() : false;
                if (fVarA == null) {
                    com.tkay.core.common.k.c.a("AdManage is null--isReady", "Id:" + str + "--format:" + dVar.Y(), com.tkay.core.common.b.m.a().q());
                }
                com.tkay.core.common.k.c.a(dVarA2, false, zE ? 5 : 1, -1, "", -1, "", jSONArray.toString(), str2, false, "");
            } else {
                i = 1;
                str2 = str3;
                dVar = dVarA;
            }
            if (z2) {
                com.tkay.core.common.k.c.a(com.tkay.core.common.l.s.a(str2, str, "", dVar, "", -1, 0, 0, map), i, jSONArray.toString(), str2);
            }
            return null;
        }
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
                qVar.a = 1;
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
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
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
