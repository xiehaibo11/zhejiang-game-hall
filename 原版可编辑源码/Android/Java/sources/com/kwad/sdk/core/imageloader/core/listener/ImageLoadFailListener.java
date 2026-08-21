package com.kwad.sdk.core.imageloader.core.listener;

import android.view.View;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import java.io.InputStream;

public abstract class ImageLoadFailListener implements ImageLoadingListener {
    @Override
    public final boolean onDecode(String str, InputStream inputStream, DecodedResult decodedResult) {
        return false;
    }

    @Override
    public final void onLoadingCancelled(String str, View view) {
    }

    @Override
    public final void onLoadingComplete(String str, View view, DecodedResult decodedResult) {
    }

    @Override
    public final void onLoadingStarted(String str, View view) {
    }
}
