package com.kwad.components.core.widget.a;

import android.view.View;
import com.kwad.sdk.utils.bm;

/* JADX INFO: loaded from: classes2.dex */
public class b extends a {
    private View mRootView;

    public b(View view, int i) {
        super(view, i);
        this.mRootView = view;
    }

    @Override // com.kwad.components.core.widget.a.a
    public boolean ep() {
        return bm.a(this.mRootView, 70, true);
    }
}
