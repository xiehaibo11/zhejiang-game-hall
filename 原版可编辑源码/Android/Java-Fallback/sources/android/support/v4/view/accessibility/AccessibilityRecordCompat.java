package android.support.v4.view.accessibility;

public class AccessibilityRecordCompat {
    private final android.view.accessibility.AccessibilityRecord mRecord;

    @java.lang.Deprecated
    public AccessibilityRecordCompat(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            android.view.accessibility.AccessibilityRecord r1 = (android.view.accessibility.AccessibilityRecord) r1
            r0.mRecord = r1
            return
    }

    public static int getMaxScrollX(android.view.accessibility.AccessibilityRecord r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 15
            if (r0 < r1) goto Lb
            int r2 = r2.getMaxScrollX()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public static int getMaxScrollY(android.view.accessibility.AccessibilityRecord r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 15
            if (r0 < r1) goto Lb
            int r2 = r2.getMaxScrollY()
            return r2
        Lb:
            r2 = 0
            return r2
    }

    @java.lang.Deprecated
    public static android.support.v4.view.accessibility.AccessibilityRecordCompat obtain() {
            android.support.v4.view.accessibility.AccessibilityRecordCompat r0 = new android.support.v4.view.accessibility.AccessibilityRecordCompat
            android.view.accessibility.AccessibilityRecord r1 = android.view.accessibility.AccessibilityRecord.obtain()
            r0.<init>(r1)
            return r0
    }

    @java.lang.Deprecated
    public static android.support.v4.view.accessibility.AccessibilityRecordCompat obtain(android.support.v4.view.accessibility.AccessibilityRecordCompat r1) {
            android.support.v4.view.accessibility.AccessibilityRecordCompat r0 = new android.support.v4.view.accessibility.AccessibilityRecordCompat
            android.view.accessibility.AccessibilityRecord r1 = r1.mRecord
            android.view.accessibility.AccessibilityRecord r1 = android.view.accessibility.AccessibilityRecord.obtain(r1)
            r0.<init>(r1)
            return r0
    }

    public static void setMaxScrollX(android.view.accessibility.AccessibilityRecord r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 15
            if (r0 < r1) goto L9
            r2.setMaxScrollX(r3)
        L9:
            return
    }

    public static void setMaxScrollY(android.view.accessibility.AccessibilityRecord r2, int r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 15
            if (r0 < r1) goto L9
            r2.setMaxScrollY(r3)
        L9:
            return
    }

    public static void setSource(android.view.accessibility.AccessibilityRecord r2, android.view.View r3, int r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L9
            r2.setSource(r3, r4)
        L9:
            return
    }

    @java.lang.Deprecated
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
            android.support.v4.view.accessibility.AccessibilityRecordCompat r5 = (android.support.v4.view.accessibility.AccessibilityRecordCompat) r5
            android.view.accessibility.AccessibilityRecord r2 = r4.mRecord
            if (r2 != 0) goto L1e
            android.view.accessibility.AccessibilityRecord r5 = r5.mRecord
            if (r5 == 0) goto L27
            return r1
        L1e:
            android.view.accessibility.AccessibilityRecord r5 = r5.mRecord
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L27
            return r1
        L27:
            return r0
    }

