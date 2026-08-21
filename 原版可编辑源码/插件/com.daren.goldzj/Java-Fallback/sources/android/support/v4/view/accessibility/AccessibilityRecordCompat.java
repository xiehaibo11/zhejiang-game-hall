package android.support.v4.view.accessibility;

import android.os.Build;
import android.os.Parcelable;
import android.support.annotation.NonNull;
import android.view.View;
import android.view.accessibility.AccessibilityRecord;
import java.util.List;

public class AccessibilityRecordCompat {
    private final AccessibilityRecord mRecord;

    @Deprecated
    public AccessibilityRecordCompat(Object r1) {
        this.mRecord = (AccessibilityRecord) r1;
    }

    @Deprecated
    public Object getImpl() {
        return this.mRecord;
    }

    @Deprecated
    public static AccessibilityRecordCompat obtain(AccessibilityRecordCompat r1) {
        return new AccessibilityRecordCompat(AccessibilityRecord.obtain(r1.mRecord));
    }

    @Deprecated
    public static AccessibilityRecordCompat obtain() {
        return new AccessibilityRecordCompat(AccessibilityRecord.obtain());
    }

    @Deprecated
    public void setSource(View r2) {
        this.mRecord.setSource(r2);
    }

    @Deprecated
    public void setSource(View r2, int r3) {
        setSource(this.mRecord, r2, r3);
    }

    public static void setSource(@NonNull AccessibilityRecord r2, View r3, int r4) {
        if (Build.VERSION.SDK_INT < 16) goto L6;
        r2.setSource(r3, r4);
        return;
    }

    @Deprecated
    public AccessibilityNodeInfoCompat getSource() {
        return AccessibilityNodeInfoCompat.wrapNonNullInstance(this.mRecord.getSource());
    }

    @Deprecated
    public int getWindowId() {
        return this.mRecord.getWindowId();
    }

    @Deprecated
    public boolean isChecked() {
        return this.mRecord.isChecked();
    }

    @Deprecated
    public void setChecked(boolean r2) {
        this.mRecord.setChecked(r2);
    }

    @Deprecated
    public boolean isEnabled() {
        return this.mRecord.isEnabled();
    }

    @Deprecated
    public void setEnabled(boolean r2) {
        this.mRecord.setEnabled(r2);
    }

    @Deprecated
    public boolean isPassword() {
        return this.mRecord.isPassword();
    }

    @Deprecated
    public void setPassword(boolean r2) {
        this.mRecord.setPassword(r2);
    }

    @Deprecated
    public boolean isFullScreen() {
        return this.mRecord.isFullScreen();
    }

    @Deprecated
    public void setFullScreen(boolean r2) {
        this.mRecord.setFullScreen(r2);
    }

    @Deprecated
    public boolean isScrollable() {
        return this.mRecord.isScrollable();
    }

    @Deprecated
    public void setScrollable(boolean r2) {
        this.mRecord.setScrollable(r2);
    }

    @Deprecated
    public int getItemCount() {
        return this.mRecord.getItemCount();
    }

    @Deprecated
    public void setItemCount(int r2) {
        this.mRecord.setItemCount(r2);
    }

    @Deprecated
    public int getCurrentItemIndex() {
        return this.mRecord.getCurrentItemIndex();
    }

    @Deprecated
    public void setCurrentItemIndex(int r2) {
        this.mRecord.setCurrentItemIndex(r2);
    }

    @Deprecated
    public int getFromIndex() {
        return this.mRecord.getFromIndex();
    }

    @Deprecated
    public void setFromIndex(int r2) {
        this.mRecord.setFromIndex(r2);
    }

    @Deprecated
    public int getToIndex() {
        return this.mRecord.getToIndex();
    }

    @Deprecated
    public void setToIndex(int r2) {
        this.mRecord.setToIndex(r2);
    }

    @Deprecated
    public int getScrollX() {
        return this.mRecord.getScrollX();
    }

