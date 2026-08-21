package com.mbridge.msdk.foundation.download.download;

import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.b.c;
import com.mbridge.msdk.foundation.same.b.e;
import com.mbridge.msdk.foundation.same.c.b;
import com.mbridge.msdk.foundation.tools.x;
import java.io.File;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class ResDownloadCheckManager {
    private static ConcurrentHashMap<String, Boolean> recordImageMap = new ConcurrentHashMap<>();
    private ConcurrentHashMap<String, Boolean> campaignStateMap;
    private ConcurrentHashMap<String, Boolean> preLoadSuccessedMap;
    private ConcurrentHashMap<String, Boolean> recordVideoMap;
    private ConcurrentHashMap<String, Boolean> recordZipMap;

    private ResDownloadCheckManager() {
        this.recordVideoMap = new ConcurrentHashMap<>();
        this.recordZipMap = new ConcurrentHashMap<>();
        this.campaignStateMap = new ConcurrentHashMap<>();
        this.preLoadSuccessedMap = new ConcurrentHashMap<>();
    }

    private static final class Holder {
        public static ResDownloadCheckManager instance = new ResDownloadCheckManager();

        private Holder() {
        }
    }

    public static ResDownloadCheckManager getInstance() {
        return Holder.instance;
    }

    public boolean containsVideoKey(String str) {
        if (this.recordVideoMap == null || TextUtils.isEmpty(str) || !this.recordVideoMap.containsKey(str)) {
            return false;
        }
        return this.recordVideoMap.get(str).booleanValue();
    }

    public boolean containsZipKey(String str) {
        if (this.recordZipMap == null || TextUtils.isEmpty(str) || !this.recordZipMap.containsKey(str)) {
            return false;
        }
        return this.recordZipMap.get(str).booleanValue();
    }

    public void setCampaignList(CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList) {
        if (copyOnWriteArrayList == null || copyOnWriteArrayList.size() == 0) {
            return;
        }
        for (CampaignEx campaignEx : copyOnWriteArrayList) {
            if (campaignEx != null) {
                addUrlToMap(campaignEx);
                updateCampaignState(campaignEx.getId(), false);
            }
        }
    }

    public void setCampaignList(CampaignEx campaignEx) {
        if (campaignEx != null) {
            addUrlToMap(campaignEx);
            updateCampaignState(campaignEx.getId(), false);
        }
    }

    private void updateCampaignState(String str, boolean z) {
        if (this.campaignStateMap == null) {
            this.campaignStateMap = new ConcurrentHashMap<>();
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.campaignStateMap.put(str, Boolean.valueOf(z));
    }

    public void setVideoDownloadDone(String str, boolean z) {
        if (this.recordVideoMap == null) {
            this.recordVideoMap = new ConcurrentHashMap<>();
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.recordVideoMap.put(str, Boolean.valueOf(z));
    }

    public void setZipDownloadDone(String str, boolean z) {
        if (this.recordZipMap == null) {
            this.recordZipMap = new ConcurrentHashMap<>();
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.recordZipMap.put(str, Boolean.valueOf(z));
    }

    public void setImageDownloadDone(String str, boolean z) {
        if (recordImageMap == null) {
            recordImageMap = new ConcurrentHashMap<>();
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        recordImageMap.put(str, Boolean.valueOf(z));
    }

    public void setTemplatePreLoadDone(String str, boolean z) {
        if (this.preLoadSuccessedMap == null) {
            this.preLoadSuccessedMap = new ConcurrentHashMap<>();
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.preLoadSuccessedMap.put(str, Boolean.valueOf(z));
    }

    private void addUrlToMap(CampaignEx campaignEx) {
        List<CampaignEx.c.a> listF;
        ConcurrentHashMap<String, Boolean> concurrentHashMap;
        ConcurrentHashMap<String, Boolean> concurrentHashMap2;
        if (campaignEx != null) {
            String videoUrlEncode = campaignEx.getVideoUrlEncode();
            if (!TextUtils.isEmpty(videoUrlEncode) && (concurrentHashMap2 = this.recordVideoMap) != null && !concurrentHashMap2.containsKey(videoUrlEncode)) {
                this.recordVideoMap.put(videoUrlEncode, false);
            }
            String str = campaignEx.getendcard_url();
            if (!TextUtils.isEmpty(str) && (concurrentHashMap = this.recordZipMap) != null && !concurrentHashMap.containsKey(str)) {
                this.recordZipMap.put(str, false);
            }
            CampaignEx.c rewardTemplateMode = campaignEx.getRewardTemplateMode();
            if (rewardTemplateMode == null || (listF = rewardTemplateMode.f()) == null) {
                return;
            }
            for (CampaignEx.c.a aVar : listF) {
                if (aVar != null) {
                    addImageUrlToMap(aVar.b);
                }
            }
        }
    }

    private void addImageUrlToMap(List<String> list) {
        ConcurrentHashMap<String, Boolean> concurrentHashMap;
        if (list == null || list.size() == 0) {
            return;
        }
        for (String str : list) {
            if (!TextUtils.isEmpty(str) && (concurrentHashMap = recordImageMap) != null && !concurrentHashMap.containsKey(str)) {
                boolean zB = b.a(a.f().j()).b(str);
                if (!TextUtils.isEmpty(str)) {
                    recordImageMap.put(str, Boolean.valueOf(zB));
                }
            }
        }
    }

    private boolean checkState(ConcurrentHashMap<String, Boolean> concurrentHashMap, String str) {
        if (TextUtils.isEmpty(str)) {
            return true;
        }
        if (concurrentHashMap != null) {
            if (concurrentHashMap.containsKey(str)) {
                return concurrentHashMap.get(str).booleanValue();
            }
            concurrentHashMap.put(str, false);
        } else {
            new ConcurrentHashMap().put(str, false);
        }
        return false;
    }

    public boolean checkPreLoadState(String str) {
        if (!TextUtils.isEmpty(str) && this.preLoadSuccessedMap.containsKey(str)) {
            return this.preLoadSuccessedMap.get(str).booleanValue();
        }
        return false;
    }

    public void removePreLoadState(String str) {
        if (this.preLoadSuccessedMap.containsKey(str)) {
            this.preLoadSuccessedMap.remove(str);
        }
    }

    private boolean checkZipState(boolean z, String str) {
        boolean zCheckState = checkState(this.recordZipMap, str);
        if (zCheckState || !z || TextUtils.isEmpty(H5DownLoadManager.getInstance().getH5ResAddress(str))) {
            return zCheckState;
        }
        this.recordZipMap.put(str, true);
        return true;
    }

    public boolean checkImageState(boolean z, CampaignEx.c cVar) {
        List<CampaignEx.c.a> listF;
        if (cVar != null && (listF = cVar.f()) != null) {
            for (CampaignEx.c.a aVar : listF) {
                if (aVar != null && aVar.b != null) {
                    Iterator<String> it = aVar.b.iterator();
                    while (it.hasNext()) {
                        if (!checkImageUrlState(z, it.next())) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }

    private boolean checkImageUrlState(boolean z, String str) {
        boolean zCheckState = checkState(recordImageMap, str);
        if (zCheckState || b.a(a.f().j()).b(str)) {
            return true;
        }
        return zCheckState;
    }

    private boolean getIsEffectivePath(String str) {
        File file = new File(e.b(c.MBRIDGE_VC) + File.separator + x.d(str));
        try {
            if (file.exists() && file.isFile()) {
                return file.canRead();
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
}
