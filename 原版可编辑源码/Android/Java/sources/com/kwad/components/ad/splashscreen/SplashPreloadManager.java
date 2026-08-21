package com.kwad.components.ad.splashscreen;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.SystemClock;
import android.text.TextUtils;
import com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo;
import com.kwad.components.core.response.model.AdResultData;
import com.kwad.components.core.video.j;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.core.network.a.a;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.i;
import java.io.File;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

public final class SplashPreloadManager {
    private HashMap<String, PreLoadItem> BZ;
    private List<String> Ca;
    private volatile SharedPreferences Cb;
    private final Object mLock;

    public static class PreLoadItem extends com.kwad.sdk.core.response.a.a implements Serializable {
        public long cacheTime;
        public long expiredTime;
        public String preloadId;
    }

    static class a {
        private static final SplashPreloadManager Cc = new SplashPreloadManager(0);
    }

    private SplashPreloadManager() {
        this.mLock = new Object();
        this.BZ = new HashMap<>();
        this.Ca = new ArrayList();
        init();
    }

    SplashPreloadManager(byte b) {
        this();
    }

    private static boolean W(String str) {
        if (str != null) {
            File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(str);
            StringBuilder sb = new StringBuilder("check preloadId ");
            sb.append(str);
            sb.append(" file exists ");
            sb.append(fileBR == null ? "null" : Boolean.valueOf(fileBR.exists()));
            com.kwad.sdk.core.e.c.d("PreloadManager", sb.toString());
            if (fileBR != null && fileBR.exists()) {
                return true;
            }
        }
        return false;
    }

    public static File X(String str) {
        if (str == null) {
            return null;
        }
        com.kwad.sdk.core.e.c.d("PreloadManager", "getVideoFile preloadId " + str + "  url " + str);
        File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(str);
        if (fileBR == null || !fileBR.exists()) {
            return null;
        }
        return fileBR;
    }

    public static boolean d(AdResultData adResultData) {
        if (!adResultData.getAdTemplateList().isEmpty()) {
            AdTemplate adTemplate = adResultData.getAdTemplateList().get(0);
            if (!adTemplate.adInfoList.isEmpty()) {
                return com.kwad.sdk.core.response.b.a.aV(adTemplate.adInfoList.get(0));
            }
        }
        return false;
    }

    private void init() {
        Context context = KsAdSDKImpl.get().getContext();
        if (context != null) {
            this.Cb = context.getSharedPreferences("ksadsdk_splash_preload_id_list", 0);
            initData();
        }
    }

