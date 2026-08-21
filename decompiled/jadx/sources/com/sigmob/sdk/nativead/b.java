package com.sigmob.sdk.nativead;

import android.content.Context;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.TouchLocation;
import com.sigmob.sdk.base.common.g;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.models.rtb.NativeAdSetting;
import com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import java.util.ArrayList;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class b extends com.sigmob.sdk.base.common.h {
    private int k;
    private int l;
    private int m;
    private int n;
    private int o;
    private int p;
    private boolean q;
    private Boolean r;

    public static b f(BaseAdUnit baseAdUnit) {
        b bVar = new b();
        bVar.b(baseAdUnit);
        return bVar;
    }

    @Override // com.sigmob.sdk.base.common.h
    public void a(Context context, TouchLocation touchLocation, TouchLocation touchLocation2, com.sigmob.sdk.base.a aVar, BaseAdUnit baseAdUnit) {
        SigMacroCommon macroCommon = baseAdUnit.getMacroCommon();
        if (macroCommon != null) {
            macroCommon.addMarcoKey(SigMacroCommon._DOWNX_, String.valueOf(touchLocation.getX()));
            macroCommon.addMarcoKey(SigMacroCommon._DOWNY_, String.valueOf(touchLocation.getY()));
            macroCommon.addMarcoKey(SigMacroCommon._UPX_, String.valueOf(touchLocation2.getX()));
            macroCommon.addMarcoKey(SigMacroCommon._UPY_, String.valueOf(touchLocation2.getY()));
        }
        a(aVar, String.format("%d,%d,%d,%d", Integer.valueOf(touchLocation.getX()), Integer.valueOf(touchLocation.getY()), Integer.valueOf(touchLocation2.getX()), Integer.valueOf(touchLocation2.getY())), true);
    }

    public void a(BaseAdUnit baseAdUnit, final int i, final int i2) {
        com.sigmob.sdk.base.common.z.a(PointCategory.VIDEO_START, (String) null, baseAdUnit, new z.a() { // from class: com.sigmob.sdk.nativead.b.1
            @Override // com.sigmob.sdk.base.common.z.a
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    HashMap map = new HashMap();
                    map.put("video_time", String.valueOf(i));
                    map.put("begin_time", String.valueOf(i2));
                    ((PointEntitySigmob) obj).setOptions(map);
                }
            }
        });
        SigMacroCommon macroCommon = baseAdUnit.getMacroCommon();
        macroCommon.addMarcoKey(SigMacroCommon._VIDEOTIME_, String.valueOf(i2));
        macroCommon.addMarcoKey(SigMacroCommon._BEGINTIME_, String.valueOf(i));
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_NATIVE_VIDEO_START);
    }

    public void a(BaseAdUnit baseAdUnit, final int i, final int i2, final int i3) {
        com.sigmob.sdk.base.common.z.a(PointCategory.VIDEO_PAUSE, (String) null, baseAdUnit, new z.a() { // from class: com.sigmob.sdk.nativead.b.2
            @Override // com.sigmob.sdk.base.common.z.a
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    HashMap map = new HashMap();
                    map.put("video_time", String.valueOf(i3));
                    map.put("begin_time", String.valueOf(i2));
                    map.put(com.tkay.core.common.b.d.b, String.valueOf(i));
                    map.put("is_first", String.valueOf(i2 == 0 ? 1 : 0));
                    map.put("is_last", String.valueOf(i < i3 + (-1000) ? 0 : 1));
                    ((PointEntitySigmob) obj).setOptions(map);
                }
            }
        });
        SigMacroCommon macroCommon = baseAdUnit.getMacroCommon();
        macroCommon.addMarcoKey(SigMacroCommon._VIDEOTIME_, String.valueOf(i3));
        macroCommon.addMarcoKey(SigMacroCommon._BEGINTIME_, String.valueOf(i2));
        macroCommon.addMarcoKey(SigMacroCommon._ENDTIME_, String.valueOf(i));
        macroCommon.addMarcoKey(SigMacroCommon._PLAYFIRSTFRAME_, String.valueOf(i2 == 0 ? 1 : 0));
        macroCommon.addMarcoKey(SigMacroCommon._ENDTIME_, String.valueOf(i));
        macroCommon.addMarcoKey(SigMacroCommon._ENDTIME_, String.valueOf(i));
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_NATIVE_VIDEO_PAUSE);
    }

    @Override // com.sigmob.sdk.base.common.h
    public void b(BaseAdUnit baseAdUnit) {
        super.b(baseAdUnit);
        NativeAdSetting nativeAdSetting = baseAdUnit.getNativeAdSetting();
        SingleNativeAdSetting singleNativeSetting = baseAdUnit.getSingleNativeSetting();
        if (singleNativeSetting != null) {
            this.q = singleNativeSetting.use_na_video_component.booleanValue();
        }
        if (nativeAdSetting != null) {
            this.l = nativeAdSetting.preview_page_video_mute.intValue();
            this.m = nativeAdSetting.detail_page_video_mute.intValue();
            this.n = nativeAdSetting.impression_percent.intValue();
            this.o = nativeAdSetting.impression_time.intValue();
            this.k = nativeAdSetting.video_auto_play.intValue();
            this.p = nativeAdSetting.end_impression_time.intValue();
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(new com.sigmob.sdk.videoAd.f(g.a.QUARTILE_EVENT, com.sigmob.sdk.base.common.a.AD_PLAY_QUARTER, 0.25f));
        arrayList.add(new com.sigmob.sdk.videoAd.f(g.a.QUARTILE_EVENT, com.sigmob.sdk.base.common.a.AD_PLAY_TWO_QUARTERS, 0.5f));
        arrayList.add(new com.sigmob.sdk.videoAd.f(g.a.QUARTILE_EVENT, com.sigmob.sdk.base.common.a.AD_PLAY_THREE_QUARTERS, 0.75f));
        a(arrayList);
    }

    public void b(boolean z) {
        this.r = Boolean.valueOf(z);
    }

    public void c(Context context, BaseAdUnit baseAdUnit) {
        com.sigmob.sdk.base.common.z.a(PointCategory.TEMPLATE_SHOW, (String) null, baseAdUnit);
    }

    public void d(Context context, BaseAdUnit baseAdUnit) {
        com.sigmob.sdk.base.common.z.a(PointCategory.TEMPLATE_CLOSE, (String) null, baseAdUnit);
    }

    public void e(Context context, BaseAdUnit baseAdUnit) {
        com.sigmob.sdk.base.common.z.b(PointCategory.AD_SHOW, null, baseAdUnit);
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_NATIVE_SHOW);
    }

    public void f(Context context, BaseAdUnit baseAdUnit) {
        com.sigmob.sdk.base.common.z.b(PointCategory.FEED_CLICK, null, baseAdUnit);
        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_FEED_CLICK);
    }

    public boolean l() {
        return this.q;
    }

    public int m() {
        return this.k;
    }

    public boolean n() {
        Boolean bool = this.r;
        return bool != null ? bool.booleanValue() : this.l == 0;
    }

    public boolean o() {
        return this.m != 0;
    }

    public int p() {
        return this.n;
    }

    public int q() {
        return this.o;
    }

    public int r() {
        return this.p;
    }

    public int s() {
        int i = this.n;
        if (i != 0) {
            return i;
        }
        return 50;
    }

    public int t() {
        int i = this.o;
        if (i != 0) {
            return i;
        }
        return 1;
    }

    public boolean u() {
        if (m() != 0) {
            return m() == 1 && ClientMetadata.getInstance().getActiveNetworkType() == 100;
        }
        return true;
    }
}
