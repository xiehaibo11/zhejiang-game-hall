package com.bumptech.glide.request.target;

public class AppWidgetTarget extends com.bumptech.glide.request.target.SimpleTarget<android.graphics.Bitmap> {
    private final android.content.ComponentName componentName;
    private final android.content.Context context;
    private final android.widget.RemoteViews remoteViews;
    private final int viewId;
    private final int[] widgetIds;

    public AppWidgetTarget(android.content.Context r1, android.widget.RemoteViews r2, int r3, int r4, int r5, android.content.ComponentName r6) {
            r0 = this;
            r0.<init>(r4, r5)
            if (r1 == 0) goto L25
            if (r6 == 0) goto L1d
            if (r2 == 0) goto L15
            r0.context = r1
            r0.remoteViews = r2
            r0.viewId = r3
            r0.componentName = r6
            r1 = 0
            r0.widgetIds = r1
            return
        L15:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "RemoteViews object can not be null!"
            r1.<init>(r2)
            throw r1
        L1d:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "ComponentName can not be null!"
            r1.<init>(r2)
            throw r1
        L25:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "Context can not be null!"
            r1.<init>(r2)
            throw r1
    }

    public AppWidgetTarget(android.content.Context r1, android.widget.RemoteViews r2, int r3, int r4, int r5, int... r6) {
            r0 = this;
            r0.<init>(r4, r5)
            if (r1 == 0) goto L30
            if (r6 == 0) goto L28
            int r4 = r6.length
            if (r4 == 0) goto L20
            if (r2 == 0) goto L18
            r0.context = r1
            r0.remoteViews = r2
            r0.viewId = r3
            r0.widgetIds = r6
            r1 = 0
            r0.componentName = r1
            return
        L18:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "RemoteViews object can not be null!"
            r1.<init>(r2)
            throw r1
        L20:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "WidgetIds must have length > 0"
            r1.<init>(r2)
            throw r1
        L28:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "WidgetIds can not be null!"
            r1.<init>(r2)
            throw r1
        L30:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "Context can not be null!"
            r1.<init>(r2)
            throw r1
    }

    public AppWidgetTarget(android.content.Context r8, android.widget.RemoteViews r9, int r10, android.content.ComponentName r11) {
            r7 = this;
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r6 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public AppWidgetTarget(android.content.Context r8, android.widget.RemoteViews r9, int r10, int... r11) {
            r7 = this;
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r6 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    private void update() {
            r3 = this;
            android.content.Context r0 = r3.context
            android.appwidget.AppWidgetManager r0 = android.appwidget.AppWidgetManager.getInstance(r0)
            android.content.ComponentName r1 = r3.componentName
            if (r1 == 0) goto L10
            android.widget.RemoteViews r2 = r3.remoteViews
            r0.updateAppWidget(r1, r2)
            goto L17
        L10:
            int[] r1 = r3.widgetIds
            android.widget.RemoteViews r2 = r3.remoteViews
            r0.updateAppWidget(r1, r2)
        L17:
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
