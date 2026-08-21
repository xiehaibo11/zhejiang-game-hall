package com.huawei.hms.common.data;

public final class DataHolder extends com.huawei.hms.common.internal.safeparcel.AbstractSafeParcelable implements java.io.Closeable {
    public static final android.os.Parcelable.Creator<com.huawei.hms.common.data.DataHolder> CREATOR = null;
    private static final java.lang.String TAG = "DataHolder";
    public static final java.lang.String TYPE_BOOLEAN = "type_boolean";
    public static final java.lang.String TYPE_BYTE_ARRAY = "type_byte_array";
    public static final java.lang.String TYPE_DOUBLE = "type_double";
    public static final java.lang.String TYPE_FLOAT = "type_float";
    public static final java.lang.String TYPE_INT = "type_int";
    public static final java.lang.String TYPE_LONG = "type_long";
    public static final java.lang.String TYPE_STRING = "type_string";
    private static final com.huawei.hms.common.data.DataHolder.Builder builder = null;
    private java.lang.String[] columns;
    private android.os.Bundle columnsBundle;
    private android.database.CursorWindow[] cursorWindows;
    private int dataCount;
    private boolean isInstance;
    private boolean mClosed;
    private android.os.Bundle metadata;
    private int[] perCursorCounts;
    private int statusCode;
    private int version;

    static class 1 {
    }

    public static class Builder {
        private java.lang.String[] builderColumns;
        private final java.util.ArrayList<java.util.HashMap<java.lang.String, java.lang.Object>> dataCollectionList;
        private final java.lang.String type;
        private final java.util.HashMap<java.lang.Object, java.lang.Integer> typeAndDataCollectionCountMapping;

        private Builder(java.lang.String[] r2, java.lang.String r3) {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "builderColumnsP cannot be null"
                com.huawei.hms.common.internal.Preconditions.checkNotNull(r2, r0)
                r1.builderColumns = r2
                java.util.ArrayList r2 = new java.util.ArrayList
                r2.<init>()
                r1.dataCollectionList = r2
                r1.type = r3
                java.util.HashMap r2 = new java.util.HashMap
                r2.<init>()
                r1.typeAndDataCollectionCountMapping = r2
                return
        }

