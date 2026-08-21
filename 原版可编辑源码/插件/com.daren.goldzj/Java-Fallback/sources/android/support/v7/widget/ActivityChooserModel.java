package android.support.v7.widget;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.database.DataSetObservable;
import android.os.AsyncTask;
import android.text.TextUtils;
import android.util.Log;
import android.util.Xml;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlSerializer;

class ActivityChooserModel extends DataSetObservable {
    static final String ATTRIBUTE_ACTIVITY = "activity";
    static final String ATTRIBUTE_TIME = "time";
    static final String ATTRIBUTE_WEIGHT = "weight";
    static final boolean DEBUG = false;
    private static final int DEFAULT_ACTIVITY_INFLATION = 5;
    private static final float DEFAULT_HISTORICAL_RECORD_WEIGHT = 1.0f;
    public static final String DEFAULT_HISTORY_FILE_NAME = "activity_choser_model_history.xml";
    public static final int DEFAULT_HISTORY_MAX_LENGTH = 50;
    private static final String HISTORY_FILE_EXTENSION = ".xml";
    private static final int INVALID_INDEX = -1;
    static final String LOG_TAG = "ActivityChooserModel";
    static final String TAG_HISTORICAL_RECORD = "historical-record";
    static final String TAG_HISTORICAL_RECORDS = "historical-records";
    private static final Map<String, ActivityChooserModel> sDataModelRegistry = null;
    private static final Object sRegistryLock = null;
    private final List<ActivityResolveInfo> mActivities;
    private OnChooseActivityListener mActivityChoserModelPolicy;
    private ActivitySorter mActivitySorter;
    boolean mCanReadHistoricalData;
    final Context mContext;
    private final List<HistoricalRecord> mHistoricalRecords;
    private boolean mHistoricalRecordsChanged;
    final String mHistoryFileName;
    private int mHistoryMaxSize;
    private final Object mInstanceLock;
    private Intent mIntent;
    private boolean mReadShareHistoryCalled;
    private boolean mReloadActivities;

    public interface ActivityChooserModelClient {
        void setActivityChooserModel(ActivityChooserModel r1);
    }

    public static final class ActivityResolveInfo implements Comparable<ActivityResolveInfo> {
        public final ResolveInfo resolveInfo;
        public float weight;

        @Override
        public int compareTo(ActivityResolveInfo r1) {
            return compareTo(r1);
        }

        public ActivityResolveInfo(ResolveInfo r1) {
            this.resolveInfo = r1;
        }

        public int hashCode() {
            return Float.floatToIntBits(this.weight) + 31;
        }

        public boolean equals(Object r5) {
            if (this != r5) goto L6;
            return true;
        L6:
            if (r5 != null) goto L9;
            return false;
        L9:
            if (getClass() == r5.getClass()) goto L12;
            return false;
        L12:
            if (Float.floatToIntBits(this.weight) == Float.floatToIntBits(((ActivityResolveInfo) r5).weight)) goto L14;
            return false;
        L14:
            return true;
        }

        public int compareTo(ActivityResolveInfo r2) {
            return Float.floatToIntBits(r2.weight) - Float.floatToIntBits(this.weight);
        }

        public String toString() {
            return "[resolveInfo:" + this.resolveInfo.toString() + "; weight:" + new BigDecimal(this.weight) + "]";
        }
    }

    public interface ActivitySorter {
        void sort(Intent r1, List<ActivityResolveInfo> r2, List<HistoricalRecord> r3);
    }

    private static final class DefaultSorter implements ActivitySorter {
        private static final float WEIGHT_DECAY_COEFFICIENT = 0.95f;
        private final Map<ComponentName, ActivityResolveInfo> mPackageNameToActivityMap;

        DefaultSorter() {
            this.mPackageNameToActivityMap = new HashMap();
        }

