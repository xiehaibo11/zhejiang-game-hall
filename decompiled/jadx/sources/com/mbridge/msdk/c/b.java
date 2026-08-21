package com.mbridge.msdk.c;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.q;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.n;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.tools.FastKV;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.z;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: compiled from: SettingManager.java */
/* JADX INFO: loaded from: classes2.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f3115a = b.class.getSimpleName();
    private static b b = null;
    private static HashMap<String, d> c = new HashMap<>();
    private static volatile a d = null;

    private b() {
    }

    public static b a() {
        if (b == null) {
            synchronized (b.class) {
                if (b == null) {
                    b = new b();
                }
            }
        }
        return b;
    }

    public final boolean a(String str) {
        a aVarB = b(str);
        if (aVarB != null) {
            long jAj = aVarB.aj() * 1000;
            long jCurrentTimeMillis = System.currentTimeMillis();
            long jAn = aVarB.an() + jAj;
            if (jAn > jCurrentTimeMillis) {
                z.b(f3115a, "app setting nexttime is not ready  [settingNextRequestTime= " + jAn + " currentTime = " + jCurrentTimeMillis + "]");
                return false;
            }
        }
        z.b(f3115a, "app setting timeout or not exists");
        return true;
    }

    public final boolean a(String str, int i, String str2) {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            String str3 = str + "_" + i + "_" + str2;
            long jCurrentTimeMillis = System.currentTimeMillis();
            long j = 0;
            long jLongValue = ((Long) ag.b(contextJ, str3, 0L)).longValue();
            a aVarB = b(str);
            if (aVarB == null) {
                aVarB = a().b();
            } else {
                j = jLongValue;
            }
            if (j + (aVarB.Y() * 1000) > jCurrentTimeMillis) {
                return false;
            }
            ag.a(contextJ, str3, Long.valueOf(jCurrentTimeMillis));
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public final boolean a(String str, String str2) {
        a aVarB = b(str2);
        if (a(str2) && a(str2, 1, str)) {
            new c().a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, com.mbridge.msdk.foundation.controller.a.f().l());
        }
        d dVarE = e(str2, str);
        if (aVarB != null && dVarE != null) {
            long jAe = aVarB.ae() * 1000;
            long jCurrentTimeMillis = System.currentTimeMillis();
            long jU = dVarE.u() + jAe;
            if (jU > jCurrentTimeMillis) {
                z.b(f3115a, "unit setting  nexttime is not ready  [settingNextRequestTime= " + jU + " currentTime = " + jCurrentTimeMillis + "]");
                return false;
            }
        }
        z.b(f3115a, "unit setting timeout or not exists");
        return true;
    }

    public final void b(String str, String str2) {
        com.mbridge.msdk.foundation.a.a.a.a().a(str, str2);
        d = a.f(str2);
        if (d != null) {
            d.aw();
        }
        a aVar = d;
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            PackageManager packageManager = contextJ != null ? contextJ.getPackageManager() : null;
            if (aVar == null || packageManager == null) {
                return;
            }
            if (aVar.M() > 0) {
                List<CampaignEx> listO = aVar.O();
                if (listO == null || listO.size() <= 0 || aVar.P() != 1) {
                    return;
                }
                ArrayList arrayList = new ArrayList();
                for (int i = 0; i < listO.size(); i++) {
                    CampaignEx campaignEx = listO.get(i);
                    String packageName = campaignEx.getPackageName();
                    try {
                        PackageInfo packageInfo = packageManager.getPackageInfo(packageName, 0);
                        String installerPackageName = packageManager.getInstallerPackageName(packageName);
                        campaignEx.setPackageName("");
                        campaignEx.setIex(1);
                        campaignEx.setTs(packageInfo.lastUpdateTime);
                        campaignEx.setLabel("is");
                        campaignEx.setPkgSource(installerPackageName);
                        campaignEx.setcVersionCode(packageInfo.versionCode);
                    } catch (PackageManager.NameNotFoundException unused) {
                        campaignEx.setPackageName("");
                        campaignEx.setIex(1);
                        campaignEx.setTs(0L);
                        campaignEx.setLabel("ni");
                        campaignEx.setPkgSource("");
                    }
                    arrayList.add(campaignEx);
                }
                a(arrayList, 1);
                return;
            }
            q.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).b();
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    private n a(List<CampaignEx> list, int i) {
        n nVar = new n();
        try {
            nVar.d(b(list, i));
            nVar.a(i + "");
            if (q.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a() > 500) {
                q.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).b("0");
            }
            q.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(nVar);
        } catch (Exception unused) {
        }
        return nVar;
    }

    private String b(List<CampaignEx> list, int i) {
        String str = "key=2000079&iex=" + i + "&cal=";
        try {
            JSONArray jSONArray = new JSONArray();
            Iterator<CampaignEx> it = list.iterator();
            while (it.hasNext()) {
                jSONArray.put(a(it.next()));
            }
            return str + t.a(jSONArray.toString());
        } catch (Exception e) {
            if (!MBridgeConstans.DEBUG) {
                return str;
            }
            e.printStackTrace();
            return str;
        }
    }

    private JSONObject a(CampaignEx campaignEx) {
        JSONObject jSONObject;
        JSONObject jSONObject2 = null;
        if (campaignEx == null) {
            return null;
        }
        try {
            jSONObject = new JSONObject();
        } catch (Exception e) {
            e = e;
        }
        try {
            jSONObject.put("campaignid", campaignEx.getId());
            jSONObject.put("ts", campaignEx.getTs());
            jSONObject.put(TTDownloadField.TT_LABEL, campaignEx.getLabel());
            jSONObject.put(com.tkay.expressad.foundation.g.a.I, campaignEx.getcVersionCode());
            String pkgSource = campaignEx.getPkgSource();
            if (pkgSource == null) {
                pkgSource = "";
            }
            jSONObject.put("pkg_source", pkgSource);
            return jSONObject;
        } catch (Exception e2) {
            e = e2;
            jSONObject2 = jSONObject;
            if (!MBridgeConstans.DEBUG) {
                return jSONObject2;
            }
            e.printStackTrace();
            return jSONObject2;
        }
    }

    public final JSONObject a(JSONObject jSONObject, JSONObject jSONObject2) {
        if (jSONObject == null || jSONObject.length() == 0) {
            return jSONObject2;
        }
        if (jSONObject2 != null && jSONObject2.length() != 0) {
            Iterator<String> itKeys = jSONObject2.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                try {
                } catch (Exception e) {
                    e.printStackTrace();
                }
                if ("unitSetting".equals(next) && jSONObject.has("unitSetting")) {
                    JSONArray jSONArray = jSONObject.getJSONArray("unitSetting");
                    jSONArray.put(0, a((JSONObject) jSONArray.get(0), (JSONObject) jSONObject2.getJSONArray("unitSetting").get(0)));
                    jSONObject.put(next, jSONArray);
                } else {
                    jSONObject.put(next, jSONObject2.opt(next));
                }
            }
        }
        return jSONObject;
    }

    public final a b(String str) {
        if (d == null) {
            try {
                d = a.f(com.mbridge.msdk.foundation.a.a.a.a().b(str));
                if (d != null) {
                    d.aw();
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return d;
    }

    public final String c(String str) {
        if (str == null) {
            return "";
        }
        try {
            String strB = com.mbridge.msdk.foundation.a.a.a.a().b(str);
            return strB == null ? "" : strB;
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
            return "";
        }
    }

    public static void a(Context context, String str) {
        FastKV fastKVBuild;
        Map<String, Object> all = null;
        if (com.mbridge.msdk.foundation.controller.b.a().d()) {
            try {
                fastKVBuild = new FastKV.Builder(e.b(com.mbridge.msdk.foundation.same.b.c.MBRIDGE_700_CONFIG), "mbridge").build();
            } catch (Exception unused) {
                fastKVBuild = null;
            }
        } else {
            fastKVBuild = null;
        }
        if (fastKVBuild != null) {
            try {
                all = fastKVBuild.getAll();
            } catch (Exception unused2) {
            }
            if (all != null) {
                try {
                    for (String str2 : all.keySet()) {
                        if (str2.startsWith(str + "_")) {
                            c.put(str2, d.b((String) all.get(str2)));
                        }
                    }
                    return;
                } catch (Exception e) {
                    e.printStackTrace();
                    return;
                }
            }
            return;
        }
        try {
            Map<String, ?> all2 = context.getSharedPreferences("mbridge", 0).getAll();
            for (String str3 : all2.keySet()) {
                if (str3.startsWith(str + "_")) {
                    c.put(str3, d.b((String) all2.get(str3)));
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public final d c(String str, String str2) {
        d dVarE = e(str, str2);
        return dVarE == null ? d.l() : dVarE;
    }

    public final d e(String str, String str2) {
        d dVarH = h(str, str2);
        if (dVarH != null && dVarH.j() == 0) {
            dVarH.c(1);
        }
        return dVarH;
    }

    private d h(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            str = com.mbridge.msdk.foundation.controller.a.f().k();
        }
        String str3 = str + "_" + str2;
        d dVarB = null;
        if (c.containsKey(str3)) {
            return c.get(str3);
        }
        try {
            dVarB = d.b(com.mbridge.msdk.foundation.a.a.a.a().b(str3));
            c.put(str3, dVarB);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return dVarB;
    }

    public final d f(String str, String str2) {
        return h(str, str2);
    }

    public final void a(String str, String str2, String str3) {
        String str4 = str + "_" + str2;
        com.mbridge.msdk.foundation.a.a.a.a().a(str4, str3);
        c.put(str4, d.b(str3));
    }

    public final void d(final String str) {
        c(com.mbridge.msdk.foundation.controller.a.f().k(), str);
        final String str2 = d.f3132a;
        if (TextUtils.isEmpty(str2) || !TextUtils.isEmpty(H5DownLoadManager.getInstance().getH5ResAddress(str2))) {
            return;
        }
        if (TextUtils.isEmpty(str2)) {
            com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, str, 2, "alert url is exception ,url:" + str2);
            return;
        }
        H5DownLoadManager.getInstance().downloadH5Res(str2, new H5DownLoadManager.ZipDownloadListener() { // from class: com.mbridge.msdk.c.b.1
            @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
            public final void onSuccess(String str3) {
                com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, str, 1, "");
            }

            @Override // com.mbridge.msdk.foundation.download.download.H5DownLoadManager.H5ResDownloadListerInter
            public final void onFailed(String str3, String str4) {
                com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, str, 2, str4);
            }
        });
    }

    public final String e(String str) {
        return com.mbridge.msdk.foundation.a.a.a.a().b("ivreward_" + str);
    }

    public final void f(String str) {
        com.mbridge.msdk.foundation.a.a.a.a().c("ivreward_" + str);
    }

    public final void g(String str, String str2) {
        try {
            String strB = com.mbridge.msdk.foundation.a.a.a.a().b(str + "_" + str2);
            if (TextUtils.isEmpty(strB)) {
                return;
            }
            JSONObject jSONObject = new JSONObject(strB);
            jSONObject.put("current_time", System.currentTimeMillis());
            a(str, str2, jSONObject.toString());
        } catch (Throwable th) {
            z.d(f3115a, th.getMessage());
        }
    }

    public final a b() {
        a aVar = new a();
        aVar.h(86400L);
        aVar.O(1);
        aVar.P(1);
        aVar.e(true);
        aVar.f(true);
        aVar.f(com.tkay.expressad.d.a.b.P);
        aVar.g(0L);
        aVar.d(false);
        aVar.c(false);
        aVar.b(com.tkay.expressad.d.a.b.Q);
        aVar.d(20L);
        aVar.e(10L);
        aVar.I(1);
        aVar.J(1);
        aVar.e("正在下载中，请去通知栏查看下载进度");
        aVar.c("mbridge");
        aVar.u(0);
        aVar.c(com.tkay.expressad.d.a.b.aC);
        aVar.H(100);
        aVar.G(com.tkay.expressad.d.a.b.aK);
        aVar.F(1);
        aVar.a(604800L);
        aVar.N(1);
        aVar.K(3);
        aVar.v(1);
        aVar.E(1);
        aVar.C(1);
        aVar.D(86400);
        aVar.L(com.tkay.expressad.d.a.b.bx);
        aVar.w(1);
        aVar.x(com.tkay.expressad.d.a.b.by);
        aVar.y(20);
        aVar.d("pid");
        aVar.z(1);
        aVar.A(1);
        aVar.B(1);
        aVar.M(1);
        aVar.p(1);
        aVar.o(1);
        aVar.q(1);
        aVar.r(0);
        aVar.s(1);
        aVar.t(-1);
        aVar.b(com.mbridge.msdk.c.a.b.f3114a);
        aVar.n(2);
        aVar.m(86400);
        aVar.d(0);
        aVar.h(com.tkay.expressad.d.a.b.df);
        aVar.g("https://mtg-native.rayjump.com/omsdk/omsdkjs_common_js.txt");
        aVar.c(120);
        aVar.b(10);
        aVar.g(false);
        aVar.R(0);
        aVar.S(120);
        aVar.T(1);
        aVar.j(com.mbridge.msdk.foundation.same.a.M);
        aVar.i(com.mbridge.msdk.foundation.same.a.O);
        aVar.h(com.mbridge.msdk.foundation.same.a.N);
        aVar.a(10);
        aVar.k(com.mbridge.msdk.foundation.same.a.S);
        aVar.g(10);
        aVar.V(0);
        aVar.U(0);
        aVar.a("");
        aVar.W(1);
        aVar.f(1);
        aVar.e(24);
        aVar.a(false);
        aVar.Q(1);
        aVar.b(true);
        return aVar;
    }

    public final a g(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return b();
            }
            a aVarB = b(str);
            return aVarB == null ? b() : aVarB;
        } catch (Exception unused) {
            return b();
        }
    }

    public final d d(String str, String str2) {
        d dVarH = h(str, str2);
        return dVarH == null ? d.l() : dVarH;
    }
}
