package android.support.v4.widget;

import android.content.Context;
import android.database.ContentObserver;
import android.database.Cursor;
import android.database.DataSetObserver;
import android.os.Handler;
import android.support.annotation.RestrictTo;
import android.support.v4.widget.CursorFilter;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.Filter;
import android.widget.FilterQueryProvider;
import android.widget.Filterable;
import com.android.vending.expansion.zipfile.APEZProvider;

public abstract class CursorAdapter extends BaseAdapter implements Filterable, CursorFilter.CursorFilterClient {

    @Deprecated
    public static final int FLAG_AUTO_REQUERY = 1;
    public static final int FLAG_REGISTER_CONTENT_OBSERVER = 2;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected boolean mAutoRequery;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected ChangeObserver mChangeObserver;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected Context mContext;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected Cursor mCursor;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected CursorFilter mCursorFilter;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected DataSetObserver mDataSetObserver;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected boolean mDataValid;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected FilterQueryProvider mFilterQueryProvider;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected int mRowIDColumn;

    private class ChangeObserver extends ContentObserver {
        final CursorAdapter this$0;

        @Override
        public boolean deliverSelfNotifications() {
            return true;
        }

        ChangeObserver(CursorAdapter r1) {
            this.this$0 = r1;
            super(new Handler());
        }

        @Override
        public void onChange(boolean r1) {
            this.this$0.onContentChanged();
        }
    }

    private class MyDataSetObserver extends DataSetObserver {
        final CursorAdapter this$0;

        MyDataSetObserver(CursorAdapter r1) {
            this.this$0 = r1;
        }

        @Override
        public void onChanged() {
            CursorAdapter r0 = this.this$0;
            r0.mDataValid = true;
            r0.notifyDataSetChanged();
        }

        @Override
        public void onInvalidated() {
            CursorAdapter r0 = this.this$0;
            r0.mDataValid = false;
            r0.notifyDataSetInvalidated();
        }
    }

    public abstract void bindView(View r1, Context r2, Cursor r3);

    @Override
    public boolean hasStableIds() {
        return true;
    }

    public abstract View newView(Context r1, Cursor r2, ViewGroup r3);

    @Deprecated
    public CursorAdapter(Context r2, Cursor r3) {
        init(r2, r3, 1);
    }

    public CursorAdapter(Context r1, Cursor r2, boolean r3) {
        if (r3 == false) goto L5;
        int r32 = 1;
    L6:
        init(r1, r2, r32);
        return;
    L5:
        r32 = 2;
        goto L6
    }

    public CursorAdapter(Context r1, Cursor r2, int r3) {
        init(r1, r2, r3);
    }

    @Deprecated
    protected void init(Context r1, Cursor r2, boolean r3) {
        if (r3 == false) goto L4;
        int r32 = 1;
    L5:
        init(r1, r2, r32);
        return;
    L4:
        r32 = 2;
        goto L5
    }

    void init(Context r4, Cursor r5, int r6) {
        boolean r1 = false;
        if ((r6 & 1) != 1) goto L5;
        r6 = r6 | 2;
        this.mAutoRequery = true;
    L6:
        if (r5 == null) goto L8;
        r1 = true;
    L8:
        this.mCursor = r5;
        this.mDataValid = r1;
        this.mContext = r4;
        if (r1 == false) goto L11;
        int r42 = r5.getColumnIndexOrThrow(APEZProvider.FILEID);
    L12:
        this.mRowIDColumn = r42;
        if ((r6 & 2) != 2) goto L15;
        this.mChangeObserver = new ChangeObserver(this);
        this.mDataSetObserver = new MyDataSetObserver(this);
    L16:
        if (r1 == false) goto L24;
        ChangeObserver r43 = this.mChangeObserver;
        if (r43 == null) goto L20;
        r5.registerContentObserver(r43);
    L20:
        DataSetObserver r44 = this.mDataSetObserver;
        if (r44 == null) goto L25;
        r5.registerDataSetObserver(r44);
        return;
    L25:
        return;
    L24:
        return;
    L15:
        this.mChangeObserver = null;
        this.mDataSetObserver = null;
        goto L16
    L11:
        r42 = -1;
        goto L12
    L5:
        this.mAutoRequery = false;
        goto L6
    }

    @Override
    public Cursor getCursor() {
        return this.mCursor;
    }

