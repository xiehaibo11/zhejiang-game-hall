package com.kwad.components.core.offline.init.d;

import android.content.Context;
import com.kwad.components.offline.api.core.webview.BaseKsWebView;
import com.kwad.components.offline.api.core.webview.IWebView;

public final class b implements IWebView {
    @Override
    public final BaseKsWebView createWebView(Context context) {
        return new a(context);
    }
}
