package android.support.v7.recyclerview.extensions;

import android.support.v7.widget.RecyclerView.ViewHolder;

public abstract class ListAdapter<T, VH extends android.support.v7.widget.RecyclerView.ViewHolder> extends android.support.v7.widget.RecyclerView.Adapter<VH> {
    private final android.support.v7.recyclerview.extensions.AsyncListDiffer<T> mHelper;

    protected ListAdapter(android.support.v7.recyclerview.extensions.AsyncDifferConfig<T> r3) {
            r2 = this;
            r2.<init>()
            android.support.v7.recyclerview.extensions.AsyncListDiffer r0 = new android.support.v7.recyclerview.extensions.AsyncListDiffer
            android.support.v7.util.AdapterListUpdateCallback r1 = new android.support.v7.util.AdapterListUpdateCallback
            r1.<init>(r2)
            r0.<init>(r1, r3)
            r2.mHelper = r0
            return
    }

    protected ListAdapter(android.support.v7.util.DiffUtil.ItemCallback<T> r4) {
            r3 = this;
            r3.<init>()
            android.support.v7.recyclerview.extensions.AsyncListDiffer r0 = new android.support.v7.recyclerview.extensions.AsyncListDiffer
            android.support.v7.util.AdapterListUpdateCallback r1 = new android.support.v7.util.AdapterListUpdateCallback
            r1.<init>(r3)
            android.support.v7.recyclerview.extensions.AsyncDifferConfig$Builder r2 = new android.support.v7.recyclerview.extensions.AsyncDifferConfig$Builder
            r2.<init>(r4)
            android.support.v7.recyclerview.extensions.AsyncDifferConfig r4 = r2.build()
            r0.<init>(r1, r4)
            r3.mHelper = r0
            return
    }

    protected T getItem(int r2) {
            r1 = this;
            android.support.v7.recyclerview.extensions.AsyncListDiffer<T> r0 = r1.mHelper
            java.util.List r0 = r0.getCurrentList()
            java.lang.Object r2 = r0.get(r2)
            return r2
    }

    @Override
    public int getItemCount() {
            r1 = this;
            android.support.v7.recyclerview.extensions.AsyncListDiffer<T> r0 = r1.mHelper
            java.util.List r0 = r0.getCurrentList()
            int r0 = r0.size()
            return r0
    }

    public void submitList(java.util.List<T> r2) {
            r1 = this;
            android.support.v7.recyclerview.extensions.AsyncListDiffer<T> r0 = r1.mHelper
            r0.submitList(r2)
            return
    }
}
