package com.sigmob.sdk.nativead;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.LoadAdRequest;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.base.network.d;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.natives.WindNativeAdData;
import com.sigmob.windad.natives.WindNativeAdRequest;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class t implements d.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f5117a = 1;
    public static final int b = 2;
    public static final int c = 3;
    private v e;
    private WindNativeAdRequest f;
    private boolean g;
    private List<BaseAdUnit> i;
    private final int h = 20481;
    private Handler d = new Handler(Looper.getMainLooper()) { // from class: com.sigmob.sdk.nativead.t.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what == 20481 && t.this.g) {
                t.this.d.removeMessages(20481);
                t.this.a(null, WindAdError.ERROR_SIGMOB_AD_TIME_OUT.getErrorCode(), WindAdError.ERROR_SIGMOB_AD_TIME_OUT.getMessage());
            }
        }
    };

    public t(WindNativeAdRequest windNativeAdRequest, v vVar) {
        this.f = windNativeAdRequest;
        this.e = vVar;
    }

    private WindNativeAdData a(BaseAdUnit baseAdUnit) {
        return new ab(baseAdUnit);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(final List<WindNativeAdData> list, final int i, final String str) {
        this.g = false;
        this.d.removeMessages(20481);
        this.d.post(new Runnable() { // from class: com.sigmob.sdk.nativead.t.2
            @Override // java.lang.Runnable
            public void run() {
                if (t.this.e != null) {
                    if (i != 0) {
                        t.this.e.onNativeAdLoadFail(i, str);
                    } else {
                        t.this.e.onNativeAdLoaded(list);
                    }
                }
            }
        });
    }

    public String a() {
        BaseAdUnit baseAdUnit;
        List<BaseAdUnit> list = this.i;
        if (list == null || list.size() <= 0 || (baseAdUnit = this.i.get(0)) == null || baseAdUnit.bidding_response == null) {
            return null;
        }
        return String.valueOf(baseAdUnit.bidding_response.ecpm);
    }

    public void a(int i, String str, int i2, String str2) {
        this.g = true;
        this.d.sendEmptyMessageDelayed(20481, com.sigmob.sdk.base.i.a().u());
        LoadAdRequest loadAdRequest = new LoadAdRequest(this.f);
        loadAdRequest.setBidToken(str);
        loadAdRequest.setBidFloor(i2);
        loadAdRequest.setCurrency(str2);
        loadAdRequest.setAd_count(i);
        com.sigmob.sdk.base.network.d.a(loadAdRequest, this);
    }

    @Override // com.sigmob.sdk.base.network.d.a
    public void a(int i, String str, String str2, LoadAdRequest loadAdRequest) {
        com.sigmob.sdk.base.common.z.a(PointCategory.RESPOND, "0", loadAdRequest);
        a(null, i, str);
    }

    @Override // com.sigmob.sdk.base.network.d.a
    public void a(final List<BaseAdUnit> list, LoadAdRequest loadAdRequest) {
        this.i = list;
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < list.size(); i++) {
            BaseAdUnit baseAdUnit = list.get(i);
            arrayList.add(a(baseAdUnit));
            com.sigmob.sdk.base.common.f.e().e(baseAdUnit);
        }
        com.sigmob.sdk.base.common.z.a(PointCategory.RESPOND, "1", (BaseAdUnit) null, loadAdRequest, new z.a() { // from class: com.sigmob.sdk.nativead.t.3
            @Override // com.sigmob.sdk.base.common.z.a
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    HashMap map = new HashMap();
                    map.put("ad_count", String.valueOf(list.size()));
                    ((PointEntitySigmob) obj).setOptions(map);
                }
            }
        });
        com.sigmob.sdk.base.common.z.a(PointCategory.READY, (String) null, list.get(0), loadAdRequest, (z.a) null);
        a(arrayList, 0, null);
    }

    public List<BaseAdUnit> b() {
        return this.i;
    }
}