        @Override
        public void sort(Intent r7, List<ActivityResolveInfo> r8, List<HistoricalRecord> r9) {
            Map<ComponentName, ActivityResolveInfo> r72 = this.mPackageNameToActivityMap;
            r72.clear();
            int r0 = r8.size();
            int r1 = 0;
        L3:
            if (r1 >= r0) goto L5;
            ActivityResolveInfo r2 = r8.get(r1);
            r2.weight = 0.0f;
            r72.put(new ComponentName(r2.resolveInfo.activityInfo.packageName, r2.resolveInfo.activityInfo.name), r2);
            r1 = r1 + 1;
            goto L3
        L5:
            int r02 = r9.size() - 1;
            float r12 = ActivityChooserModel.DEFAULT_HISTORICAL_RECORD_WEIGHT;
        L6:
            if (r02 < 0) goto L11;
            HistoricalRecord r22 = r9.get(r02);
            ActivityResolveInfo r3 = r72.get(r22.activity);
            if (r3 == null) goto L10;
            r3.weight += r22.weight * r12;
            r12 = r12 * WEIGHT_DECAY_COEFFICIENT;
        L10:
            r02 = r02 - 1;
            goto L6
        L11:
            Collections.sort(r8);
        }
    }

    public static final class HistoricalRecord {
        public final ComponentName activity;
        public final long time;
        public final float weight;

        public HistoricalRecord(String r1, long r2, float r4) {
            this(ComponentName.unflattenFromString(r1), r2, r4);
        }

        public HistoricalRecord(ComponentName r1, long r2, float r4) {
            this.activity = r1;
            this.time = r2;
            this.weight = r4;
        }

        public int hashCode() {
            ComponentName r0 = this.activity;
            if (r0 != null) goto L5;
            int r02 = 0;
        L6:
            long r2 = this.time;
            return ((((r02 + 31) * 31) + ((int) (r2 ^ (r2 >>> 32)))) * 31) + Float.floatToIntBits(this.weight);
        L5:
            r02 = r0.hashCode();
            goto L6
        }

        public boolean equals(Object r8) {
            if (this != r8) goto L6;
            return true;
        L6:
            if (r8 != null) goto L9;
            return false;
        L9:
            if (getClass() == r8.getClass()) goto L11;
            return false;
        L11:
            HistoricalRecord r82 = (HistoricalRecord) r8;
            ComponentName r2 = this.activity;
            if (r2 != null) goto L17;
            if (r82.activity == null) goto L20;
            return false;
        L20:
            if (this.time == r82.time) goto L23;
            return false;
        L23:
            if (Float.floatToIntBits(this.weight) == Float.floatToIntBits(r82.weight)) goto L25;
            return false;
        L25:
            return true;
        L17:
            if (r2.equals(r82.activity) == true) goto L20;
            return false;
        }

        public String toString() {
            return "[; activity:" + this.activity + "; time:" + this.time + "; weight:" + new BigDecimal(this.weight) + "]";
        }
    }

    public interface OnChooseActivityListener {
        boolean onChooseActivity(ActivityChooserModel r1, Intent r2);
    }

    private final class PersistHistoryAsyncTask extends AsyncTask<Object, Void, Void> {
        final ActivityChooserModel this$0;

        @Override
        public Void doInBackground(Object[] r1) {
            return doInBackground(r1);
        }

        PersistHistoryAsyncTask(ActivityChooserModel r1) {
            this.this$0 = r1;
        }

