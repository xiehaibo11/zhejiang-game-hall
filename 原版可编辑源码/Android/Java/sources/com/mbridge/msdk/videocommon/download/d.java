package com.mbridge.msdk.videocommon.download;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.download.download.HTMLResourceManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.ExecutorService;

public final class d {
    private com.mbridge.msdk.videocommon.listener.a e;
    private ConcurrentHashMap<String, com.mbridge.msdk.videocommon.listener.a> f;
    private ExecutorService j;
    private String l;
    private com.mbridge.msdk.videocommon.d.c m;
    private int o;
    private List<CampaignEx> c = new ArrayList();
    private boolean d = true;
    private c g = new c() {
        @Override
        public final void a(long j, int i) {
            if (i == 5 || i == 4) {
                d.this.d = true;
                d.this.a();
            }
            if (i == 2) {
                d.this.d = true;
            }
        }
    };
    private CopyOnWriteArrayList<Map<String, a>> h = new CopyOnWriteArrayList<>();
    private long k = com.tkay.expressad.d.a.b.P;
    private int n = 1;
    com.mbridge.msdk.c.d a = null;
    com.mbridge.msdk.c.d b = null;
    private Context i = com.mbridge.msdk.foundation.controller.a.f().j();

    public d(Context context, List<CampaignEx> list, ExecutorService executorService, String str, int i) {
        this.o = 1;
        List<CampaignEx> list2 = this.c;
        if (list2 != null && list != null) {
            list2.addAll(list);
        }
        this.j = executorService;
        this.l = str;
        this.o = i;
        b(this.c);
    }

    public d(Context context, CampaignEx campaignEx, ExecutorService executorService, String str, int i) {
        this.o = 1;
        List<CampaignEx> list = this.c;
        if (list != null && campaignEx != null) {
            list.add(campaignEx);
        }
        this.j = executorService;
        this.l = str;
        this.o = i;
        b(this.c);
    }

    public final void a(com.mbridge.msdk.videocommon.listener.a aVar) {
        this.e = aVar;
    }

    public final void a(String str, com.mbridge.msdk.videocommon.listener.a aVar) {
        if (this.f == null) {
            this.f = new ConcurrentHashMap<>();
        }
        this.f.put(str, aVar);
    }

    public final void a(List<CampaignEx> list) {
        List<CampaignEx> list2 = this.c;
        if (list2 != null && list != null) {
            list2.addAll(list);
        }
        b(this.c);
    }

    public final void a(CampaignEx campaignEx) {
        List<CampaignEx> list = this.c;
        if (list != null && campaignEx != null) {
            list.add(campaignEx);
        }
        b(this.c);
    }

