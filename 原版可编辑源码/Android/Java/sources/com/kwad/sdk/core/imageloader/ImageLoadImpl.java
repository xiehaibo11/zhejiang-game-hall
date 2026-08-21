package com.kwad.sdk.core.imageloader;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.widget.ImageView;
import com.kwad.sdk.api.core.fragment.KsFragment;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.imageloader.cache.disc.naming.Md5FileNameGenerator;
import com.kwad.sdk.core.imageloader.core.DisplayImageOptions;
import com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat;
import com.kwad.sdk.core.imageloader.core.ImageLoader;
import com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration;
import com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType;
import com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer;
import com.kwad.sdk.core.imageloader.core.display.CircleBitmapDisplayer;
import com.kwad.sdk.core.imageloader.core.display.RoundedBitmapDisplayer;
import com.kwad.sdk.core.imageloader.core.download.BaseImageDownloader;
import com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener;
import com.kwad.sdk.core.network.q;
import com.kwad.sdk.core.network.s;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.threads.GlobalThreadPools;
import com.kwad.sdk.d.a.a;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.service.a.e;
import com.kwad.sdk.utils.av;
import java.net.HttpURLConnection;
import java.net.URL;

public class ImageLoadImpl implements IImageLoader {
    private DisplayImageOptions adapter(DisplayImageOptionsCompat displayImageOptionsCompat) {
        BitmapDisplayer roundedBitmapDisplayer;
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        Resources resources = context.getResources();
        DisplayImageOptions.Builder builderBitmapConfig = new DisplayImageOptions.Builder().showImageOnLoading(displayImageOptionsCompat.getImageOnLoading(resources)).showImageForEmptyUri(displayImageOptionsCompat.getImageForEmptyUri(resources)).showImageOnFail(displayImageOptionsCompat.getImageOnFail(resources)).cacheInMemory(true).cacheOnDisc(true).bitmapConfig(Bitmap.Config.RGB_565);
        if (displayImageOptionsCompat.getStrokeWidth() <= 0.0f) {
            if (displayImageOptionsCompat.isCircle()) {
                builderBitmapConfig.displayer(new CircleBitmapDisplayer());
            } else if (displayImageOptionsCompat.getCornerRound() > 0) {
                roundedBitmapDisplayer = new RoundedBitmapDisplayer(a.a(context, displayImageOptionsCompat.getCornerRound()));
            }
            return builderBitmapConfig.build();
        }
        roundedBitmapDisplayer = new CircleBitmapDisplayer(Integer.valueOf(displayImageOptionsCompat.getStrokeColor()), a.a(context, displayImageOptionsCompat.getStrokeWidth()));
        builderBitmapConfig.displayer(roundedBitmapDisplayer);
        return builderBitmapConfig.build();
    }

    private String parseModel(Object obj) {
        if (obj instanceof String) {
            return (String) obj;
        }
        throw new IllegalArgumentException("unsupport object except String!");
    }

    public void checkInit() {
        if (ImageLoader.getInstance().isInited()) {
            return;
        }
        Context context = ((e) ServiceProvider.get(e.class)).getContext();
        ImageLoaderConfiguration.Builder builder = new ImageLoaderConfiguration.Builder(context.getApplicationContext());
        builder.taskExecutor(GlobalThreadPools.CR());
        builder.taskExecutorForCachedImages(GlobalThreadPools.CS());
        builder.setTaskDistributor(GlobalThreadPools.CT());
        builder.denyCacheImageMultipleSizesInMemory();
        builder.diskCacheFileNameGenerator(new Md5FileNameGenerator());
        builder.diskCacheSize(20971520);
        builder.tasksProcessingOrder(QueueProcessingType.LIFO);
        builder.cacheParentDir(av.cJ(context).getPath());
        builder.imageDownloader(new BaseImageDownloader(context) {
            @Override
            public HttpURLConnection createConnection(String str, Object obj) {
                HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(Uri.encode(str, "@#&=*+-_.,:!?()/~'%")).openConnection();
                s.wrapHttpURLConnection(httpURLConnection);
                q.b(httpURLConnection);
                httpURLConnection.setConnectTimeout(this.connectTimeout);
                httpURLConnection.setReadTimeout(this.readTimeout);
                return httpURLConnection;
            }
        });
        ImageLoader.getInstance().init(builder.build());
    }

    @Override
    public void clearMemory(Context context) {
        checkInit();
        ImageLoader.getInstance().clearMemoryCache();
    }

    @Override
    public void load(Context context, ImageView imageView, Object obj, int i, int i2) {
        checkInit();
        ImageLoader.getInstance().displayImage(parseModel(obj), imageView, new DisplayImageOptions.Builder().bitmapConfig(Bitmap.Config.ARGB_8888).cacheOnDisk(true).cacheInMemory(true).showImageOnLoading(i2).showImageForEmptyUri(i).showImageOnFail(i).build());
    }

    @Override
    public void load(Context context, String str, ImageView imageView, DisplayImageOptionsCompat displayImageOptionsCompat, ImageLoadingListener imageLoadingListener) {
        checkInit();
        ImageLoader.getInstance().displayImage(str, imageView, adapter(displayImageOptionsCompat), imageLoadingListener);
    }

    @Override
    public void load(Context context, String str, DisplayImageOptionsCompat displayImageOptionsCompat, ImageLoadingListener imageLoadingListener) {
        checkInit();
        ImageLoader.getInstance().loadImage(str, adapter(displayImageOptionsCompat), imageLoadingListener);
    }

    @Override
    public void load(ImageView imageView, Object obj) {
        checkInit();
        ImageLoader.getInstance().displayImage(parseModel(obj), imageView);
    }

    @Override
    public void load(ImageView imageView, Object obj, ImageLoadingListener imageLoadingListener) {
        checkInit();
        ImageLoader.getInstance().displayImage(parseModel(obj), imageView, imageLoadingListener);
    }

    @Override
    public void load(ImageView imageView, Object obj, AdTemplate adTemplate) {
        checkInit();
        ImageLoader.getInstance().displayImage(parseModel(obj), imageView, new KSImageLoader.InnerImageLoadingListener(adTemplate, null));
    }

    @Override
    public void load(KsFragment ksFragment, Context context, String str, DisplayImageOptionsCompat displayImageOptionsCompat, ImageLoadingListener imageLoadingListener) {
        checkInit();
        ImageLoader.getInstance().loadImage(str, adapter(displayImageOptionsCompat), imageLoadingListener);
    }

    @Override
    public void load(KsFragment ksFragment, String str, ImageView imageView, Drawable drawable, Drawable drawable2) {
        checkInit();
        ImageLoader.getInstance().displayImage(str, imageView, new DisplayImageOptions.Builder().bitmapConfig(Bitmap.Config.ARGB_8888).cacheOnDisk(true).cacheInMemory(true).showImageOnLoading(drawable).showImageOnFail(drawable2).build());
    }

    @Override
    public void load(KsFragment ksFragment, String str, ImageView imageView, Drawable drawable, Drawable drawable2, float f) {
        checkInit();
        ImageLoader.getInstance().displayImage(str, imageView, new DisplayImageOptions.Builder().bitmapConfig(Bitmap.Config.ARGB_8888).cacheOnDisk(true).cacheInMemory(true).showImageOnLoading(drawable).showImageOnFail(drawable2).displayer(new RoundedBitmapDisplayer(a.a(imageView.getContext(), f))).build());
    }

    @Override
    public void pause() {
        checkInit();
        ImageLoader.getInstance().pause();
    }

    @Override
    public void resume() {
        checkInit();
        ImageLoader.getInstance().resume();
    }
}
