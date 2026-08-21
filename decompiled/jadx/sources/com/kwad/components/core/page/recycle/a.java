package com.kwad.components.core.page.recycle;

import android.content.Intent;
import android.os.Bundle;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.view.View;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public abstract class a extends com.kwad.components.core.n.e {
    private RecyclerView ND;
    private d NE;

    private void pb() {
        RecyclerView recyclerView = (RecyclerView) findViewById(pf());
        this.ND = recyclerView;
        recyclerView.setItemAnimator(null);
        this.ND.setLayoutManager(pe());
        this.NE = a(this.ND);
    }

    private void pc() {
        this.ND.setAdapter(this.NE);
    }

    private RecyclerView.LayoutManager pe() {
        return new LinearLayoutManager(this.mContext);
    }

    private static int pf() {
        return R.id.ksad_recycler_view;
    }

    protected abstract d a(RecyclerView recyclerView);

    @Override // com.kwad.sdk.api.core.fragment.KsFragment, com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle, com.kwad.sdk.api.core.fragment.IFragmentLifecycle
    public void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
    }

    @Override // com.kwad.components.core.n.e, com.kwad.sdk.api.core.fragment.KsFragment, com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle, com.kwad.sdk.api.core.fragment.IFragmentLifecycle
    public void onDestroy() {
        super.onDestroy();
    }

    @Override // com.kwad.sdk.api.core.fragment.KsFragment, com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle, com.kwad.sdk.api.core.fragment.IFragmentLifecycle
    public void onDestroyView() {
        super.onDestroyView();
        this.ND.clearOnChildAttachStateChangeListeners();
    }

    @Override // com.kwad.sdk.api.core.fragment.KsFragment, com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle, com.kwad.sdk.api.core.fragment.IFragmentLifecycle
    public void onPause() {
        super.onPause();
    }

    @Override // com.kwad.sdk.api.core.fragment.KsFragment, com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle, com.kwad.sdk.api.core.fragment.IFragmentLifecycle
    public void onResume() {
        super.onResume();
    }

    @Override // com.kwad.sdk.api.core.fragment.KsFragment, com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle, com.kwad.sdk.api.core.fragment.IFragmentLifecycle
    public void onViewCreated(View view, Bundle bundle) {
        super.onViewCreated(view, bundle);
        pb();
        pc();
    }

    public final RecyclerView pd() {
        return this.ND;
    }
}
