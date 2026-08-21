package com.mbridge.msdk.videocommon.d;

import android.text.TextUtils;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.videocommon.b.d;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import org.json.JSONArray;
import org.json.JSONObject;

public class b {
    private static volatile b d;
    private volatile boolean c = false;
    private CopyOnWriteArrayList<String> e = new CopyOnWriteArrayList<>();
    private static ConcurrentHashMap<String, c> b = new ConcurrentHashMap<>();
    public static a a = null;

    private b() {
    }

    public static b a() {
        if (d == null) {
            synchronized (b.class) {
                if (d == null) {
                    d = new b();
                }
            }
        }
        return d;
    }

    public final void a(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            this.e.remove(str);
        } catch (Exception unused) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x006b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final a b() {
        boolean z;
        a aVar = a;
        if (aVar != null) {
            return aVar;
        }
        String strB = com.mbridge.msdk.foundation.a.a.a.a().b("reward_" + com.mbridge.msdk.foundation.controller.a.f().k());
        if (!TextUtils.isEmpty(strB)) {
            a aVarA = a.a(strB);
            if (aVarA != null) {
                long jC = aVarA.c();
                long jCurrentTimeMillis = System.currentTimeMillis();
                long jH = aVarA.h() + jC;
                if (jH > jCurrentTimeMillis) {
                    if (z.c) {
                        z.b("RewardSettingManager", "app setting nexttime is not ready  [settingNextRequestTime= " + jH + " currentTime = " + jCurrentTimeMillis + "]");
                    }
                    z = false;
                } else {
                    z.b("RewardSettingManager", "app setting timeout or not exists");
                    z = true;
                }
            }
            if (!z) {
                return aVarA;
            }
            d(com.mbridge.msdk.foundation.controller.a.f().k(), com.mbridge.msdk.foundation.controller.a.f().l());
            return c();
        }
        d(com.mbridge.msdk.foundation.controller.a.f().k(), com.mbridge.msdk.foundation.controller.a.f().l());
        return c();
    }

    private void d(String str, String str2) {
        if (this.c) {
            return;
        }
        this.c = true;
        new com.mbridge.msdk.videocommon.c.a().a(com.mbridge.msdk.foundation.controller.a.f().j(), str, str2);
    }

    public final void a(String str, String str2, String str3, com.mbridge.msdk.videocommon.c.c cVar) {
        if (!TextUtils.isEmpty(str3) && !this.e.contains(str3)) {
            if (!TextUtils.isEmpty(str3)) {
                this.e.add(str3);
            }
            new com.mbridge.msdk.videocommon.c.a().a(com.mbridge.msdk.foundation.controller.a.f().j(), str, str2, str3, cVar);
            return;
        }
        z.a("test_reward_unit_setting", "unitID: " + str3 + " is requesting");
    }

    public final c a(String str, String str2) {
        c cVar;
        String str3 = "reward_" + str + "_" + str2;
        if (b.containsKey(str3)) {
            boolean zA = false;
            try {
                cVar = b.get(str3);
                try {
                    zA = a(cVar);
                } catch (Exception unused) {
                }
            } catch (Exception unused2) {
                cVar = null;
            }
            if (zA) {
                a(str, com.mbridge.msdk.foundation.controller.a.f().l(), str2, null);
            }
            return cVar;
        }
        c cVarC = c.c(com.mbridge.msdk.foundation.a.a.a.a().b(str3));
        if (a(cVarC)) {
            a(str, com.mbridge.msdk.foundation.controller.a.f().l(), str2, null);
            return null;
        }
        b.put(str3, cVarC);
        return cVarC;
    }

    public final c a(String str, String str2, boolean z) {
        c cVar;
        String str3 = "reward_" + str + "_" + str2;
        if (b.containsKey(str3)) {
            boolean zA = false;
            try {
                cVar = b.get(str3);
                try {
                    zA = a(cVar);
                } catch (Exception unused) {
                }
            } catch (Exception unused2) {
                cVar = null;
            }
            if (zA) {
                a(str, com.mbridge.msdk.foundation.controller.a.f().l(), str2, null);
            }
            return cVar;
        }
        c cVarC = c.c(com.mbridge.msdk.foundation.a.a.a.a().b(str3));
        if (!a(cVarC)) {
            b.put(str3, cVarC);
            return cVarC;
        }
        if (cVarC != null) {
            return cVarC;
        }
        a(str, com.mbridge.msdk.foundation.controller.a.f().l(), str2, null);
        return b(z);
    }

