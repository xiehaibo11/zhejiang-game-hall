package com.mbridge.msdk.videocommon.download;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: compiled from: DownLoadManager.java */
/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile b f4402a;
    private ThreadPoolExecutor b;
    private boolean c = false;
    private ConcurrentHashMap<String, d> d = new ConcurrentHashMap<>();
    private ConcurrentHashMap<String, CopyOnWriteArrayList<Map<String, a>>> e;
    private ConcurrentHashMap<String, CopyOnWriteArrayList<CampaignEx>> f;
    private ConcurrentHashMap<String, CopyOnWriteArrayList<a>> g;

    private b() {
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(5, 15, 15L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadPoolExecutor.DiscardPolicy());
        this.b = threadPoolExecutor;
        threadPoolExecutor.allowCoreThreadTimeOut(true);
    }

    public static b getInstance() {
        if (f4402a == null) {
            synchronized (b.class) {
                if (f4402a == null) {
                    f4402a = new b();
                }
            }
        }
        return f4402a;
    }

    public final a a(String str, String str2) {
        d dVarC = c(str);
        if (dVarC != null) {
            return dVarC.a(str2);
        }
        return null;
    }

    public final CopyOnWriteArrayList<CampaignEx> a(String str) {
        ConcurrentHashMap<String, CopyOnWriteArrayList<CampaignEx>> concurrentHashMap = this.f;
        if (concurrentHashMap == null || !concurrentHashMap.containsKey(str)) {
            return null;
        }
        return this.f.get(str);
    }

    public final CopyOnWriteArrayList<a> b(String str) {
        ConcurrentHashMap<String, CopyOnWriteArrayList<a>> concurrentHashMap = this.g;
        if (concurrentHashMap == null || !concurrentHashMap.containsKey(str)) {
            return null;
        }
        return this.g.get(str);
    }

    public final d c(String str) {
        ConcurrentHashMap<String, d> concurrentHashMap = this.d;
        if (concurrentHashMap == null || !concurrentHashMap.containsKey(str)) {
            return null;
        }
        return this.d.get(str);
    }

    public final boolean a(int i, String str, boolean z) {
        try {
            d dVarC = c(str);
            if (dVarC != null) {
                return dVarC.a(i, z) != null;
            }
            return false;
        } catch (Exception e) {
            if (!MBridgeConstans.DEBUG) {
                return false;
            }
            e.printStackTrace();
            return false;
        }
    }

    public final boolean a(int i, String str, boolean z, int i2, boolean z2, int i3, List<CampaignEx> list) {
        return a(i, str, z, i2, z2, i3, list, false);
    }

    /* JADX WARN: Removed duplicated region for block: B:89:0x018b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final boolean a(int r15, java.lang.String r16, boolean r17, int r18, boolean r19, int r20, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r21, boolean r22) {
        /*
            Method dump skipped, instruction units count: 589
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.videocommon.download.b.a(int, java.lang.String, boolean, int, boolean, int, java.util.List, boolean):boolean");
    }

    public void load(String str) {
        d dVarC = c(str);
        if (dVarC != null) {
            dVarC.a();
        }
    }

    public d createUnitCache(Context context, String str, CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList, int i, com.mbridge.msdk.videocommon.listener.a aVar) {
        if (TextUtils.isEmpty(str) || copyOnWriteArrayList == null || copyOnWriteArrayList.size() == 0) {
            return null;
        }
        if (this.d.containsKey(str)) {
            d dVar = this.d.get(str);
            if (i == 94 || i == 287) {
                dVar.a(copyOnWriteArrayList.get(0).getRequestId(), aVar);
            } else {
                dVar.a(aVar);
            }
            dVar.a(copyOnWriteArrayList);
            return dVar;
        }
        d dVar2 = new d(context, copyOnWriteArrayList, this.b, str, i);
        if (aVar != null) {
            dVar2.a(aVar);
        }
        this.d.put(str, dVar2);
        return dVar2;
    }

    public d createUnitCache(Context context, String str, CampaignEx campaignEx, int i, com.mbridge.msdk.videocommon.listener.a aVar) {
        if (TextUtils.isEmpty(str) || campaignEx == null) {
            return null;
        }
        if (this.d.containsKey(str)) {
            d dVar = this.d.get(str);
            if (i == 94 || i == 287) {
                dVar.a(campaignEx.getRequestId(), aVar);
            } else {
                dVar.a(aVar);
            }
            dVar.a(campaignEx);
            return dVar;
        }
        d dVar2 = new d(context, campaignEx, this.b, str, i);
        if (aVar != null) {
            dVar2.a(aVar);
        }
        this.d.put(str, dVar2);
        return dVar2;
    }

    public final void a(boolean z) {
        this.c = z;
        ConcurrentHashMap<String, d> concurrentHashMap = this.d;
        if (concurrentHashMap != null) {
            Iterator<Map.Entry<String, d>> it = concurrentHashMap.entrySet().iterator();
            while (it.hasNext()) {
                d value = it.next().getValue();
                if (value != null) {
                    value.b();
                }
            }
        }
    }

    public final int b(String str, String str2) {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayListC;
        a value;
        CampaignEx campaignExG;
        ConcurrentHashMap<String, d> concurrentHashMap = this.d;
        if (concurrentHashMap != null) {
            Iterator<Map.Entry<String, d>> it = concurrentHashMap.entrySet().iterator();
            while (it.hasNext()) {
                d value2 = it.next().getValue();
                if (value2 != null && (copyOnWriteArrayListC = value2.c()) != null) {
                    int size = copyOnWriteArrayListC.size();
                    for (int i = 0; i < size; i++) {
                        Map<String, a> map = copyOnWriteArrayListC.get(i);
                        if (map != null) {
                            Iterator<Map.Entry<String, a>> it2 = map.entrySet().iterator();
                            if (it2.hasNext() && (value = it2.next().getValue()) != null && (campaignExG = value.g()) != null) {
                                String videoUrlEncode = campaignExG.getVideoUrlEncode();
                                if (!TextUtils.isEmpty(str2) && !TextUtils.isEmpty(videoUrlEncode) && str2.equals(videoUrlEncode)) {
                                    return value.f();
                                }
                            }
                        }
                    }
                }
            }
        }
        return 0;
    }

    public final void b(boolean z) {
        if (z) {
            if (this.c) {
                return;
            }
        } else {
            this.c = false;
        }
        ConcurrentHashMap<String, d> concurrentHashMap = this.d;
        if (concurrentHashMap != null) {
            Iterator<Map.Entry<String, d>> it = concurrentHashMap.entrySet().iterator();
            while (it.hasNext()) {
                it.next().getValue().a();
            }
        }
    }

    public final void a() {
        ConcurrentHashMap<String, d> concurrentHashMap = this.d;
        if (concurrentHashMap != null) {
            for (Map.Entry<String, d> entry : concurrentHashMap.entrySet()) {
                d value = entry.getValue();
                String key = entry.getKey();
                try {
                    Class.forName("com.mbridge.msdk.videocommon.d.a");
                    com.mbridge.msdk.videocommon.d.c cVarA = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), key);
                    if (cVarA != null) {
                        if (cVarA.w() == 2) {
                            value.b();
                        } else {
                            value.a();
                        }
                    }
                } catch (Exception e) {
                    z.d("DownLoadManager", e.getMessage());
                    try {
                        if (!TextUtils.isEmpty(key)) {
                            com.mbridge.msdk.c.d dVarE = com.mbridge.msdk.c.b.a().e(com.mbridge.msdk.foundation.controller.a.f().k(), key);
                            if (dVarE == null) {
                                dVarE = com.mbridge.msdk.c.d.e(key);
                            }
                            if (dVarE.k() == 2) {
                                value.b();
                            } else {
                                value.a();
                            }
                        }
                    } catch (Exception e2) {
                        z.d("DownLoadManager", e2.getMessage());
                    }
                }
            }
        }
    }
}