    @Override
    public int getCount() {
        if (this.mDataValid == false) goto L8;
        Cursor r0 = this.mCursor;
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.getCount();
    L8:
        return 0;
    }

    @Override
    public Object getItem(int r2) {
        if (this.mDataValid == false) goto L8;
        Cursor r0 = this.mCursor;
        if (r0 == null) goto L10;
        r0.moveToPosition(r2);
        return this.mCursor;
    L10:
        return null;
    L8:
        return null;
    }

    @Override
    public long getItemId(int r4) {
        if (this.mDataValid == false) goto L10;
        Cursor r0 = this.mCursor;
        if (r0 == null) goto L10;
        if (r0.moveToPosition(r4) == false) goto L10;
        return this.mCursor.getLong(this.mRowIDColumn);
    L10:
        return 0;
    }

    @Override
    public View getView(int r2, View r3, ViewGroup r4) {
        if (this.mDataValid == false) goto L13;
        if (this.mCursor.moveToPosition(r2) == false) goto L11;
        if (r3 != null) goto L8;
        r3 = newView(this.mContext, this.mCursor, r4);
    L8:
        bindView(r3, this.mContext, this.mCursor);
        return r3;
    L11:
        throw new IllegalStateException("couldn't move cursor to position " + r2);
    L13:
        throw new IllegalStateException("this should only be called when the cursor is valid");
    }

    @Override
    public View getDropDownView(int r2, View r3, ViewGroup r4) {
        if (this.mDataValid == false) goto L9;
        this.mCursor.moveToPosition(r2);
        if (r3 != null) goto L7;
        r3 = newDropDownView(this.mContext, this.mCursor, r4);
    L7:
        bindView(r3, this.mContext, this.mCursor);
        return r3;
    L9:
        return null;
    }

    public View newDropDownView(Context r1, Cursor r2, ViewGroup r3) {
        return newView(r1, r2, r3);
    }

    @Override
    public void changeCursor(Cursor r1) {
        Cursor r12 = swapCursor(r1);
        if (r12 == null) goto L6;
        r12.close();
        return;
    }

    public Cursor swapCursor(Cursor r3) {
        Cursor r0 = this.mCursor;
        if (r3 != r0) goto L6;
        return null;
    L6:
        if (r0 == null) goto L13;
        ChangeObserver r1 = this.mChangeObserver;
        if (r1 == null) goto L10;
        r0.unregisterContentObserver(r1);
    L10:
        DataSetObserver r12 = this.mDataSetObserver;
        if (r12 == null) goto L13;
        r0.unregisterDataSetObserver(r12);
    L13:
        this.mCursor = r3;
        if (r3 == null) goto L22;
        ChangeObserver r13 = this.mChangeObserver;
        if (r13 == null) goto L18;
        r3.registerContentObserver(r13);
    L18:
        DataSetObserver r14 = this.mDataSetObserver;
        if (r14 == null) goto L21;
        r3.registerDataSetObserver(r14);
    L21:
        this.mRowIDColumn = r3.getColumnIndexOrThrow(APEZProvider.FILEID);
        this.mDataValid = true;
        notifyDataSetChanged();
    L23:
        return r0;
    L22:
        this.mRowIDColumn = -1;
        this.mDataValid = false;
        notifyDataSetInvalidated();
        goto L23
    }

    @Override
    public CharSequence convertToString(Cursor r1) {
        if (r1 != null) goto L5;
        return "";
    L5:
        return r1.toString();
    }

    @Override
    public Cursor runQueryOnBackgroundThread(CharSequence r2) {
        FilterQueryProvider r0 = this.mFilterQueryProvider;
        if (r0 == null) goto L7;
        return r0.runQuery(r2);
    L7:
        return this.mCursor;
    }

    @Override
    public Filter getFilter() {
        if (this.mCursorFilter != null) goto L6;
        this.mCursorFilter = new CursorFilter(this);
    L6:
        return this.mCursorFilter;
    }

    public FilterQueryProvider getFilterQueryProvider() {
        return this.mFilterQueryProvider;
    }

    public void setFilterQueryProvider(FilterQueryProvider r1) {
        this.mFilterQueryProvider = r1;
    }

    protected void onContentChanged() {
        if (this.mAutoRequery == false) goto L10;
        Cursor r0 = this.mCursor;
        if (r0 != null) goto L7;
        return;
    L7:
        if (r0.isClosed() == true) goto L12;
        this.mDataValid = this.mCursor.requery();
        return;
    L12:
        return;
    }
}