    @java.lang.Deprecated
    public int getAddedCount() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            int r0 = r0.getAddedCount()
            return r0
    }

    @java.lang.Deprecated
    public java.lang.CharSequence getBeforeText() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            java.lang.CharSequence r0 = r0.getBeforeText()
            return r0
    }

    @java.lang.Deprecated
    public java.lang.CharSequence getClassName() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            java.lang.CharSequence r0 = r0.getClassName()
            return r0
    }

    @java.lang.Deprecated
    public java.lang.CharSequence getContentDescription() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            java.lang.CharSequence r0 = r0.getContentDescription()
            return r0
    }

    @java.lang.Deprecated
    public int getCurrentItemIndex() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            int r0 = r0.getCurrentItemIndex()
            return r0
    }

    @java.lang.Deprecated
    public int getFromIndex() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            int r0 = r0.getFromIndex()
            return r0
    }

    @java.lang.Deprecated
    public java.lang.Object getImpl() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            return r0
    }

    @java.lang.Deprecated
    public int getItemCount() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            int r0 = r0.getItemCount()
            return r0
    }

    @java.lang.Deprecated
    public int getMaxScrollX() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            int r0 = getMaxScrollX(r0)
            return r0
    }

    @java.lang.Deprecated
    public int getMaxScrollY() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            int r0 = getMaxScrollY(r0)
            return r0
    }

    @java.lang.Deprecated
    public android.os.Parcelable getParcelableData() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            android.os.Parcelable r0 = r0.getParcelableData()
            return r0
    }

    @java.lang.Deprecated
    public int getRemovedCount() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            int r0 = r0.getRemovedCount()
            return r0
    }

    @java.lang.Deprecated
    public int getScrollX() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            int r0 = r0.getScrollX()
            return r0
    }

    @java.lang.Deprecated
    public int getScrollY() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            int r0 = r0.getScrollY()
            return r0
    }

    @java.lang.Deprecated
    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getSource() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            android.view.accessibility.AccessibilityNodeInfo r0 = r0.getSource()
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat r0 = android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.wrapNonNullInstance(r0)
            return r0
    }

    @java.lang.Deprecated
    public java.util.List<java.lang.CharSequence> getText() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            java.util.List r0 = r0.getText()
            return r0
    }

    @java.lang.Deprecated
    public int getToIndex() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            int r0 = r0.getToIndex()
            return r0
    }

    @java.lang.Deprecated
    public int getWindowId() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            int r0 = r0.getWindowId()
            return r0
    }

    @java.lang.Deprecated
    public int hashCode() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            int r0 = r0.hashCode()
        La:
            return r0
    }

    @java.lang.Deprecated
    public boolean isChecked() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            boolean r0 = r0.isChecked()
            return r0
    }

    @java.lang.Deprecated
    public boolean isEnabled() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            boolean r0 = r0.isEnabled()
            return r0
    }

    @java.lang.Deprecated
    public boolean isFullScreen() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            boolean r0 = r0.isFullScreen()
            return r0
    }

    @java.lang.Deprecated
    public boolean isPassword() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            boolean r0 = r0.isPassword()
            return r0
    }

    @java.lang.Deprecated
    public boolean isScrollable() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            boolean r0 = r0.isScrollable()
            return r0
    }

    @java.lang.Deprecated
    public void recycle() {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.recycle()
            return
    }

    @java.lang.Deprecated
    public void setAddedCount(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setAddedCount(r2)
            return
    }

    @java.lang.Deprecated
    public void setBeforeText(java.lang.CharSequence r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setBeforeText(r2)
            return
    }

    @java.lang.Deprecated
    public void setChecked(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setChecked(r2)
            return
    }

    @java.lang.Deprecated
    public void setClassName(java.lang.CharSequence r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setClassName(r2)
            return
    }

    @java.lang.Deprecated
    public void setContentDescription(java.lang.CharSequence r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setContentDescription(r2)
            return
    }

    @java.lang.Deprecated
    public void setCurrentItemIndex(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setCurrentItemIndex(r2)
            return
    }

    @java.lang.Deprecated
    public void setEnabled(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setEnabled(r2)
            return
    }

    @java.lang.Deprecated
    public void setFromIndex(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setFromIndex(r2)
            return
    }

    @java.lang.Deprecated
    public void setFullScreen(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setFullScreen(r2)
            return
    }

    @java.lang.Deprecated
    public void setItemCount(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setItemCount(r2)
            return
    }

    @java.lang.Deprecated
    public void setMaxScrollX(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            setMaxScrollX(r0, r2)
            return
    }

    @java.lang.Deprecated
    public void setMaxScrollY(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            setMaxScrollY(r0, r2)
            return
    }

    @java.lang.Deprecated
    public void setParcelableData(android.os.Parcelable r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setParcelableData(r2)
            return
    }

    @java.lang.Deprecated
    public void setPassword(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setPassword(r2)
            return
    }

    @java.lang.Deprecated
    public void setRemovedCount(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setRemovedCount(r2)
            return
    }

    @java.lang.Deprecated
    public void setScrollX(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setScrollX(r2)
            return
    }

    @java.lang.Deprecated
    public void setScrollY(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setScrollY(r2)
            return
    }

    @java.lang.Deprecated
    public void setScrollable(boolean r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setScrollable(r2)
            return
    }

    @java.lang.Deprecated
    public void setSource(android.view.View r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setSource(r2)
            return
    }

    @java.lang.Deprecated
    public void setSource(android.view.View r2, int r3) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            setSource(r0, r2, r3)
            return
    }

    @java.lang.Deprecated
    public void setToIndex(int r2) {
            r1 = this;
            android.view.accessibility.AccessibilityRecord r0 = r1.mRecord
            r0.setToIndex(r2)
            return
    }
}