    private void initData() {
        Map<String, ?> all = this.Cb.getAll();
        ArrayList arrayList = new ArrayList();
        for (String str : all.keySet()) {
            PreLoadItem preLoadItem = new PreLoadItem();
            try {
                Object obj = all.get(str);
                if (obj instanceof String) {
                    String str2 = (String) obj;
                    if (TextUtils.isEmpty(str2)) {
                        continue;
                    } else {
                        preLoadItem.parseJson(new JSONObject(str2));
                        if (TextUtils.isEmpty(preLoadItem.preloadId)) {
                            continue;
                        } else {
                            File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(preLoadItem.preloadId);
                            if (fileBR == null || !fileBR.exists()) {
                                arrayList.add(preLoadItem.preloadId);
                                com.kwad.sdk.core.e.c.d("PreloadManager", "Remove null file list " + preLoadItem.preloadId);
                            } else {
                                synchronized (this.mLock) {
                                    this.BZ.put(str, preLoadItem);
                                    if (!this.Ca.contains(str)) {
                                        this.Ca.add(str);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    continue;
                }
            } catch (Exception e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        SharedPreferences.Editor editorEdit = this.Cb.edit();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            editorEdit.remove((String) it.next());
        }
        editorEdit.apply();
    }

    private void kA() {
        int size;
        String str;
        long jCurrentTimeMillis = System.currentTimeMillis();
        synchronized (this.mLock) {
            ArrayList<String> arrayList = new ArrayList();
            for (String str2 : this.BZ.keySet()) {
                PreLoadItem preLoadItem = this.BZ.get(str2);
                if (preLoadItem != null && preLoadItem.expiredTime < jCurrentTimeMillis) {
                    arrayList.add(str2);
                }
            }
            SharedPreferences.Editor editorEdit = this.Cb.edit();
            for (String str3 : arrayList) {
                this.Ca.remove(str3);
                this.BZ.remove(str3);
                editorEdit.remove(str3);
                com.kwad.sdk.core.diskcache.b.a.Au().remove(str3);
            }
            editorEdit.apply();
            size = this.Ca.size();
        }
        if (size > 30) {
            com.kwad.sdk.core.e.c.d("PreloadManager", "大于 30 按失效日期远近顺序移除");
            int i = size - 15;
            for (int i2 = 0; i2 < i; i2++) {
                long j = Long.MAX_VALUE;
                synchronized (this.mLock) {
                    str = "";
                    for (PreLoadItem preLoadItem2 : this.BZ.values()) {
                        if (preLoadItem2.expiredTime < j) {
                            j = preLoadItem2.expiredTime;
                            str = preLoadItem2.preloadId;
                        }
                    }
                    if (!TextUtils.isEmpty(str)) {
                        this.Ca.remove(str);
                        this.BZ.remove(str);
                        this.Cb.edit().remove(str).apply();
                        com.kwad.sdk.core.e.c.d("PreloadManager", "移除 preloadId = " + str + " expiredTime =  " + j);
                    }
                }
                if (!TextUtils.isEmpty(str)) {
                    com.kwad.sdk.core.diskcache.b.a.Au().remove(str);
                }
            }
        }
    }

    public static SplashPreloadManager kB() {
        SplashPreloadManager splashPreloadManager = a.Cc;
        if (splashPreloadManager.Cb == null) {
            splashPreloadManager.init();
        }
        return splashPreloadManager;
    }

    private void n(AdInfo adInfo) {
        PreLoadItem preLoadItem = new PreLoadItem();
        preLoadItem.cacheTime = System.currentTimeMillis();
        preLoadItem.expiredTime = System.currentTimeMillis() + (((long) adInfo.adPreloadInfo.validityPeriod) * 1000);
        preLoadItem.preloadId = com.kwad.sdk.core.response.b.a.aS(adInfo);
        synchronized (this.mLock) {
            this.BZ.put(adInfo.adPreloadInfo.preloadId, preLoadItem);
            if (!this.Ca.contains(adInfo.adPreloadInfo.preloadId)) {
                this.Ca.add(adInfo.adPreloadInfo.preloadId);
            }
        }
        if (this.Cb != null) {
            SharedPreferences.Editor editorEdit = this.Cb.edit();
            editorEdit.putString(adInfo.adPreloadInfo.preloadId, preLoadItem.toJson().toString());
            editorEdit.apply();
        }
    }

    public final List<String> R() {
        ArrayList arrayList = new ArrayList();
        synchronized (this.mLock) {
            com.kwad.sdk.core.e.c.d("PreloadManager", "getPreloadIdList start ");
            for (int i = 0; i < this.Ca.size(); i++) {
                String str = this.Ca.get(i);
                File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(str);
                if (fileBR != null && fileBR.exists()) {
                    arrayList.add(str);
                }
            }
            com.kwad.sdk.core.e.c.d("PreloadManager", "getPreloadIdList end ");
        }
        com.kwad.sdk.core.e.c.d("PreloadManager", "getPreloadIdList " + this.Ca.size());
        return arrayList;
    }

    public final int b(AdResultData adResultData, boolean z) {
        int i;
        long j;
        String str;
        Iterator<AdTemplate> it = adResultData.getAdTemplateList().iterator();
        com.kwad.components.ad.splashscreen.monitor.a.kN();
        com.kwad.components.ad.splashscreen.monitor.a.e(adResultData);
        int i2 = 0;
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            AdTemplate next = it.next();
            if (next != null) {
                for (AdInfo adInfo : next.adInfoList) {
                    if (adInfo.adPreloadInfo == null || this.Cb == null) {
                        com.kwad.components.ad.splashscreen.monitor.a.kN();
                        i = 3;
                        j = next.posId;
                        str = SplashMonitorInfo.ERROR_PRELOAD_ID_INVALID_MSG;
                        com.kwad.components.ad.splashscreen.monitor.a.a(adInfo, i, str, j);
                    } else {
                        long jElapsedRealtime = SystemClock.elapsedRealtime();
                        if (W(adInfo.adPreloadInfo.preloadId)) {
                            com.kwad.components.ad.splashscreen.monitor.a.kN();
                            com.kwad.components.ad.splashscreen.monitor.a.a(adInfo, SystemClock.elapsedRealtime() - jElapsedRealtime, 2, next.posId);
                            n(adInfo);
                            i2++;
                        } else {
                            String strF = com.kwad.sdk.core.response.b.a.aU(adInfo) ? com.kwad.sdk.core.response.b.a.F(adInfo) : com.kwad.sdk.core.response.b.a.aV(adInfo) ? com.kwad.sdk.core.response.b.a.aM(adInfo).materialUrl : null;
                            if (TextUtils.isEmpty(strF)) {
                                com.kwad.components.ad.splashscreen.monitor.a.kN();
                                i = 2;
                                j = next.posId;
                                str = SplashMonitorInfo.ERROR_URL_INVALID_MSG;
                                com.kwad.components.ad.splashscreen.monitor.a.a(adInfo, i, str, j);
                            } else {
                                String strAS = com.kwad.sdk.core.response.b.a.aS(adInfo);
                                if (adInfo.adPreloadInfo.preloadType != 1 || ag.isWifiConnected(KsAdSDKImpl.get().getContext()) || z) {
                                    com.kwad.sdk.core.e.c.d("PreloadManager", "start Download preloadId " + strAS + " true url " + strF);
                                    kA();
                                    a.a aVar = new a.a();
                                    if (j.a(strF, strAS, aVar)) {
                                        n(adInfo);
                                        i2++;
                                        com.kwad.components.ad.splashscreen.monitor.a.kN();
                                        com.kwad.components.ad.splashscreen.monitor.a.a(adInfo, SystemClock.elapsedRealtime() - jElapsedRealtime, 1, next.posId);
                                    } else {
                                        com.kwad.components.ad.splashscreen.monitor.a.kN();
                                        com.kwad.components.ad.splashscreen.monitor.a.a(adInfo, 4, aVar.msg, next.posId);
                                        com.kwad.components.core.o.a.pA().c(next, 1, aVar.msg);
                                    }
                                } else {
                                    com.kwad.components.ad.splashscreen.monitor.a.kN();
                                    com.kwad.components.ad.splashscreen.monitor.a.a(adInfo, 1, SplashMonitorInfo.ERROR_NET_MSG, next.posId);
                                }
                            }
                        }
                    }
                }
            }
        }
        AdTemplate adTemplate = adResultData.getAdTemplateList().size() > 0 ? adResultData.getAdTemplateList().get(0) : null;
        if (i2 > 0) {
            i.am("splashAd_", "onSplashVideoAdCacheSuccess");
            com.kwad.components.core.o.a.pA().f(adTemplate, i2);
        } else {
            i.am("splashAd_", "onSplashVideoAdCacheFailed");
        }
        return i2;
    }

    public final boolean c(AdResultData adResultData) {
        if (!adResultData.getAdTemplateList().isEmpty()) {
            AdTemplate adTemplate = adResultData.getAdTemplateList().get(0);
            if (!adTemplate.adInfoList.isEmpty()) {
                AdInfo adInfo = adTemplate.adInfoList.get(0);
                if (adInfo.adPreloadInfo != null) {
                    return W(com.kwad.sdk.core.response.b.a.aS(adInfo));
                }
            }
        }
        return false;
    }
}
