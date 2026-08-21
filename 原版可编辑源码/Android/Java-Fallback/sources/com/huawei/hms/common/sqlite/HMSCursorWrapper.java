package com.huawei.hms.common.sqlite;

public class HMSCursorWrapper extends android.database.CursorWrapper implements android.database.CrossProcessCursor {
    private android.database.AbstractWindowedCursor mCursor;

    public HMSCursorWrapper(android.database.Cursor r5) {
            r4 = this;
            r4.<init>(r5)
            if (r5 == 0) goto L58
            boolean r0 = r5 instanceof android.database.CursorWrapper
            java.lang.String r1 = " is not a subclass for CursorWrapper"
            if (r0 == 0) goto L3e
            android.database.CursorWrapper r5 = (android.database.CursorWrapper) r5
            android.database.Cursor r5 = r5.getWrappedCursor()
            if (r5 == 0) goto L36
            boolean r0 = r5 instanceof android.database.AbstractWindowedCursor
            if (r0 == 0) goto L1c
            android.database.AbstractWindowedCursor r5 = (android.database.AbstractWindowedCursor) r5
            r4.mCursor = r5
            return
        L1c:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getWrappedCursor:"
            r2.append(r3)
            r2.append(r5)
            r2.append(r1)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            throw r0
        L36:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "getWrappedCursor cannot be null"
            r5.<init>(r0)
            throw r5
        L3e:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "cursor:"
            r2.append(r3)
            r2.append(r5)
            r2.append(r1)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            throw r0
        L58:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "cursor cannot be null"
            r5.<init>(r0)
            throw r5
    }

    @Override
    public void fillWindow(int r2, android.database.CursorWindow r3) {
            r1 = this;
            android.database.AbstractWindowedCursor r0 = r1.mCursor
            r0.fillWindow(r2, r3)
            return
    }

    @Override
    public android.database.CursorWindow getWindow() {
            r1 = this;
            android.database.AbstractWindowedCursor r0 = r1.mCursor
            android.database.CursorWindow r0 = r0.getWindow()
            return r0
    }

    @Override
    public android.database.Cursor getWrappedCursor() {
            r1 = this;
            android.database.AbstractWindowedCursor r0 = r1.mCursor
            return r0
    }

    @Override
    public boolean onMove(int r2, int r3) {
            r1 = this;
            android.database.AbstractWindowedCursor r0 = r1.mCursor
            boolean r2 = r0.onMove(r2, r3)
            return r2
    }

    public void setWindow(android.database.CursorWindow r2) {
            r1 = this;
            android.database.AbstractWindowedCursor r0 = r1.mCursor
            r0.setWindow(r2)
            return
    }
}