    public final a c() {
        a aVar = new a();
        HashMap map = new HashMap(5);
        map.put("1", 1000);
        map.put("9", 1000);
        map.put("8", 1000);
        HashMap map2 = new HashMap(3);
        map2.put("1", new d("Virtual Item", 1));
        aVar.a(map);
        aVar.b(map2);
        aVar.a(43200L);
        aVar.b(5400L);
        aVar.c(com.tkay.expressad.d.a.b.P);
        aVar.d(com.tkay.expressad.d.a.b.P);
        aVar.e(5L);
        aVar.a(1);
        return aVar;
    }

    private final boolean a(c cVar) {
        a aVarB = b();
        if (aVarB == null || cVar == null) {
            return true;
        }
        long jD = aVarB.d();
        long jCurrentTimeMillis = System.currentTimeMillis();
        long jX = cVar.x() + jD;
        if (jX <= jCurrentTimeMillis) {
            return true;
        }
        if (!z.c) {
            return false;
        }
        z.b("RewardSettingManager", "unit setting  nexttime is not ready  [settingNextRequestTime= " + jX + " currentTime = " + jCurrentTimeMillis + "]");
        return false;
    }

    public final void a(String str, String str2, String str3) {
        String str4 = "reward_" + str + "_" + str2;
        com.mbridge.msdk.foundation.a.a.a.a().a(str4, str3);
        b.put(str4, c.c(str3));
    }

    public final void b(final String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        a().a(com.mbridge.msdk.foundation.controller.a.f().k(), str, false);
        final String str2 = c.a;
        if (TextUtils.isEmpty(str2) || !TextUtils.isEmpty(H5DownLoadManager.getInstance().getH5ResAddress(str2))) {
            return;
        }
        if (TextUtils.isEmpty(str2)) {
            e.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, str, 2, "alert url is exception ,url:" + str2);
            return;
        }
        H5DownLoadManager.getInstance().downloadH5Res(str2, new H5DownLoadManager.ZipDownloadListener() {
            @Override
            public final void onSuccess(String str3) {
                e.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, str, 1, "");
            }

            @Override
            public final void onFailed(String str3, String str4) {
                e.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, str, 2, str4);
            }
        });
    }

    public final void b(String str, String str2) {
        com.mbridge.msdk.foundation.a.a.a.a().a("reward_" + str, str2);
        a = a.a(str2);
    }

    public final void a(boolean z) {
        this.c = z;
    }

    public static boolean c(String str) {
        JSONArray jSONArrayOptJSONArray;
        try {
            if (!TextUtils.isEmpty(str) && (jSONArrayOptJSONArray = new JSONObject(str).optJSONArray("unitSetting")) != null) {
                String strOptString = jSONArrayOptJSONArray.optJSONObject(0).optString("unitId");
                if (jSONArrayOptJSONArray != null && jSONArrayOptJSONArray.length() > 0) {
                    if (!TextUtils.isEmpty(strOptString)) {
                        return true;
                    }
                }
            }
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public final c c(String str, String str2) {
        String str3 = "reward_" + str + "_" + str2;
        if (b.containsKey(str3)) {
            return b.get(str3);
        }
        return c.c(com.mbridge.msdk.foundation.a.a.a.a().b(str3));
    }

    private static c b(boolean z) {
        c cVar = new c();
        try {
            ArrayList arrayList = new ArrayList();
            arrayList.add(new com.mbridge.msdk.videocommon.b.b(1, 15, null));
            cVar.a((List<com.mbridge.msdk.videocommon.b.b>) arrayList);
            cVar.n(1);
            cVar.m(1);
            cVar.o(1);
            cVar.s(1);
            cVar.a(1.0d);
            cVar.b(1.0d);
            cVar.t(2);
            cVar.p(2);
            cVar.q(1);
            cVar.r(1);
            cVar.i(3);
            cVar.j(80);
            cVar.k(100);
            cVar.l(0);
            cVar.h(2);
            cVar.f(-1);
            cVar.x(70);
            cVar.e(2);
            if (z) {
                cVar.d(5);
            } else {
                cVar.d(-1);
            }
            cVar.c(0);
            cVar.b(0);
            cVar.g(1);
            cVar.u(1);
            cVar.a(0);
            cVar.w(3);
            ArrayList<Integer> arrayList2 = new ArrayList<>();
            arrayList2.add(4);
            arrayList2.add(6);
            cVar.a(arrayList2);
            cVar.y(1);
            cVar.z(1);
            cVar.A(60);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return cVar;
    }
}
