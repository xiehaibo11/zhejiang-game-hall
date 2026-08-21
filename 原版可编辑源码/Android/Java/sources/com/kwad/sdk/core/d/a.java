package com.kwad.sdk.core.d;

import android.content.Context;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.request.model.f;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.e;
import com.kwad.sdk.utils.t;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

public class a {
    public static SimpleDateFormat Ld = new SimpleDateFormat("yyyy-MM-dd");
    private static volatile a aoB;

    public static a AW() {
        if (aoB == null) {
            synchronized (a.class) {
                if (aoB == null) {
                    aoB = new a();
                }
            }
        }
        return aoB;
    }

    public static boolean AX() {
        List<f> listBY = bY(15);
        if (listBY.size() == 0) {
            return true;
        }
        long j = -1;
        int i = 0;
        for (f fVar : listBY) {
            i += fVar.count;
            if (fVar.auw > j) {
                j = fVar.auw;
            }
        }
        c.d("AdCounter", "onBind localCountCheck: allCount: " + i + ", lastShowTime: " + j);
        if (i > AZ()) {
            return false;
        }
        return j + (Ba() * 1000) <= System.currentTimeMillis();
    }

    public static List<f> AY() {
        if (((e) ServiceProvider.get(e.class)).getContext() == null) {
            return null;
        }
        String string = getString("ksadsdk_local_ad_task_info_adstyle_data");
        ArrayList<f> arrayList = new ArrayList();
        try {
            JSONArray jSONArray = new JSONArray(string);
            int length = jSONArray.length();
            for (int i = 0; i < length; i++) {
                JSONObject jSONObject = jSONArray.getJSONObject(i);
                f fVar = new f();
                fVar.parseJson(jSONObject);
                arrayList.add(fVar);
            }
        } catch (Exception unused) {
        }
        ArrayList arrayList2 = new ArrayList();
        for (f fVar2 : arrayList) {
            if (a(fVar2)) {
                arrayList2.add(fVar2);
            }
        }
        return arrayList2;
    }

    private static int AZ() {
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        if (context == null) {
            return 30;
        }
        return context.getSharedPreferences("ksadsdk_local_ad_task_info", 0).getInt("reward_aggregation_max_per_day", 30);
    }

    private static long Ba() {
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        if (context == null) {
            return 1200L;
        }
        return context.getSharedPreferences("ksadsdk_local_ad_task_info", 0).getLong("reward_aggregation_min_interval", 1200L);
    }

    private static void I(String str, String str2) {
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        if (context == null) {
            return;
        }
        context.getSharedPreferences("ksadsdk_local_ad_task_info", 0).edit().putString(str, str2).apply();
    }

    private static boolean a(f fVar) {
        long j = fVar.auw;
        if (j <= 0) {
            return false;
        }
        return Ld.format(new Date(j)).equals(Ld.format(new Date()));
    }

    public static void ar(AdTemplate adTemplate) {
        if (adTemplate.watched) {
            c.d("AdCounter", "startWatchAd this ad has been watched.");
        } else {
            as(adTemplate);
        }
    }

    private static void as(AdTemplate adTemplate) {
        f fVar;
        int iCo = d.co(adTemplate);
        int iCa = d.ca(adTemplate);
        List listAY = AY();
        if (listAY != null && listAY.size() != 0) {
            boolean z = false;
            Iterator it = listAY.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                f fVar2 = (f) it.next();
                if (fVar2.adStyle == iCa && fVar2.taskType == iCo) {
                    fVar2.count++;
                    if (!a(fVar2)) {
                        fVar2.count = 1;
                        fVar2.ag(System.currentTimeMillis());
                    }
                    z = true;
                }
            }
            if (!z) {
                fVar = new f(iCa, iCo, 1, System.currentTimeMillis());
            }
            I("ksadsdk_local_ad_task_info_adstyle_data", t.I(listAY).toString());
            adTemplate.watched = true;
        }
        listAY = new ArrayList();
        fVar = new f(iCa, iCo, 1, System.currentTimeMillis());
        listAY.add(fVar);
        I("ksadsdk_local_ad_task_info_adstyle_data", t.I(listAY).toString());
        adTemplate.watched = true;
    }

    private static List<f> bY(int i) {
        ArrayList arrayList = new ArrayList();
        List<f> listAY = AY();
        if (listAY != null && listAY.size() != 0) {
            for (f fVar : listAY) {
                if (15 == fVar.adStyle) {
                    arrayList.add(fVar);
                }
            }
        }
        return arrayList;
    }

    public static void f(int i, long j) {
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        if (context == null) {
            return;
        }
        context.getSharedPreferences("ksadsdk_local_ad_task_info", 0).edit().putInt("reward_aggregation_max_per_day", i).putLong("reward_aggregation_min_interval", j).apply();
    }

    private static String getString(String str) {
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        if (context == null) {
            return null;
        }
        return context.getSharedPreferences("ksadsdk_local_ad_task_info", 0).getString(str, null);
    }
}