        Builder(java.lang.String[] r1, java.lang.String r2, com.huawei.hms.common.data.DataHolder.1 r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        Builder(java.lang.String[] r1, java.lang.String r2, com.huawei.hms.common.data.DataHolderBuilderCreator r3) {
                r0 = this;
                r2 = 0
                r0.<init>(r1, r2)
                return
        }

        static java.lang.String[] access$200(com.huawei.hms.common.data.DataHolder.Builder r0) {
                java.lang.String[] r0 = r0.builderColumns
                return r0
        }

        static java.util.ArrayList access$300(com.huawei.hms.common.data.DataHolder.Builder r0) {
                java.util.ArrayList<java.util.HashMap<java.lang.String, java.lang.Object>> r0 = r0.dataCollectionList
                return r0
        }

        public com.huawei.hms.common.data.DataHolder build(int r3) {
                r2 = this;
                com.huawei.hms.common.data.DataHolder r0 = new com.huawei.hms.common.data.DataHolder
                r1 = 0
                r0.<init>(r2, r3, r1, r1)
                return r0
        }

        public com.huawei.hms.common.data.DataHolder build(int r8, android.os.Bundle r9) {
                r7 = this;
                com.huawei.hms.common.data.DataHolder r6 = new com.huawei.hms.common.data.DataHolder
                r4 = -1
                r5 = 0
                r0 = r6
                r1 = r7
                r2 = r8
                r3 = r9
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }

        public com.huawei.hms.common.data.DataHolder.Builder setDataForContentValuesHashMap(java.util.HashMap<java.lang.String, java.lang.Object> r6) {
                r5 = this;
                java.lang.String r0 = "contentValuesHashMap cannot be null"
                com.huawei.hms.common.internal.Preconditions.checkNotNull(r6, r0)
                java.lang.String r0 = r5.type
                r1 = 0
                if (r0 == 0) goto L32
                java.lang.Object r0 = r6.get(r0)
                if (r0 == 0) goto L32
                java.util.HashMap<java.lang.Object, java.lang.Integer> r2 = r5.typeAndDataCollectionCountMapping
                java.lang.Object r2 = r2.get(r0)
                java.lang.Integer r2 = (java.lang.Integer) r2
                if (r2 == 0) goto L23
                int r1 = r2.intValue()
                r0 = 1
                r4 = r1
                r1 = r0
                r0 = r4
                goto L33
            L23:
                java.util.HashMap<java.lang.Object, java.lang.Integer> r2 = r5.typeAndDataCollectionCountMapping
                java.util.ArrayList<java.util.HashMap<java.lang.String, java.lang.Object>> r3 = r5.dataCollectionList
                int r3 = r3.size()
                java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
                r2.put(r0, r3)
            L32:
                r0 = r1
            L33:
                if (r1 == 0) goto L40
                java.util.ArrayList<java.util.HashMap<java.lang.String, java.lang.Object>> r1 = r5.dataCollectionList
                r1.remove(r0)
                java.util.ArrayList<java.util.HashMap<java.lang.String, java.lang.Object>> r1 = r5.dataCollectionList
                r1.add(r0, r6)
                goto L45
            L40:
                java.util.ArrayList<java.util.HashMap<java.lang.String, java.lang.Object>> r0 = r5.dataCollectionList
                r0.add(r6)
            L45:
                return r5
        }

        public com.huawei.hms.common.data.DataHolder.Builder withRow(android.content.ContentValues r4) {
                r3 = this;
                java.lang.String r0 = "contentValues cannot be null"
                com.huawei.hms.common.internal.Preconditions.checkNotNull(r4, r0)
                java.util.HashMap r0 = new java.util.HashMap
                int r1 = r4.size()
                r0.<init>(r1)
                java.util.Set r4 = r4.valueSet()
                java.util.Iterator r4 = r4.iterator()
            L16:
                boolean r1 = r4.hasNext()
                if (r1 == 0) goto L2e
                java.lang.Object r1 = r4.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r2 = r1.getKey()
                java.lang.Object r1 = r1.getValue()
                r0.put(r2, r1)
                goto L16
            L2e:
                com.huawei.hms.common.data.DataHolder$Builder r4 = r3.setDataForContentValuesHashMap(r0)
                return r4
        }
    }

    public static class DataHolderException extends java.lang.RuntimeException {
        public DataHolderException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    static {
            com.huawei.hms.common.data.DataHolderCreator r0 = new com.huawei.hms.common.data.DataHolderCreator
            r0.<init>()
            com.huawei.hms.common.data.DataHolder.CREATOR = r0
            com.huawei.hms.common.data.DataHolderBuilderCreator r0 = new com.huawei.hms.common.data.DataHolderBuilderCreator
            r1 = 0
            java.lang.String[] r1 = new java.lang.String[r1]
            r2 = 0
            r0.<init>(r1, r2)
            com.huawei.hms.common.data.DataHolder.builder = r0
            return
    }

    DataHolder(int r2, java.lang.String[] r3, android.database.CursorWindow[] r4, int r5, android.os.Bundle r6) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mClosed = r0
            r0 = 1
            r1.isInstance = r0
            r1.version = r2
            r1.columns = r3
            r1.cursorWindows = r4
            r1.statusCode = r5
            r1.metadata = r6
            r1.collectColumsAndCount()
            return
    }

    public DataHolder(android.database.Cursor r2, int r3, android.os.Bundle r4) {
            r1 = this;
            com.huawei.hms.common.sqlite.HMSCursorWrapper r0 = new com.huawei.hms.common.sqlite.HMSCursorWrapper
            r0.<init>(r2)
            r1.<init>(r0, r3, r4)
            return
    }

    private DataHolder(com.huawei.hms.common.data.DataHolder.Builder r2, int r3, android.os.Bundle r4) {
            r1 = this;
            java.lang.String[] r4 = com.huawei.hms.common.data.DataHolder.Builder.access$200(r2)
            r0 = -1
            android.database.CursorWindow[] r2 = getCursorWindows(r2, r0)
            r0 = 0
            r1.<init>(r4, r2, r3, r0)
            return
    }

