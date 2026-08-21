package com.tkay.core.common.b;

import android.graphics.Bitmap;
import android.text.TextUtils;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYCustomLoadListener;
import com.tkay.core.common.res.b;
import java.util.Map;

public final class o implements TYCustomLoadListener {
    TYCustomLoadListener a;
    Map<String, Object> b;

    public o(TYCustomLoadListener tYCustomLoadListener, Map<String, Object> map) {
        this.a = tYCustomLoadListener;
        this.b = map;
    }

    @Override
    public final void onAdDataLoaded() {
        TYCustomLoadListener tYCustomLoadListener = this.a;
        if (tYCustomLoadListener != null) {
            tYCustomLoadListener.onAdDataLoaded();
        }
    }

    @Override
    public final void onAdCacheLoaded(BaseAd... baseAdArr) {
        if (baseAdArr.length > 0) {
            final BaseAd baseAd = baseAdArr[0];
            if (TextUtils.isEmpty(baseAd.getMainImageUrl())) {
                this.a.onAdCacheLoaded(new com.tkay.core.common.f.a.e(baseAd, this.b));
                return;
            } else {
                com.tkay.core.common.res.b.a(m.a().f()).a(new com.tkay.core.common.res.e(2, baseAd.getMainImageUrl()), 0, 0, new b.a() {
                    @Override
                    public final void onSuccess(String str, Bitmap bitmap) {
                        if (!TextUtils.equals(str, baseAd.getMainImageUrl()) || o.this.a == null) {
                            return;
                        }
                        o.this.a.onAdCacheLoaded(new com.tkay.core.common.f.a.e(baseAd, o.this.b));
                    }

                    @Override
                    public final void onFail(String str, String str2) {
                        if (o.this.a != null) {
                            o.this.a.onAdLoadError("10011", "load image fail:".concat(String.valueOf(str2)));
                        }
                    }
                });
                return;
            }
        }
        TYCustomLoadListener tYCustomLoadListener = this.a;
        if (tYCustomLoadListener != null) {
            tYCustomLoadListener.onAdLoadError("10011", "load fail with no adObject");
        }
    }

    @Override
    public final void onAdLoadError(String str, String str2) {
        TYCustomLoadListener tYCustomLoadListener = this.a;
        if (tYCustomLoadListener != null) {
            tYCustomLoadListener.onAdLoadError(str, str2);
        }
    }
}
