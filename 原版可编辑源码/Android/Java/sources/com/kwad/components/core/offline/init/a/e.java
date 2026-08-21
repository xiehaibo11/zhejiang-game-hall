package com.kwad.components.core.offline.init.a;

import android.graphics.Bitmap;
import android.view.View;
import android.widget.ImageView;
import com.kwad.components.offline.api.core.api.IImageLoader;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat;
import com.kwad.sdk.core.imageloader.core.assist.FailReason;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener;
import com.kwad.sdk.core.imageloader.utils.BlurUtils;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.threads.GlobalThreadPools;
import com.kwad.sdk.utils.bj;
import java.io.InputStream;

final class e implements IImageLoader {

    final class 2 implements ImageLoadingListener {
        final ImageView CW;
        final IImageLoader.ImageLoadingListener Ls;
        final IImageLoader.DisplayImageOptionsCompat Lu;

        2(IImageLoader.ImageLoadingListener imageLoadingListener, IImageLoader.DisplayImageOptionsCompat displayImageOptionsCompat, ImageView imageView) {
            this.Ls = imageLoadingListener;
            this.Lu = displayImageOptionsCompat;
            this.CW = imageView;
        }

        @Override
        public final boolean onDecode(String str, InputStream inputStream, DecodedResult decodedResult) {
            return this.Ls.onDecode(str, inputStream, decodedResult == null ? null : decodedResult.mBitmap);
        }

        @Override
        public final void onLoadingCancelled(String str, View view) {
            this.Ls.onLoadingCancelled(str, view);
        }

        @Override
        public final void onLoadingComplete(final String str, final View view, final DecodedResult decodedResult) {
            IImageLoader.DisplayImageOptionsCompat displayImageOptionsCompat = this.Lu;
            if (displayImageOptionsCompat == null || displayImageOptionsCompat.getBlurRadius() <= 0 || decodedResult == null || decodedResult.mBitmap == null) {
                this.Ls.onLoadingComplete(str, view, decodedResult == null ? null : decodedResult.mBitmap);
            } else {
                GlobalThreadPools.CR().submit(new Runnable() {
                    @Override
                    public final void run() {
                        final Bitmap bitmapStackBlur = BlurUtils.stackBlur(decodedResult.mBitmap, 2.this.Lu.getBlurRadius(), false);
                        bj.runOnUiThread(new Runnable() {
                            @Override
                            public final void run() {
                                Bitmap bitmap;
                                2.this.CW.setImageBitmap(bitmapStackBlur);
                                IImageLoader.ImageLoadingListener imageLoadingListener = 2.this.Ls;
                                String str2 = str;
                                View view2 = view;
                                if (decodedResult == null) {
                                    bitmap = null;
                                } else {
                                    bitmap = bitmapStackBlur;
                                    if (bitmap == null) {
                                        bitmap = decodedResult.mBitmap;
                                    }
                                }
                                imageLoadingListener.onLoadingComplete(str2, view2, bitmap);
                            }
                        });
                    }
                });
            }
        }

        @Override
        public final void onLoadingFailed(String str, View view, FailReason failReason) {
            this.Ls.onLoadingFailed(str, view, failReason.getType().toString(), failReason.getCause());
        }

        @Override
        public final void onLoadingStarted(String str, View view) {
            this.Ls.onLoadingStarted(str, view);
        }
    }

    e() {
    }

    private static DisplayImageOptionsCompat a(IImageLoader.DisplayImageOptionsCompat displayImageOptionsCompat) {
        if (displayImageOptionsCompat == null) {
            return null;
        }
        return new DisplayImageOptionsCompat.Builder().showImageOnLoading(displayImageOptionsCompat.getImageOnLoading()).showImageForEmptyUri(displayImageOptionsCompat.getImageForEmptyUri()).showImageOnFail(displayImageOptionsCompat.getImageOnFail()).cacheInMemory(displayImageOptionsCompat.isCacheInMemory()).cacheOnDisk(displayImageOptionsCompat.isCacheOnDisk()).bitmapConfig(displayImageOptionsCompat.getDecodingOptions().inPreferredConfig).considerExifParams(displayImageOptionsCompat.isConsiderExifParams()).setBlurRadius(displayImageOptionsCompat.getBlurRadius()).setFrameSequence(displayImageOptionsCompat.isFrameSequence()).setCornerRound(displayImageOptionsCompat.getCornerRound()).setCircle(displayImageOptionsCompat.isCircle()).setStrokeColor(displayImageOptionsCompat.getStrokeColor()).setStrokeWidth(displayImageOptionsCompat.getStrokeWidth()).build();
    }

    private ImageLoadingListener a(final IImageLoader.ImageLoadingListener imageLoadingListener) {
        if (imageLoadingListener == null) {
            return null;
        }
        return new ImageLoadingListener() {
            @Override
            public final boolean onDecode(String str, InputStream inputStream, DecodedResult decodedResult) {
                return imageLoadingListener.onDecode(str, inputStream, decodedResult == null ? null : decodedResult.mBitmap);
            }

            @Override
            public final void onLoadingCancelled(String str, View view) {
                imageLoadingListener.onLoadingCancelled(str, view);
            }

            @Override
            public final void onLoadingComplete(String str, View view, DecodedResult decodedResult) {
                imageLoadingListener.onLoadingComplete(str, view, decodedResult == null ? null : decodedResult.mBitmap);
            }

            @Override
            public final void onLoadingFailed(String str, View view, FailReason failReason) {
                imageLoadingListener.onLoadingFailed(str, view, failReason.getType().toString(), failReason.getCause());
            }

            @Override
            public final void onLoadingStarted(String str, View view) {
                imageLoadingListener.onLoadingStarted(str, view);
            }
        };
    }

    private ImageLoadingListener a(IImageLoader.ImageLoadingListener imageLoadingListener, IImageLoader.DisplayImageOptionsCompat displayImageOptionsCompat, ImageView imageView) {
        if (imageLoadingListener == null) {
            return null;
        }
        return new 2(imageLoadingListener, displayImageOptionsCompat, imageView);
    }

    @Override
    public final void loadImage(ImageView imageView, String str) {
        KSImageLoader.loadImage(imageView, str);
    }

    @Override
    public final void loadImage(ImageView imageView, String str, IImageLoader.DisplayImageOptionsCompat displayImageOptionsCompat) {
        KSImageLoader.loadImage(imageView, str, (AdTemplate) null, a(displayImageOptionsCompat));
    }

    @Override
    public final void loadImage(ImageView imageView, String str, IImageLoader.DisplayImageOptionsCompat displayImageOptionsCompat, IImageLoader.ImageLoadingListener imageLoadingListener) {
        KSImageLoader.loadImage(imageView, str, null, a(displayImageOptionsCompat), a(imageLoadingListener, displayImageOptionsCompat, imageView));
    }

    @Override
    public final void loadImage(ImageView imageView, String str, IImageLoader.ImageLoadingListener imageLoadingListener) {
        KSImageLoader.loadImage(imageView, str, (AdTemplate) null, a(imageLoadingListener, null, imageView));
    }

    @Override
    public final void loadImage(String str, IImageLoader.DisplayImageOptionsCompat displayImageOptionsCompat, IImageLoader.ImageLoadingListener imageLoadingListener) {
        KSImageLoader.loadImage(str, (AdTemplate) null, a(displayImageOptionsCompat), a(imageLoadingListener));
    }
}
