package com.mbridge.msdk.splash.c;

import android.graphics.Bitmap;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.db.f;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.splash.c.e;
import com.mbridge.msdk.splash.view.MBSplashView;
import java.io.File;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

public final class b {
    private static String b = "ResManager";
    private static int c = 1;
    public static f a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
    private static ConcurrentHashMap<String, Boolean> d = new ConcurrentHashMap<>();

    public static CampaignEx a(MBSplashView mBSplashView, String str, String str2, String str3, boolean z, int i, boolean z2, boolean z3) {
        if (a == null) {
            a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null) {
            aVarB = com.mbridge.msdk.c.b.a().b();
        }
        long jAg = aVarB.ag() * 1000;
        long jW = aVarB.W() * 1000;
        if (a == null) {
            a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        a.b(jW, str2);
        List<CampaignEx> listA = a.a(str2, 0, 0, c, !TextUtils.isEmpty(str3));
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
    */
    private static boolean a(MBSplashView mBSplashView, CampaignEx campaignEx, String str, String str2, boolean z, int i, boolean z2) {
        boolean z3;
        boolean zBooleanValue = false;
        if (campaignEx != null) {
            mBSplashView.clearResState();
            if (TextUtils.isEmpty(campaignEx.getVideoUrlEncode())) {
                z3 = true;
            } else {
                boolean z4 = mBSplashView.isVideoReady() || com.mbridge.msdk.videocommon.download.b.getInstance().a(com.tkay.expressad.foundation.g.a.aV, str2, campaignEx.isBidCampaign());
                if (!z4) {
                    a(mBSplashView, campaignEx, str2);
                } else {
                    mBSplashView.setVideoReady(true);
                }
                z3 = z4;
            }
            if (!TextUtils.isEmpty(campaignEx.getAdZip()) && !mBSplashView.isH5Ready()) {
                String h5ResAddress = H5DownLoadManager.getInstance().getH5ResAddress(campaignEx.getAdZip());
                if (TextUtils.isEmpty(h5ResAddress)) {
                    z3 = false;
                } else if (!z2) {
                    a(mBSplashView, h5ResAddress, campaignEx, str, str2, z, i);
                }
            }
            if (TextUtils.isEmpty(campaignEx.getAdZip()) && !TextUtils.isEmpty(campaignEx.getAdHtml()) && !mBSplashView.isH5Ready()) {
                String strC = c(campaignEx.getAdHtml());
                if (!TextUtils.isEmpty(strC)) {
                    if (!z2) {
                        a(mBSplashView, strC, campaignEx, str, str2, z, i);
                    }
                    zBooleanValue = z3;
                }
                if (campaignEx.isDynamicView()) {
                }
            } else {
                zBooleanValue = z3;
                if (campaignEx.isDynamicView()) {
                    Boolean bool = d.get(campaignEx.getImageUrl());
                    if (bool != null) {
                        zBooleanValue = bool.booleanValue();
                    }
                    if (!zBooleanValue) {
                        a(mBSplashView, campaignEx, (com.mbridge.msdk.splash.view.nativeview.a) null);
                    } else {
                        mBSplashView.setImageReady(true);
                    }
                }
            }
        }
        return zBooleanValue;
    }

    private static void a(final MBSplashView mBSplashView, CampaignEx campaignEx, String str) {
        com.mbridge.msdk.videocommon.listener.a aVar = new com.mbridge.msdk.videocommon.listener.a() {
            @Override
            public final void a(String str2) {
                mBSplashView.setVideoReady(true);
                z.a(b.b, "========VIDEO SUC");
            }

            @Override
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
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(campaignEx.getImageUrl(), new com.mbridge.msdk.foundation.same.c.c() {
            @Override
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

            @Override
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
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(campaignEx.getIconUrl(), new com.mbridge.msdk.foundation.same.c.c() {
            @Override
            public final void onFailedLoad(String str, String str2) {
            }

            @Override
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
        e.a.a.a(mBSplashView, cVar, null);
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
        if (a == null) {
            a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        a.b(arrayList, str);
    }

    public static void a(String str) {
        if (a == null) {
            a = f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        }
        a.a(str, 0, c);
    }

    public static void b(String str) {
        d.remove(str);
    }
}
