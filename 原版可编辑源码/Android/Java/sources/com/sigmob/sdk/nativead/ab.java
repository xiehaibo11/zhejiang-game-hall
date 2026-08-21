package com.sigmob.sdk.nativead;

import android.app.Activity;
import android.graphics.Bitmap;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.SigImage;
import com.sigmob.windad.natives.NativeADEventListener;
import com.sigmob.windad.natives.WindNativeAdData;
import java.util.List;

public class ab implements WindNativeAdData {
    private final String a;
    private final String b;
    private final String c;
    private final List<SigImage> d;
    private final int e;
    private final w f;
    private List<ImageView> g;
    private int h;

    public ab(BaseAdUnit baseAdUnit) {
        this.a = baseAdUnit.getTitle();
        this.b = baseAdUnit.getDesc();
        this.c = baseAdUnit.getIconUrl();
        this.d = baseAdUnit.getImageUrlList();
        this.e = baseAdUnit.getNativeAd().type.intValue();
        w wVar = new w();
        this.f = wVar;
        wVar.a(baseAdUnit, this);
    }

    public String a() {
        return "sigmob";
    }

    public List<SigImage> b() {
        return this.d;
    }

    @Override
    public void bindImageViews(List<ImageView> list, int i) {
        w wVar = this.f;
        if (wVar != null) {
            wVar.a(list, i);
        }
    }

    @Override
    public void bindMediaView(ViewGroup viewGroup, WindNativeAdData.NativeADMediaListener nativeADMediaListener) {
        w wVar = this.f;
        if (wVar != null) {
            wVar.a(viewGroup, nativeADMediaListener);
        }
    }

    @Override
    public void bindViewForInteraction(View view, List<View> list, List<View> list2, View view2, NativeADEventListener nativeADEventListener) {
        w wVar = this.f;
        if (wVar != null) {
            wVar.a(view, list, list2, view2, nativeADEventListener);
        }
    }

    public View c() {
        w wVar = this.f;
        if (wVar != null) {
            return wVar.q();
        }
        return null;
    }

    public double d() {
        w wVar = this.f;
        if (wVar != null) {
            return wVar.s();
        }
        return 0.0d;
    }

    @Override
    public void destroy() {
        w wVar = this.f;
        if (wVar != null) {
            wVar.w();
        }
    }

    public double e() {
        w wVar = this.f;
        if (wVar != null) {
            return wVar.t();
        }
        return 0.0d;
    }

    public int f() {
        w wVar = this.f;
        if (wVar != null) {
            return wVar.p();
        }
        return 0;
    }

    public int g() {
        w wVar = this.f;
        if (wVar != null) {
            return wVar.u();
        }
        return 0;
    }

    @Override
    public Bitmap getAdLogo() {
        return this.f.A();
    }

    @Override
    public int getAdPatternType() {
        return this.e;
    }

    @Override
    public String getCTAText() {
        w wVar = this.f;
        return wVar != null ? wVar.z() : "";
    }

    @Override
    public String getDesc() {
        return this.b;
    }

    @Override
    public String getIconUrl() {
        return this.c;
    }

    @Override
    public String getTitle() {
        return this.a;
    }

    public int h() {
        return this.e;
    }

    public void i() {
        w wVar = this.f;
        if (wVar != null) {
            wVar.v();
        }
    }

    @Override
    public void pauseVideo() {
        w wVar = this.f;
        if (wVar != null) {
            wVar.C();
        }
    }

    @Override
    public void resumeVideo() {
        w wVar = this.f;
        if (wVar != null) {
            wVar.E();
        }
    }

    @Override
    public void setDislikeInteractionCallback(Activity activity, WindNativeAdData.DislikeInteractionCallback dislikeInteractionCallback) {
        w wVar = this.f;
        if (wVar != null) {
            wVar.a(dislikeInteractionCallback);
        }
    }

    @Override
    public void startVideo() {
        w wVar = this.f;
        if (wVar != null) {
            wVar.B();
        }
    }

    @Override
    public void stopVideo() {
        w wVar = this.f;
        if (wVar != null) {
            wVar.F();
        }
    }
}
