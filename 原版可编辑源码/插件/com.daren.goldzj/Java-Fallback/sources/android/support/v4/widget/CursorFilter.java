package android.support.v4.widget;

import android.database.Cursor;
import android.widget.Filter;

class CursorFilter extends Filter {
    CursorFilterClient mClient;

    interface CursorFilterClient {
        void changeCursor(Cursor r1);

        CharSequence convertToString(Cursor r1);

        Cursor getCursor();

        Cursor runQueryOnBackgroundThread(CharSequence r1);
    }

    CursorFilter(CursorFilterClient r1) {
        this.mClient = r1;
    }

    @Override
    public CharSequence convertResultToString(Object r2) {
        return this.mClient.convertToString((Cursor) r2);
    }

    @Override
    protected Filter.FilterResults performFiltering(CharSequence r3) {
        Cursor r32 = this.mClient.runQueryOnBackgroundThread(r3);
        Filter.FilterResults r0 = new Filter.FilterResults();
        if (r32 == null) goto L5;
        r0.count = r32.getCount();
        r0.values = r32;
    L6:
        return r0;
    L5:
        r0.count = 0;
        r0.values = null;
        goto L6
    }

    @Override
    protected void publishResults(CharSequence r2, Filter.FilterResults r3) {
        Cursor r22 = this.mClient.getCursor();
        if (r3.values != null) goto L5;
        return;
    L5:
        if (r3.values == r22) goto L9;
        this.mClient.changeCursor((Cursor) r3.values);
        return;
    }
}
