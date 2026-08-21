package com.bumptech.glide.request.target;

public class NotificationTarget extends com.bumptech.glide.request.target.SimpleTarget<android.graphics.Bitmap> {
    private final android.content.Context context;
    private final android.app.Notification notification;
    private final int notificationId;
    private final android.widget.RemoteViews remoteViews;
    private final int viewId;

    public NotificationTarget(android.content.Context r1, android.widget.RemoteViews r2, int r3, int r4, int r5, android.app.Notification r6, int r7) {
            r0 = this;
            r0.<init>(r4, r5)
            if (r1 == 0) goto L24
            if (r6 == 0) goto L1c
            if (r2 == 0) goto L14
            r0.context = r1
            r0.viewId = r3
            r0.notification = r6
            r0.notificationId = r7
            r0.remoteViews = r2
            return
        L14:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "RemoteViews object can not be null!"
            r1.<init>(r2)
            throw r1
        L1c:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "Notification object can not be null!"
            r1.<init>(r2)
            throw r1
        L24:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "Context must not be null!"
            r1.<init>(r2)
            throw r1
    }

    public NotificationTarget(android.content.Context r9, android.widget.RemoteViews r10, int r11, android.app.Notification r12, int r13) {
            r8 = this;
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r6 = r12
            r7 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    private void update() {
            r3 = this;
            android.content.Context r0 = r3.context
            java.lang.String r1 = "notification"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            int r1 = r3.notificationId
            android.app.Notification r2 = r3.notification
            r0.notify(r1, r2)
            return
    }

    public void onResourceReady(android.graphics.Bitmap r2, com.bumptech.glide.request.animation.GlideAnimation<? super android.graphics.Bitmap> r3) {
            r1 = this;
            android.widget.RemoteViews r3 = r1.remoteViews
            int r0 = r1.viewId
            r3.setImageViewBitmap(r0, r2)
            r1.update()
            return
    }

    @Override
    public void onResourceReady(java.lang.Object r1, com.bumptech.glide.request.animation.GlideAnimation r2) {
            r0 = this;
            android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1
            r0.onResourceReady(r1, r2)
            return
    }
}
