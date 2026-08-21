package com.tkay.expressad.video.module.b;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.g.f.h.b;
import com.tkay.expressad.foundation.h.j;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static HashMap<String, ArrayList<String>> f7343a = new HashMap<>();
    private static final String b = "VideoViewReport";

    public static void a() {
    }

    public static void a(String str) {
        f7343a.remove(str);
    }

    private static void f(Context context, c cVar) {
        if (cVar == null || cVar.L() == null || cVar.L().d() == null) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, cVar.K(), cVar.L().d(), true);
    }

    private static void g(Context context, c cVar) {
        if (cVar == null || cVar.L() == null || cVar.L().e() == null) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, cVar.K(), cVar.L().e(), false);
    }

    private static void h(Context context, c cVar) {
        if (cVar == null || cVar.L() == null || cVar.L().f() == null) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, cVar.K(), cVar.L().f(), false);
    }

    private static void i(Context context, c cVar) {
        if (cVar == null || cVar.L() == null || cVar.L().g() == null) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, cVar.K(), cVar.L().g(), false);
    }

    private static void j(Context context, c cVar) {
        if (cVar == null || cVar.L() == null || cVar.L().h() == null) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, cVar.K(), cVar.L().h(), false);
    }

    public static void a(Context context, c cVar) {
        if (cVar == null || cVar.L() == null || cVar.L().o() == null) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, cVar.K(), cVar.L().o(), false);
    }

    public static void b(Context context, c cVar) {
        if (cVar == null || cVar.L() == null || cVar.L().j() == null) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, cVar.K(), cVar.L().j(), false);
    }

    public static void c(Context context, c cVar) {
        if (cVar == null || cVar.L() == null || cVar.L().k() == null) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, cVar.K(), cVar.L().k(), false);
    }

    private static void k(Context context, c cVar) {
        if (cVar == null || cVar.L() == null || cVar.L().l() == null) {
            return;
        }
        String strK = cVar.K();
        ArrayList<String> arrayList = f7343a.get(strK);
        if (arrayList == null) {
            arrayList = new ArrayList<>();
            f7343a.put(strK, arrayList);
        }
        if (arrayList.contains(cVar.aZ())) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, cVar.K(), cVar.L().l(), false);
        arrayList.add(cVar.aZ());
    }

    public static void a(Context context, c cVar, int i, int i2) {
        try {
            String[] strArrP = cVar.L().p();
            if (cVar == null || cVar.L() == null || strArrP == null) {
                return;
            }
            String[] strArr = new String[strArrP.length];
            for (int i3 = 0; i3 < strArrP.length; i3++) {
                String str = strArrP[i3];
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("endscreen_type", i);
                String string = jSONObject.toString();
                if (!TextUtils.isEmpty(string)) {
                    string = j.a(string);
                }
                if (!TextUtils.isEmpty(string)) {
                    str = str + "&value=" + URLEncoder.encode(string);
                }
                strArr[i3] = cVar.n() == 1 ? str + "&to=1&cbt=" + cVar.az() + "&tmorl=" + i2 : str + "&to=0&cbt=" + cVar.az() + "&tmorl=" + i2;
            }
            com.tkay.expressad.a.a.a(context, cVar, cVar.K(), strArr, true);
        } catch (Throwable unused) {
        }
    }

    public static void d(Context context, c cVar) {
        if (cVar == null || cVar.L() == null || cVar.L().q() == null) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, cVar.K(), cVar.L().q(), false);
    }

    public static void e(Context context, c cVar) {
        if (cVar == null || cVar.L() == null || cVar.L().m() == null) {
            return;
        }
        com.tkay.expressad.a.a.a(context, cVar, cVar.K(), cVar.L().m(), false);
    }

    public static void a(Context context, c cVar, int i, int i2, int i3) {
        String str;
        if (i2 == 0 || context == null || cVar == null) {
            return;
        }
        try {
            List<Map<Integer, String>> listI = cVar.L().i();
            int i4 = ((i + 1) * 100) / i2;
            if (listI != null) {
                int i5 = 0;
                while (i5 < listI.size()) {
                    Map<Integer, String> map = listI.get(i5);
                    if (map != null && map.size() > 0) {
                        Iterator<Map.Entry<Integer, String>> it = map.entrySet().iterator();
                        while (it.hasNext()) {
                            Map.Entry<Integer, String> next = it.next();
                            int iIntValue = next.getKey().intValue();
                            String value = next.getValue();
                            if (cVar.n() == 1) {
                                str = value + "&to=1&cbt=" + cVar.az() + "&tmorl=" + i3;
                            } else {
                                str = value + "&to=0&cbt=" + cVar.az() + "&tmorl=" + i3;
                            }
                            if (iIntValue <= i4 && !TextUtils.isEmpty(str)) {
                                com.tkay.expressad.a.a.a(context, cVar, cVar.K(), new String[]{str}, true);
                                it.remove();
                                listI.remove(i5);
                                i5--;
                            }
                        }
                    }
                    i5++;
                }
            }
        } catch (Throwable unused) {
        }
    }

    public static void a(c cVar, Map<Integer, String> map, String str, int i) {
        if (cVar == null || map == null) {
            return;
        }
        try {
            if (map.size() > 0) {
                Iterator<Map.Entry<Integer, String>> it = map.entrySet().iterator();
                while (it.hasNext()) {
                    Map.Entry<Integer, String> next = it.next();
                    Integer key = next.getKey();
                    String value = next.getValue();
                    if (i == key.intValue() && !TextUtils.isEmpty(value)) {
                        com.tkay.expressad.a.a.a(m.a().f(), cVar, str, value, false);
                        it.remove();
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void a(c cVar, String str) {
        if (cVar != null) {
            try {
                if (cVar.al() == null || cVar.al().size() <= 0) {
                    return;
                }
                for (String str2 : cVar.al()) {
                    if (!TextUtils.isEmpty(str2)) {
                        com.tkay.expressad.a.a.a(m.a().f(), cVar, str, str2, false);
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public static void a(c cVar, com.tkay.expressad.videocommon.c.c cVar2, String str, String str2, String str3) {
        String str4 = "&";
        String str5 = "";
        if (cVar == null || cVar2 == null) {
            return;
        }
        try {
            com.tkay.expressad.video.module.c.a aVar = new com.tkay.expressad.video.module.c.a(m.a().f());
            b bVar = new b();
            bVar.a("user_id", j.a(str2));
            bVar.a(com.tkay.expressad.d.a.b.aM, "1");
            bVar.a("reward_name", cVar2.a());
            StringBuilder sb = new StringBuilder();
            sb.append(cVar2.b());
            bVar.a("reward_amount", sb.toString());
            bVar.a("unit_id", str);
            bVar.a("click_id", cVar.aa());
            if (!TextUtils.isEmpty(str3)) {
                bVar.a("extra", str3);
            }
            aVar.a("", bVar);
            String string = cVar.ak() + "/addReward?";
            String strTrim = bVar.a().trim();
            if (!TextUtils.isEmpty(strTrim)) {
                if (!string.endsWith("?") && !string.endsWith("&")) {
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append(string);
                    if (!string.contains("?")) {
                        str4 = "?";
                    }
                    sb2.append(str4);
                    string = sb2.toString();
                }
                str5 = string + strTrim;
            }
            com.tkay.expressad.a.a.a(m.a().f(), cVar, cVar.K(), str5, false);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private static String a(String str, b bVar) {
        String strTrim = bVar.a().trim();
        if (TextUtils.isEmpty(strTrim)) {
            return "";
        }
        if (!str.endsWith("?") && !str.endsWith("&")) {
            StringBuilder sb = new StringBuilder();
            sb.append(str);
            sb.append(str.contains("?") ? "&" : "?");
            str = sb.toString();
        }
        return str + strTrim;
    }
}
