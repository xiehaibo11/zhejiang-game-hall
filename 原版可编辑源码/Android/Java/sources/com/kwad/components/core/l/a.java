package com.kwad.components.core.l;

import android.app.Activity;
import android.content.Context;
import android.view.View;
import java.util.ArrayList;
import java.util.List;

public class a extends com.kwad.sdk.mvp.a {
    public List<com.kwad.components.core.l.a.a> Lg = new ArrayList();
    private final b<?> Lh;
    public final Context mContext;
    public final View mRootView;

    public a(b<?> bVar) {
        this.Lh = bVar;
        this.mContext = bVar.mContext;
        this.mRootView = bVar.mRootView;
    }

    @Deprecated
    public final Activity getActivity() {
        return this.Lh.getActivity();
    }

    public final void hw() {
        this.Lh.finish();
    }

    @Override
    public void release() {
        this.Lg.clear();
    }
}
