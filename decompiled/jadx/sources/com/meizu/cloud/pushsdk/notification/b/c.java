package com.meizu.cloud.pushsdk.notification.b;

import android.app.Notification;
import android.content.Context;
import android.graphics.Bitmap;
import android.widget.RemoteViews;
import com.meizu.cloud.pushsdk.handler.MessageV3;
import com.meizu.cloud.pushsdk.notification.PushNotificationBuilder;
import com.meizu.cloud.pushsdk.util.MinSdkChecker;

/* JADX INFO: loaded from: classes3.dex */
public class c extends com.meizu.cloud.pushsdk.notification.a {
    public c(Context context, PushNotificationBuilder pushNotificationBuilder) {
        super(context, pushNotificationBuilder);
    }

    @Override // com.meizu.cloud.pushsdk.notification.a
    protected void a(Notification notification, MessageV3 messageV3) {
        if (MinSdkChecker.isSupportNotificationBuild()) {
            RemoteViews remoteViews = new RemoteViews(this.f4619a.getPackageName(), com.meizu.cloud.pushsdk.notification.c.c.a(this.f4619a));
            remoteViews.setTextViewText(com.meizu.cloud.pushsdk.notification.c.c.d(this.f4619a), messageV3.getTitle());
            remoteViews.setTextViewText(com.meizu.cloud.pushsdk.notification.c.c.e(this.f4619a), messageV3.getContent());
            remoteViews.setLong(com.meizu.cloud.pushsdk.notification.c.c.f(this.f4619a), "setTime", System.currentTimeMillis());
            a(remoteViews, messageV3);
            remoteViews.setViewVisibility(com.meizu.cloud.pushsdk.notification.c.c.g(this.f4619a), 8);
            remoteViews.setViewVisibility(com.meizu.cloud.pushsdk.notification.c.c.h(this.f4619a), 8);
            notification.contentView = remoteViews;
        }
    }

    protected void a(RemoteViews remoteViews, MessageV3 messageV3) {
        Bitmap bitmapA;
        if (messageV3.getAppIconSetting() == null || a() || messageV3.getAppIconSetting().isDefaultLargeIcon() || (bitmapA = a(messageV3.getAppIconSetting().getLargeIconUrl())) == null) {
            remoteViews.setImageViewBitmap(com.meizu.cloud.pushsdk.notification.c.c.k(this.f4619a), a(this.f4619a, messageV3.getUploadDataPackageName()));
        } else {
            remoteViews.setImageViewBitmap(com.meizu.cloud.pushsdk.notification.c.c.k(this.f4619a), bitmapA);
        }
    }
}