    private DataHolder(com.huawei.hms.common.data.DataHolder.Builder r2, int r3, android.os.Bundle r4, int r5) {
            r1 = this;
            java.lang.String[] r5 = com.huawei.hms.common.data.DataHolder.Builder.access$200(r2)
            r0 = -1
            android.database.CursorWindow[] r2 = getCursorWindows(r2, r0)
            r1.<init>(r5, r2, r3, r4)
            return
    }

    DataHolder(com.huawei.hms.common.data.DataHolder.Builder r1, int r2, android.os.Bundle r3, int r4, com.huawei.hms.common.data.DataHolder.1 r5) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    DataHolder(com.huawei.hms.common.data.DataHolder.Builder r1, int r2, android.os.Bundle r3, com.huawei.hms.common.data.DataHolder.1 r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    private DataHolder(com.huawei.hms.common.sqlite.HMSCursorWrapper r2, int r3, android.os.Bundle r4) {
            r1 = this;
            java.lang.String[] r0 = r2.getColumnNames()
            android.database.CursorWindow[] r2 = getCursorWindows(r2)
            r1.<init>(r0, r2, r3, r4)
            return
    }

    public DataHolder(java.lang.String[] r2, android.database.CursorWindow[] r3, int r4, android.os.Bundle r5) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "columnsP cannot be null"
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r2, r0)
            java.lang.String r0 = "cursorWindowP cannot be null"
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r2, r0)
            r0 = 0
            r1.mClosed = r0
            r0 = 1
            r1.isInstance = r0
            r1.version = r0
            r1.columns = r2
            r1.cursorWindows = r3
            r1.statusCode = r4
            r1.metadata = r5
            r1.collectColumsAndCount()
            return
    }

    public static com.huawei.hms.common.data.DataHolder.Builder builder(java.lang.String[] r2) {
            com.huawei.hms.common.data.DataHolder$Builder r0 = new com.huawei.hms.common.data.DataHolder$Builder
            r1 = 0
            r0.<init>(r2, r1, r1)
            return r0
    }

    private void checkAvailable(java.lang.String r2, int r3) {
            r1 = this;
            android.os.Bundle r0 = r1.columnsBundle
            if (r0 == 0) goto L30
            boolean r0 = r0.containsKey(r2)
            if (r0 != 0) goto Lb
            goto L30
        Lb:
            boolean r2 = r1.isClosed()
            if (r2 == 0) goto L14
            java.lang.String r2 = "buffer has been closed"
            goto L41
        L14:
            if (r3 < 0) goto L1e
            int r2 = r1.dataCount
            if (r3 < r2) goto L1b
            goto L1e
        L1b:
            java.lang.String r2 = ""
            goto L41
        L1e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "row is out of index:"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            goto L41
        L30:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "cannot find column: "
            r3.append(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
        L41:
            boolean r3 = r2.isEmpty()
            com.huawei.hms.common.internal.Preconditions.checkArgument(r3, r2)
            return
    }

    public static com.huawei.hms.common.data.DataHolder empty(int r3) {
            com.huawei.hms.common.data.DataHolder r0 = new com.huawei.hms.common.data.DataHolder
            com.huawei.hms.common.data.DataHolder$Builder r1 = com.huawei.hms.common.data.DataHolder.builder
            r2 = 0
            r0.<init>(r1, r3, r2)
            return r0
    }

    private static android.database.CursorWindow[] getCursorWindows(com.huawei.hms.common.data.DataHolder.Builder r2, int r3) {
            java.lang.String[] r0 = com.huawei.hms.common.data.DataHolder.Builder.access$200(r2)
            int r0 = r0.length
            r1 = 0
            if (r0 != 0) goto Lb
            android.database.CursorWindow[] r2 = new android.database.CursorWindow[r1]
            return r2
        Lb:
            if (r3 < 0) goto L17
            java.util.ArrayList r0 = com.huawei.hms.common.data.DataHolder.Builder.access$300(r2)
            int r0 = r0.size()
            if (r3 < r0) goto L1f
        L17:
            java.util.ArrayList r3 = com.huawei.hms.common.data.DataHolder.Builder.access$300(r2)
            int r3 = r3.size()
        L1f:
            java.util.ArrayList r0 = com.huawei.hms.common.data.DataHolder.Builder.access$300(r2)
            java.util.List r0 = r0.subList(r1, r3)
            java.util.ArrayList r2 = iterCursorWindow(r2, r3, r0)
            int r3 = r2.size()
            android.database.CursorWindow[] r3 = new android.database.CursorWindow[r3]
            java.lang.Object[] r2 = r2.toArray(r3)
            android.database.CursorWindow[] r2 = (android.database.CursorWindow[]) r2
            return r2
    }

    private static android.database.CursorWindow[] getCursorWindows(com.huawei.hms.common.sqlite.HMSCursorWrapper r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            int r2 = r5.getCount()     // Catch: java.lang.Throwable -> L3d
            android.database.CursorWindow r3 = r5.getWindow()     // Catch: java.lang.Throwable -> L3d
            if (r3 == 0) goto L25
            int r4 = r3.getStartPosition()     // Catch: java.lang.Throwable -> L3d
            if (r4 != 0) goto L25
            r3.acquireReference()     // Catch: java.lang.Throwable -> L3d
            r4 = 0
            r5.setWindow(r4)     // Catch: java.lang.Throwable -> L3d
            r0.add(r3)     // Catch: java.lang.Throwable -> L3d
            int r3 = r3.getNumRows()     // Catch: java.lang.Throwable -> L3d
            goto L26
        L25:
            r3 = r1
        L26:
            java.util.ArrayList r2 = iterCursorWrapper(r5, r3, r2)     // Catch: java.lang.Throwable -> L3d
            r0.addAll(r2)     // Catch: java.lang.Throwable -> L3d
            int r2 = r0.size()     // Catch: java.lang.Throwable -> L3d
            android.database.CursorWindow[] r2 = new android.database.CursorWindow[r2]     // Catch: java.lang.Throwable -> L3d
            java.lang.Object[] r0 = r0.toArray(r2)     // Catch: java.lang.Throwable -> L3d
            android.database.CursorWindow[] r0 = (android.database.CursorWindow[]) r0     // Catch: java.lang.Throwable -> L3d
            r5.close()
            return r0
        L3d:
            r0 = move-exception
            java.lang.String r2 = "DataHolder"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e
            r3.<init>()     // Catch: java.lang.Throwable -> L5e
            java.lang.String r4 = "fail to getCursorWindows: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L5e
            r3.append(r0)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L5e
            com.huawei.hms.support.log.HMSLog.e(r2, r0)     // Catch: java.lang.Throwable -> L5e
            android.database.CursorWindow[] r0 = new android.database.CursorWindow[r1]     // Catch: java.lang.Throwable -> L5e
            r5.close()
            return r0
        L5e:
            r0 = move-exception
            r5.close()
            throw r0
    }

    private static java.util.ArrayList<android.database.CursorWindow> iterCursorWindow(com.huawei.hms.common.data.DataHolder.Builder r10, int r11, java.util.List r12) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.database.CursorWindow r1 = new android.database.CursorWindow
            r2 = 0
            r1.<init>(r2)
            java.lang.String[] r3 = com.huawei.hms.common.data.DataHolder.Builder.access$200(r10)
            int r3 = r3.length
            r1.setNumColumns(r3)
            r0.add(r1)
            r3 = 0
            r4 = r3
        L18:
            if (r4 >= r11) goto Lb0
            boolean r5 = r1.allocRow()     // Catch: java.lang.RuntimeException -> L9a
            java.lang.String r6 = "DataHolder"
            if (r5 != 0) goto L46
            java.lang.String r1 = "Failed to allocate a row"
            com.huawei.hms.support.log.HMSLog.d(r6, r1)     // Catch: java.lang.RuntimeException -> L9a
            android.database.CursorWindow r1 = new android.database.CursorWindow     // Catch: java.lang.RuntimeException -> L9a
            r1.<init>(r2)     // Catch: java.lang.RuntimeException -> L9a
            r1.setStartPosition(r4)     // Catch: java.lang.RuntimeException -> L9a
            java.lang.String[] r5 = com.huawei.hms.common.data.DataHolder.Builder.access$200(r10)     // Catch: java.lang.RuntimeException -> L9a
            int r5 = r5.length     // Catch: java.lang.RuntimeException -> L9a
            r1.setNumColumns(r5)     // Catch: java.lang.RuntimeException -> L9a
            boolean r5 = r1.allocRow()     // Catch: java.lang.RuntimeException -> L9a
            if (r5 != 0) goto L43
            java.lang.String r10 = "Failed to retry to allocate a row"
            com.huawei.hms.support.log.HMSLog.e(r6, r10)     // Catch: java.lang.RuntimeException -> L9a
            return r0
        L43:
            r0.add(r1)     // Catch: java.lang.RuntimeException -> L9a
        L46:
            java.lang.Object r5 = r12.get(r4)     // Catch: java.lang.RuntimeException -> L9a
            java.util.HashMap r5 = (java.util.HashMap) r5     // Catch: java.lang.RuntimeException -> L9a
            r7 = 1
            r8 = r3
        L4e:
            java.lang.String[] r9 = com.huawei.hms.common.data.DataHolder.Builder.access$200(r10)     // Catch: java.lang.RuntimeException -> L9a
            int r9 = r9.length     // Catch: java.lang.RuntimeException -> L9a
            if (r8 >= r9) goto L69
            java.lang.String[] r7 = com.huawei.hms.common.data.DataHolder.Builder.access$200(r10)     // Catch: java.lang.RuntimeException -> L9a
            r7 = r7[r8]     // Catch: java.lang.RuntimeException -> L9a
            java.lang.Object r7 = r5.get(r7)     // Catch: java.lang.RuntimeException -> L9a
            boolean r7 = putValue(r1, r7, r4, r8)     // Catch: java.lang.RuntimeException -> L9a
            if (r7 != 0) goto L66
            goto L69
        L66:
            int r8 = r8 + 1
            goto L4e
        L69:
            if (r7 != 0) goto L96
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.RuntimeException -> L9a
            r11.<init>()     // Catch: java.lang.RuntimeException -> L9a
            java.lang.String r12 = "fail to put data for row "
            r11.append(r12)     // Catch: java.lang.RuntimeException -> L9a
            r11.append(r4)     // Catch: java.lang.RuntimeException -> L9a
            java.lang.String r11 = r11.toString()     // Catch: java.lang.RuntimeException -> L9a
            com.huawei.hms.support.log.HMSLog.d(r6, r11)     // Catch: java.lang.RuntimeException -> L9a
            r1.freeLastRow()     // Catch: java.lang.RuntimeException -> L9a
            android.database.CursorWindow r11 = new android.database.CursorWindow     // Catch: java.lang.RuntimeException -> L9a
            r11.<init>(r2)     // Catch: java.lang.RuntimeException -> L9a
            r11.setStartPosition(r4)     // Catch: java.lang.RuntimeException -> L9a
            java.lang.String[] r10 = com.huawei.hms.common.data.DataHolder.Builder.access$200(r10)     // Catch: java.lang.RuntimeException -> L9a
            int r10 = r10.length     // Catch: java.lang.RuntimeException -> L9a
            r11.setNumColumns(r10)     // Catch: java.lang.RuntimeException -> L9a
            r0.add(r11)     // Catch: java.lang.RuntimeException -> L9a
            goto Lb0
        L96:
            int r4 = r4 + 1
            goto L18
        L9a:
            r10 = move-exception
            java.util.Iterator r11 = r0.iterator()
        L9f:
            boolean r12 = r11.hasNext()
            if (r12 == 0) goto Laf
            java.lang.Object r12 = r11.next()
            android.database.CursorWindow r12 = (android.database.CursorWindow) r12
            r12.close()
            goto L9f
        Laf:
            throw r10
        Lb0:
            return r0
    }

    private static java.util.ArrayList<android.database.CursorWindow> iterCursorWrapper(com.huawei.hms.common.sqlite.HMSCursorWrapper r3, int r4, int r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L5:
            if (r4 >= r5) goto L3a
            boolean r1 = r3.moveToPosition(r4)
            if (r1 == 0) goto L3a
            android.database.CursorWindow r1 = r3.getWindow()
            r2 = 0
            if (r1 != 0) goto L20
            android.database.CursorWindow r1 = new android.database.CursorWindow
            r1.<init>(r2)
            r1.setStartPosition(r4)
            r3.fillWindow(r4, r1)
            goto L26
        L20:
            r1.acquireReference()
            r3.setWindow(r2)
        L26:
            int r4 = r1.getNumRows()
            if (r4 != 0) goto L2d
            goto L3a
        L2d:
            r0.add(r1)
            int r4 = r1.getNumRows()
            int r1 = r1.getStartPosition()
            int r4 = r4 + r1
            goto L5
        L3a:
            return r0
    }

    private static boolean putValue(android.database.CursorWindow r2, java.lang.Object r3, int r4, int r5) throws java.lang.IllegalArgumentException {
            if (r3 != 0) goto L7
            boolean r2 = r2.putNull(r4, r5)
            return r2
        L7:
            boolean r0 = r3 instanceof java.lang.Boolean
            if (r0 == 0) goto L1d
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto L16
            r0 = 1
            goto L18
        L16:
            r0 = 0
        L18:
            boolean r2 = r2.putLong(r0, r4, r5)
            return r2
        L1d:
            boolean r0 = r3 instanceof java.lang.Integer
            if (r0 == 0) goto L2d
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            long r0 = (long) r3
            boolean r2 = r2.putLong(r0, r4, r5)
            return r2
        L2d:
            boolean r0 = r3 instanceof java.lang.Long
            if (r0 == 0) goto L3c
            java.lang.Long r3 = (java.lang.Long) r3
            long r0 = r3.longValue()
            boolean r2 = r2.putLong(r0, r4, r5)
            return r2
        L3c:
            boolean r0 = r3 instanceof java.lang.Float
            if (r0 == 0) goto L4c
            java.lang.Float r3 = (java.lang.Float) r3
            float r3 = r3.floatValue()
            double r0 = (double) r3
            boolean r2 = r2.putDouble(r0, r4, r5)
            return r2
        L4c:
            boolean r0 = r3 instanceof java.lang.Double
            if (r0 == 0) goto L5b
            java.lang.Double r3 = (java.lang.Double) r3
            double r0 = r3.doubleValue()
            boolean r2 = r2.putDouble(r0, r4, r5)
            return r2
        L5b:
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L66
            java.lang.String r3 = (java.lang.String) r3
            boolean r2 = r2.putString(r3, r4, r5)
            return r2
        L66:
            boolean r0 = r3 instanceof byte[]
            if (r0 == 0) goto L71
            byte[] r3 = (byte[]) r3
            boolean r2 = r2.putBlob(r3, r4, r5)
            return r2
        L71:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "unsupported type for column: "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            r2.<init>(r3)
            throw r2
    }

    @Override
    public final synchronized void close() {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.mClosed     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L16
            android.database.CursorWindow[] r0 = r4.cursorWindows     // Catch: java.lang.Throwable -> L18
            int r1 = r0.length     // Catch: java.lang.Throwable -> L18
            r2 = 0
        L9:
            if (r2 >= r1) goto L13
            r3 = r0[r2]     // Catch: java.lang.Throwable -> L18
            r3.close()     // Catch: java.lang.Throwable -> L18
            int r2 = r2 + 1
            goto L9
        L13:
            r0 = 1
            r4.mClosed = r0     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r4)
            return
        L18:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final void collectColumsAndCount() {
            r4 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            r4.columnsBundle = r0
            r0 = 0
            r1 = r0
        L9:
            java.lang.String[] r2 = r4.columns
            int r3 = r2.length
            if (r1 >= r3) goto L18
            android.os.Bundle r3 = r4.columnsBundle
            r2 = r2[r1]
            r3.putInt(r2, r1)
            int r1 = r1 + 1
            goto L9
        L18:
            android.database.CursorWindow[] r1 = r4.cursorWindows
            int r1 = r1.length
            int[] r1 = new int[r1]
            r4.perCursorCounts = r1
            r1 = r0
        L20:
            android.database.CursorWindow[] r2 = r4.cursorWindows
            int r3 = r2.length
            if (r0 >= r3) goto L3b
            int[] r3 = r4.perCursorCounts
            r3[r0] = r1
            r1 = r2[r0]
            int r1 = r1.getStartPosition()
            android.database.CursorWindow[] r2 = r4.cursorWindows
            r2 = r2[r0]
            int r2 = r2.getNumRows()
            int r1 = r1 + r2
            int r0 = r0 + 1
            goto L20
        L3b:
            r4.dataCount = r1
            return
    }

    public final void copyToBuffer(java.lang.String r2, int r3, int r4, android.database.CharArrayBuffer r5) {
            r1 = this;
            r1.checkAvailable(r2, r3)
            android.database.CursorWindow[] r0 = r1.cursorWindows
            r4 = r0[r4]
            android.os.Bundle r0 = r1.columnsBundle
            int r2 = r0.getInt(r2)
            r4.copyStringToBuffer(r3, r2, r5)
            return
    }

    protected final void finalize() throws java.lang.Throwable {
            r1 = this;
            boolean r0 = r1.isInstance
            if (r0 == 0) goto L12
            android.database.CursorWindow[] r0 = r1.cursorWindows
            int r0 = r0.length
            if (r0 <= 0) goto L12
            boolean r0 = r1.isClosed()
            if (r0 != 0) goto L12
            r1.close()
        L12:
            super.finalize()
            return
    }

    public final int getCount() {
            r1 = this;
            int r0 = r1.dataCount
            return r0
    }

    public final android.os.Bundle getMetadata() {
            r1 = this;
            android.os.Bundle r0 = r1.metadata
            return r0
    }

    public final int getStatusCode() {
            r1 = this;
            int r0 = r1.statusCode
            return r0
    }

    public final java.lang.Object getValue(java.lang.String r4, int r5, int r6, java.lang.String r7) {
            r3 = this;
            int r0 = r7.hashCode()
            r1 = 1
            r2 = 0
            switch(r0) {
                case -1092271849: goto L46;
                case -870070237: goto L3c;
                case -675993238: goto L32;
                case 445002870: goto L28;
                case 519136353: goto L1e;
                case 878975158: goto L14;
                case 1300508295: goto La;
                default: goto L9;
            }
        L9:
            goto L50
        La:
            java.lang.String r0 = "type_byte_array"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L50
            r7 = 6
            goto L51
        L14:
            java.lang.String r0 = "type_string"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L50
            r7 = 2
            goto L51
        L1e:
            java.lang.String r0 = "type_long"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L50
            r7 = r1
            goto L51
        L28:
            java.lang.String r0 = "type_double"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L50
            r7 = 5
            goto L51
        L32:
            java.lang.String r0 = "type_int"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L50
            r7 = r2
            goto L51
        L3c:
            java.lang.String r0 = "type_boolean"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L50
            r7 = 3
            goto L51
        L46:
            java.lang.String r0 = "type_float"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L50
            r7 = 4
            goto L51
        L50:
            r7 = -1
        L51:
            switch(r7) {
                case 0: goto Lda;
                case 1: goto Lc4;
                case 2: goto Lb2;
                case 3: goto L94;
                case 4: goto L7e;
                case 5: goto L68;
                case 6: goto L56;
                default: goto L54;
            }
        L54:
            r4 = 0
            return r4
        L56:
            r3.checkAvailable(r4, r5)
            android.database.CursorWindow[] r7 = r3.cursorWindows
            r6 = r7[r6]
            android.os.Bundle r7 = r3.columnsBundle
            int r4 = r7.getInt(r4)
            byte[] r4 = r6.getBlob(r5, r4)
            return r4
        L68:
            r3.checkAvailable(r4, r5)
            android.database.CursorWindow[] r7 = r3.cursorWindows
            r6 = r7[r6]
            android.os.Bundle r7 = r3.columnsBundle
            int r4 = r7.getInt(r4)
            double r4 = r6.getDouble(r5, r4)
            java.lang.Double r4 = java.lang.Double.valueOf(r4)
            return r4
        L7e:
            r3.checkAvailable(r4, r5)
            android.database.CursorWindow[] r7 = r3.cursorWindows
            r6 = r7[r6]
            android.os.Bundle r7 = r3.columnsBundle
            int r4 = r7.getInt(r4)
            float r4 = r6.getFloat(r5, r4)
            java.lang.Float r4 = java.lang.Float.valueOf(r4)
            return r4
        L94:
            r3.checkAvailable(r4, r5)
            android.database.CursorWindow[] r7 = r3.cursorWindows
            r6 = r7[r6]
            android.os.Bundle r7 = r3.columnsBundle
            int r4 = r7.getInt(r4)
            long r4 = r6.getLong(r5, r4)
            r6 = 1
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 != 0) goto Lac
            goto Lad
        Lac:
            r1 = r2
        Lad:
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r1)
            return r4
        Lb2:
            r3.checkAvailable(r4, r5)
            android.database.CursorWindow[] r7 = r3.cursorWindows
            r6 = r7[r6]
            android.os.Bundle r7 = r3.columnsBundle
            int r4 = r7.getInt(r4)
            java.lang.String r4 = r6.getString(r5, r4)
            return r4
        Lc4:
            r3.checkAvailable(r4, r5)
            android.database.CursorWindow[] r7 = r3.cursorWindows
            r6 = r7[r6]
            android.os.Bundle r7 = r3.columnsBundle
            int r4 = r7.getInt(r4)
            long r4 = r6.getLong(r5, r4)
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            return r4
        Lda:
            r3.checkAvailable(r4, r5)
            android.database.CursorWindow[] r7 = r3.cursorWindows
            r6 = r7[r6]
            android.os.Bundle r7 = r3.columnsBundle
            int r4 = r7.getInt(r4)
            int r4 = r6.getInt(r5, r4)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            return r4
    }

    public final int getWindowIndex(int r5) {
            r4 = this;
            r0 = 0
            if (r5 >= 0) goto La
            int r1 = r4.dataCount
            if (r5 >= r1) goto L8
            goto La
        L8:
            r1 = r0
            goto Lb
        La:
            r1 = 1
        Lb:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "rowIndex is out of index:"
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.common.internal.Preconditions.checkArgument(r1, r2)
        L1f:
            int[] r1 = r4.perCursorCounts
            int r2 = r1.length
            if (r0 >= r2) goto L2e
            r1 = r1[r0]
            if (r5 >= r1) goto L2b
            int r0 = r0 + (-1)
            goto L2e
        L2b:
            int r0 = r0 + 1
            goto L1f
        L2e:
            int[] r5 = r4.perCursorCounts
            int r5 = r5.length
            if (r0 != r5) goto L35
            int r0 = r0 + (-1)
        L35:
            return r0
    }

    public final boolean hasColumn(java.lang.String r2) {
            r1 = this;
            android.os.Bundle r0 = r1.columnsBundle
            boolean r2 = r0.containsKey(r2)
            return r2
    }

    public final boolean hasNull(java.lang.String r2, int r3, int r4) {
            r1 = this;
            r1.checkAvailable(r2, r3)
            android.database.CursorWindow[] r0 = r1.cursorWindows
            r4 = r0[r4]
            android.os.Bundle r0 = r1.columnsBundle
            int r2 = r0.getInt(r2)
            int r2 = r4.getType(r3, r2)
            if (r2 != 0) goto L15
            r2 = 1
            goto L16
        L15:
            r2 = 0
        L16:
            return r2
    }

    public final synchronized boolean isClosed() {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.mClosed     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r6, int r7) {
            r5 = this;
            int r0 = com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.beginObjectHeader(r6)
            java.lang.String[] r1 = r5.columns
            r2 = 1
            r3 = 0
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.writeStringArray(r6, r2, r1, r3)
            android.database.CursorWindow[] r1 = r5.cursorWindows
            r4 = 2
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.writeTypedArray(r6, r4, r1, r7, r3)
            int r1 = r5.getStatusCode()
            r4 = 3
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.writeInt(r6, r4, r1)
            android.os.Bundle r1 = r5.getMetadata()
            r4 = 4
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.writeBundle(r6, r4, r1, r3)
            int r1 = r5.version
            r3 = 1000(0x3e8, float:1.401E-42)
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.writeInt(r6, r3, r1)
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.finishObjectHeader(r6, r0)
            r6 = r7 & 1
            if (r6 == 0) goto L32
            r5.close()
        L32:
            return
    }
}
