package com.kwad.components.core.page.recycle;

import android.support.v7.widget.RecyclerView;
import android.view.ViewGroup;
import com.kwad.sdk.mvp.Presenter;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public abstract class d extends RecyclerView.Adapter<c> {
    private List<Presenter> Oi = new ArrayList();

    @Override
    private void onViewRecycled(c cVar) {
        super.onViewRecycled(cVar);
        cVar.mPresenter.lI();
    }

    @Override
    private c onCreateViewHolder(ViewGroup viewGroup, int i) {
        c cVarB = b(viewGroup, i);
        this.Oi.add(cVarB.mPresenter);
        return cVarB;
    }

    @Override
    public void onBindViewHolder(c cVar, int i) {
        cVar.mPresenter.k(cVar.Mz);
    }

    protected abstract c b(ViewGroup viewGroup, int i);

    @Override
    public void onDetachedFromRecyclerView(RecyclerView recyclerView) {
        super.onDetachedFromRecyclerView(recyclerView);
        pl();
    }

    public final void pl() {
        Iterator<Presenter> it = this.Oi.iterator();
        while (it.hasNext()) {
            it.next().destroy();
        }
    }
}
