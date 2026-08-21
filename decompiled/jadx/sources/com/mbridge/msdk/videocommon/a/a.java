package com.mbridge.msdk.videocommon.a;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.f;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.c;
import com.mbridge.msdk.foundation.same.a.d;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.videocommon.d.b;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: compiled from: VideoCampaignCache.java */
/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f4382a = a.class.getName();
    private static a b = null;
    private f c;

    private a() {
        try {
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ != null) {
                this.c = f.a(i.a(contextJ));
            } else {
                z.d(f4382a, "RewardCampaignCache get Context is null");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static a a() {
        if (b == null) {
            synchronized (a.class) {
                if (b == null) {
                    b = new a();
                }
            }
        }
        return b;
    }

    public final CopyOnWriteArrayList<CampaignEx> a(String str, int i) {
        List<CampaignEx> listA;
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = null;
        try {
            if (TextUtils.isEmpty(str) || (listA = this.c.a(str, 0, 0, i)) == null) {
                return null;
            }
            CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList2 = new CopyOnWriteArrayList<>();
            try {
                for (CampaignEx campaignEx : listA) {
                    if (campaignEx != null) {
                        copyOnWriteArrayList2.add(campaignEx);
                    }
                }
                return copyOnWriteArrayList2;
            } catch (Exception e) {
                e = e;
                copyOnWriteArrayList = copyOnWriteArrayList2;
            }
        } catch (Exception e2) {
            e = e2;
        }
        e.printStackTrace();
        return copyOnWriteArrayList;
    }

    public final void a(String str, List<CampaignEx> list, String str2, int i) {
        f fVar;
        if (TextUtils.isEmpty(str) || list == null || list.size() <= 0 || TextUtils.isEmpty(str2) || (fVar = this.c) == null) {
            return;
        }
        fVar.a(str, list, str2, i);
    }

    public final void a(String str, List<CampaignEx> list) {
        f fVar;
        if (TextUtils.isEmpty(str) || list == null || list.size() <= 0 || (fVar = this.c) == null) {
            return;
        }
        fVar.b(str, list);
    }

    public final void a(String str, String str2) {
        if (this.c == null || TextUtils.isEmpty(str)) {
            return;
        }
        this.c.f(str, str2);
    }

    public final List<CampaignEx> a(String str, int i, boolean z) {
        return a(str, i, z, "");
    }

    public final CopyOnWriteArrayList<CampaignEx> a(String str, int i, boolean z, String str2) {
        List<CampaignEx> listA;
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = null;
        try {
            com.mbridge.msdk.videocommon.d.a aVarB = b.a().b();
            long jE = aVarB != null ? aVarB.e() : 0L;
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            if (z) {
                listA = this.c.a(str, 0, 0, i, str2);
            } else {
                listA = this.c.a(str, 0, 0, i, false);
            }
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (listA == null) {
                return null;
            }
            CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList2 = new CopyOnWriteArrayList<>();
            try {
                for (CampaignEx campaignEx : listA) {
                    if (campaignEx != null && (campaignEx.getReadyState() == 0 || campaignEx.getLoadTimeoutState() == 1)) {
                        long plct = campaignEx.getPlct() * 1000;
                        long timestamp = jCurrentTimeMillis - campaignEx.getTimestamp();
                        if ((plct > 0 && plct >= timestamp) || (plct <= 0 && jE >= timestamp)) {
                            copyOnWriteArrayList2.add(campaignEx);
                        }
                    }
                }
                return copyOnWriteArrayList2;
            } catch (Exception e) {
                e = e;
                copyOnWriteArrayList = copyOnWriteArrayList2;
            }
        } catch (Exception e2) {
            e = e2;
        }
        e.printStackTrace();
        return copyOnWriteArrayList;
    }

    public final List<CampaignEx> a(List<CampaignEx> list) {
        ArrayList arrayList = null;
        if (list == null) {
            return null;
        }
        try {
            com.mbridge.msdk.videocommon.d.a aVarB = b.a().b();
            long jE = aVarB != null ? aVarB.e() : 0L;
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (list == null || list.size() <= 0) {
                return null;
            }
            ArrayList arrayList2 = new ArrayList();
            try {
                for (CampaignEx campaignEx : list) {
                    if (campaignEx != null) {
                        long plct = campaignEx.getPlct() * 1000;
                        long timestamp = jCurrentTimeMillis - campaignEx.getTimestamp();
                        if ((plct > 0 && plct >= timestamp) || (plct <= 0 && jE >= timestamp)) {
                            arrayList2.add(campaignEx);
                        }
                    }
                }
                return arrayList2;
            } catch (Exception e) {
                e = e;
                arrayList = arrayList2;
            }
        } catch (Exception e2) {
            e = e2;
        }
        e.printStackTrace();
        return arrayList;
    }

    public final List<c> a(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            return this.c.f(str);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public final int b(String str, int i, boolean z, String str2) {
        List<CampaignEx> listA;
        try {
            if (TextUtils.isEmpty(str)) {
                return 0;
            }
            ArrayList arrayList = new ArrayList();
            if (z) {
                listA = this.c.a(str, 0, 0, i, str2);
            } else {
                listA = this.c.a(str, 0, 0, i, false);
            }
            if (listA == null) {
                return 0;
            }
            for (CampaignEx campaignEx : listA) {
                if (campaignEx != null && campaignEx.getReadyState() == 0) {
                    arrayList.add(campaignEx);
                }
            }
            return arrayList.size();
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public final List<CampaignEx> b(String str, int i, boolean z) {
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            return this.c.a(str, 0, 0, i, z);
        } catch (Exception e) {
            z.d(f4382a, e.getLocalizedMessage());
            return null;
        }
    }

    public final List<CampaignEx> c(String str, int i, boolean z, String str2) {
        long jW;
        List<CampaignEx> listA;
        ArrayList arrayList = null;
        try {
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB != null) {
                jW = aVarB.W();
            } else {
                jW = com.mbridge.msdk.c.b.a().b().W();
            }
            long j = jW * 1000;
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            if (z) {
                listA = this.c.a(str, 0, 0, i, str2);
            } else {
                listA = this.c.a(str, 0, 0, i, false);
            }
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (listA == null) {
                return null;
            }
            ArrayList arrayList2 = new ArrayList();
            try {
                for (CampaignEx campaignEx : listA) {
                    if (campaignEx != null && campaignEx.getReadyState() == 0) {
                        long plctb = campaignEx.getPlctb() * 1000;
                        long timestamp = jCurrentTimeMillis - campaignEx.getTimestamp();
                        if ((plctb <= 0 && j >= timestamp) || (plctb > 0 && plctb >= timestamp)) {
                            arrayList2.add(campaignEx);
                        }
                    }
                }
                return arrayList2;
            } catch (Exception e) {
                e = e;
                arrayList = arrayList2;
            }
        } catch (Exception e2) {
            e = e2;
        }
        e.printStackTrace();
        return arrayList;
    }

    public final void a(CampaignEx campaignEx, String str) {
        if (campaignEx != null) {
            try {
                if (TextUtils.isEmpty(str)) {
                    return;
                }
                if (campaignEx.isBidCampaign()) {
                    d.d(str, campaignEx.getRequestId());
                }
                this.c.a(campaignEx.getId(), str, campaignEx.isBidCampaign(), campaignEx.getRequestId());
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public final void a(CampaignEx campaignEx) {
        if (campaignEx != null) {
            try {
                if (TextUtils.isEmpty(campaignEx.getId())) {
                    return;
                }
                this.c.b(campaignEx.getId(), campaignEx.getRequestId());
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public final void b(String str) {
        ConcurrentHashMap<String, c> concurrentHashMapG;
        try {
            if (TextUtils.isEmpty(str) || (concurrentHashMapG = this.c.g(str)) == null || concurrentHashMapG.size() <= 0) {
                return;
            }
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB == null) {
                aVarB = com.mbridge.msdk.c.b.a().b();
            }
            long jW = aVarB != null ? aVarB.W() : 0L;
            long jCurrentTimeMillis = System.currentTimeMillis();
            for (c cVar : concurrentHashMapG.values()) {
                if (cVar != null) {
                    long jD = cVar.d();
                    if (jD <= 0) {
                        jD = jW;
                    }
                    if (cVar.e() + (jD * 1000) < jCurrentTimeMillis && !TextUtils.isEmpty(cVar.a())) {
                        z.d("HBOPTIMIZE", "不在有效期范围内 删除" + cVar.a());
                        b(str, cVar.a());
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final void b(String str, int i) {
        int size;
        try {
            List<c> listF = this.c.f(str);
            if (listF == null || listF.size() <= 0 || (size = listF.size() - i) <= 0) {
                return;
            }
            for (int i2 = 0; i2 < size; i2++) {
                b(str, listF.get(i2).a());
                d.d(str, listF.get(i2).a());
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final synchronized void b(String str, String str2) {
        try {
            this.c.c(str2, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final void a(String str, String str2, List<CampaignEx> list) {
        try {
            if (TextUtils.isEmpty(str2) || list == null || list.size() <= 0) {
                return;
            }
            this.c.a(list, str, str2, 0);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final synchronized void a(long j, String str) {
        try {
            this.c.a(j, str);
        } catch (Exception e) {
            e.printStackTrace();
            z.d(f4382a, e.getMessage());
        }
    }

    public final synchronized void c(String str, int i) {
        try {
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB == null) {
                aVarB = com.mbridge.msdk.c.b.a().b();
            }
            int iAS = aVarB.aS();
            if (iAS == 0) {
                return;
            }
            boolean z = true;
            List<CampaignEx> listB = this.c.b(str, i, iAS == 2);
            if (listB != null && listB.size() > 0) {
                for (CampaignEx campaignEx : listB) {
                    String requestIdNotice = campaignEx.getRequestIdNotice();
                    String id = campaignEx.getId();
                    com.mbridge.msdk.videocommon.a.b(campaignEx.getCampaignUnitId() + "_" + id + "_" + requestIdNotice + "_" + campaignEx.getCMPTEntryUrl());
                }
            }
            f fVar = this.c;
            if (iAS != 2) {
                z = false;
            }
            fVar.a(str, i, z);
        } catch (Exception e) {
            z.d(f4382a, e.getMessage());
        }
    }
}