        @Override
        public Void doInBackground(Object... r15) {
            List r4 = (List) r15[0];
            String r152 = (String) r15[1];
            FileOutputStream r153 = this.this$0.mContext.openFileOutput(r152, 0);     // Catch: FileNotFoundException -> L35
            XmlSerializer r7 = Xml.newSerializer();
            r7.setOutput(r153, null);     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            r7.startDocument("UTF-8", true);     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            r7.startTag(null, ActivityChooserModel.TAG_HISTORICAL_RECORDS);     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            int r8 = r4.size();     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            int r9 = 0;
        L6:
            if (r9 >= r8) goto L8;
            HistoricalRecord r10 = (HistoricalRecord) r4.remove(0);     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            r7.startTag(null, ActivityChooserModel.TAG_HISTORICAL_RECORD);     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            r7.attribute(null, ActivityChooserModel.ATTRIBUTE_ACTIVITY, r10.activity.flattenToString());     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            r7.attribute(null, ActivityChooserModel.ATTRIBUTE_TIME, String.valueOf(r10.time));     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            r7.attribute(null, ActivityChooserModel.ATTRIBUTE_WEIGHT, String.valueOf(r10.weight));     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            r7.endTag(null, ActivityChooserModel.TAG_HISTORICAL_RECORD);     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            r9 = r9 + 1;     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            goto L6
        L8:
            r7.endTag(null, ActivityChooserModel.TAG_HISTORICAL_RECORDS);     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            r7.endDocument();     // Catch: Throwable -> L13 IOException -> L15 IllegalStateException -> L20 IllegalArgumentException -> L25
            this.this$0.mCanReadHistoricalData = true;
            if (r153 != null) goto L43;
        L30:
            return null;
        L43:
            r153.close();     // Catch: IOException -> L38
            goto L30
        L13:
            th = move-exception;
            this.this$0.mCanReadHistoricalData = true;
            if (r153 != null) goto L46;
        L34:
            throw th;
        L46:
            r153.close();     // Catch: IOException -> L39
        L20:
            e = move-exception;
            Log.e(ActivityChooserModel.LOG_TAG, "Error writing historical record file: " + this.this$0.mHistoryFileName, e);     // Catch: Throwable -> L13
            this.this$0.mCanReadHistoricalData = true;
            if (r153 == null) goto L30;
        L15:
            e = move-exception;
            Log.e(ActivityChooserModel.LOG_TAG, "Error writing historical record file: " + this.this$0.mHistoryFileName, e);     // Catch: Throwable -> L13
            this.this$0.mCanReadHistoricalData = true;
            if (r153 == null) goto L30;
        L25:
            e = move-exception;
            Log.e(ActivityChooserModel.LOG_TAG, "Error writing historical record file: " + this.this$0.mHistoryFileName, e);     // Catch: Throwable -> L13
            this.this$0.mCanReadHistoricalData = true;
            if (r153 == null) goto L30;
        L35:
            e = move-exception;
            Log.e(ActivityChooserModel.LOG_TAG, "Error writing historical record file: " + r152, e);
            return null;
        }
    }

    static {
        sRegistryLock = new Object();
        sDataModelRegistry = new HashMap();
    }

    public static ActivityChooserModel get(Context r2, String r3) {
        Object r0 = sRegistryLock;
        monitor-enter(r0);
        ActivityChooserModel r1 = sDataModelRegistry.get(r3);     // Catch: Throwable -> L9
        if (r1 != null) goto L7;
        r1 = new ActivityChooserModel(r2, r3);     // Catch: Throwable -> L9
        sDataModelRegistry.put(r3, r1);     // Catch: Throwable -> L9
    L7:
        monitor-exit(r0);     // Catch: Throwable -> L9
        return r1;
    L9:
        th = move-exception;
        throw th;
    }

    private ActivityChooserModel(Context r3, String r4) {
        this.mInstanceLock = new Object();
        this.mActivities = new ArrayList();
        this.mHistoricalRecords = new ArrayList();
        this.mActivitySorter = new DefaultSorter();
        this.mHistoryMaxSize = 50;
        this.mCanReadHistoricalData = true;
        this.mReadShareHistoryCalled = false;
        this.mHistoricalRecordsChanged = true;
        this.mReloadActivities = false;
        this.mContext = r3.getApplicationContext();
        if (TextUtils.isEmpty(r4) == false) goto L5;
    L7:
        this.mHistoryFileName = r4;
        return;
    L5:
        if (r4.endsWith(HISTORY_FILE_EXTENSION) == true) goto L7;
        this.mHistoryFileName = r4 + HISTORY_FILE_EXTENSION;
    }

    public void setIntent(Intent r3) {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
    L11:
        th = move-exception;
        throw th;
    L5:
        if (this.mIntent != r3) goto L8;
        monitor-exit(r0);     // Catch: Throwable -> L11
        return;
    L8:
        this.mIntent = r3;     // Catch: Throwable -> L11
        this.mReloadActivities = true;     // Catch: Throwable -> L11
        ensureConsistentState();     // Catch: Throwable -> L11
        monitor-exit(r0);     // Catch: Throwable -> L11
    }

    public Intent getIntent() {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
        Intent r1 = this.mIntent;     // Catch: Throwable -> L7
        monitor-exit(r0);     // Catch: Throwable -> L7
        return r1;
    L7:
        th = move-exception;
        throw th;
    }

    public int getActivityCount() {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
        ensureConsistentState();     // Catch: Throwable -> L7
        int r1 = this.mActivities.size();     // Catch: Throwable -> L7
        monitor-exit(r0);     // Catch: Throwable -> L7
        return r1;
    L7:
        th = move-exception;
        throw th;
    }

