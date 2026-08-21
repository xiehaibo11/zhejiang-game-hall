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
import com.mbridge.msdk.foundation.tools.z;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.ExecutorService;

/* JADX INFO: compiled from: UnitCacheCtroller.java */
/* JADX INFO: loaded from: classes3.dex */
public final class d {
    private com.mbridge.msdk.videocommon.listener.a e;
    private ConcurrentHashMap<String, com.mbridge.msdk.videocommon.listener.a> f;
    private ExecutorService j;
    private String l;
    private com.mbridge.msdk.videocommon.d.c m;
    private int o;
    private List<CampaignEx> c = new ArrayList();
    private boolean d = true;
    private c g = new c() { // from class: com.mbridge.msdk.videocommon.download.d.1
        @Override // com.mbridge.msdk.videocommon.download.c
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

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.mbridge.msdk.c.d f4403a = null;
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
        To view partially-correct add '--show-bad-code' argument
    */
    private void b(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r13) {
        /*
            Method dump skipped, instruction units count: 530
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.videocommon.download.d.b(java.util.List):void");
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
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.util.List<com.mbridge.msdk.videocommon.download.a> a(java.lang.String r24, int r25, boolean r26, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r27, boolean r28) {
        /*
            Method dump skipped, instruction units count: 741
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.videocommon.download.d.a(java.lang.String, int, boolean, java.util.List, boolean):java.util.List");
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
        To view partially-correct add '--show-bad-code' argument
    */
    public final com.mbridge.msdk.videocommon.download.a a(int r24, boolean r25) {
        /*
            Method dump skipped, instruction units count: 923
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.videocommon.download.d.a(int, boolean):com.mbridge.msdk.videocommon.download.a");
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
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a() {
        /*
            Method dump skipped, instruction units count: 503
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.videocommon.download.d.a():void");
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
            if (this.f4403a != null) {
                return this.f4403a.f();
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
