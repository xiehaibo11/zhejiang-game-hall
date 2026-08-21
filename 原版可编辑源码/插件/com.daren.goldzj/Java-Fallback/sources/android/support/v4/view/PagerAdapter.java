package android.support.v4.view;

import android.database.DataSetObservable;
import android.database.DataSetObserver;
import android.os.Parcelable;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.view.View;
import android.view.ViewGroup;

public abstract class PagerAdapter {
    public static final int POSITION_NONE = -2;
    public static final int POSITION_UNCHANGED = -1;
    private final DataSetObservable mObservable;
    private DataSetObserver mViewPagerObserver;

    @Deprecated
    public void finishUpdate(@NonNull View r1) {
    }

    public abstract int getCount();

    public int getItemPosition(@NonNull Object r1) {
        return -1;
    }

    @Nullable
    public CharSequence getPageTitle(int r1) {
        return null;
    }

    public float getPageWidth(int r1) {
        return 1.0f;
    }

    public abstract boolean isViewFromObject(@NonNull View r1, @NonNull Object r2);

    public void restoreState(@Nullable Parcelable r1, @Nullable ClassLoader r2) {
    }

    @Nullable
    public Parcelable saveState() {
        return null;
    }

    @Deprecated
    public void setPrimaryItem(@NonNull View r1, int r2, @NonNull Object r3) {
    }

    @Deprecated
    public void startUpdate(@NonNull View r1) {
    }

    public PagerAdapter() {
        this.mObservable = new DataSetObservable();
    }

    public void startUpdate(@NonNull ViewGroup r1) {
        startUpdate(r1);
    }

    @NonNull
    public Object instantiateItem(@NonNull ViewGroup r1, int r2) {
        return instantiateItem(r1, r2);
    }

    public void destroyItem(@NonNull ViewGroup r1, int r2, @NonNull Object r3) {
        destroyItem(r1, r2, r3);
    }

    public void setPrimaryItem(@NonNull ViewGroup r1, int r2, @NonNull Object r3) {
        setPrimaryItem(r1, r2, r3);
    }

    public void finishUpdate(@NonNull ViewGroup r1) {
        finishUpdate(r1);
    }

    @NonNull
    @Deprecated
    public Object instantiateItem(@NonNull View r1, int r2) {
        throw new UnsupportedOperationException("Required method instantiateItem was not overridden");
    }

    @Deprecated
    public void destroyItem(@NonNull View r1, int r2, @NonNull Object r3) {
        throw new UnsupportedOperationException("Required method destroyItem was not overridden");
    }

    public void notifyDataSetChanged() {
        monitor-enter(this);
    L9:
        th = move-exception;
        throw th;
    L4:
        if (this.mViewPagerObserver == null) goto L6;
        this.mViewPagerObserver.onChanged();     // Catch: Throwable -> L9
    L6:
        monitor-exit(this);     // Catch: Throwable -> L9
        this.mObservable.notifyChanged();
    }

    public void registerDataSetObserver(@NonNull DataSetObserver r2) {
        this.mObservable.registerObserver(r2);
    }

    public void unregisterDataSetObserver(@NonNull DataSetObserver r2) {
        this.mObservable.unregisterObserver(r2);
    }

    void setViewPagerObserver(DataSetObserver r1) {
        monitor-enter(this);
        this.mViewPagerObserver = r1;     // Catch: Throwable -> L6
        monitor-exit(this);     // Catch: Throwable -> L6
        return;
    L6:
        th = move-exception;
        throw th;
    }
}