    public ResolveInfo getActivity(int r3) {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
        ensureConsistentState();     // Catch: Throwable -> L7
        ResolveInfo r32 = this.mActivities.get(r3).resolveInfo;     // Catch: Throwable -> L7
        monitor-exit(r0);     // Catch: Throwable -> L7
        return r32;
    L7:
        th = move-exception;
        throw th;
    }

    public int getActivityIndex(ResolveInfo r6) {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
        ensureConsistentState();     // Catch: Throwable -> L14
        List<ActivityResolveInfo> r1 = this.mActivities;     // Catch: Throwable -> L14
        int r2 = r1.size();     // Catch: Throwable -> L14
        int r3 = 0;
    L5:
        if (r3 >= r2) goto L12;
        if (r1.get(r3).resolveInfo == r6) goto L8;
        r3 = r3 + 1;     // Catch: Throwable -> L14
        goto L5
    L8:
        monitor-exit(r0);     // Catch: Throwable -> L14
        return r3;
    L12:
        monitor-exit(r0);     // Catch: Throwable -> L14
        return -1;
    L14:
        th = move-exception;
        throw th;
    }

    public Intent chooseActivity(int r7) {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
    L17:
        th = move-exception;
        throw th;
    L5:
        if (this.mIntent != null) goto L8;
        monitor-exit(r0);     // Catch: Throwable -> L17
        return null;
    L8:
        ensureConsistentState();     // Catch: Throwable -> L17
        ActivityResolveInfo r72 = this.mActivities.get(r7);     // Catch: Throwable -> L17
        ComponentName r1 = new ComponentName(r72.resolveInfo.activityInfo.packageName, r72.resolveInfo.activityInfo.name);     // Catch: Throwable -> L17
        Intent r73 = new Intent(this.mIntent);     // Catch: Throwable -> L17
        r73.setComponent(r1);     // Catch: Throwable -> L17
        if (this.mActivityChoserModelPolicy == null) goto L14;
        Intent r3 = new Intent(r73);     // Catch: Throwable -> L17
        if (this.mActivityChoserModelPolicy.onChooseActivity(this, r3) == false) goto L14;
        monitor-exit(r0);     // Catch: Throwable -> L17
        return null;
    L14:
        addHistoricalRecord(new HistoricalRecord(r1, System.currentTimeMillis(), DEFAULT_HISTORICAL_RECORD_WEIGHT));     // Catch: Throwable -> L17
        monitor-exit(r0);     // Catch: Throwable -> L17
        return r73;
    }

    public void setOnChooseActivityListener(OnChooseActivityListener r2) {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
        this.mActivityChoserModelPolicy = r2;     // Catch: Throwable -> L7
        monitor-exit(r0);     // Catch: Throwable -> L7
        return;
    L7:
        th = move-exception;
        throw th;
    }

    public ResolveInfo getDefaultActivity() {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
        ensureConsistentState();     // Catch: Throwable -> L12
        if (this.mActivities.isEmpty() == true) goto L9;
        ResolveInfo r1 = this.mActivities.get(0).resolveInfo;     // Catch: Throwable -> L12
        monitor-exit(r0);     // Catch: Throwable -> L12
        return r1;
    L9:
        monitor-exit(r0);     // Catch: Throwable -> L12
        return null;
    L12:
        th = move-exception;
        throw th;
    }

    public void setDefaultActivity(int r6) {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
        ensureConsistentState();     // Catch: Throwable -> L11
        ActivityResolveInfo r62 = this.mActivities.get(r6);     // Catch: Throwable -> L11
        ActivityResolveInfo r1 = this.mActivities.get(0);     // Catch: Throwable -> L11
        if (r1 == null) goto L7;
        float r12 = (r1.weight - r62.weight) + 5.0f;     // Catch: Throwable -> L11
    L8:
        addHistoricalRecord(new HistoricalRecord(new ComponentName(r62.resolveInfo.activityInfo.packageName, r62.resolveInfo.activityInfo.name), System.currentTimeMillis(), r12));     // Catch: Throwable -> L11
        monitor-exit(r0);     // Catch: Throwable -> L11
        return;
    L7:
        r12 = DEFAULT_HISTORICAL_RECORD_WEIGHT;
    L11:
        th = move-exception;
        throw th;
    }

