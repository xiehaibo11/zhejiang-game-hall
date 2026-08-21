package com.mbridge.msdk.foundation.same.net.g;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.igexin.sdk.PushBuildConfig;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.same.net.Aa;
import com.mbridge.msdk.foundation.same.net.i;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.same.net.l;
import com.mbridge.msdk.foundation.same.net.m;
import com.mbridge.msdk.foundation.same.net.n;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.CustomInfoManager;
import com.mbridge.msdk.out.MBConfiguration;
import java.io.File;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

public class b {
    private static final String TAG = b.class.getSimpleName();
    protected Context mContext;

    public b(Context context) {
        if (context == null) {
            this.mContext = com.mbridge.msdk.foundation.controller.a.f().j();
        } else {
            this.mContext = context.getApplicationContext();
        }
    }

    public void addExtraParams(String str, d dVar) {
        if (dVar != null) {
            String strA = Aa.a();
            if (strA == null) {
                strA = "";
            }
            dVar.a("channel", strA);
            dVar.a("band_width", com.mbridge.msdk.foundation.same.net.a.a().e() + "");
            dVar.a(PushBuildConfig.sdk_conf_channelid, com.mbridge.msdk.foundation.same.a.D);
            z.a(TAG, "excute addExtraParams , url:" + str);
            if (!TextUtils.isEmpty(str) && str.contains("setting")) {
                String strB = Aa.b();
                if (!TextUtils.isEmpty(strB)) {
                    dVar.a("keyword", strB);
                }
            }
            String str2 = dVar.b().get("unit_id");
            if (str2 != null) {
                String customInfoByUnitId = CustomInfoManager.getInstance().getCustomInfoByUnitId(str2, str);
                if (!TextUtils.isEmpty(customInfoByUnitId)) {
                    dVar.a("ch_info", customInfoByUnitId);
                }
                com.mbridge.msdk.c.d dVarE = com.mbridge.msdk.c.b.a().e(com.mbridge.msdk.foundation.controller.a.f().k(), str2);
                if (dVarE != null && !TextUtils.isEmpty(dVarE.a())) {
                    dVar.a(com.tkay.expressad.foundation.g.a.am, dVarE.a());
                }
            }
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()) {
                return;
            }
            dVar.a("dev_source", "2");
            return;
        }
        z.d(TAG, "addExtraParams error, params is null,frame work error");
    }

    public void get(int i, String str, d dVar, com.mbridge.msdk.foundation.same.net.e eVar) {
        get(i, str, dVar, new com.mbridge.msdk.foundation.same.net.b(), eVar, false);
    }

    public void getLoadOrSetting(int i, String str, d dVar, com.mbridge.msdk.foundation.same.net.e eVar) {
        getLoadOrSetting(i, str, dVar, new com.mbridge.msdk.foundation.same.net.b(), eVar, true);
    }

    public void getLoadOrSetting(int i, String str, d dVar, l lVar, com.mbridge.msdk.foundation.same.net.e eVar, boolean z) {
        get(i, str, dVar, lVar, eVar, z);
    }

    /* JADX WARN: Removed duplicated region for block: B:46:0x016c  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x017f  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x0187  */
    /* JADX WARN: Removed duplicated region for block: B:66:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void get(int i, String str, d dVar, l lVar, com.mbridge.msdk.foundation.same.net.e eVar, boolean z) {
        d dVar2;
        d dVar3;
        String str2;
        com.mbridge.msdk.c.a aVarG;
        i iVar;
        i fVar;
        if (dVar == null) {
            try {
                dVar2 = new d();
            } catch (Exception e) {
                e = e;
                dVar2 = dVar;
                z.a(TAG, e.getMessage());
                dVar3 = dVar2;
                if (str.contains(com.mbridge.msdk.foundation.same.net.f.d.a().c)) {
                    try {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("uri", com.mbridge.msdk.foundation.same.net.f.d.a().d + Uri.parse(str).getPath());
                            jSONObject.put("data", dVar3.a());
                        } catch (Throwable th) {
                            z.d(TAG, th.getMessage());
                        }
                        m.a().a(com.mbridge.msdk.foundation.same.net.f.d.a().d, com.mbridge.msdk.foundation.same.net.f.d.a().h, jSONObject.toString(), true, eVar);
                        return;
                    } catch (Throwable th2) {
                        z.d(TAG, th2.getMessage());
                    }
                }
                str2 = str + "?" + dVar3.toString();
                aVarG = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
                if (str2.length() < aVarG.b()) {
                }
                if (str2.length() < aVarG.c()) {
                }
                z.b(TAG, "get url = " + str2);
                iVar = null;
                if (i != 0) {
                }
                iVar = fVar;
                if (iVar != null) {
                }
            }
        } else {
            dVar2 = dVar;
        }
        try {
            addExtraParams(str, dVar2);
            e.f(dVar2);
            String str3 = dVar2.b().get("sign");
            if (TextUtils.isEmpty(str3)) {
                str3 = "";
            }
            long jCurrentTimeMillis = System.currentTimeMillis();
            dVar2.a("ts", jCurrentTimeMillis + "");
            dVar2.a("st", SameMD5.getMD5(jCurrentTimeMillis + str3));
            k kVarA = com.mbridge.msdk.foundation.same.net.f.c.a().a(dVar2);
            if (kVarA != null && eVar != null) {
                eVar.onSuccess(kVarA);
                return;
            }
        } catch (Exception e2) {
            e = e2;
            z.a(TAG, e.getMessage());
        }
        dVar3 = dVar2;
        if (str.contains(com.mbridge.msdk.foundation.same.net.f.d.a().c) && com.mbridge.msdk.foundation.same.net.f.d.a().i) {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("uri", com.mbridge.msdk.foundation.same.net.f.d.a().d + Uri.parse(str).getPath());
            jSONObject2.put("data", dVar3.a());
            m.a().a(com.mbridge.msdk.foundation.same.net.f.d.a().d, com.mbridge.msdk.foundation.same.net.f.d.a().h, jSONObject2.toString(), true, eVar);
            return;
        }
        str2 = str + "?" + dVar3.toString();
        aVarG = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
        if (str2.length() < aVarG.b() && str2.contains(com.mbridge.msdk.foundation.same.net.f.d.a().c)) {
            post(i, str, dVar3, lVar, eVar);
            return;
        }
        if (str2.length() < aVarG.c() && z) {
            post(i, str, dVar3, lVar, eVar);
            return;
        }
        z.b(TAG, "get url = " + str2);
        iVar = null;
        if (i != 0) {
            fVar = new com.mbridge.msdk.foundation.same.net.d.f(0, str2, null, eVar);
        } else {
            if (i != 1) {
                if (i == 2) {
                    fVar = new com.mbridge.msdk.foundation.same.net.d.c(0, str2, null, eVar);
                }
                if (iVar != null) {
                    iVar.a(lVar);
                    iVar.b(iVar.g());
                    n.a(iVar);
                    return;
                }
                return;
            }
            fVar = new com.mbridge.msdk.foundation.same.net.d.d(0, str2, null, eVar);
        }
        iVar = fVar;
        if (iVar != null) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:28:0x0079 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:30:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void get(int i, String str, Map<String, String> map, l lVar, com.mbridge.msdk.foundation.same.net.e eVar) {
        i fVar;
        if (map == null) {
            map = new HashMap<>();
        }
        map.put("app_id", com.mbridge.msdk.foundation.controller.a.f().k());
        map.put("sdk_version", MBConfiguration.SDK_VERSION);
        map.put("platform", "1");
        String strAsUrlParams = asUrlParams(map);
        if (!TextUtils.isEmpty(strAsUrlParams)) {
            str = str + "?" + strAsUrlParams;
        }
        if (MBridgeConstans.DEBUG) {
            z.a("AppletsModel", "get wx scheme url = " + str);
        }
        i iVar = null;
        if (i == 0) {
            fVar = new com.mbridge.msdk.foundation.same.net.d.f(0, str, null, eVar);
        } else {
            if (i != 1) {
                if (i == 2) {
                    fVar = new com.mbridge.msdk.foundation.same.net.d.c(0, str, null, eVar);
                }
                if (iVar == null) {
                    try {
                        iVar.a(lVar);
                        iVar.b(iVar.g());
                        n.a(iVar);
                        return;
                    } catch (Exception unused) {
                        return;
                    }
                }
                return;
            }
            fVar = new com.mbridge.msdk.foundation.same.net.d.d(0, str, null, eVar);
        }
        iVar = fVar;
        if (iVar == null) {
        }
    }

    private String asUrlParams(Map<String, String> map) {
        if (map != null && map.size() != 0) {
            StringBuilder sb = new StringBuilder();
            try {
                for (String str : map.keySet()) {
                    if (!TextUtils.isEmpty(str)) {
                        String str2 = map.get(str);
                        if (TextUtils.isEmpty(str2)) {
                            str2 = "";
                        }
                        sb.append("&");
                        sb.append(str);
                        sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                        sb.append(str2);
                    }
                }
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.d(TAG, e.getMessage());
                }
                sb = null;
            }
            if (sb != null && sb.length() > 0) {
                return sb.toString();
            }
        }
        return null;
    }

    public static void downloadFile(File file, String str, com.mbridge.msdk.foundation.same.net.e eVar) {
        z.b(TAG, "downloadFile url = " + str);
        n.a().a(file, str, eVar);
    }

    public void choiceV3OrV5BySetting(int i, d dVar, com.mbridge.msdk.foundation.same.net.e eVar, String str) {
        choiceV3OrV5BySetting(i, dVar, eVar, str, new com.mbridge.msdk.foundation.same.net.b());
    }

    public void choiceV3OrV5BySetting(int i, d dVar, com.mbridge.msdk.foundation.same.net.e eVar, String str, l lVar) {
        int iAZ;
        com.mbridge.msdk.c.a aVarG = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
        if (TextUtils.isEmpty(str)) {
            iAZ = aVarG.ba();
        } else {
            iAZ = aVarG.aZ();
        }
        String strA = com.mbridge.msdk.foundation.same.net.f.d.a().a(str, iAZ);
        if (iAZ < 2) {
            if (lVar == null) {
                postV5(i, strA, dVar, eVar);
                return;
            } else {
                postV5(i, strA, dVar, eVar, lVar);
                return;
            }
        }
        if (iAZ % 2 == 0) {
            if (dVar == null) {
                dVar = new d();
            }
            JSONArray jSONArrayB = com.mbridge.msdk.foundation.db.a.a.a().b();
            if (jSONArrayB != null) {
                String string = jSONArrayB.toString();
                int iB = com.mbridge.msdk.foundation.same.net.f.d.a().b();
                if (iB > 0 && string.length() > iB) {
                    post(i, strA, dVar, eVar);
                    return;
                }
                dVar.a(d.e, string);
            }
        }
        d dVar2 = dVar;
        if (lVar == null) {
            getLoadOrSetting(i, strA, dVar2, eVar);
        } else {
            getLoadOrSetting(i, strA, dVar2, lVar, eVar, true);
        }
    }

    public void postV5(int i, String str, d dVar, com.mbridge.msdk.foundation.same.net.e eVar) {
        String str2 = dVar.b().get("sign");
        if (TextUtils.isEmpty(str2)) {
            str2 = "";
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        dVar.a("ts", jCurrentTimeMillis + "");
        dVar.a("st", SameMD5.getMD5(jCurrentTimeMillis + str2));
        post(i, str, dVar, new com.mbridge.msdk.foundation.same.net.b(), eVar);
    }

    public void postV5(int i, String str, d dVar, com.mbridge.msdk.foundation.same.net.e eVar, l lVar) {
        String str2 = dVar.b().get("sign");
        if (str2 == null) {
            str2 = "";
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        dVar.a("ts", jCurrentTimeMillis + "");
        dVar.a("st", SameMD5.getMD5(jCurrentTimeMillis + str2));
        if (lVar != null) {
            post(i, str, dVar, lVar, eVar);
        } else {
            post(i, str, dVar, new com.mbridge.msdk.foundation.same.net.b(), eVar);
        }
    }

    public void post(int i, String str, d dVar, com.mbridge.msdk.foundation.same.net.e eVar) {
        post(i, str, dVar, new com.mbridge.msdk.foundation.same.net.b(), eVar);
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x005c  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00ff  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x0148  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0167  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x0175  */
    /* JADX WARN: Removed duplicated region for block: B:80:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void post(int i, String str, d dVar, l lVar, com.mbridge.msdk.foundation.same.net.e eVar) {
        d dVar2;
        String str2;
        i fVar;
        int iJ;
        String strAh;
        int iAE;
        String str3;
        if (dVar == null) {
            try {
                dVar2 = new d();
            } catch (Exception e) {
                e = e;
                dVar2 = dVar;
                z.a(TAG, e.getMessage());
                d dVar3 = dVar2;
                z.b(TAG, "post url = " + str);
                if (!str.contains(com.mbridge.msdk.foundation.same.net.f.d.a().a)) {
                }
                str2 = str;
                fVar = null;
                if (i == 0) {
                }
                if (fVar != null) {
                }
            }
        } else {
            dVar2 = dVar;
        }
        try {
            addExtraParams(str, dVar2);
            e.f(dVar2);
            k kVarA = com.mbridge.msdk.foundation.same.net.f.c.a().a(dVar2);
            if (kVarA != null && eVar != null) {
                eVar.onSuccess(kVarA);
                return;
            }
        } catch (Exception e2) {
            e = e2;
            z.a(TAG, e.getMessage());
        }
        d dVar32 = dVar2;
        z.b(TAG, "post url = " + str);
        if (!str.contains(com.mbridge.msdk.foundation.same.net.f.d.a().a)) {
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            String str4 = "";
            if (aVarB != null) {
                iAE = aVarB.aE();
                try {
                    str3 = dVar32.b().get("data");
                } catch (Exception e3) {
                    e = e3;
                }
                try {
                } catch (Exception e4) {
                    e = e4;
                    str4 = str3;
                    e.printStackTrace();
                }
                if (!com.mbridge.msdk.foundation.same.report.e.a(aVarB, str3)) {
                    return;
                }
                str4 = str3;
                strAh = aVarB.ah();
                iJ = aVarB.j();
                dVar32.a(com.tkay.expressad.foundation.g.a.al, aVarB.o());
            } else {
                iJ = 0;
                strAh = "UNKNOWN";
                iAE = 0;
            }
            dVar32.a(com.tkay.expressad.foundation.g.a.bD, strAh);
            try {
                if (iAE == 2) {
                    if (TextUtils.isEmpty(str4) || !com.mbridge.msdk.foundation.same.report.e.a(aVarB, str4)) {
                        return;
                    }
                    if (iJ == 1 || iJ == 3) {
                        m.a().a(com.mbridge.msdk.foundation.same.net.f.d.a().f, com.mbridge.msdk.foundation.same.net.f.d.a().g, dVar32.toString(), false, eVar);
                        return;
                    }
                } else if (iAE == 1) {
                    m.a().a(com.mbridge.msdk.foundation.same.net.f.d.a().f, com.mbridge.msdk.foundation.same.net.f.d.a().g, dVar32.toString(), false, eVar);
                    return;
                }
            } catch (Exception e5) {
                e5.printStackTrace();
            }
        } else {
            if (str.contains(com.mbridge.msdk.foundation.same.net.f.d.a().o)) {
                if (dVar32 != null) {
                    str2 = str + "?" + dVar32.toString();
                } else {
                    str2 = str;
                }
                JSONArray jSONArrayB = com.mbridge.msdk.foundation.db.a.a.a().b();
                if (jSONArrayB != null) {
                    String string = jSONArrayB.toString();
                    dVar32 = new d();
                    dVar32.a(d.e, string);
                }
            }
            fVar = null;
            if (i == 0) {
                fVar = new com.mbridge.msdk.foundation.same.net.d.f(1, str2, dVar32.toString(), eVar);
                fVar.a("Content-Type", "application/x-www-form-urlencoded");
            } else if (i == 1) {
                fVar = new com.mbridge.msdk.foundation.same.net.d.d(1, str2, dVar32.toString(), eVar);
                fVar.a("Content-Type", "application/x-www-form-urlencoded");
            } else if (i == 2) {
                fVar = new com.mbridge.msdk.foundation.same.net.d.c(1, str2, dVar32.toString(), eVar);
                fVar.a("Content-Type", "application/x-www-form-urlencoded");
            }
            if (fVar != null) {
                fVar.a(lVar);
                n.a(fVar);
                return;
            }
            return;
        }
        str2 = str;
        fVar = null;
        if (i == 0) {
        }
        if (fVar != null) {
        }
    }
}