    /* JADX WARN: Removed duplicated region for block: B:107:0x009f A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void b(List<CampaignEx> list) {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList;
        boolean z;
        if (list == null || list.size() == 0) {
            return;
        }
        e();
        d();
        int i = this.o;
        if (i == 1) {
            try {
                if (!TextUtils.isEmpty(this.l)) {
                    com.mbridge.msdk.c.d dVarE = com.mbridge.msdk.c.b.a().e(com.mbridge.msdk.foundation.controller.a.f().k(), this.l);
                    this.a = dVarE;
                    if (dVarE == null) {
                        this.a = com.mbridge.msdk.c.d.d(this.l);
                    }
                    if (this.a != null) {
                        this.k = this.a.i();
                        this.n = this.a.k();
                    }
                }
            } catch (Exception unused) {
                z.d("UnitCacheCtroller", "make sure your had put feeds jar into your project");
                return;
            }
        } else if (i == 287) {
            try {
                Class.forName("com.mbridge.msdk.videocommon.d.a");
                com.mbridge.msdk.videocommon.d.a aVarB = com.mbridge.msdk.videocommon.d.b.a().b();
                if (aVarB == null) {
                    com.mbridge.msdk.videocommon.d.b.a().c();
                }
                if (aVarB != null) {
                    this.k = aVarB.f();
                }
                if (!TextUtils.isEmpty(this.l)) {
                    this.m = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.l);
                }
                if (this.m != null) {
                    this.n = this.m.w();
                }
            } catch (Exception unused2) {
                z.d("UnitCacheCtroller", "make sure your had put reward jar into your project");
                return;
            }
        } else if (i == 298) {
            com.mbridge.msdk.c.d dVarF = com.mbridge.msdk.c.b.a().f(com.mbridge.msdk.foundation.controller.a.f().k(), this.l);
            this.b = dVarF;
            if (dVarF == null) {
                this.b = com.mbridge.msdk.c.b.a().d(com.mbridge.msdk.foundation.controller.a.f().k(), this.l);
            }
            com.mbridge.msdk.c.d dVar = this.b;
            if (dVar != null) {
                this.k = dVar.i();
                this.n = this.b.k();
            }
        } else if (i != 94) {
            if (i == 95) {
                try {
                    if (!TextUtils.isEmpty(this.l)) {
                        com.mbridge.msdk.c.d dVarE2 = com.mbridge.msdk.c.b.a().e(com.mbridge.msdk.foundation.controller.a.f().k(), this.l);
                        if (dVarE2 == null) {
                            dVarE2 = com.mbridge.msdk.c.d.e(this.l);
                        }
                        if (dVarE2 != null) {
                            this.k = dVarE2.i();
                            this.n = dVarE2.k();
                        }
                    }
                } catch (Exception unused3) {
                    z.d("UnitCacheCtroller", "make sure your had put feeds jar into your project");
                    return;
                }
            }
        }
        for (int i2 = 0; i2 < list.size(); i2++) {
            CampaignEx campaignEx = list.get(i2);
            if (campaignEx != null) {
                int i3 = this.o;
                String str = (i3 == 94 || i3 == 287) ? campaignEx.getRequestId() + campaignEx.getId() + campaignEx.getVideoUrlEncode() : campaignEx.getId() + campaignEx.getVideoUrlEncode() + campaignEx.getBidToken();
                if ((c(campaignEx) || !TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) && (copyOnWriteArrayList = this.h) != null) {
                    synchronized (copyOnWriteArrayList) {
                        int i4 = 0;
                        while (true) {
                            try {
                                if (i4 >= this.h.size()) {
                                    z = false;
                                    break;
                                }
                                Map<String, a> map = this.h.get(i4);
                                if (map != null && map.containsKey(str)) {
                                    a aVar = map.get(str);
                                    aVar.a(campaignEx);
                                    aVar.a(this.n);
                                    aVar.a(false);
                                    map.remove(str);
                                    map.put(str, aVar);
                                    this.h.set(i4, map);
                                    z = true;
                                    break;
                                }
                                i4++;
                            } catch (Throwable unused4) {
                            }
                        }
                        if (!z) {
                            a aVar2 = new a(this.i, campaignEx, this.l, this.n);
                            aVar2.a(this.n);
                            aVar2.d(this.o);
                            HashMap map2 = new HashMap();
                            map2.put(str, aVar2);
                            this.h.add(map2);
                        }
                    }
                }
            }
        }
        List<CampaignEx> list2 = this.c;
        if (list2 == null || list2.size() <= 0) {
            return;
        }
        this.c.clear();
    }

    private void d() {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList;
        if (ab.a().a("u_n_c_e_d", true) || (copyOnWriteArrayList = this.h) == null) {
            return;
        }
        try {
            synchronized (copyOnWriteArrayList) {
                long jCurrentTimeMillis = System.currentTimeMillis();
                int i = 0;
                while (i < this.h.size()) {
                    Map<String, a> map = this.h.get(i);
                    Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                    while (it.hasNext()) {
                        a value = it.next().getValue();
                        if (value != null) {
                            if (jCurrentTimeMillis - value.c() > this.k * 1000 && value.f() == 1) {
                                value.b("download timeout");
                                value.a(this.n);
                                value.m();
                                this.h.remove(map);
                                i--;
                            }
                            if (value.f() != 1 && value.f() != 5 && value.f() != 0) {
                                value.m();
                                this.h.remove(map);
                                i--;
                            }
                        }
                    }
                    i++;
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void e() {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.h;
        if (copyOnWriteArrayList != null) {
            try {
                synchronized (copyOnWriteArrayList) {
                    int i = 0;
                    while (i < this.h.size()) {
                        Map<String, a> map = this.h.get(i);
                        Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                        while (it.hasNext()) {
                            a value = it.next().getValue();
                            if (value != null && value.g() != null && value.b()) {
                                value.l();
                                this.h.remove(map);
                                i--;
                            }
                        }
                        i++;
                    }
                }
            } catch (Throwable unused) {
                z.d("UnitCacheCtroller", "cleanDisplayTask ERROR");
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:100:0x0247 A[PHI: r9
      0x0247: PHI (r9v7 int) = (r9v2 int), (r9v2 int), (r9v9 int) binds: [B:92:0x021a, B:94:0x0226, B:98:0x023c] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:119:0x02a7  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x016f A[Catch: all -> 0x02da, Exception -> 0x02dc, TryCatch #0 {Exception -> 0x02dc, blocks: (B:5:0x0012, B:6:0x0017, B:8:0x001f, B:9:0x002f, B:11:0x0035, B:13:0x0043, B:16:0x004b, B:17:0x0054, B:19:0x005a, B:22:0x0064, B:24:0x006e, B:26:0x0078, B:28:0x0088, B:35:0x00a1, B:37:0x00bb, B:42:0x00c9, B:40:0x00c3, B:43:0x00ed, B:45:0x00f9, B:47:0x00ff, B:48:0x0107, B:69:0x016f, B:71:0x0194, B:73:0x019a, B:76:0x01b3, B:78:0x01bb, B:79:0x01dd, B:81:0x01e8, B:83:0x01ef, B:84:0x01fa, B:89:0x0205, B:91:0x0212, B:93:0x021c, B:95:0x0228, B:99:0x023e, B:109:0x0266, B:111:0x026c, B:112:0x0275, B:114:0x0279, B:116:0x0285, B:118:0x028b, B:124:0x02b1, B:126:0x02bb, B:128:0x02c1, B:106:0x0250, B:51:0x0112, B:53:0x0118, B:55:0x0120, B:57:0x0126, B:58:0x012f, B:60:0x0135, B:62:0x013b, B:63:0x0147, B:65:0x014d, B:66:0x0159, B:68:0x0163, B:129:0x02c5), top: B:142:0x0012, outer: #1 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final List<a> a(String str, int i, boolean z, List<CampaignEx> list, boolean z2) {
        long jCurrentTimeMillis;
        int i2;
        Iterator<Map.Entry<String, a>> it;
        int i3;
        Iterator<Map.Entry<String, a>> it2;
        boolean z3 = z;
        boolean z4 = z2;
        ArrayList arrayList = new ArrayList();
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.h;
        if (copyOnWriteArrayList != null) {
            synchronized (copyOnWriteArrayList) {
                try {
                    jCurrentTimeMillis = System.currentTimeMillis();
                    i2 = 0;
                } catch (Exception e) {
                    e.printStackTrace();
                }
                while (i2 < this.h.size()) {
                    Map<String, a> map = this.h.get(i2);
                    Iterator<Map.Entry<String, a>> it3 = map.entrySet().iterator();
                    while (it3.hasNext()) {
                        a value = it3.next().getValue();
                        if (value == null || value.g() == null) {
                            it = it3;
                            z.b("UnitCacheCtroller", "UnitCache isReady ==== task 或者 campaign为空 continue");
                        } else {
                            CampaignEx campaignExG = value.g();
                            boolean z5 = false;
                            for (CampaignEx campaignEx : list) {
                                if (campaignExG == null || campaignEx == null || TextUtils.isEmpty(campaignExG.getRequestId()) || TextUtils.isEmpty(campaignEx.getRequestId())) {
                                    it2 = it3;
                                } else {
                                    it2 = it3;
                                    if (campaignExG.getId().equals(campaignEx.getId()) && campaignExG.getRequestId().equals(campaignEx.getRequestId())) {
                                        z5 = true;
                                    }
                                }
                                it3 = it2;
                            }
                            it = it3;
                            if (!z5) {
                                z.b("UnitCacheCtroller", "UnitCache isReady ==== Campaign isAvailable = " + z5);
                            } else if ((z3 && !campaignExG.isBidCampaign()) || (!z3 && campaignExG.isBidCampaign())) {
                                z.b("UnitCacheCtroller", "UnitCache isReady ==== isBidCampaign = " + z3 + " campaign.isBidCampaign() = " + campaignExG.isBidCampaign());
                            } else {
                                String str2 = campaignExG.getendcard_url();
                                String videoUrlEncode = campaignExG.getVideoUrlEncode();
                                String strE = "";
                                if (campaignExG != null && campaignExG.getRewardTemplateMode() != null) {
                                    strE = campaignExG.getRewardTemplateMode().e();
                                }
                                campaignExG.getRewardTemplateMode();
                                if (i == 94 || i == 287) {
                                    if (!TextUtils.isEmpty(strE) && !strE.contains("cmpt=1") && !a(i, campaignExG, strE)) {
                                        z.b("UnitCacheCtroller", "UnitCache isReady ====  templateZipDownload check false continue");
                                    } else if (b(str2, campaignExG)) {
                                        if (value.b()) {
                                            value.l();
                                            z.b("UnitCacheCtroller", "isready endcard下载完 但是offer展示过 continue");
                                        } else if (ai.a(videoUrlEncode)) {
                                            z.b("UnitCacheCtroller", "endcard为基准 endcard和图片下载完成 videourl为空不用下载 return task");
                                            arrayList.add(value);
                                        } else if (a(value, b(campaignExG), z4)) {
                                            z.b("UnitCacheCtroller", "endcard为基准 endcard 图片 和 videourl 下载完成 return task");
                                            arrayList.add(value);
                                        }
                                    } else {
                                        boolean zIsEmpty = TextUtils.isEmpty(value.k());
                                        int iF = value.f();
                                        z.a("UnitCacheCtroller", "isready unit state:" + iF);
                                        if (iF == 5) {
                                            if (value.b()) {
                                                value.l();
                                                this.h.remove(map);
                                                i2--;
                                                z.b("UnitCacheCtroller", "isready state == DownLoadConstant.DOWNLOAD_DONE 但是offer展示过 continue");
                                                z3 = z;
                                                z4 = z2;
                                            } else {
                                                if (!zIsEmpty) {
                                                    value.a(0, 0);
                                                    if (i == 95) {
                                                        z.b("UnitCacheCtroller", "isready ==========done but isEffectivePath:" + zIsEmpty + " is feed" + i);
                                                        arrayList.add(value);
                                                    } else {
                                                        z.b("UnitCacheCtroller", "isready !isEffectivePath continue");
                                                    }
                                                } else if (a(str2, campaignExG)) {
                                                    z.b("UnitCacheCtroller", "isready videourl为基准 state＝done endcard 图片 和 videourl 下载完成 return task");
                                                    arrayList.add(value);
                                                } else {
                                                    z.b("UnitCacheCtroller", "isready done but continue");
                                                    return null;
                                                }
                                                z4 = z2;
                                            }
                                        } else {
                                            if (!ab.a().a("u_n_c_e_d", true)) {
                                                long jC = value.c();
                                                if (value.f() == 1 && jCurrentTimeMillis - jC > this.k * 1000) {
                                                    value.b("download timeout");
                                                    value.m();
                                                    this.h.remove(map);
                                                    i2--;
                                                    if (i == 1 || i == 94) {
                                                        z.b("UnitCacheCtroller", "isready download !timeout continue");
                                                    }
                                                    z3 = z;
                                                    z4 = z2;
                                                } else {
                                                    i3 = (iF == 4 || iF == 2) ? 1 : 1;
                                                    this.h.remove(map);
                                                    value.m();
                                                    i2--;
                                                    z.b("UnitCacheCtroller", "isready stop continue");
                                                    z3 = z;
                                                    z4 = z2;
                                                }
                                            }
                                            if (iF == i3) {
                                                if (value.b()) {
                                                    z.b("UnitCacheCtroller", "isready run 已经被展示过 continue");
                                                    z4 = z2;
                                                } else {
                                                    if (!MBridgeConstans.IS_DOWANLOAD_FINSH_PLAY) {
                                                        z4 = z2;
                                                        if (a(value, b(campaignExG), z4) && a(str2, campaignExG)) {
                                                            z.b("UnitCacheCtroller", "isready  IS_DOWANLOAD_FINSH_PLAY is :" + MBridgeConstans.IS_DOWANLOAD_FINSH_PLAY);
                                                            arrayList.add(value);
                                                        }
                                                    }
                                                    if (i != 94) {
                                                        arrayList.add(value);
                                                    } else {
                                                        arrayList.add(value);
                                                    }
                                                }
                                            } else {
                                                z4 = z2;
                                                if ((i != 94 || i == 287) && a(value, b(campaignExG), z4) && a(str2, campaignExG)) {
                                                    arrayList.add(value);
                                                }
                                            }
                                        }
                                    }
                                }
                                it3 = it;
                            }
                        }
                        z3 = z;
                        it3 = it;
                    }
                    i2++;
                    z3 = z;
                }
            }
        }
        return arrayList;
    }

    private int b(CampaignEx campaignEx) {
        if (campaignEx == null) {
            return -1;
        }
        if (campaignEx.getReady_rate() != -1) {
            int ready_rate = campaignEx.getReady_rate();
            z.a("UnitCacheCtroller", "ready_rate(campaign): " + ready_rate);
            return ready_rate;
        }
        int iE = e(campaignEx);
        z.a("UnitCacheCtroller", "ready_rate(reward_unit_setting): " + iE);
        return iE;
    }

    /* JADX WARN: Removed duplicated region for block: B:123:0x02aa  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final a a(int i, boolean z) {
        List<CampaignEx> listA;
        boolean z2;
        char c;
        CampaignEx campaignEx;
        int i2 = i;
        boolean z3 = z;
        z.a("UnitCacheCtroller", "isReady unitID " + this.l + " ad_type " + this.o);
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.h;
        if (copyOnWriteArrayList == null) {
            return null;
        }
        synchronized (copyOnWriteArrayList) {
            try {
                try {
                    char c2 = 287;
                    int i3 = 94;
                    boolean z4 = true;
                    if (this.o == 94 || this.o == 287) {
                        listA = com.mbridge.msdk.videocommon.a.a.a().a(this.l, 1, z3);
                        if ((listA == null || listA.size() == 0) && (i2 == 94 || i2 == 287)) {
                            listA = com.mbridge.msdk.videocommon.a.a.a().c(this.l, 1, z3, "");
                        }
                        if (listA != null) {
                            z.a("UnitCacheCtroller", "UnitCache isReady ===== campaignList = " + listA.size());
                        } else {
                            z.a("UnitCacheCtroller", "UnitCache isReady ===== campaignList = 0");
                            return null;
                        }
                    } else {
                        listA = com.mbridge.msdk.videocommon.a.a.a().a(this.l, 1);
                        if (listA == null) {
                            return null;
                        }
                    }
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    int i4 = 0;
                    while (i4 < this.h.size()) {
                        Map<String, a> map = this.h.get(i4);
                        Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                        while (it.hasNext()) {
                            a value = it.next().getValue();
                            if (value == null || value.g() == null) {
                                z2 = z4;
                                c = c2;
                                z.b("UnitCacheCtroller", "UnitCache isReady ==== task 或者 campaign为空 continue");
                            } else {
                                CampaignEx campaignExG = value.g();
                                Iterator<CampaignEx> it2 = listA.iterator();
                                boolean z5 = false;
                                while (it2.hasNext()) {
                                    if (campaignExG.getId().equals(it2.next().getId())) {
                                        z5 = true;
                                    }
                                }
                                if (!z5) {
                                    z.b("UnitCacheCtroller", "UnitCache isReady ==== Campaign isAvailable = " + z5);
                                } else if ((z3 && !campaignExG.isBidCampaign()) || (!z3 && campaignExG.isBidCampaign())) {
                                    z.b("UnitCacheCtroller", "UnitCache isReady ==== isBidCampaign = " + z3 + " campaign.isBidCampaign() = " + campaignExG.isBidCampaign());
                                } else {
                                    String str = campaignExG.getendcard_url();
                                    String videoUrlEncode = campaignExG.getVideoUrlEncode();
                                    String strE = "";
                                    if (campaignExG != null && campaignExG.getRewardTemplateMode() != null) {
                                        strE = campaignExG.getRewardTemplateMode().e();
                                    }
                                    campaignExG.getRewardTemplateMode();
                                    if (this.o == i3 || i2 == 287) {
                                        if (!TextUtils.isEmpty(strE) && !strE.contains("cmpt=1") && !a(this.o, campaignExG, strE)) {
                                            z.b("UnitCacheCtroller", "UnitCache isReady ====  templateZipDownload check false continue");
                                        } else if (b(str, campaignExG)) {
                                            if (value.b()) {
                                                value.l();
                                                z.b("UnitCacheCtroller", "isready endcard下载完 但是offer展示过 continue");
                                            } else {
                                                if (ai.a(videoUrlEncode)) {
                                                    z.b("UnitCacheCtroller", "endcard为基准 endcard和图片下载完成 videourl为空不用下载 return task");
                                                    return value;
                                                }
                                                if (a(value, b(campaignExG))) {
                                                    z.b("UnitCacheCtroller", "endcard为基准 endcard 图片 和 videourl 下载完成 return task");
                                                    return value;
                                                }
                                            }
                                        }
                                    }
                                    boolean zIsEmpty = TextUtils.isEmpty(value.k());
                                    int iF = value.f();
                                    z.a("UnitCacheCtroller", "isready unit state:" + iF);
                                    if (this.o == 298 && a(value, b(campaignExG))) {
                                        return value;
                                    }
                                    if (iF == 5) {
                                        if (value.b()) {
                                            value.l();
                                            this.h.remove(map);
                                            i4--;
                                            z.b("UnitCacheCtroller", "isready state == DownLoadConstant.DOWNLOAD_DONE 但是offer展示过 continue");
                                            i2 = i;
                                            z3 = z;
                                            c2 = 287;
                                            i3 = 94;
                                            z4 = true;
                                        } else if (!zIsEmpty) {
                                            value.a(0, 0);
                                            if (this.o == 95) {
                                                z.b("UnitCacheCtroller", "isready ==========done but isEffectivePath:" + zIsEmpty + " is feed" + this.o);
                                                return value;
                                            }
                                            z.b("UnitCacheCtroller", "isready !isEffectivePath continue");
                                            z2 = true;
                                            i3 = 94;
                                            c = 287;
                                        } else {
                                            if (a(str, campaignExG)) {
                                                z.b("UnitCacheCtroller", "isready videourl为基准 state＝done endcard 图片 和 videourl 下载完成 return task");
                                                return value;
                                            }
                                            z.b("UnitCacheCtroller", "isready done but continue");
                                            return null;
                                        }
                                    } else if (!ab.a().a("u_n_c_e_d", true)) {
                                        long jC = value.c();
                                        if (value.f() == 1) {
                                            campaignEx = campaignExG;
                                            if (jCurrentTimeMillis - jC > this.k * 1000) {
                                                value.b("download timeout");
                                                value.m();
                                                this.h.remove(map);
                                                i4--;
                                                if (this.o == 1 || this.o == 94) {
                                                    z.b("UnitCacheCtroller", "isready download !timeout continue");
                                                    i2 = i;
                                                    z3 = z;
                                                    c2 = 287;
                                                    i3 = 94;
                                                    z4 = true;
                                                }
                                            }
                                        } else {
                                            campaignEx = campaignExG;
                                        }
                                        if (this.o == 95) {
                                            if (value.b()) {
                                                value.l();
                                                this.h.remove(map);
                                                i4--;
                                            } else {
                                                z.b("UnitCacheCtroller", "==========isready ad_type is :" + this.o);
                                                return value;
                                            }
                                        } else if (!ab.a().a("u_n_c_e_d", true) && (iF == 4 || iF == 2)) {
                                            this.h.remove(map);
                                            value.m();
                                            i4--;
                                            z.b("UnitCacheCtroller", "isready stop continue");
                                        } else {
                                            z2 = true;
                                            if (iF == 1) {
                                                if (value.b()) {
                                                    z.b("UnitCacheCtroller", "isready run 已经被展示过 continue");
                                                    i3 = 94;
                                                    c = 287;
                                                } else if (!MBridgeConstans.IS_DOWANLOAD_FINSH_PLAY && a(value, b(campaignEx)) && a(str, campaignEx)) {
                                                    z.b("UnitCacheCtroller", "isready  IS_DOWANLOAD_FINSH_PLAY is :" + MBridgeConstans.IS_DOWANLOAD_FINSH_PLAY);
                                                    return value;
                                                }
                                            }
                                            i3 = 94;
                                            if (this.o != 94) {
                                                c = 287;
                                                if (this.o == 287) {
                                                }
                                            } else {
                                                c = 287;
                                            }
                                            if (a(value, b(campaignEx)) && a(str, campaignEx)) {
                                                return value;
                                            }
                                        }
                                        i2 = i;
                                        z3 = z;
                                        c2 = 287;
                                        i3 = 94;
                                        z4 = true;
                                    }
                                }
                                z2 = true;
                                c = 287;
                            }
                            i2 = i;
                            c2 = c;
                            z4 = z2;
                            z3 = z;
                        }
                        i4++;
                        i2 = i;
                        z4 = z4;
                        z3 = z;
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
                return null;
            } finally {
            }
        }
    }

    public static boolean a(a aVar, int i) {
        long jH = aVar.h();
        long jE = aVar.e();
        if (TextUtils.isEmpty(aVar.a())) {
            z.a("UnitCacheCtroller", "checkVideoDownload video done return true");
            return true;
        }
        if (i == 0) {
            if (aVar.g() != null && !TextUtils.isEmpty(aVar.g().getVideoUrlEncode())) {
                return true;
            }
        } else if (jE > 0 && jH * 100 >= jE * ((long) i)) {
            if (i != 100 || aVar.f() == 5) {
                return true;
            }
            aVar.m();
            return false;
        }
        return false;
    }

    private static boolean a(a aVar, int i, boolean z) {
        long jH = aVar.h();
        long jE = aVar.e();
        if (TextUtils.isEmpty(aVar.a())) {
            z.a("UnitCacheCtroller", "checkVideoDownload video done return true");
            return true;
        }
        CampaignEx campaignExG = aVar.g();
        if (campaignExG != null) {
            if (campaignExG.getRsIgnoreCheckRule() != null && campaignExG.getRsIgnoreCheckRule().size() > 0 && campaignExG.getRsIgnoreCheckRule().contains(0)) {
                z.b("UnitCacheCtroller", "Is not check video download status");
                return true;
            }
            if (campaignExG.getIsTimeoutCheckVideoStatus() == 1 && campaignExG.getVideoCheckType() == 1) {
                return true;
            }
            if (z && campaignExG.getVideoCheckType() == 1) {
                if (i == 0) {
                    return true;
                }
                if ((jE != 0 || jH != 0) && jH >= ((long) (i / 100)) * jE) {
                    campaignExG.setIsTimeoutCheckVideoStatus(1);
                    return true;
                }
            }
        }
        return a(aVar, i);
    }

    private boolean a(String str, CampaignEx campaignEx) {
        try {
        } catch (Throwable th) {
            z.c("UnitCacheCtroller", th.getMessage(), th);
        }
        if (campaignEx.getRsIgnoreCheckRule() != null && campaignEx.getRsIgnoreCheckRule().size() > 0 && campaignEx.getRsIgnoreCheckRule().contains(2)) {
            z.b("UnitCacheCtroller", "Is not check endCard download status : " + str);
            return true;
        }
        if (campaignEx.isDynamicView() && !ae.j(str)) {
            return true;
        }
        if (ai.a(str)) {
            z.b("UnitCacheCtroller", "checkEndcardDownload endcardUrl is null return true");
            return true;
        }
        if (b(str, campaignEx)) {
            z.b("UnitCacheCtroller", "checkEndcardDownload endcardUrl done return true");
            return true;
        }
        z.b("UnitCacheCtroller", "checkEndcardDownload endcardUrl return false");
        return false;
    }

    private boolean b(String str, CampaignEx campaignEx) {
        if (campaignEx.isMraid() || TextUtils.isEmpty(str)) {
            z.b("UnitCacheCtroller", "Campaign is Mraid, do not need download endcardurl or Campaign load timeout");
            return true;
        }
        if (campaignEx.getLoadTimeoutState() == 1 && !c(campaignEx)) {
            return true;
        }
        if (campaignEx.getRsIgnoreCheckRule() != null && campaignEx.getRsIgnoreCheckRule().size() > 0 && campaignEx.getRsIgnoreCheckRule().contains(2)) {
            z.b("UnitCacheCtroller", "Is not check endCard download status : " + str);
            return true;
        }
        if (ai.b(H5DownLoadManager.getInstance().getH5ResAddress(str))) {
            z.b("UnitCacheCtroller", "endcard zip 下载完成 return true endcardUrl:" + str);
            return true;
        }
        if (ai.b(HTMLResourceManager.getInstance().getHtmlContentFromUrl(str))) {
            z.b("UnitCacheCtroller", "endcard url 源码 下载完成 return true endcardUrl:" + str);
            return true;
        }
        z.b("UnitCacheCtroller", "checkEndcardZipOrSourceDownLoad endcardUrl return false endcardUrl:" + str);
        return false;
    }

    private boolean a(int i, CampaignEx campaignEx, String str) {
        z.a("UnitCacheCtroller", "check template " + str);
        if (campaignEx.isDynamicView()) {
            return true;
        }
        if (campaignEx.getRsIgnoreCheckRule() != null && campaignEx.getRsIgnoreCheckRule().size() > 0 && campaignEx.getRsIgnoreCheckRule().contains(1)) {
            z.b("UnitCacheCtroller", "Is not check template download status");
            return true;
        }
        if (!TextUtils.isEmpty(str) && campaignEx.getLoadTimeoutState() == 0) {
            z.a("UnitCacheCtroller", "check template 下载情况：" + H5DownLoadManager.getInstance().getH5ResAddress(str));
            if (H5DownLoadManager.getInstance().getH5ResAddress(str) == null) {
                return false;
            }
        }
        return true;
    }

    public final a b(int i, boolean z) {
        try {
            return a(i, z);
        } catch (Throwable th) {
            z.c("UnitCacheCtroller", th.getMessage(), th);
            return null;
        }
    }

    public final a a(String str) {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.h;
        if (copyOnWriteArrayList == null) {
            return null;
        }
        synchronized (copyOnWriteArrayList) {
            try {
                for (Map<String, a> map : this.h) {
                    if (map != null && map.containsKey(str)) {
                        return map.get(str);
                    }
                }
            } catch (Throwable unused) {
                z.d("UnitCacheCtroller", "failed to get campaignTast by cid");
            }
            return null;
        }
    }

    private boolean a(CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList) {
        try {
            for (Map<String, a> map : copyOnWriteArrayList) {
                if (map != null) {
                    Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                    while (it.hasNext()) {
                        if (it.next().getValue().f() == 1) {
                            return true;
                        }
                    }
                }
            }
            return false;
        } catch (Throwable th) {
            if (!MBridgeConstans.DEBUG) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:51:0x00cf  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x00d4 A[Catch: all -> 0x01f3, TryCatch #0 {, blocks: (B:5:0x000a, B:7:0x0013, B:8:0x0015, B:9:0x001b, B:11:0x0021, B:14:0x002a, B:15:0x0032, B:17:0x0038, B:20:0x0047, B:23:0x004e, B:25:0x0054, B:26:0x0056, B:29:0x0062, B:30:0x0072, B:32:0x0082, B:34:0x0086, B:35:0x008e, B:36:0x0092, B:38:0x009f, B:40:0x00a3, B:43:0x00a8, B:45:0x00ac, B:47:0x00b0, B:48:0x00c4, B:50:0x00c8, B:52:0x00d0, B:54:0x00d4, B:56:0x00d8, B:57:0x00ec, B:59:0x00f0, B:71:0x0122, B:73:0x0127, B:75:0x012d, B:77:0x0160, B:79:0x0164, B:81:0x016a, B:83:0x016e, B:84:0x0177, B:86:0x017b, B:88:0x0183, B:91:0x0193, B:95:0x019f, B:99:0x01a8, B:101:0x01b3, B:103:0x01b7, B:106:0x01bb, B:109:0x01c1, B:111:0x01cc, B:113:0x01d0, B:115:0x01d6, B:116:0x01db, B:118:0x01df, B:120:0x01e5, B:123:0x01ec, B:122:0x01e9, B:60:0x00f7, B:62:0x00fb, B:66:0x0110, B:67:0x0116, B:69:0x011a, B:124:0x01f1), top: B:130:0x000a }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a() {
        int iS;
        com.mbridge.msdk.videocommon.listener.a aVar;
        d();
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.h;
        if (copyOnWriteArrayList != null) {
            synchronized (copyOnWriteArrayList) {
                if (!a(this.h)) {
                    this.d = true;
                }
                for (Map<String, a> map : this.h) {
                    if (map != null) {
                        Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                        while (it.hasNext()) {
                            a value = it.next().getValue();
                            if (value != null && !value.b()) {
                                if (this.o == 95) {
                                    this.d = true;
                                }
                                int iF = value.f();
                                final CampaignEx campaignExG = value.g();
                                if (campaignExG != null && iF == 0) {
                                    iF = b.getInstance().b(campaignExG.getId(), campaignExG.getVideoUrlEncode());
                                }
                                value.a(new com.mbridge.msdk.videocommon.listener.a() {
                                    @Override
                                    public final void a(String str) {
                                        com.mbridge.msdk.videocommon.listener.a aVar2;
                                        if (d.this.e != null) {
                                            d.this.e.a(str);
                                        }
                                        if (d.this.f == null || d.this.f.size() <= 0 || campaignExG == null || (aVar2 = (com.mbridge.msdk.videocommon.listener.a) d.this.f.get(campaignExG.getRequestId())) == null) {
                                            return;
                                        }
                                        aVar2.a(str);
                                    }

                                    @Override
                                    public final void a(String str, String str2) {
                                        com.mbridge.msdk.videocommon.listener.a aVar2;
                                        if (d.this.e != null) {
                                            d.this.e.a(str, str2);
                                        }
                                        CampaignEx campaignEx = campaignExG;
                                        if (campaignEx == null || campaignEx.getRsIgnoreCheckRule() == null || campaignExG.getRsIgnoreCheckRule().size() <= 0 || !campaignExG.getRsIgnoreCheckRule().contains(0)) {
                                            if (d.this.f == null || d.this.f.size() <= 0 || campaignExG == null || (aVar2 = (com.mbridge.msdk.videocommon.listener.a) d.this.f.get(campaignExG.getRequestId())) == null) {
                                                return;
                                            }
                                            aVar2.a(str, str2);
                                            return;
                                        }
                                        z.b("UnitCacheCtroller", "Is not check video download status");
                                    }
                                });
                                int iB = b(campaignExG);
                                if (this.o == 1) {
                                    if (this.a == null) {
                                        this.a = com.mbridge.msdk.c.d.d(this.l);
                                    }
                                    iB = d(campaignExG);
                                }
                                value.c(iB);
                                if (this.o == 94 || this.o == 287 || this.o == 95) {
                                    if (this.m == null) {
                                        this.m = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.l, this.o == 287);
                                    }
                                    iS = this.m != null ? this.m.s() : 0;
                                } else if (this.o == 298) {
                                    if (this.b == null) {
                                        this.b = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k(), this.l);
                                    }
                                    if (this.b != null) {
                                        iS = this.b.g();
                                    }
                                    if (this.o == 1) {
                                    }
                                } else {
                                    iS = 0;
                                    if (this.o == 1) {
                                        if (this.a == null) {
                                            this.a = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k(), this.l);
                                        }
                                        if (this.a != null) {
                                            iS = this.a.g();
                                        }
                                    }
                                }
                                value.b(iS);
                                int videoCtnType = campaignExG != null ? campaignExG.getVideoCtnType() : 1;
                                value.e(videoCtnType);
                                z.d("UnitCacheCtroller", "ready_rate : " + iB + " cd_rate : " + iS + " videoCtnType : " + videoCtnType);
                                if (a(value, b(campaignExG))) {
                                    if (this.e != null && (this.o == 297 || this.o == 298)) {
                                        this.e.a(campaignExG.getVideoUrlEncode());
                                    }
                                    if (this.f != null && this.f.size() > 0 && (aVar = this.f.get(campaignExG.getRequestId())) != null && campaignExG != null) {
                                        aVar.a(campaignExG.getVideoUrlEncode());
                                    }
                                }
                                if (iF != 1 && (iF != 5 || !a(value, iB))) {
                                    if (iF == 4) {
                                        continue;
                                    } else {
                                        if (v.D(this.i) != 9 && this.n == 2) {
                                            return;
                                        }
                                        if (iF == 2 || this.d) {
                                            value.a(this.g);
                                            if (a(value, iB)) {
                                                if (this.o == 94 || this.o == 287) {
                                                    value.i();
                                                }
                                            } else {
                                                if (this.o == 1 || this.o == 95 || this.o == 298) {
                                                    this.d = false;
                                                }
                                                value.i();
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    public final void b() {
        CopyOnWriteArrayList<Map<String, a>> copyOnWriteArrayList = this.h;
        if (copyOnWriteArrayList != null) {
            try {
                synchronized (copyOnWriteArrayList) {
                    for (Map<String, a> map : this.h) {
                        if (map != null) {
                            Iterator<Map.Entry<String, a>> it = map.entrySet().iterator();
                            while (it.hasNext()) {
                                a value = it.next().getValue();
                                if (value != null && value.f() == 1) {
                                    z.b("UnitCacheCtroller", "暂停所有下载");
                                    value.b("playing and stop download");
                                    value.m();
                                    this.h.remove(map);
                                    return;
                                }
                            }
                        }
                    }
                }
            } catch (Throwable unused) {
            }
        }
    }

    public final CopyOnWriteArrayList<Map<String, a>> c() {
        return this.h;
    }

    private boolean c(CampaignEx campaignEx) {
        if (campaignEx == null) {
            return false;
        }
        try {
            return campaignEx.getPlayable_ads_without_video() == 2;
        } catch (Throwable th) {
            if (!MBridgeConstans.DEBUG) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }

    private int d(CampaignEx campaignEx) {
        try {
            if (this.a != null) {
                return this.a.f();
            }
            return 100;
        } catch (Exception unused) {
            return 100;
        }
    }

    public final void b(String str) {
        try {
            synchronized (this.h) {
                if (!TextUtils.isEmpty(str) && this.h != null && this.h.size() > 0) {
                    for (Map<String, a> map : this.h) {
                        if (map != null) {
                            for (Map.Entry<String, a> entry : map.entrySet()) {
                                if (entry != null && TextUtils.equals(entry.getKey(), str)) {
                                    this.h.remove(map);
                                }
                            }
                        }
                    }
                }
            }
        } catch (Exception unused) {
        }
    }

    private int e(CampaignEx campaignEx) {
        try {
            if (campaignEx.getAdType() == 298) {
                if (this.b == null) {
                    this.b = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k(), this.l);
                }
                return this.b.f();
            }
            if (campaignEx.getAdType() == 42) {
                return d(null);
            }
            if (this.m == null) {
                this.m = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.l, false);
            }
            return this.m.r();
        } catch (Throwable th) {
            z.c("UnitCacheCtroller", th.getMessage(), th);
            return 100;
        }
    }
}
