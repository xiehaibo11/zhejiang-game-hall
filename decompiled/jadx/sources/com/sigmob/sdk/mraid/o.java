package com.sigmob.sdk.mraid;

import android.content.Context;
import android.os.Build;
import android.view.View;

/* JADX INFO: loaded from: classes3.dex */
public class o extends com.sigmob.sdk.base.views.e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f5038a = 1;
    private a b;
    private boolean c;

    public interface a {
        void a(boolean z);
    }

    public o(Context context) {
        super(context);
        if (Build.VERSION.SDK_INT <= 22) {
            this.c = getVisibility() == 0;
        }
    }

    private void setMraidViewable(boolean z) {
        if (this.c == z) {
            return;
        }
        this.c = z;
        a aVar = this.b;
        if (aVar != null) {
            aVar.a(z);
        }
    }

    @Override // com.sigmob.sdk.base.views.e, android.webkit.WebView
    public void destroy() {
        super.destroy();
        this.b = null;
    }

    public boolean h() {
        return this.c;
    }

    @Override // android.webkit.WebView, android.view.View
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
        if (i == 0) {
            return;
        }
        setMraidViewable(false);
    }

    public void setVisibilityChangedListener(a aVar) {
        this.b = aVar;
    }
}