    @Deprecated
    public void setScrollX(int r2) {
        this.mRecord.setScrollX(r2);
    }

    @Deprecated
    public int getScrollY() {
        return this.mRecord.getScrollY();
    }

    @Deprecated
    public void setScrollY(int r2) {
        this.mRecord.setScrollY(r2);
    }

    @Deprecated
    public int getMaxScrollX() {
        return getMaxScrollX(this.mRecord);
    }

    public static int getMaxScrollX(AccessibilityRecord r2) {
        if (Build.VERSION.SDK_INT >= 15) goto L5;
        return 0;
    L5:
        return r2.getMaxScrollX();
    }

    @Deprecated
    public void setMaxScrollX(int r2) {
        setMaxScrollX(this.mRecord, r2);
    }

    public static void setMaxScrollX(AccessibilityRecord r2, int r3) {
        if (Build.VERSION.SDK_INT < 15) goto L6;
        r2.setMaxScrollX(r3);
        return;
    }

    @Deprecated
    public int getMaxScrollY() {
        return getMaxScrollY(this.mRecord);
    }

    public static int getMaxScrollY(AccessibilityRecord r2) {
        if (Build.VERSION.SDK_INT >= 15) goto L5;
        return 0;
    L5:
        return r2.getMaxScrollY();
    }

    @Deprecated
    public void setMaxScrollY(int r2) {
        setMaxScrollY(this.mRecord, r2);
    }

    public static void setMaxScrollY(AccessibilityRecord r2, int r3) {
        if (Build.VERSION.SDK_INT < 15) goto L6;
        r2.setMaxScrollY(r3);
        return;
    }

    @Deprecated
    public int getAddedCount() {
        return this.mRecord.getAddedCount();
    }

    @Deprecated
    public void setAddedCount(int r2) {
        this.mRecord.setAddedCount(r2);
    }

    @Deprecated
    public int getRemovedCount() {
        return this.mRecord.getRemovedCount();
    }

    @Deprecated
    public void setRemovedCount(int r2) {
        this.mRecord.setRemovedCount(r2);
    }

    @Deprecated
    public CharSequence getClassName() {
        return this.mRecord.getClassName();
    }

    @Deprecated
    public void setClassName(CharSequence r2) {
        this.mRecord.setClassName(r2);
    }

    @Deprecated
    public List<CharSequence> getText() {
        return this.mRecord.getText();
    }

    @Deprecated
    public CharSequence getBeforeText() {
        return this.mRecord.getBeforeText();
    }

    @Deprecated
    public void setBeforeText(CharSequence r2) {
        this.mRecord.setBeforeText(r2);
    }

    @Deprecated
    public CharSequence getContentDescription() {
        return this.mRecord.getContentDescription();
    }

    @Deprecated
    public void setContentDescription(CharSequence r2) {
        this.mRecord.setContentDescription(r2);
    }

    @Deprecated
    public Parcelable getParcelableData() {
        return this.mRecord.getParcelableData();
    }

    @Deprecated
    public void setParcelableData(Parcelable r2) {
        this.mRecord.setParcelableData(r2);
    }

    @Deprecated
    public void recycle() {
        this.mRecord.recycle();
    }

    @Deprecated
    public int hashCode() {
        AccessibilityRecord r0 = this.mRecord;
        if (r0 != null) goto L6;
        return 0;
    L6:
        return r0.hashCode();
    }

    @Deprecated
    public boolean equals(Object r5) {
        if (this != r5) goto L6;
        return true;
    L6:
        if (r5 != null) goto L9;
        return false;
    L9:
        if (getClass() == r5.getClass()) goto L11;
        return false;
    L11:
        AccessibilityRecordCompat r52 = (AccessibilityRecordCompat) r5;
        AccessibilityRecord r2 = this.mRecord;
        if (r2 != null) goto L17;
        if (r52.mRecord == null) goto L19;
        return false;
    L19:
        return true;
    L17:
        if (r2.equals(r52.mRecord) == true) goto L19;
        return false;
    }
}
