package com.huawei.hms.common.data;

public class DataBufferRef {
    protected final com.huawei.hms.common.data.DataHolder mDataHolder;
    protected int mDataRow;
    private int windowIndex;

    public DataBufferRef(com.huawei.hms.common.data.DataHolder r2, int r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "dataHolder cannot be null"
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r2, r0)
            r1.mDataHolder = r2
            r1.getWindowIndex(r3)
            return
    }

    protected void copyToBuffer(java.lang.String r4, android.database.CharArrayBuffer r5) {
            r3 = this;
            com.huawei.hms.common.data.DataHolder r0 = r3.mDataHolder
            int r1 = r3.mDataRow
            int r2 = r3.windowIndex
            r0.copyToBuffer(r4, r1, r2, r5)
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof com.huawei.hms.common.data.DataBufferRef
            r1 = 0
            if (r0 == 0) goto L1a
            com.huawei.hms.common.data.DataBufferRef r4 = (com.huawei.hms.common.data.DataBufferRef) r4
            int r0 = r4.mDataRow
            int r2 = r3.mDataRow
            if (r0 != r2) goto L1a
            int r0 = r4.windowIndex
            int r2 = r3.windowIndex
            if (r0 != r2) goto L1a
            com.huawei.hms.common.data.DataHolder r4 = r4.mDataHolder
            com.huawei.hms.common.data.DataHolder r0 = r3.mDataHolder
            if (r4 != r0) goto L1a
            r1 = 1
        L1a:
            return r1
    }

    protected boolean getBoolean(java.lang.String r5) {
            r4 = this;
            com.huawei.hms.common.data.DataHolder r0 = r4.mDataHolder
            int r1 = r4.mDataRow
            int r2 = r4.windowIndex
            java.lang.String r3 = "type_boolean"
            java.lang.Object r5 = r0.getValue(r5, r1, r2, r3)
            if (r5 == 0) goto L15
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            return r5
        L15:
            r5 = 0
            return r5
    }

    protected byte[] getByteArray(java.lang.String r5) {
            r4 = this;
            com.huawei.hms.common.data.DataHolder r0 = r4.mDataHolder
            int r1 = r4.mDataRow
            int r2 = r4.windowIndex
            java.lang.String r3 = "type_byte_array"
            java.lang.Object r5 = r0.getValue(r5, r1, r2, r3)
            if (r5 == 0) goto L11
            byte[] r5 = (byte[]) r5
            return r5
        L11:
            r5 = 0
            return r5
    }

    protected int getDataRow() {
            r1 = this;
            int r0 = r1.mDataRow
            return r0
    }

    protected double getDouble(java.lang.String r5) {
            r4 = this;
            com.huawei.hms.common.data.DataHolder r0 = r4.mDataHolder
            int r1 = r4.mDataRow
            int r2 = r4.windowIndex
            java.lang.String r3 = "type_double"
            java.lang.Object r5 = r0.getValue(r5, r1, r2, r3)
            if (r5 == 0) goto L15
            java.lang.Double r5 = (java.lang.Double) r5
            double r0 = r5.doubleValue()
            return r0
        L15:
            r0 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            return r0
    }

    protected float getFloat(java.lang.String r5) {
            r4 = this;
            com.huawei.hms.common.data.DataHolder r0 = r4.mDataHolder
            int r1 = r4.mDataRow
            int r2 = r4.windowIndex
            java.lang.String r3 = "type_float"
            java.lang.Object r5 = r0.getValue(r5, r1, r2, r3)
            if (r5 == 0) goto L15
            java.lang.Float r5 = (java.lang.Float) r5
            float r5 = r5.floatValue()
            return r5
        L15:
            r5 = -1082130432(0xffffffffbf800000, float:-1.0)
            return r5
    }

    protected int getInteger(java.lang.String r5) {
            r4 = this;
            com.huawei.hms.common.data.DataHolder r0 = r4.mDataHolder
            int r1 = r4.mDataRow
            int r2 = r4.windowIndex
            java.lang.String r3 = "type_int"
            java.lang.Object r5 = r0.getValue(r5, r1, r2, r3)
            if (r5 == 0) goto L15
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            return r5
        L15:
            r5 = -1
            return r5
    }

    protected long getLong(java.lang.String r5) {
            r4 = this;
            com.huawei.hms.common.data.DataHolder r0 = r4.mDataHolder
            int r1 = r4.mDataRow
            int r2 = r4.windowIndex
            java.lang.String r3 = "type_long"
            java.lang.Object r5 = r0.getValue(r5, r1, r2, r3)
            if (r5 == 0) goto L15
            java.lang.Long r5 = (java.lang.Long) r5
            long r0 = r5.longValue()
            return r0
        L15:
            r0 = -1
            return r0
    }

    protected java.lang.String getString(java.lang.String r5) {
            r4 = this;
            com.huawei.hms.common.data.DataHolder r0 = r4.mDataHolder
            int r1 = r4.mDataRow
            int r2 = r4.windowIndex
            java.lang.String r3 = "type_string"
            java.lang.Object r5 = r0.getValue(r5, r1, r2, r3)
            if (r5 == 0) goto L11
            java.lang.String r5 = (java.lang.String) r5
            return r5
        L11:
            java.lang.String r5 = ""
            return r5
    }

    protected final void getWindowIndex(int r3) {
            r2 = this;
            if (r3 < 0) goto Lc
            com.huawei.hms.common.data.DataHolder r0 = r2.mDataHolder
            int r0 = r0.getCount()
            if (r3 >= r0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            java.lang.String r1 = "rowNum is out of index"
            com.huawei.hms.common.internal.Preconditions.checkArgument(r0, r1)
            r2.mDataRow = r3
            com.huawei.hms.common.data.DataHolder r0 = r2.mDataHolder
            int r3 = r0.getWindowIndex(r3)
            r2.windowIndex = r3
            return
    }

    public boolean hasColumn(java.lang.String r2) {
            r1 = this;
            com.huawei.hms.common.data.DataHolder r0 = r1.mDataHolder
            boolean r2 = r0.hasColumn(r2)
            return r2
    }

    protected boolean hasNull(java.lang.String r4) {
            r3 = this;
            com.huawei.hms.common.data.DataHolder r0 = r3.mDataHolder
            int r1 = r3.mDataRow
            int r2 = r3.windowIndex
            boolean r4 = r0.hasNull(r4, r1, r2)
            return r4
    }

    public int hashCode() {
            r3 = this;
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r1 = r3.mDataRow
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            int r1 = r3.windowIndex
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            com.huawei.hms.common.data.DataHolder r1 = r3.mDataHolder
            r2 = 2
            r0[r2] = r1
            int r0 = com.huawei.hms.common.internal.Objects.hashCode(r0)
            return r0
    }

    public boolean isDataValid() {
            r1 = this;
            com.huawei.hms.common.data.DataHolder r0 = r1.mDataHolder
            boolean r0 = r0.isClosed()
            r0 = r0 ^ 1
            return r0
    }

    protected android.net.Uri parseUri(java.lang.String r5) {
            r4 = this;
            com.huawei.hms.common.data.DataHolder r0 = r4.mDataHolder
            int r1 = r4.mDataRow
            int r2 = r4.windowIndex
            java.lang.String r3 = "type_string"
            java.lang.Object r5 = r0.getValue(r5, r1, r2, r3)
            java.lang.String r5 = (java.lang.String) r5
            if (r5 != 0) goto L12
            r5 = 0
            return r5
        L12:
            android.net.Uri r5 = android.net.Uri.parse(r5)
            return r5
    }
}
