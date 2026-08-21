package android.support.v7.widget;

class ActivityChooserModel extends android.database.DataSetObservable {
    static final java.lang.String ATTRIBUTE_ACTIVITY = "activity";
    static final java.lang.String ATTRIBUTE_TIME = "time";
    static final java.lang.String ATTRIBUTE_WEIGHT = "weight";
    static final boolean DEBUG = false;
    private static final int DEFAULT_ACTIVITY_INFLATION = 5;
    private static final float DEFAULT_HISTORICAL_RECORD_WEIGHT = 1.0f;
    public static final java.lang.String DEFAULT_HISTORY_FILE_NAME = "activity_choser_model_history.xml";
    public static final int DEFAULT_HISTORY_MAX_LENGTH = 50;
    private static final java.lang.String HISTORY_FILE_EXTENSION = ".xml";
    private static final int INVALID_INDEX = -1;
    static final java.lang.String LOG_TAG = "ActivityChooserModel";
    static final java.lang.String TAG_HISTORICAL_RECORD = "historical-record";
    static final java.lang.String TAG_HISTORICAL_RECORDS = "historical-records";
    private static final java.util.Map<java.lang.String, android.support.v7.widget.ActivityChooserModel> sDataModelRegistry = null;
    private static final java.lang.Object sRegistryLock = null;
    private final java.util.List<android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo> mActivities;
    private android.support.v7.widget.ActivityChooserModel.OnChooseActivityListener mActivityChoserModelPolicy;
    private android.support.v7.widget.ActivityChooserModel.ActivitySorter mActivitySorter;
    boolean mCanReadHistoricalData;
    final android.content.Context mContext;
    private final java.util.List<android.support.v7.widget.ActivityChooserModel.HistoricalRecord> mHistoricalRecords;
    private boolean mHistoricalRecordsChanged;
    final java.lang.String mHistoryFileName;
    private int mHistoryMaxSize;
    private final java.lang.Object mInstanceLock;
    private android.content.Intent mIntent;
    private boolean mReadShareHistoryCalled;
    private boolean mReloadActivities;

    public interface ActivityChooserModelClient {
        void setActivityChooserModel(android.support.v7.widget.ActivityChooserModel r1);
    }

    public static final class ActivityResolveInfo implements java.lang.Comparable<android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo> {
        public final android.content.pm.ResolveInfo resolveInfo;
        public float weight;

        public ActivityResolveInfo(android.content.pm.ResolveInfo r1) {
                r0 = this;
                r0.<init>()
                r0.resolveInfo = r1
                return
        }

        public int compareTo(android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo r2) {
                r1 = this;
                float r2 = r2.weight
                int r2 = java.lang.Float.floatToIntBits(r2)
                float r0 = r1.weight
                int r0 = java.lang.Float.floatToIntBits(r0)
                int r2 = r2 - r0
                return r2
        }

        @Override
        public int compareTo(android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo r1) {
                r0 = this;
                android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo r1 = (android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo) r1
                int r1 = r0.compareTo(r1)
                return r1
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 != 0) goto L8
                return r1
            L8:
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L13
                return r1
            L13:
                android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo r5 = (android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo) r5
                float r2 = r4.weight
                int r2 = java.lang.Float.floatToIntBits(r2)
                float r5 = r5.weight
                int r5 = java.lang.Float.floatToIntBits(r5)
                if (r2 == r5) goto L24
                return r1
            L24:
                return r0
        }

        public int hashCode() {
                r1 = this;
                float r0 = r1.weight
                int r0 = java.lang.Float.floatToIntBits(r0)
                int r0 = r0 + 31
                return r0
        }