    private void persistHistoricalDataIfNeeded() {
        if (this.mReadShareHistoryCalled == false) goto L12;
        if (this.mHistoricalRecordsChanged == true) goto L7;
        return;
    L7:
        this.mHistoricalRecordsChanged = false;
        if (TextUtils.isEmpty(this.mHistoryFileName) == true) goto L13;
        new PersistHistoryAsyncTask(this).executeOnExecutor(AsyncTask.THREAD_POOL_EXECUTOR, new Object[]{new ArrayList(this.mHistoricalRecords), this.mHistoryFileName});
        return;
    L13:
        return;
    L12:
        throw new IllegalStateException("No preceding call to #readHistoricalData");
    }

    public void setActivitySorter(ActivitySorter r3) {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
    L13:
        th = move-exception;
        throw th;
    L5:
        if (this.mActivitySorter != r3) goto L8;
        monitor-exit(r0);     // Catch: Throwable -> L13
        return;
    L8:
        this.mActivitySorter = r3;     // Catch: Throwable -> L13
        if (sortActivitiesIfNeeded() == false) goto L11;
        notifyChanged();     // Catch: Throwable -> L13
    L11:
        monitor-exit(r0);     // Catch: Throwable -> L13
    }

    public void setHistoryMaxSize(int r3) {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
    L13:
        th = move-exception;
        throw th;
    L5:
        if (this.mHistoryMaxSize != r3) goto L8;
        monitor-exit(r0);     // Catch: Throwable -> L13
        return;
    L8:
        this.mHistoryMaxSize = r3;     // Catch: Throwable -> L13
        pruneExcessiveHistoricalRecordsIfNeeded();     // Catch: Throwable -> L13
        if (sortActivitiesIfNeeded() == false) goto L11;
        notifyChanged();     // Catch: Throwable -> L13
    L11:
        monitor-exit(r0);     // Catch: Throwable -> L13
    }

    public int getHistoryMaxSize() {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
        int r1 = this.mHistoryMaxSize;     // Catch: Throwable -> L7
        monitor-exit(r0);     // Catch: Throwable -> L7
        return r1;
    L7:
        th = move-exception;
        throw th;
    }

    public int getHistorySize() {
        Object r0 = this.mInstanceLock;
        monitor-enter(r0);
        ensureConsistentState();     // Catch: Throwable -> L7
        int r1 = this.mHistoricalRecords.size();     // Catch: Throwable -> L7
        monitor-exit(r0);     // Catch: Throwable -> L7
        return r1;
    L7:
        th = move-exception;
        throw th;
    }

    private void ensureConsistentState() {
        boolean r0 = loadActivitiesIfNeeded() | readHistoricalDataIfNeeded();
        pruneExcessiveHistoricalRecordsIfNeeded();
        if (r0 == false) goto L6;
        sortActivitiesIfNeeded();
        notifyChanged();
        return;
    }

    private boolean sortActivitiesIfNeeded() {
        if (this.mActivitySorter != null) goto L5;
        return false;
    L5:
        if (this.mIntent != null) goto L7;
        return false;
    L7:
        if (this.mActivities.isEmpty() == false) goto L9;
        return false;
    L9:
        if (this.mHistoricalRecords.isEmpty() == true) goto L16;
        this.mActivitySorter.sort(this.mIntent, this.mActivities, Collections.unmodifiableList(this.mHistoricalRecords));
        return true;
    L16:
        return false;
    }

    private boolean loadActivitiesIfNeeded() {
        int r1 = 0;
        if (this.mReloadActivities == true) goto L5;
    L11:
        return false;
    L5:
        if (this.mIntent == null) goto L11;
        this.mReloadActivities = false;
        this.mActivities.clear();
        List<ResolveInfo> r0 = this.mContext.getPackageManager().queryIntentActivities(this.mIntent, 0);
        int r2 = r0.size();
    L7:
        if (r1 >= r2) goto L9;
        ResolveInfo r3 = r0.get(r1);
        this.mActivities.add(new ActivityResolveInfo(r3));
        r1 = r1 + 1;
        goto L7
    L9:
        return true;
    }

