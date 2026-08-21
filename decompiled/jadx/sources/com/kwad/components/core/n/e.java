package com.kwad.components.core.n;

import android.content.Context;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.sdk.api.core.fragment.KsFragment;
import com.kwad.sdk.m.l;

/* JADX INFO: loaded from: classes2.dex */
public class e extends KsFragment implements com.kwad.sdk.l.a.b {
    protected ViewGroup Pj;
    protected ViewGroup lJ;
    private final com.kwad.sdk.l.a.a mBackPressDelete = new com.kwad.sdk.l.a.a();
    protected Context mContext;

    @Override // com.kwad.sdk.l.a.b
    public boolean bP() {
        return this.mBackPressDelete.bP();
    }

    public final <T extends View> T findViewById(int i) {
        ViewGroup viewGroup = this.lJ;
        if (viewGroup != null) {
            return (T) viewGroup.findViewById(i);
        }
        throw new IllegalArgumentException("ID does not reference a View inside this View");
    }

    protected ViewGroup lA() {
        return null;
    }

    @Override // com.kwad.sdk.api.core.fragment.KsFragment, com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle, com.kwad.sdk.api.core.fragment.IFragmentLifecycle
    public final View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        Context contextWrapContextIfNeed = l.wrapContextIfNeed(layoutInflater.getContext());
        this.mContext = contextWrapContextIfNeed;
        LayoutInflater layoutInflaterFrom = LayoutInflater.from(contextWrapContextIfNeed);
        this.Pj = viewGroup;
        if (this.lJ == null) {
            ViewGroup viewGroupLA = lA();
            this.lJ = viewGroupLA;
            if (viewGroupLA == null && ov() != 0) {
                this.lJ = (ViewGroup) layoutInflaterFrom.inflate(ov(), viewGroup, false);
            }
        }
        return this.lJ;
    }

    @Override // com.kwad.sdk.api.core.fragment.KsFragment, com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle, com.kwad.sdk.api.core.fragment.IFragmentLifecycle
    public void onDestroy() {
        super.onDestroy();
        if (getHost() != null) {
            com.kwad.components.core.t.f.destroyFragment(this.mContext, getView());
        }
    }

    protected int ov() {
        return 0;
    }
}
