package com.meizu.cloud.pushsdk.notification;

public class PushNotificationBuilder {
    private java.lang.String appLabel;
    private android.graphics.Bitmap appLargeIcon;
    private java.lang.String clickPackageName;
    private android.content.Context context;
    private int mLargeIcon;
    private int mNotificationDefaults;
    private int mNotificationFlags;
    private java.lang.String mNotificationSound;
    private int mStatusBarIcon;
    private long[] mVibratePattern;

    public PushNotificationBuilder() {
            r0 = this;
            r0.<init>()
            return
    }

    public PushNotificationBuilder(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            return
    }

    public java.lang.String getAppLabel() {
            r1 = this;
            java.lang.String r0 = r1.appLabel
            return r0
    }

    public android.graphics.Bitmap getAppLargeIcon() {
            r1 = this;
            android.graphics.Bitmap r0 = r1.appLargeIcon
            return r0
    }

    public java.lang.String getClickPackageName() {
            r1 = this;
            java.lang.String r0 = r1.clickPackageName
            return r0
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.context
            return r0
    }

    public int getLargeIcon() {
            r1 = this;
            int r0 = r1.mLargeIcon
            return r0
    }

    public int getNotificationDefaults() {
            r1 = this;
            int r0 = r1.mNotificationDefaults
            return r0
    }

    public int getNotificationFlags() {
            r1 = this;
            int r0 = r1.mNotificationFlags
            return r0
    }

    public java.lang.String getNotificationSound() {
            r1 = this;
            java.lang.String r0 = r1.mNotificationSound
            return r0
    }

    public int getStatusBarIcon() {
            r1 = this;
            int r0 = r1.mStatusBarIcon
            return r0
    }

    public long[] getVibratePattern() {
            r1 = this;
            long[] r0 = r1.mVibratePattern
            return r0
    }

    public void setAppLabel(java.lang.String r1) {
            r0 = this;
            r0.appLabel = r1
            return
    }

    public void setAppLargeIcon(android.graphics.Bitmap r1) {
            r0 = this;
            r0.appLargeIcon = r1
            return
    }

    public void setClickPackageName(java.lang.String r1) {
            r0 = this;
            r0.clickPackageName = r1
            return
    }

    public void setContext(android.content.Context r1) {
            r0 = this;
            r0.context = r1
            return
    }

    public void setLargeIcon(int r1) {
            r0 = this;
            r0.mLargeIcon = r1
            return
    }

    public void setNotificationDefaults(int r1) {
            r0 = this;
            r0.mNotificationDefaults = r1
            return
    }

    public void setNotificationFlags(int r1) {
            r0 = this;
            r0.mNotificationFlags = r1
            return
    }

    public void setNotificationSound(java.lang.String r1) {
            r0 = this;
            r0.mNotificationSound = r1
            return
    }

    public void setStatusBarIcon(int r1) {
            r0 = this;
            r0.mStatusBarIcon = r1
            return
    }

    public void setVibratePattern(long[] r1) {
            r0 = this;
            r0.mVibratePattern = r1
            return
    }
}
