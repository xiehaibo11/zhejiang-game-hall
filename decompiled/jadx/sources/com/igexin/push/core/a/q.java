package com.igexin.push.core.a;

import com.igexin.push.config.SDKUrlConfig;
import com.igexin.push.util.EncryptUtils;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class q extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2514a = com.igexin.push.config.i.f2493a + "_RedirectServerAction";

    private void a(String str, JSONArray jSONArray) {
        try {
            com.igexin.b.a.c.b.a(f2514a + "|start fetch idc config, url : " + str, new Object[0]);
            com.igexin.b.a.b.c.b().a(new com.igexin.push.f.a.e(new com.igexin.push.core.c.a(str, jSONArray)), false, true);
        } catch (Exception e) {
            com.igexin.b.a.c.b.a(f2514a + e.toString(), new Object[0]);
        }
    }

    public static String[] a(JSONArray jSONArray) {
        String[] strArr = null;
        try {
            strArr = new String[jSONArray.length()];
            for (int i = 0; i < jSONArray.length(); i++) {
                strArr[i] = "http://" + jSONArray.getString(i);
            }
        } catch (Exception e) {
            com.igexin.b.a.c.b.a(f2514a + "|parseIDCConfigURL exception" + e.toString(), new Object[0]);
        }
        return strArr;
    }

    @Override // com.igexin.push.core.a.b
    public boolean a(Object obj, JSONObject jSONObject) {
        long j;
        int i = 0;
        com.igexin.b.a.c.b.a(f2514a + "|redirect server resp data : " + jSONObject, new Object[0]);
        try {
            if (!jSONObject.has("action") || !jSONObject.getString("action").equals("redirect_server")) {
                return true;
            }
            long j2 = 0;
            long j3 = 1000;
            long jOptLong = jSONObject.optLong("delay", 0L) * 1000;
            ArrayList arrayList = new ArrayList();
            JSONArray jSONArray = jSONObject.getJSONArray("address_list");
            com.igexin.b.a.c.b.a("redirect|" + jOptLong + "|" + jSONArray.toString(), new Object[0]);
            int i2 = 0;
            while (i2 < jSONArray.length()) {
                String string = jSONArray.getString(i2);
                int iIndexOf = string.indexOf(44);
                if (iIndexOf > 0) {
                    String strSubstring = string.substring(i, iIndexOf);
                    String strSubstring2 = string.substring(iIndexOf + 1);
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    try {
                        long j4 = Long.parseLong(strSubstring2);
                        com.igexin.push.c.e eVar = new com.igexin.push.c.e();
                        StringBuilder sb = new StringBuilder();
                        try {
                            sb.append("socket://");
                            sb.append(strSubstring);
                            eVar.f2472a = sb.toString();
                            j = 1000;
                            try {
                                eVar.b = jCurrentTimeMillis + (j4 * 1000);
                                arrayList.add(eVar);
                            } catch (NumberFormatException unused) {
                            }
                        } catch (NumberFormatException unused2) {
                            j = 1000;
                        }
                    } catch (NumberFormatException unused3) {
                        j = j3;
                    }
                } else {
                    j = j3;
                }
                i2++;
                j3 = j;
                i = 0;
                j2 = 0;
            }
            if (jOptLong >= j2) {
                com.igexin.push.core.d.F = jOptLong;
            }
            if (jSONObject.has("loc") && jSONObject.has("conf")) {
                try {
                    SDKUrlConfig.setLocation(jSONObject.getString("loc"));
                    com.igexin.b.a.c.b.a(f2514a + " set group id : " + com.igexin.push.core.d.d, new Object[0]);
                    JSONArray jSONArray2 = jSONObject.getJSONArray("conf");
                    String[] strArrA = a(jSONArray2);
                    if (strArrA != null && strArrA.length > 0) {
                        String[] idcConfigUrl = SDKUrlConfig.getIdcConfigUrl();
                        if (idcConfigUrl != null && strArrA[0].equals(idcConfigUrl[0])) {
                            com.igexin.b.a.c.b.a(f2514a + "|current idc config url == new idc config url, return", new Object[0]);
                        } else if (com.igexin.push.core.d.ae != 0 && System.currentTimeMillis() - com.igexin.push.core.d.ae <= 7200000) {
                            com.igexin.b.a.c.b.a(f2514a + "|get idc cfg last time less than 2 hours return", new Object[0]);
                        } else {
                            String str = strArrA[0];
                            a(str, jSONArray2);
                        }
                    }
                } catch (Exception e) {
                    com.igexin.b.a.c.b.a(f2514a + e.toString(), new Object[0]);
                }
            }
            com.igexin.push.c.i.a().d().a(arrayList);
            com.igexin.b.a.b.a.a.f.a().c();
            if (!EncryptUtils.isLoadSuccess()) {
                return true;
            }
            com.igexin.b.a.c.b.a(f2514a + "|redirect reInit so ~~~~~", new Object[0]);
            EncryptUtils.reset();
            return true;
        } catch (Exception e2) {
            com.igexin.b.a.c.b.a(f2514a + e2.toString(), new Object[0]);
            return true;
        }
    }
}
