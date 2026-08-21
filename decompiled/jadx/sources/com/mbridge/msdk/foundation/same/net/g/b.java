package com.mbridge.msdk.foundation.same.net.g;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.igexin.sdk.PushBuildConfig;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.same.net.Aa;
import com.mbridge.msdk.foundation.same.net.l;
import com.mbridge.msdk.foundation.same.net.n;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.CustomInfoManager;
import java.io.File;
import java.util.Map;
import org.json.JSONArray;

/* JADX INFO: compiled from: CommonAsyncHttpRequest.java */
/* JADX INFO: loaded from: classes2.dex */
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
        To view partially-correct add '--show-bad-code' argument
    */
    public void get(int r14, java.lang.String r15, com.mbridge.msdk.foundation.same.net.g.d r16, com.mbridge.msdk.foundation.same.net.l r17, com.mbridge.msdk.foundation.same.net.e r18, boolean r19) {
        /*
            Method dump skipped, instruction units count: 407
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.same.net.g.b.get(int, java.lang.String, com.mbridge.msdk.foundation.same.net.g.d, com.mbridge.msdk.foundation.same.net.l, com.mbridge.msdk.foundation.same.net.e, boolean):void");
    }

    /* JADX WARN: Removed duplicated region for block: B:28:0x0079 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:30:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void get(int r3, java.lang.String r4, java.util.Map<java.lang.String, java.lang.String> r5, com.mbridge.msdk.foundation.same.net.l r6, com.mbridge.msdk.foundation.same.net.e r7) {
        /*
            r2 = this;
            if (r5 != 0) goto L7
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
        L7:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            java.lang.String r1 = "app_id"
            r5.put(r1, r0)
            java.lang.String r0 = "sdk_version"
            java.lang.String r1 = "MAL_16.3.67"
            r5.put(r0, r1)
            java.lang.String r0 = "platform"
            java.lang.String r1 = "1"
            r5.put(r0, r1)
            java.lang.String r5 = r2.asUrlParams(r5)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L40
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "?"
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = r0.toString()
        L40:
            boolean r5 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r5 == 0) goto L5a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "get wx scheme url = "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            java.lang.String r0 = "AppletsModel"
            com.mbridge.msdk.foundation.tools.z.a(r0, r5)
        L5a:
            r5 = 0
            r0 = 0
            if (r3 == 0) goto L71
            r1 = 1
            if (r3 == r1) goto L6b
            r1 = 2
            if (r3 == r1) goto L65
            goto L77
        L65:
            com.mbridge.msdk.foundation.same.net.d.c r3 = new com.mbridge.msdk.foundation.same.net.d.c     // Catch: java.lang.Exception -> L77
            r3.<init>(r5, r4, r0, r7)     // Catch: java.lang.Exception -> L77
            goto L76
        L6b:
            com.mbridge.msdk.foundation.same.net.d.d r3 = new com.mbridge.msdk.foundation.same.net.d.d     // Catch: java.lang.Exception -> L77
            r3.<init>(r5, r4, r0, r7)     // Catch: java.lang.Exception -> L77
            goto L76
        L71:
            com.mbridge.msdk.foundation.same.net.d.f r3 = new com.mbridge.msdk.foundation.same.net.d.f     // Catch: java.lang.Exception -> L77
            r3.<init>(r5, r4, r0, r7)     // Catch: java.lang.Exception -> L77
        L76:
            r0 = r3
        L77:
            if (r0 == 0) goto L86
            r0.a(r6)     // Catch: java.lang.Exception -> L86
            int r3 = r0.g()     // Catch: java.lang.Exception -> L86
            r0.b(r3)     // Catch: java.lang.Exception -> L86
            com.mbridge.msdk.foundation.same.net.n.a(r0)     // Catch: java.lang.Exception -> L86
        L86:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.same.net.g.b.get(int, java.lang.String, java.util.Map, com.mbridge.msdk.foundation.same.net.l, com.mbridge.msdk.foundation.same.net.e):void");
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
        To view partially-correct add '--show-bad-code' argument
    */
    private void post(int r15, java.lang.String r16, com.mbridge.msdk.foundation.same.net.g.d r17, com.mbridge.msdk.foundation.same.net.l r18, com.mbridge.msdk.foundation.same.net.e r19) {
        /*
            Method dump skipped, instruction units count: 382
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.same.net.g.b.post(int, java.lang.String, com.mbridge.msdk.foundation.same.net.g.d, com.mbridge.msdk.foundation.same.net.l, com.mbridge.msdk.foundation.same.net.e):void");
    }
}