        public java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "["
                r0.append(r1)
                java.lang.String r1 = "resolveInfo:"
                r0.append(r1)
                android.content.pm.ResolveInfo r1 = r4.resolveInfo
                java.lang.String r1 = r1.toString()
                r0.append(r1)
                java.lang.String r1 = "; weight:"
                r0.append(r1)
                java.math.BigDecimal r1 = new java.math.BigDecimal
                float r2 = r4.weight
                double r2 = (double) r2
                r1.<init>(r2)
                r0.append(r1)
                java.lang.String r1 = "]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public interface ActivitySorter {
        void sort(android.content.Intent r1, java.util.List<android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo> r2, java.util.List<android.support.v7.widget.ActivityChooserModel.HistoricalRecord> r3);
    }

    private static final class DefaultSorter implements android.support.v7.widget.ActivityChooserModel.ActivitySorter {
        private static final float WEIGHT_DECAY_COEFFICIENT = 0.95f;
        private final java.util.Map<android.content.ComponentName, android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo> mPackageNameToActivityMap;

        DefaultSorter() {
                r1 = this;
                r1.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.mPackageNameToActivityMap = r0
                return
        }

        @Override
        public void sort(android.content.Intent r7, java.util.List<android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo> r8, java.util.List<android.support.v7.widget.ActivityChooserModel.HistoricalRecord> r9) {
                r6 = this;
                java.util.Map<android.content.ComponentName, android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r7 = r6.mPackageNameToActivityMap
                r7.clear()
                int r0 = r8.size()
                r1 = 0
            La:
                if (r1 >= r0) goto L2c
                java.lang.Object r2 = r8.get(r1)
                android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo r2 = (android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo) r2
                r3 = 0
                r2.weight = r3
                android.content.ComponentName r3 = new android.content.ComponentName
                android.content.pm.ResolveInfo r4 = r2.resolveInfo
                android.content.pm.ActivityInfo r4 = r4.activityInfo
                java.lang.String r4 = r4.packageName
                android.content.pm.ResolveInfo r5 = r2.resolveInfo
                android.content.pm.ActivityInfo r5 = r5.activityInfo
                java.lang.String r5 = r5.name
                r3.<init>(r4, r5)
                r7.put(r3, r2)
                int r1 = r1 + 1
                goto La
            L2c:
                int r0 = r9.size()
                int r0 = r0 + (-1)
                r1 = 1065353216(0x3f800000, float:1.0)
            L34:
                if (r0 < 0) goto L57
                java.lang.Object r2 = r9.get(r0)
                android.support.v7.widget.ActivityChooserModel$HistoricalRecord r2 = (android.support.v7.widget.ActivityChooserModel.HistoricalRecord) r2
                android.content.ComponentName r3 = r2.activity
                java.lang.Object r3 = r7.get(r3)
                android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo r3 = (android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo) r3
                if (r3 == 0) goto L54
                float r4 = r3.weight
                float r2 = r2.weight
                float r2 = r2 * r1
                float r4 = r4 + r2
                r3.weight = r4
                r2 = 1064514355(0x3f733333, float:0.95)
                float r1 = r1 * r2
            L54:
                int r0 = r0 + (-1)
                goto L34
            L57:
                java.util.Collections.sort(r8)
                return
        }
    }

    public static final class HistoricalRecord {
        public final android.content.ComponentName activity;
        public final long time;
        public final float weight;

        public HistoricalRecord(android.content.ComponentName r1, long r2, float r4) {
                r0 = this;
                r0.<init>()
                r0.activity = r1
                r0.time = r2
                r0.weight = r4
                return
        }

        public HistoricalRecord(java.lang.String r1, long r2, float r4) {
                r0 = this;
                android.content.ComponentName r1 = android.content.ComponentName.unflattenFromString(r1)
                r0.<init>(r1, r2, r4)
                return
        }

        public boolean equals(java.lang.Object r8) {
                r7 = this;
                r0 = 1
                if (r7 != r8) goto L4
                return r0
            L4:
                r1 = 0
                if (r8 != 0) goto L8
                return r1
            L8:
                java.lang.Class r2 = r7.getClass()
                java.lang.Class r3 = r8.getClass()
                if (r2 == r3) goto L13
                return r1
            L13:
                android.support.v7.widget.ActivityChooserModel$HistoricalRecord r8 = (android.support.v7.widget.ActivityChooserModel.HistoricalRecord) r8
                android.content.ComponentName r2 = r7.activity
                if (r2 != 0) goto L1e
                android.content.ComponentName r2 = r8.activity
                if (r2 == 0) goto L27
                return r1
            L1e:
                android.content.ComponentName r3 = r8.activity
                boolean r2 = r2.equals(r3)
                if (r2 != 0) goto L27
                return r1
            L27:
                long r2 = r7.time
                long r4 = r8.time
                int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r6 == 0) goto L30
                return r1
            L30:
                float r2 = r7.weight
                int r2 = java.lang.Float.floatToIntBits(r2)
                float r8 = r8.weight
                int r8 = java.lang.Float.floatToIntBits(r8)
                if (r2 == r8) goto L3f
                return r1
            L3f:
                return r0
        }

        public int hashCode() {
                r6 = this;
                android.content.ComponentName r0 = r6.activity
                if (r0 != 0) goto L6
                r0 = 0
                goto La
            L6:
                int r0 = r0.hashCode()
            La:
                r1 = 31
                int r0 = r0 + r1
                int r0 = r0 * 31
                long r2 = r6.time
                r4 = 32
                long r4 = r2 >>> r4
                long r2 = r2 ^ r4
                int r3 = (int) r2
                int r0 = r0 + r3
                int r0 = r0 * 31
                float r1 = r6.weight
                int r1 = java.lang.Float.floatToIntBits(r1)
                int r0 = r0 + r1
                return r0
        }

        public java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "["
                r0.append(r1)
                java.lang.String r1 = "; activity:"
                r0.append(r1)
                android.content.ComponentName r1 = r4.activity
                r0.append(r1)
                java.lang.String r1 = "; time:"
                r0.append(r1)
                long r1 = r4.time
                r0.append(r1)
                java.lang.String r1 = "; weight:"
                r0.append(r1)
                java.math.BigDecimal r1 = new java.math.BigDecimal
                float r2 = r4.weight
                double r2 = (double) r2
                r1.<init>(r2)
                r0.append(r1)
                java.lang.String r1 = "]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public interface OnChooseActivityListener {
        boolean onChooseActivity(android.support.v7.widget.ActivityChooserModel r1, android.content.Intent r2);
    }

    private final class PersistHistoryAsyncTask extends android.os.AsyncTask<java.lang.Object, java.lang.Void, java.lang.Void> {
        final android.support.v7.widget.ActivityChooserModel this$0;

        PersistHistoryAsyncTask(android.support.v7.widget.ActivityChooserModel r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public java.lang.Void doInBackground(java.lang.Object[] r1) {
                r0 = this;
                java.lang.Void r1 = r0.doInBackground(r1)
                return r1
        }

        @Override
        public java.lang.Void doInBackground(java.lang.Object... r15) {
                r14 = this;
                java.lang.String r0 = "historical-record"
                java.lang.String r1 = "historical-records"
                java.lang.String r2 = "Error writing historical record file: "
                r3 = 0
                r4 = r15[r3]
                java.util.List r4 = (java.util.List) r4
                r5 = 1
                r15 = r15[r5]
                java.lang.String r15 = (java.lang.String) r15
                r6 = 0
                android.support.v7.widget.ActivityChooserModel r7 = r14.this$0     // Catch: java.io.FileNotFoundException -> Le0
                android.content.Context r7 = r7.mContext     // Catch: java.io.FileNotFoundException -> Le0
                java.io.FileOutputStream r15 = r7.openFileOutput(r15, r3)     // Catch: java.io.FileNotFoundException -> Le0
                org.xmlpull.v1.XmlSerializer r7 = android.util.Xml.newSerializer()
                r7.setOutput(r15, r6)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                java.lang.String r8 = "UTF-8"
                java.lang.Boolean r9 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                r7.startDocument(r8, r9)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                r7.startTag(r6, r1)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                int r8 = r4.size()     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                r9 = 0
            L31:
                if (r9 >= r8) goto L63
                java.lang.Object r10 = r4.remove(r3)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                android.support.v7.widget.ActivityChooserModel$HistoricalRecord r10 = (android.support.v7.widget.ActivityChooserModel.HistoricalRecord) r10     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                r7.startTag(r6, r0)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                java.lang.String r11 = "activity"
                android.content.ComponentName r12 = r10.activity     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                java.lang.String r12 = r12.flattenToString()     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                r7.attribute(r6, r11, r12)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                java.lang.String r11 = "time"
                long r12 = r10.time     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                java.lang.String r12 = java.lang.String.valueOf(r12)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                r7.attribute(r6, r11, r12)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                java.lang.String r11 = "weight"
                float r10 = r10.weight     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                java.lang.String r10 = java.lang.String.valueOf(r10)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                r7.attribute(r6, r11, r10)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                r7.endTag(r6, r0)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                int r9 = r9 + 1
                goto L31
            L63:
                r7.endTag(r6, r1)     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                r7.endDocument()     // Catch: java.lang.Throwable -> L73 java.io.IOException -> L75 java.lang.IllegalStateException -> L95 java.lang.IllegalArgumentException -> Lb5
                android.support.v7.widget.ActivityChooserModel r0 = r14.this$0
                r0.mCanReadHistoricalData = r5
                if (r15 == 0) goto Ld5
            L6f:
                r15.close()     // Catch: java.io.IOException -> Ld5
                goto Ld5
            L73:
                r0 = move-exception
                goto Ld6
            L75:
                r0 = move-exception
                java.lang.String r1 = android.support.v7.widget.ActivityChooserModel.LOG_TAG     // Catch: java.lang.Throwable -> L73
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
                r3.<init>()     // Catch: java.lang.Throwable -> L73
                r3.append(r2)     // Catch: java.lang.Throwable -> L73
                android.support.v7.widget.ActivityChooserModel r2 = r14.this$0     // Catch: java.lang.Throwable -> L73
                java.lang.String r2 = r2.mHistoryFileName     // Catch: java.lang.Throwable -> L73
                r3.append(r2)     // Catch: java.lang.Throwable -> L73
                java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L73
                android.util.Log.e(r1, r2, r0)     // Catch: java.lang.Throwable -> L73
                android.support.v7.widget.ActivityChooserModel r0 = r14.this$0
                r0.mCanReadHistoricalData = r5
                if (r15 == 0) goto Ld5
                goto L6f
            L95:
                r0 = move-exception
                java.lang.String r1 = android.support.v7.widget.ActivityChooserModel.LOG_TAG     // Catch: java.lang.Throwable -> L73
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
                r3.<init>()     // Catch: java.lang.Throwable -> L73
                r3.append(r2)     // Catch: java.lang.Throwable -> L73
                android.support.v7.widget.ActivityChooserModel r2 = r14.this$0     // Catch: java.lang.Throwable -> L73
                java.lang.String r2 = r2.mHistoryFileName     // Catch: java.lang.Throwable -> L73
                r3.append(r2)     // Catch: java.lang.Throwable -> L73
                java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L73
                android.util.Log.e(r1, r2, r0)     // Catch: java.lang.Throwable -> L73
                android.support.v7.widget.ActivityChooserModel r0 = r14.this$0
                r0.mCanReadHistoricalData = r5
                if (r15 == 0) goto Ld5
                goto L6f
            Lb5:
                r0 = move-exception
                java.lang.String r1 = android.support.v7.widget.ActivityChooserModel.LOG_TAG     // Catch: java.lang.Throwable -> L73
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
                r3.<init>()     // Catch: java.lang.Throwable -> L73
                r3.append(r2)     // Catch: java.lang.Throwable -> L73
                android.support.v7.widget.ActivityChooserModel r2 = r14.this$0     // Catch: java.lang.Throwable -> L73
                java.lang.String r2 = r2.mHistoryFileName     // Catch: java.lang.Throwable -> L73
                r3.append(r2)     // Catch: java.lang.Throwable -> L73
                java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L73
                android.util.Log.e(r1, r2, r0)     // Catch: java.lang.Throwable -> L73
                android.support.v7.widget.ActivityChooserModel r0 = r14.this$0
                r0.mCanReadHistoricalData = r5
                if (r15 == 0) goto Ld5
                goto L6f
            Ld5:
                return r6
            Ld6:
                android.support.v7.widget.ActivityChooserModel r1 = r14.this$0
                r1.mCanReadHistoricalData = r5
                if (r15 == 0) goto Ldf
                r15.close()     // Catch: java.io.IOException -> Ldf
            Ldf:
                throw r0
            Le0:
                r0 = move-exception
                java.lang.String r1 = android.support.v7.widget.ActivityChooserModel.LOG_TAG
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r2)
                r3.append(r15)
                java.lang.String r15 = r3.toString()
                android.util.Log.e(r1, r15, r0)
                return r6
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v7.widget.ActivityChooserModel.sRegistryLock = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            android.support.v7.widget.ActivityChooserModel.sDataModelRegistry = r0
            return
    }

    private ActivityChooserModel(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.mInstanceLock = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.mActivities = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.mHistoricalRecords = r0
            android.support.v7.widget.ActivityChooserModel$DefaultSorter r0 = new android.support.v7.widget.ActivityChooserModel$DefaultSorter
            r0.<init>()
            r2.mActivitySorter = r0
            r0 = 50
            r2.mHistoryMaxSize = r0
            r0 = 1
            r2.mCanReadHistoricalData = r0
            r1 = 0
            r2.mReadShareHistoryCalled = r1
            r2.mHistoricalRecordsChanged = r0
            r2.mReloadActivities = r1
            android.content.Context r3 = r3.getApplicationContext()
            r2.mContext = r3
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            if (r3 != 0) goto L53
            java.lang.String r3 = ".xml"
            boolean r0 = r4.endsWith(r3)
            if (r0 != 0) goto L53
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.mHistoryFileName = r3
            goto L55
        L53:
            r2.mHistoryFileName = r4
        L55:
            return
    }

    private boolean addHistoricalRecord(android.support.v7.widget.ActivityChooserModel.HistoricalRecord r2) {
            r1 = this;
            java.util.List<android.support.v7.widget.ActivityChooserModel$HistoricalRecord> r0 = r1.mHistoricalRecords
            boolean r2 = r0.add(r2)
            if (r2 == 0) goto L17
            r0 = 1
            r1.mHistoricalRecordsChanged = r0
            r1.pruneExcessiveHistoricalRecordsIfNeeded()
            r1.persistHistoricalDataIfNeeded()
            r1.sortActivitiesIfNeeded()
            r1.notifyChanged()
        L17:
            return r2
    }

    private void ensureConsistentState() {
            r2 = this;
            boolean r0 = r2.loadActivitiesIfNeeded()
            boolean r1 = r2.readHistoricalDataIfNeeded()
            r0 = r0 | r1
            r2.pruneExcessiveHistoricalRecordsIfNeeded()
            if (r0 == 0) goto L14
            r2.sortActivitiesIfNeeded()
            r2.notifyChanged()
        L14:
            return
    }

    public static android.support.v7.widget.ActivityChooserModel get(android.content.Context r2, java.lang.String r3) {
            java.lang.Object r0 = android.support.v7.widget.ActivityChooserModel.sRegistryLock
            monitor-enter(r0)
            java.util.Map<java.lang.String, android.support.v7.widget.ActivityChooserModel> r1 = android.support.v7.widget.ActivityChooserModel.sDataModelRegistry     // Catch: java.lang.Throwable -> L19
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L19
            android.support.v7.widget.ActivityChooserModel r1 = (android.support.v7.widget.ActivityChooserModel) r1     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L17
            android.support.v7.widget.ActivityChooserModel r1 = new android.support.v7.widget.ActivityChooserModel     // Catch: java.lang.Throwable -> L19
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L19
            java.util.Map<java.lang.String, android.support.v7.widget.ActivityChooserModel> r2 = android.support.v7.widget.ActivityChooserModel.sDataModelRegistry     // Catch: java.lang.Throwable -> L19
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return r1
        L19:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r2
    }

    private boolean loadActivitiesIfNeeded() {
            r6 = this;
            boolean r0 = r6.mReloadActivities
            r1 = 0
            if (r0 == 0) goto L37
            android.content.Intent r0 = r6.mIntent
            if (r0 == 0) goto L37
            r6.mReloadActivities = r1
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r0 = r6.mActivities
            r0.clear()
            android.content.Context r0 = r6.mContext
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            android.content.Intent r2 = r6.mIntent
            java.util.List r0 = r0.queryIntentActivities(r2, r1)
            int r2 = r0.size()
        L20:
            if (r1 >= r2) goto L35
            java.lang.Object r3 = r0.get(r1)
            android.content.pm.ResolveInfo r3 = (android.content.pm.ResolveInfo) r3
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r4 = r6.mActivities
            android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo r5 = new android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo
            r5.<init>(r3)
            r4.add(r5)
            int r1 = r1 + 1
            goto L20
        L35:
            r0 = 1
            return r0
        L37:
            return r1
    }

    private void persistHistoricalDataIfNeeded() {
            r6 = this;
            boolean r0 = r6.mReadShareHistoryCalled
            if (r0 == 0) goto L30
            boolean r0 = r6.mHistoricalRecordsChanged
            if (r0 != 0) goto L9
            return
        L9:
            r0 = 0
            r6.mHistoricalRecordsChanged = r0
            java.lang.String r1 = r6.mHistoryFileName
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L2f
            android.support.v7.widget.ActivityChooserModel$PersistHistoryAsyncTask r1 = new android.support.v7.widget.ActivityChooserModel$PersistHistoryAsyncTask
            r1.<init>(r6)
            java.util.concurrent.Executor r2 = android.os.AsyncTask.THREAD_POOL_EXECUTOR
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.util.ArrayList r4 = new java.util.ArrayList
            java.util.List<android.support.v7.widget.ActivityChooserModel$HistoricalRecord> r5 = r6.mHistoricalRecords
            r4.<init>(r5)
            r3[r0] = r4
            r0 = 1
            java.lang.String r4 = r6.mHistoryFileName
            r3[r0] = r4
            r1.executeOnExecutor(r2, r3)
        L2f:
            return
        L30:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "No preceding call to #readHistoricalData"
            r0.<init>(r1)
            throw r0
    }

    private void pruneExcessiveHistoricalRecordsIfNeeded() {
            r4 = this;
            java.util.List<android.support.v7.widget.ActivityChooserModel$HistoricalRecord> r0 = r4.mHistoricalRecords
            int r0 = r0.size()
            int r1 = r4.mHistoryMaxSize
            int r0 = r0 - r1
            if (r0 > 0) goto Lc
            return
        Lc:
            r1 = 1
            r4.mHistoricalRecordsChanged = r1
            r1 = 0
            r2 = 0
        L11:
            if (r2 >= r0) goto L1e
            java.util.List<android.support.v7.widget.ActivityChooserModel$HistoricalRecord> r3 = r4.mHistoricalRecords
            java.lang.Object r3 = r3.remove(r1)
            android.support.v7.widget.ActivityChooserModel$HistoricalRecord r3 = (android.support.v7.widget.ActivityChooserModel.HistoricalRecord) r3
            int r2 = r2 + 1
            goto L11
        L1e:
            return
    }

    private boolean readHistoricalDataIfNeeded() {
            r2 = this;
            boolean r0 = r2.mCanReadHistoricalData
            r1 = 0
            if (r0 == 0) goto L1a
            boolean r0 = r2.mHistoricalRecordsChanged
            if (r0 == 0) goto L1a
            java.lang.String r0 = r2.mHistoryFileName
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            r2.mCanReadHistoricalData = r1
            r0 = 1
            r2.mReadShareHistoryCalled = r0
            r2.readHistoricalDataImpl()
            return r0
        L1a:
            return r1
    }

    private void readHistoricalDataImpl() {
            r10 = this;
            java.lang.String r0 = "Error reading historical recrod file: "
            android.content.Context r1 = r10.mContext     // Catch: java.io.FileNotFoundException -> Lc2
            java.lang.String r2 = r10.mHistoryFileName     // Catch: java.io.FileNotFoundException -> Lc2
            java.io.FileInputStream r1 = r1.openFileInput(r2)     // Catch: java.io.FileNotFoundException -> Lc2
            org.xmlpull.v1.XmlPullParser r2 = android.util.Xml.newPullParser()     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            java.lang.String r3 = "UTF-8"
            r2.setInput(r1, r3)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            r3 = 0
        L14:
            r4 = 1
            if (r3 == r4) goto L1f
            r5 = 2
            if (r3 == r5) goto L1f
            int r3 = r2.next()     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            goto L14
        L1f:
            java.lang.String r3 = "historical-records"
            java.lang.String r5 = r2.getName()     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            boolean r3 = r3.equals(r5)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            if (r3 == 0) goto L7c
            java.util.List<android.support.v7.widget.ActivityChooserModel$HistoricalRecord> r3 = r10.mHistoricalRecords     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            r3.clear()     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
        L30:
            int r5 = r2.next()     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            if (r5 != r4) goto L3d
            if (r1 == 0) goto Lbb
        L38:
            r1.close()     // Catch: java.io.IOException -> Lbb
            goto Lbb
        L3d:
            r6 = 3
            if (r5 == r6) goto L30
            r6 = 4
            if (r5 != r6) goto L44
            goto L30
        L44:
            java.lang.String r5 = r2.getName()     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            java.lang.String r6 = "historical-record"
            boolean r5 = r6.equals(r5)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            if (r5 == 0) goto L74
            java.lang.String r5 = "activity"
            r6 = 0
            java.lang.String r5 = r2.getAttributeValue(r6, r5)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            java.lang.String r7 = "time"
            java.lang.String r7 = r2.getAttributeValue(r6, r7)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            long r7 = java.lang.Long.parseLong(r7)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            java.lang.String r9 = "weight"
            java.lang.String r6 = r2.getAttributeValue(r6, r9)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            float r6 = java.lang.Float.parseFloat(r6)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            android.support.v7.widget.ActivityChooserModel$HistoricalRecord r9 = new android.support.v7.widget.ActivityChooserModel$HistoricalRecord     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            r9.<init>(r5, r7, r6)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            r3.add(r9)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            goto L30
        L74:
            org.xmlpull.v1.XmlPullParserException r2 = new org.xmlpull.v1.XmlPullParserException     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            java.lang.String r3 = "Share records file not well-formed."
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            throw r2     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
        L7c:
            org.xmlpull.v1.XmlPullParserException r2 = new org.xmlpull.v1.XmlPullParserException     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            java.lang.String r3 = "Share records file does not start with historical-records tag."
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
            throw r2     // Catch: java.lang.Throwable -> L84 java.io.IOException -> L86 org.xmlpull.v1.XmlPullParserException -> La0
        L84:
            r0 = move-exception
            goto Lbc
        L86:
            r2 = move-exception
            java.lang.String r3 = android.support.v7.widget.ActivityChooserModel.LOG_TAG     // Catch: java.lang.Throwable -> L84
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L84
            r4.<init>()     // Catch: java.lang.Throwable -> L84
            r4.append(r0)     // Catch: java.lang.Throwable -> L84
            java.lang.String r0 = r10.mHistoryFileName     // Catch: java.lang.Throwable -> L84
            r4.append(r0)     // Catch: java.lang.Throwable -> L84
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L84
            android.util.Log.e(r3, r0, r2)     // Catch: java.lang.Throwable -> L84
            if (r1 == 0) goto Lbb
            goto L38
        La0:
            r2 = move-exception
            java.lang.String r3 = android.support.v7.widget.ActivityChooserModel.LOG_TAG     // Catch: java.lang.Throwable -> L84
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L84
            r4.<init>()     // Catch: java.lang.Throwable -> L84
            r4.append(r0)     // Catch: java.lang.Throwable -> L84
            java.lang.String r0 = r10.mHistoryFileName     // Catch: java.lang.Throwable -> L84
            r4.append(r0)     // Catch: java.lang.Throwable -> L84
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L84
            android.util.Log.e(r3, r0, r2)     // Catch: java.lang.Throwable -> L84
            if (r1 == 0) goto Lbb
            goto L38
        Lbb:
            return
        Lbc:
            if (r1 == 0) goto Lc1
            r1.close()     // Catch: java.io.IOException -> Lc1
        Lc1:
            throw r0
        Lc2:
            return
    }

    private boolean sortActivitiesIfNeeded() {
            r4 = this;
            android.support.v7.widget.ActivityChooserModel$ActivitySorter r0 = r4.mActivitySorter
            if (r0 == 0) goto L29
            android.content.Intent r0 = r4.mIntent
            if (r0 == 0) goto L29
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r0 = r4.mActivities
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L29
            java.util.List<android.support.v7.widget.ActivityChooserModel$HistoricalRecord> r0 = r4.mHistoricalRecords
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L29
            android.support.v7.widget.ActivityChooserModel$ActivitySorter r0 = r4.mActivitySorter
            android.content.Intent r1 = r4.mIntent
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r2 = r4.mActivities
            java.util.List<android.support.v7.widget.ActivityChooserModel$HistoricalRecord> r3 = r4.mHistoricalRecords
            java.util.List r3 = java.util.Collections.unmodifiableList(r3)
            r0.sort(r1, r2, r3)
            r0 = 1
            return r0
        L29:
            r0 = 0
            return r0
    }

    public android.content.Intent chooseActivity(int r7) {
            r6 = this;
            java.lang.Object r0 = r6.mInstanceLock
            monitor-enter(r0)
            android.content.Intent r1 = r6.mIntent     // Catch: java.lang.Throwable -> L53
            r2 = 0
            if (r1 != 0) goto La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L53
            return r2
        La:
            r6.ensureConsistentState()     // Catch: java.lang.Throwable -> L53
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r1 = r6.mActivities     // Catch: java.lang.Throwable -> L53
            java.lang.Object r7 = r1.get(r7)     // Catch: java.lang.Throwable -> L53
            android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo r7 = (android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo) r7     // Catch: java.lang.Throwable -> L53
            android.content.ComponentName r1 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L53
            android.content.pm.ResolveInfo r3 = r7.resolveInfo     // Catch: java.lang.Throwable -> L53
            android.content.pm.ActivityInfo r3 = r3.activityInfo     // Catch: java.lang.Throwable -> L53
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Throwable -> L53
            android.content.pm.ResolveInfo r7 = r7.resolveInfo     // Catch: java.lang.Throwable -> L53
            android.content.pm.ActivityInfo r7 = r7.activityInfo     // Catch: java.lang.Throwable -> L53
            java.lang.String r7 = r7.name     // Catch: java.lang.Throwable -> L53
            r1.<init>(r3, r7)     // Catch: java.lang.Throwable -> L53
            android.content.Intent r7 = new android.content.Intent     // Catch: java.lang.Throwable -> L53
            android.content.Intent r3 = r6.mIntent     // Catch: java.lang.Throwable -> L53
            r7.<init>(r3)     // Catch: java.lang.Throwable -> L53
            r7.setComponent(r1)     // Catch: java.lang.Throwable -> L53
            android.support.v7.widget.ActivityChooserModel$OnChooseActivityListener r3 = r6.mActivityChoserModelPolicy     // Catch: java.lang.Throwable -> L53
            if (r3 == 0) goto L43
            android.content.Intent r3 = new android.content.Intent     // Catch: java.lang.Throwable -> L53
            r3.<init>(r7)     // Catch: java.lang.Throwable -> L53
            android.support.v7.widget.ActivityChooserModel$OnChooseActivityListener r4 = r6.mActivityChoserModelPolicy     // Catch: java.lang.Throwable -> L53
            boolean r3 = r4.onChooseActivity(r6, r3)     // Catch: java.lang.Throwable -> L53
            if (r3 == 0) goto L43
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L53
            return r2
        L43:
            android.support.v7.widget.ActivityChooserModel$HistoricalRecord r2 = new android.support.v7.widget.ActivityChooserModel$HistoricalRecord     // Catch: java.lang.Throwable -> L53
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L53
            r5 = 1065353216(0x3f800000, float:1.0)
            r2.<init>(r1, r3, r5)     // Catch: java.lang.Throwable -> L53
            r6.addHistoricalRecord(r2)     // Catch: java.lang.Throwable -> L53
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L53
            return r7
        L53:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L53
            throw r7
    }

    public android.content.pm.ResolveInfo getActivity(int r3) {
            r2 = this;
            java.lang.Object r0 = r2.mInstanceLock
            monitor-enter(r0)
            r2.ensureConsistentState()     // Catch: java.lang.Throwable -> L12
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r1 = r2.mActivities     // Catch: java.lang.Throwable -> L12
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L12
            android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo r3 = (android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo) r3     // Catch: java.lang.Throwable -> L12
            android.content.pm.ResolveInfo r3 = r3.resolveInfo     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return r3
        L12:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r3
    }

    public int getActivityCount() {
            r2 = this;
            java.lang.Object r0 = r2.mInstanceLock
            monitor-enter(r0)
            r2.ensureConsistentState()     // Catch: java.lang.Throwable -> Le
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r1 = r2.mActivities     // Catch: java.lang.Throwable -> Le
            int r1 = r1.size()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return r1
        Le:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r1
    }

    public int getActivityIndex(android.content.pm.ResolveInfo r6) {
            r5 = this;
            java.lang.Object r0 = r5.mInstanceLock
            monitor-enter(r0)
            r5.ensureConsistentState()     // Catch: java.lang.Throwable -> L21
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r1 = r5.mActivities     // Catch: java.lang.Throwable -> L21
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L21
            r3 = 0
        Ld:
            if (r3 >= r2) goto L1e
            java.lang.Object r4 = r1.get(r3)     // Catch: java.lang.Throwable -> L21
            android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo r4 = (android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo) r4     // Catch: java.lang.Throwable -> L21
            android.content.pm.ResolveInfo r4 = r4.resolveInfo     // Catch: java.lang.Throwable -> L21
            if (r4 != r6) goto L1b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            return r3
        L1b:
            int r3 = r3 + 1
            goto Ld
        L1e:
            r6 = -1
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            return r6
        L21:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            throw r6
    }

    public android.content.pm.ResolveInfo getDefaultActivity() {
            r3 = this;
            java.lang.Object r0 = r3.mInstanceLock
            monitor-enter(r0)
            r3.ensureConsistentState()     // Catch: java.lang.Throwable -> L1e
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r1 = r3.mActivities     // Catch: java.lang.Throwable -> L1e
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1b
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r1 = r3.mActivities     // Catch: java.lang.Throwable -> L1e
            r2 = 0
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L1e
            android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo r1 = (android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo) r1     // Catch: java.lang.Throwable -> L1e
            android.content.pm.ResolveInfo r1 = r1.resolveInfo     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            return r1
        L1b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            r0 = 0
            return r0
        L1e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r1
    }

    public int getHistoryMaxSize() {
            r2 = this;
            java.lang.Object r0 = r2.mInstanceLock
            monitor-enter(r0)
            int r1 = r2.mHistoryMaxSize     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public int getHistorySize() {
            r2 = this;
            java.lang.Object r0 = r2.mInstanceLock
            monitor-enter(r0)
            r2.ensureConsistentState()     // Catch: java.lang.Throwable -> Le
            java.util.List<android.support.v7.widget.ActivityChooserModel$HistoricalRecord> r1 = r2.mHistoricalRecords     // Catch: java.lang.Throwable -> Le
            int r1 = r1.size()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return r1
        Le:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            throw r1
    }

    public android.content.Intent getIntent() {
            r2 = this;
            java.lang.Object r0 = r2.mInstanceLock
            monitor-enter(r0)
            android.content.Intent r1 = r2.mIntent     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }

    public void setActivitySorter(android.support.v7.widget.ActivityChooserModel.ActivitySorter r3) {
            r2 = this;
            java.lang.Object r0 = r2.mInstanceLock
            monitor-enter(r0)
            android.support.v7.widget.ActivityChooserModel$ActivitySorter r1 = r2.mActivitySorter     // Catch: java.lang.Throwable -> L16
            if (r1 != r3) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return
        L9:
            r2.mActivitySorter = r3     // Catch: java.lang.Throwable -> L16
            boolean r3 = r2.sortActivitiesIfNeeded()     // Catch: java.lang.Throwable -> L16
            if (r3 == 0) goto L14
            r2.notifyChanged()     // Catch: java.lang.Throwable -> L16
        L14:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return
        L16:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r3
    }

    public void setDefaultActivity(int r6) {
            r5 = this;
            java.lang.Object r0 = r5.mInstanceLock
            monitor-enter(r0)
            r5.ensureConsistentState()     // Catch: java.lang.Throwable -> L43
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r1 = r5.mActivities     // Catch: java.lang.Throwable -> L43
            java.lang.Object r6 = r1.get(r6)     // Catch: java.lang.Throwable -> L43
            android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo r6 = (android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo) r6     // Catch: java.lang.Throwable -> L43
            java.util.List<android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo> r1 = r5.mActivities     // Catch: java.lang.Throwable -> L43
            r2 = 0
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L43
            android.support.v7.widget.ActivityChooserModel$ActivityResolveInfo r1 = (android.support.v7.widget.ActivityChooserModel.ActivityResolveInfo) r1     // Catch: java.lang.Throwable -> L43
            if (r1 == 0) goto L22
            float r1 = r1.weight     // Catch: java.lang.Throwable -> L43
            float r2 = r6.weight     // Catch: java.lang.Throwable -> L43
            float r1 = r1 - r2
            r2 = 1084227584(0x40a00000, float:5.0)
            float r1 = r1 + r2
            goto L24
        L22:
            r1 = 1065353216(0x3f800000, float:1.0)
        L24:
            android.content.ComponentName r2 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L43
            android.content.pm.ResolveInfo r3 = r6.resolveInfo     // Catch: java.lang.Throwable -> L43
            android.content.pm.ActivityInfo r3 = r3.activityInfo     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Throwable -> L43
            android.content.pm.ResolveInfo r6 = r6.resolveInfo     // Catch: java.lang.Throwable -> L43
            android.content.pm.ActivityInfo r6 = r6.activityInfo     // Catch: java.lang.Throwable -> L43
            java.lang.String r6 = r6.name     // Catch: java.lang.Throwable -> L43
            r2.<init>(r3, r6)     // Catch: java.lang.Throwable -> L43
            android.support.v7.widget.ActivityChooserModel$HistoricalRecord r6 = new android.support.v7.widget.ActivityChooserModel$HistoricalRecord     // Catch: java.lang.Throwable -> L43
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L43
            r6.<init>(r2, r3, r1)     // Catch: java.lang.Throwable -> L43
            r5.addHistoricalRecord(r6)     // Catch: java.lang.Throwable -> L43
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            return
        L43:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            throw r6
    }

    public void setHistoryMaxSize(int r3) {
            r2 = this;
            java.lang.Object r0 = r2.mInstanceLock
            monitor-enter(r0)
            int r1 = r2.mHistoryMaxSize     // Catch: java.lang.Throwable -> L19
            if (r1 != r3) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return
        L9:
            r2.mHistoryMaxSize = r3     // Catch: java.lang.Throwable -> L19
            r2.pruneExcessiveHistoricalRecordsIfNeeded()     // Catch: java.lang.Throwable -> L19
            boolean r3 = r2.sortActivitiesIfNeeded()     // Catch: java.lang.Throwable -> L19
            if (r3 == 0) goto L17
            r2.notifyChanged()     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r3
    }

    public void setIntent(android.content.Intent r3) {
            r2 = this;
            java.lang.Object r0 = r2.mInstanceLock
            monitor-enter(r0)
            android.content.Intent r1 = r2.mIntent     // Catch: java.lang.Throwable -> L13
            if (r1 != r3) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            return
        L9:
            r2.mIntent = r3     // Catch: java.lang.Throwable -> L13
            r3 = 1
            r2.mReloadActivities = r3     // Catch: java.lang.Throwable -> L13
            r2.ensureConsistentState()     // Catch: java.lang.Throwable -> L13
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            throw r3
    }

    public void setOnChooseActivityListener(android.support.v7.widget.ActivityChooserModel.OnChooseActivityListener r2) {
            r1 = this;
            java.lang.Object r0 = r1.mInstanceLock
            monitor-enter(r0)
            r1.mActivityChoserModelPolicy = r2     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return
        L7:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r2
    }
}
