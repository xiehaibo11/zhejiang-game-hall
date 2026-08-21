package com.kwad.sdk.core.imageloader.core.listener;

import android.view.View;
import com.kwad.sdk.core.imageloader.core.assist.FailReason;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import java.io.InputStream;

public class SimpleImageLoadingListener implements ImageLoadingListener {
    @Override
    public boolean onDecode(String str, InputStream inputStream, DecodedResult decodedResult) {
        return false;
    }

    @Override
    public void onLoadingCancelled(String str, View view) {
    }

    @Override
    public void onLoadingComplete(String str, View view, DecodedResult decodedResult) {
    }

    @Override
    public void onLoadingFailed(String str, View view, FailReason failReason) {
    }

    @Override
    public void onLoadingStarted(String str, View view) {
    }
}
