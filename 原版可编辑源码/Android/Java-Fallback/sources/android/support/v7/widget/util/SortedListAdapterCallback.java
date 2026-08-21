package android.support.v7.widget.util;

public abstract class SortedListAdapterCallback<T2> extends android.support.v7.util.SortedList.Callback<T2> {
    final android.support.v7.widget.RecyclerView.Adapter mAdapter;

    public SortedListAdapterCallback(android.support.v7.widget.RecyclerView.Adapter r1) {
            r0 = this;
            r0.<init>()
            r0.mAdapter = r1
            return
    }

    @Override
    public void onChanged(int r2, int r3) {
            r1 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r1.mAdapter
            r0.notifyItemRangeChanged(r2, r3)
            return
    }

    @Override
    public void onChanged(int r2, int r3, java.lang.Object r4) {
            r1 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r1.mAdapter
            r0.notifyItemRangeChanged(r2, r3, r4)
            return
    }

    @Override
    public void onInserted(int r2, int r3) {
            r1 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r1.mAdapter
            r0.notifyItemRangeInserted(r2, r3)
            return
    }

    @Override
    public void onMoved(int r2, int r3) {
            r1 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r1.mAdapter
            r0.notifyItemMoved(r2, r3)
            return
    }

    @Override
    public void onRemoved(int r2, int r3) {
            r1 = this;
            android.support.v7.widget.RecyclerView$Adapter r0 = r1.mAdapter
            r0.notifyItemRangeRemoved(r2, r3)
            return
    }
}
