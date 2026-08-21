package com.tkay.core.common.b;

import android.graphics.Bitmap;
import android.text.TextUtils;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYCustomLoadListener;
import com.tkay.core.common.res.b;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class o implements TYCustomLoadListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    TYCustomLoadListener f6087a;
    Map<String, Object> b;

    public o(TYCustomLoadListener tYCustomLoadListener, Map<String, Object> map) {
        this.f6087a = tYCustomLoadListener;
        this.b = map;
    }

    @Override // com.tkay.core.api.TYCustomLoadListener
    public final void onAdDataLoaded() {
        TYCustomLoadListener tYCustomLoadListener = this.f6087a;
        if (tYCustomLoadListener != null) {
            tYCustomLoadListener.onAdDataLoaded();
        }
    }

    @Override // com.tkay.core.api.TYCustomLoadListener
    public final void onAdCacheLoaded(BaseAd... baseAdArr) {
        if (baseAdArr.length > 0) {
            final BaseAd baseAd = baseAdArr[0];
            if (TextUtils.isEmpty(baseAd.getMainImageUrl())) {
                this.f6087a.onAdCacheLoaded(new com.tkay.core.common.f.a.e(baseAd, this.b));
                return;
            } else {
                com.tkay.core.common.res.b.a(m.a().f()).a(new com.tkay.core.common.res.e(2, baseAd.getMainImageUrl()), 0, 0, new b.a() { // from class: com.tkay.core.common.b.o.1
                    @Override // com.tkay.core.common.res.b.a
                    public final void onSuccess(String str, Bitmap bitmap) {
                        if (!TextUtils.equals(str, baseAd.getMainImageUrl()) || o.this.f6087a == null) {
                            return;
                        }
                        o.this.f6087a.onAdCacheLoaded(new com.tkay.core.common.f.a.e(baseAd, o.this.b));
                    }

                    @Override // com.tkay.core.common.res.b.a
                    public final void onFail(String str, String str2) {
                        if (o.this.f6087a != null) {
                            o.this.f6087a.onAdLoadError("10011", "load image fail:".concat(String.valueOf(str2)));
                        }
                    }
                });
                return;
            }
        }
        TYCustomLoadListener tYCustomLoadListener = this.f6087a;
        if (tYCustomLoadListener != null) {
            tYCustomLoadListener.onAdLoadError("10011", "load fail with no adObject");
        }
    }

    @Override // com.tkay.core.api.TYCustomLoadListener
    public final void onAdLoadError(String str, String str2) {
        TYCustomLoadListener tYCustomLoadListener = this.f6087a;
        if (tYCustomLoadListener != null) {
            tYCustomLoadListener.onAdLoadError(str, str2);
        }
    }
}
