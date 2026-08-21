package com.kwad.components.ad.reward.presenter;

import android.graphics.BitmapFactory;
import android.text.TextUtils;
import android.view.View;
import android.widget.ImageView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener;
import com.kwad.sdk.core.imageloader.utils.BlurUtils;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ai;
import java.io.InputStream;

public class b extends a {
    private ImageView rY;
    private AdInfo rZ;

    public b(AdInfo adInfo) {
        this.rZ = adInfo;
    }

    private static void a(ImageView imageView, String str, AdTemplate adTemplate) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        KSImageLoader.loadImage(imageView, str, adTemplate, new DisplayImageOptionsCompat.Builder().setBlurRadius(50).build(), new SimpleImageLoadingListener() {
            @Override
            public final boolean onDecode(String str2, InputStream inputStream, DecodedResult decodedResult) {
                decodedResult.mBitmap = BlurUtils.stackBlur(BitmapFactory.decodeStream(inputStream), 50, false);
                return true;
            }

            @Override
            public final void onLoadingComplete(String str2, View view, DecodedResult decodedResult) {
            }
        });
    }

    @Override
    public final void ah() {
        super.ah();
        AdTemplate adTemplate = this.qx.mAdTemplate;
        if (hx() || adTemplate.adInfoList.size() <= 0) {
            return;
        }
        String strP = com.kwad.sdk.core.response.b.a.P(adTemplate.adInfoList.get(0));
        this.rY.setVisibility(hz());
        try {
            a(this.rY, strP, adTemplate);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
        }
    }

    protected int hy() {
        return R.id.ksad_blur_video_cover;
    }

    protected int hz() {
        getContext();
        if (com.kwad.components.ad.reward.j.s(this.qx.mAdTemplate) && !ai.IN()) {
            return 0;
        }
        if (com.kwad.components.ad.reward.j.r(this.qx.mAdTemplate) && !ai.IN()) {
            return 0;
        }
        if ((!com.kwad.sdk.core.response.b.d.ct(this.qx.mAdTemplate) || ai.IN()) && !com.kwad.components.ad.reward.j.g(this.rZ)) {
            return (com.kwad.sdk.core.response.b.a.co(this.rZ) && com.kwad.components.ad.reward.a.b.gP() && !ai.IN()) ? 0 : 8;
        }
        return 0;
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.rY = (ImageView) findViewById(hy());
    }
}
