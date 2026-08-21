package com.kwad.sdk.api.push;

@com.kwad.sdk.api.core.KsAdSdkApi
public class KsNotificationCompat {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static final class Builder {
        private android.support.v4.app.NotificationCompat.Builder mBuilder;

        @com.kwad.sdk.api.core.KsAdSdkApi
        public Builder(android.content.Context r2) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        public Builder(android.content.Context r2, java.lang.String r3) {
                r1 = this;
                r1.<init>()
                android.support.v4.app.NotificationCompat$Builder r0 = new android.support.v4.app.NotificationCompat$Builder     // Catch: java.lang.Throwable -> Lb
                r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> Lb
                r1.mBuilder = r0     // Catch: java.lang.Throwable -> Lb
                return
            Lb:
                android.support.v4.app.NotificationCompat$Builder r3 = new android.support.v4.app.NotificationCompat$Builder
                r3.<init>(r2)
                r1.mBuilder = r3
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder addAction(int r2, java.lang.CharSequence r3, android.app.PendingIntent r4) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.addAction(r2, r3, r4)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder addExtras(android.os.Bundle r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.addExtras(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder addPerson(java.lang.String r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.addPerson(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final android.app.Notification build() {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                android.app.Notification r0 = r0.build()
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final android.os.Bundle getExtras() {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                android.os.Bundle r0 = r0.getExtras()
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final android.app.Notification getNotification() {
                r1 = this;
                android.app.Notification r0 = r1.build()
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setAutoCancel(boolean r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setAutoCancel(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setBadgeIconType(int r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setBadgeIconType(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setCategory(java.lang.String r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setCategory(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setChannelId(java.lang.String r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setChannelId(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setColor(int r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setColor(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setColorized(boolean r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setColorized(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setContent(android.widget.RemoteViews r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setContent(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setContentInfo(java.lang.CharSequence r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setContentInfo(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setContentIntent(android.app.PendingIntent r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setContentIntent(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setContentText(java.lang.CharSequence r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setContentText(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setContentTitle(java.lang.CharSequence r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setContentTitle(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setCustomBigContentView(android.widget.RemoteViews r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setCustomBigContentView(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setCustomContentView(android.widget.RemoteViews r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setCustomContentView(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setCustomHeadsUpContentView(android.widget.RemoteViews r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setCustomHeadsUpContentView(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setDefaults(int r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setDefaults(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setDeleteIntent(android.app.PendingIntent r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setDeleteIntent(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setExtras(android.os.Bundle r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setExtras(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setFullScreenIntent(android.app.PendingIntent r2, boolean r3) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setFullScreenIntent(r2, r3)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setGroup(java.lang.String r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setGroup(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setGroupAlertBehavior(int r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setGroupAlertBehavior(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setGroupSummary(boolean r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setGroupSummary(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setLargeIcon(android.graphics.Bitmap r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setLargeIcon(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setLights(int r2, int r3, int r4) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setLights(r2, r3, r4)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setLocalOnly(boolean r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setLocalOnly(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setNumber(int r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setNumber(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setOngoing(boolean r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setOngoing(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setOnlyAlertOnce(boolean r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setOnlyAlertOnce(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setPriority(int r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setPriority(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setProgress(int r2, int r3, boolean r4) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setProgress(r2, r3, r4)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setPublicVersion(android.app.Notification r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setPublicVersion(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setRemoteInputHistory(java.lang.CharSequence[] r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setRemoteInputHistory(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setShortcutId(java.lang.String r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setShortcutId(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setShowWhen(boolean r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setShowWhen(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setSmallIcon(int r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setSmallIcon(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setSmallIcon(int r2, int r3) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setSmallIcon(r2, r3)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setSortKey(java.lang.String r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setSortKey(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setSound(android.net.Uri r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setSound(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setSound(android.net.Uri r2, int r3) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setSound(r2, r3)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setSubText(java.lang.CharSequence r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setSubText(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setTicker(java.lang.CharSequence r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setTicker(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setTicker(java.lang.CharSequence r2, android.widget.RemoteViews r3) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setTicker(r2, r3)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setTimeoutAfter(long r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setTimeoutAfter(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setUsesChronometer(boolean r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setUsesChronometer(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setVibrate(long[] r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setVibrate(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setVisibility(int r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setVisibility(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public final com.kwad.sdk.api.push.KsNotificationCompat.Builder setWhen(long r2) {
                r1 = this;
                android.support.v4.app.NotificationCompat$Builder r0 = r1.mBuilder
                r0.setWhen(r2)
                return r1
        }
    }

    public KsNotificationCompat() {
            r0 = this;
            r0.<init>()
            return
    }
}
