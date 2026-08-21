package com.mbridge.msdk.splash.c;

import android.graphics.Bitmap;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.f;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.splash.c.e;
import com.mbridge.msdk.splash.view.MBSplashView;
import java.io.File;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: compiled from: ResManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {
    private static String b = "ResManager";
    private static int c = 1;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static f f3980a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
    private static ConcurrentHashMap<String, Boolean> d = new ConcurrentHashMap<>();

    public static CampaignEx a(MBSplashView mBSplashView, String str, String str2, String str3, boolean z, int i, boolean z2, boolean z3) {
        if (f3980a == null) {
            f3980a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null) {
            aVarB = com.mbridge.msdk.c.b.a().b();
        }
        long jAg = aVarB.ag() * 1000;
        long jW = aVarB.W() * 1000;
        if (f3980a == null) {
            f3980a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        f3980a.b(jW, str2);
        List<CampaignEx> listA = f3980a.a(str2, 0, 0, c, !TextUtils.isEmpty(str3));
        if (listA == null || listA.size() <= 0) {
            return null;
        }
        CampaignEx campaignEx = listA.get(0);
        if (TextUtils.isEmpty(campaignEx.getAdZip()) && TextUtils.isEmpty(campaignEx.getAdHtml())) {
            return null;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        long j = jCurrentTimeMillis - jAg;
        if (!z2) {
            if ((campaignEx.getPlct() > 0 && (campaignEx.getPlct() * 1000) + campaignEx.getTimestamp() >= jCurrentTimeMillis) || (campaignEx.getPlct() <= 0 && campaignEx.getTimestamp() >= j)) {
                if (!a(mBSplashView, campaignEx, str, str2, z, i, z3)) {
                    return null;
                }
                z.d(b, "cache campain is picked:" + campaignEx.getAppName());
                return a(campaignEx);
            }
            z.a(b, "========已经超了缓存时间");
            return null;
        }
        if ((campaignEx.getPlct() > 0 && (campaignEx.getPlct() * 1000) + campaignEx.getTimestamp() >= jCurrentTimeMillis) || (campaignEx.getPlct() <= 0 && campaignEx.getTimestamp() >= j)) {
            if (!a(mBSplashView, campaignEx, str, str2, z, i, z3)) {
                return null;
            }
            z.d(b, "cache campain is picked:" + campaignEx.getAppName());
            return a(campaignEx);
        }
        if (a(mBSplashView, campaignEx, str, str2, z, i, z3) && campaignEx.isSpareOffer(jAg, jW)) {
            return a(campaignEx);
        }
        return null;
    }

    private static CampaignEx a(CampaignEx campaignEx) {
        if (!TextUtils.isEmpty(campaignEx.getAdZip()) || (!TextUtils.isEmpty(campaignEx.getAdHtml()) && campaignEx.getAdHtml().contains("<MBTPLMARK>"))) {
            campaignEx.setHasMBTplMark(true);
            campaignEx.setIsMraid(false);
        } else {
            campaignEx.setHasMBTplMark(false);
            campaignEx.setIsMraid(true);
        }
        return campaignEx;
    }

    /* JADX WARN: Removed duplicated region for block: B:40:0x00aa  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean a(com.mbridge.msdk.splash.view.MBSplashView r13, com.mbridge.msdk.foundation.entity.CampaignEx r14, java.lang.String r15, java.lang.String r16, boolean r17, int r18, boolean r19) {
        /*
            r7 = r13
            r8 = r14
            r9 = r16
            r10 = 0
            if (r8 == 0) goto Lc7
            r13.clearResState()
            java.lang.String r0 = r14.getVideoUrlEncode()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r11 = 1
            if (r0 != 0) goto L3a
            boolean r0 = r13.isVideoReady()
            if (r0 != 0) goto L2e
            com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()
            r1 = 297(0x129, float:4.16E-43)
            boolean r2 = r14.isBidCampaign()
            boolean r0 = r0.a(r1, r9, r2)
            if (r0 == 0) goto L2c
            goto L2e
        L2c:
            r0 = r10
            goto L2f
        L2e:
            r0 = r11
        L2f:
            if (r0 != 0) goto L35
            a(r13, r14, r9)
            goto L38
        L35:
            r13.setVideoReady(r11)
        L38:
            r12 = r0
            goto L3b
        L3a:
            r12 = r11
        L3b:
            java.lang.String r0 = r14.getAdZip()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L6d
            boolean r0 = r13.isH5Ready()
            if (r0 != 0) goto L6d
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r1 = r14.getAdZip()
            java.lang.String r1 = r0.getH5ResAddress(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L6c
            if (r19 != 0) goto L6d
            r0 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            a(r0, r1, r2, r3, r4, r5, r6)
            goto L6d
        L6c:
            r12 = r10
        L6d:
            java.lang.String r0 = r14.getAdZip()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto La3
            java.lang.String r0 = r14.getAdHtml()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La3
            boolean r0 = r13.isH5Ready()
            if (r0 != 0) goto La3
            java.lang.String r0 = r14.getAdHtml()
            java.lang.String r1 = c(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto La4
            if (r19 != 0) goto La3
            r0 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            a(r0, r1, r2, r3, r4, r5, r6)
        La3:
            r10 = r12
        La4:
            boolean r0 = r14.isDynamicView()
            if (r0 == 0) goto Lc7
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = com.mbridge.msdk.splash.c.b.d
            java.lang.String r1 = r14.getImageUrl()
            java.lang.Object r0 = r0.get(r1)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            if (r0 == 0) goto Lbd
            boolean r0 = r0.booleanValue()
            r10 = r0
        Lbd:
            if (r10 != 0) goto Lc4
            r0 = 0
            a(r13, r14, r0)
            goto Lc7
        Lc4:
            r13.setImageReady(r11)
        Lc7:
            return r10
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.splash.c.b.a(com.mbridge.msdk.splash.view.MBSplashView, com.mbridge.msdk.foundation.entity.CampaignEx, java.lang.String, java.lang.String, boolean, int, boolean):boolean");
    }

    private static void a(final MBSplashView mBSplashView, CampaignEx campaignEx, String str) {
        com.mbridge.msdk.videocommon.listener.a aVar = new com.mbridge.msdk.videocommon.listener.a() { // from class: com.mbridge.msdk.splash.c.b.1
            @Override // com.mbridge.msdk.videocommon.listener.a
            public final void a(String str2) {
                mBSplashView.setVideoReady(true);
                z.a(b.b, "========VIDEO SUC");
            }

            @Override // com.mbridge.msdk.videocommon.listener.a
            public final void a(String str2, String str3) {
                mBSplashView.setVideoReady(false);
                z.a(b.b, "========VIDEO FAILED");
            }
        };
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        copyOnWriteArrayList.add(campaignEx);
        com.mbridge.msdk.videocommon.download.b.getInstance().createUnitCache(com.mbridge.msdk.foundation.controller.a.f().j(), str, copyOnWriteArrayList, com.tkay.expressad.foundation.g.a.aV, aVar);
        if (!com.mbridge.msdk.videocommon.download.b.getInstance().a(com.tkay.expressad.foundation.g.a.aV, str, campaignEx.isBidCampaign())) {
            com.mbridge.msdk.videocommon.download.b.getInstance().load(str);
        } else {
            mBSplashView.setVideoReady(true);
        }
    }

    public static void a(final MBSplashView mBSplashView, final CampaignEx campaignEx, final com.mbridge.msdk.splash.view.nativeview.a aVar) {
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(campaignEx.getImageUrl(), new com.mbridge.msdk.foundation.same.c.c() { // from class: com.mbridge.msdk.splash.c.b.2
            @Override // com.mbridge.msdk.foundation.same.c.c
            public final void onSuccessLoad(Bitmap bitmap, String str) {
                b.d.put(campaignEx.getImageUrl(), true);
                com.mbridge.msdk.splash.view.nativeview.a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.a();
                }
                MBSplashView mBSplashView2 = mBSplashView;
                if (mBSplashView2 != null) {
                    mBSplashView2.setImageReady(true);
                }
            }

            @Override // com.mbridge.msdk.foundation.same.c.c
            public final void onFailedLoad(String str, String str2) {
                b.d.put(campaignEx.getImageUrl(), false);
                com.mbridge.msdk.splash.view.nativeview.a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.b();
                }
                MBSplashView mBSplashView2 = mBSplashView;
                if (mBSplashView2 != null) {
                    mBSplashView2.setImageReady(false);
                }
            }
        });
        if (TextUtils.isEmpty(campaignEx.getIconUrl())) {
            return;
        }
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(campaignEx.getIconUrl(), new com.mbridge.msdk.foundation.same.c.c() { // from class: com.mbridge.msdk.splash.c.b.3
            @Override // com.mbridge.msdk.foundation.same.c.c
            public final void onFailedLoad(String str, String str2) {
            }

            @Override // com.mbridge.msdk.foundation.same.c.c
            public final void onSuccessLoad(Bitmap bitmap, String str) {
            }
        });
    }

    private static void a(MBSplashView mBSplashView, String str, CampaignEx campaignEx, String str2, String str3, boolean z, int i) {
        e.c cVar = new e.c();
        cVar.c(str3);
        cVar.b(str2);
        cVar.a(campaignEx);
        cVar.a(str);
        cVar.a(z);
        cVar.a(i);
        e.a.f4004a.a(mBSplashView, cVar, null);
    }

    private static String c(String str) {
        try {
            File file = new File(str);
            if (!file.exists()) {
                return "";
            }
            return "file:///" + file.getAbsolutePath();
        } catch (Throwable th) {
            try {
                throw th;
            } catch (Exception e) {
                e.getMessage();
                return "";
            }
        }
    }

    public static boolean a(MBSplashView mBSplashView, CampaignEx campaignEx) {
        if (mBSplashView == null) {
            z.d(b, "mbSplashView  is null");
            return false;
        }
        boolean zIsH5Ready = true;
        if (!TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
            zIsH5Ready = mBSplashView.isVideoReady();
            z.d(b, "======isReady isVideoReady:" + zIsH5Ready);
        }
        if (zIsH5Ready && !TextUtils.isEmpty(campaignEx.getAdZip())) {
            zIsH5Ready = mBSplashView.isH5Ready();
            z.d(b, "======isReady getAdZip:" + zIsH5Ready);
        }
        if (zIsH5Ready && TextUtils.isEmpty(campaignEx.getAdZip()) && !TextUtils.isEmpty(campaignEx.getAdHtml())) {
            zIsH5Ready = mBSplashView.isH5Ready();
            z.d(b, "======isReady getAdHtml:" + zIsH5Ready);
        }
        if (TextUtils.isEmpty(campaignEx.getAdZip()) && TextUtils.isEmpty(campaignEx.getAdHtml())) {
            z.d(b, "======isReady getAdHtml  getAdZip all are empty");
            zIsH5Ready = false;
        }
        if (!campaignEx.isDynamicView()) {
            return zIsH5Ready;
        }
        boolean zIsImageReady = TextUtils.isEmpty(campaignEx.getImageUrl()) ? false : mBSplashView.isImageReady();
        z.d(b, "======isReady DYNAMIC VIEW and image state is : " + zIsImageReady);
        return zIsImageReady;
    }

    public static void a(CampaignEx campaignEx, String str) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(campaignEx);
        if (f3980a == null) {
            f3980a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        f3980a.b(arrayList, str);
    }

    public static void a(String str) {
        if (f3980a == null) {
            f3980a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        f3980a.a(str, 0, c);
    }

    public static void b(String str) {
        d.remove(str);
    }
}