    private boolean readHistoricalDataIfNeeded() {
        if (this.mCanReadHistoricalData == true) goto L5;
    L10:
        return false;
    L5:
        if (this.mHistoricalRecordsChanged == false) goto L10;
        if (TextUtils.isEmpty(this.mHistoryFileName) == true) goto L10;
        this.mCanReadHistoricalData = false;
        this.mReadShareHistoryCalled = true;
        readHistoricalDataImpl();
        return true;
    }

    private boolean addHistoricalRecord(HistoricalRecord r2) {
        boolean r22 = this.mHistoricalRecords.add(r2);
        if (r22 == false) goto L5;
        this.mHistoricalRecordsChanged = true;
        pruneExcessiveHistoricalRecordsIfNeeded();
        persistHistoricalDataIfNeeded();
        sortActivitiesIfNeeded();
        notifyChanged();
    L5:
        return r22;
    }

    private void pruneExcessiveHistoricalRecordsIfNeeded() {
        int r0 = this.mHistoricalRecords.size() - this.mHistoryMaxSize;
        if (r0 > 0) goto L5;
        return;
    L5:
        this.mHistoricalRecordsChanged = true;
        int r2 = 0;
    L6:
        if (r2 >= r0) goto L8;
        HistoricalRecord r3 = this.mHistoricalRecords.remove(0);
        r2 = r2 + 1;
        goto L6
    }

    private void readHistoricalDataImpl() {
        FileInputStream r1 = this.mContext.openFileInput(this.mHistoryFileName);     // Catch: FileNotFoundException -> L44
        XmlPullParser r2 = Xml.newPullParser();     // Catch: Throwable -> L30 IOException -> L32 XmlPullParserException -> L36
        r2.setInput(r1, "UTF-8");     // Catch: Throwable -> L30 IOException -> L32 XmlPullParserException -> L36
        int r3 = 0;
    L6:
        if (r3 == 1) goto L11;
        if (r3 == 2) goto L11;
        r3 = r2.next();     // Catch: Throwable -> L30 IOException -> L32 XmlPullParserException -> L36
    L11:
        if (TAG_HISTORICAL_RECORDS.equals(r2.getName()) == false) goto L29;
        List<HistoricalRecord> r32 = this.mHistoricalRecords;     // Catch: Throwable -> L30 IOException -> L32 XmlPullParserException -> L36
        r32.clear();     // Catch: Throwable -> L30 IOException -> L32 XmlPullParserException -> L36
    L13:
        int r5 = r2.next();     // Catch: Throwable -> L30 IOException -> L32 XmlPullParserException -> L36
        if (r5 == 1) goto L15;
        if (r5 == 3) goto L13;
        if (r5 == 4) goto L13;
        if (TAG_HISTORICAL_RECORD.equals(r2.getName()) == false) goto L27;
        r32.add(new HistoricalRecord(r2.getAttributeValue(null, ATTRIBUTE_ACTIVITY), Long.parseLong(r2.getAttributeValue(null, ATTRIBUTE_TIME)), Float.parseFloat(r2.getAttributeValue(null, ATTRIBUTE_WEIGHT))));     // Catch: Throwable -> L30 IOException -> L32 XmlPullParserException -> L36
        goto L13
    L27:
        throw new XmlPullParserException("Share records file not well-formed.");     // Catch: Throwable -> L30 IOException -> L32 XmlPullParserException -> L36
    L15:
        if (r1 != null) goto L52;
        return;
    L52:
        r1.close();     // Catch: IOException -> L45
        return;
    L67:
        return;
    L29:
        throw new XmlPullParserException("Share records file does not start with historical-records tag.");     // Catch: Throwable -> L30 IOException -> L32 XmlPullParserException -> L36
    L30:
        th = move-exception;
        if (r1 != null) goto L50;
    L43:
        throw th;
    L50:
        r1.close();     // Catch: IOException -> L46
    L32:
        e = move-exception;
        Log.e(LOG_TAG, "Error reading historical recrod file: " + this.mHistoryFileName, e);     // Catch: Throwable -> L30
        if (r1 != null) goto L52;
        return;
    L36:
        e = move-exception;
        Log.e(LOG_TAG, "Error reading historical recrod file: " + this.mHistoryFileName, e);     // Catch: Throwable -> L30
        if (r1 != null) goto L52;
        return;
    }
}
