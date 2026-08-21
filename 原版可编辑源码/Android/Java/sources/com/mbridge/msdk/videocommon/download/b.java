package com.mbridge.msdk.videocommon.download;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public class b {
    private static volatile b a;
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
        if (a == null) {
            synchronized (b.class) {
                if (a == null) {
                    a = new b();
                }
            }
        }
        return a;
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
    */
    public final boolean a(int i, String str, boolean z, int i2, boolean z2, int i3, List<CampaignEx> list, boolean z3) {
        d dVarC;
        boolean z4;
        CampaignEx campaignEx;
        boolean z5 = false;
        if (list != null) {
            try {
                if (list.size() != 0 && (dVarC = c(str)) != null) {
                    List<a> listA = dVarC.a(str, i, z, list, z3);
                    if (listA != null && listA.size() != 0) {
                        if (z2) {
                            if (list.size() <= 0 || (campaignEx = list.get(0)) == null || campaignEx.getRsIgnoreCheckRule() == null || campaignEx.getRsIgnoreCheckRule().size() <= 0 || !campaignEx.getRsIgnoreCheckRule().contains(0)) {
                                z4 = false;
                            } else {
                                z.b("DownLoadManager", "Is not check video download status with TPL");
                                z4 = true;
                            }
                            try {
                                if (i3 == 0) {
                                    ArrayList arrayList = new ArrayList();
                                    for (a aVar : listA) {
                                        for (CampaignEx campaignEx2 : list) {
                                            if (aVar != null && aVar.g() != null && campaignEx2 != null && campaignEx2.getId().equals(aVar.g().getId()) && campaignEx2.getRequestId().equals(aVar.g().getRequestId())) {
                                                arrayList.add(aVar);
                                            }
                                        }
                                    }
                                    z5 = arrayList.size() > 0 ? true : z4;
                                } else {
                                    ArrayList arrayList2 = new ArrayList();
                                    for (a aVar2 : listA) {
                                        for (CampaignEx campaignEx3 : list) {
                                            if (aVar2 != null && aVar2.g() != null && campaignEx3 != null && campaignEx3.getId().equals(aVar2.g().getId()) && campaignEx3.getRequestId().equals(aVar2.g().getRequestId())) {
                                                arrayList2.add(aVar2);
                                            }
                                        }
                                    }
                                    if (arrayList2.size() >= i2) {
                                    }
                                }
                            } catch (Exception e) {
                                e = e;
                                z5 = z4;
                                if (MBridgeConstans.DEBUG) {
                                    e.printStackTrace();
                                }
                            }
                        } else {
                            ArrayList arrayList3 = new ArrayList();
                            for (a aVar3 : listA) {
                                for (CampaignEx campaignEx4 : list) {
                                    if (aVar3 != null && aVar3.g() != null && campaignEx4 != null && campaignEx4.getId().equals(aVar3.g().getId()) && campaignEx4.getRequestId().equals(aVar3.g().getRequestId())) {
                                        arrayList3.add(aVar3);
                                    }
                                }
                            }
                            if (arrayList3.size() > 0) {
                            }
                        }
                    }
                    if (z5) {
                        if (this.e == null) {
                            this.e = new ConcurrentHashMap<>();
                        } else if (this.e.containsKey(str)) {
                            this.e.remove(str);
                        }
                        if (this.g == null) {
                            this.g = new ConcurrentHashMap<>();
                        } else if (this.g.containsKey(str)) {
                            this.g.remove(str);
                        }
                        if (this.f == null) {
                            this.f = new ConcurrentHashMap<>();
                        } else if (this.f.containsKey(str)) {
                            this.f.remove(str);
                        }
                        if (listA != null && listA.size() > 0) {
                            CopyOnWriteArrayList copyOnWriteArrayList = new CopyOnWriteArrayList();
                            CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList2 = new CopyOnWriteArrayList<>();
                            CopyOnWriteArrayList<a> copyOnWriteArrayList3 = new CopyOnWriteArrayList<>();
                            for (a aVar4 : listA) {
                                ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap();
                                CampaignEx campaignExG = aVar4.g();
                                concurrentHashMap.put(campaignExG.getId() + campaignExG.getVideoUrlEncode() + campaignExG.getBidToken(), aVar4);
                                copyOnWriteArrayList.add(concurrentHashMap);
                                copyOnWriteArrayList2.add(campaignExG);
                                copyOnWriteArrayList3.add(aVar4);
                            }
                            this.e.put(str, (CopyOnWriteArrayList<Map<String, a>>) copyOnWriteArrayList);
                            this.f.put(str, copyOnWriteArrayList2);
                            this.g.put(str, copyOnWriteArrayList3);
                        }
                    }
                }
            } catch (Exception e2) {
                e = e2;
            }
        }
        return z5;
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
