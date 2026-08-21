package com.kwad.sdk.api.core;

@com.kwad.sdk.api.core.KsAdSdkDynamicApi
public class RemoteViewBuilder {

    static class 1 {
    }

    static class CompletedRemoteViewImpl implements com.kwad.sdk.api.core.ICompletedRemoteView {
        private final android.content.Context mContext;
        private final android.content.Context mOriginContext;
        private final android.widget.RemoteViews mRemoteViews;

        private CompletedRemoteViewImpl(android.content.Context r4) {
                r3 = this;
                r3.<init>()
                r3.mContext = r4
                boolean r0 = r4 instanceof com.kwad.sdk.api.core.ResContext
                if (r0 == 0) goto Lf
                com.kwad.sdk.api.core.ResContext r4 = (com.kwad.sdk.api.core.ResContext) r4
                android.content.Context r4 = r4.getDelegatedContext()
            Lf:
                r3.mOriginContext = r4
                android.widget.RemoteViews r4 = new android.widget.RemoteViews
                android.content.Context r0 = r3.mOriginContext
                java.lang.String r0 = r0.getPackageName()
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_notification_download_completed"
                int r1 = com.kwad.sdk.api.core.ResUtil.getLayoutId(r1, r2)
                r4.<init>(r0, r1)
                r3.mRemoteViews = r4
                return
        }

        CompletedRemoteViewImpl(android.content.Context r1, com.kwad.sdk.api.core.RemoteViewBuilder.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public android.widget.RemoteViews build() {
                r1 = this;
                android.widget.RemoteViews r0 = r1.mRemoteViews
                return r0
        }

        @Override
        public void setIcon(int r2) {
                r1 = this;
                android.content.Context r0 = r1.mContext
                android.graphics.Bitmap r2 = com.kwad.sdk.api.core.RemoteViewBuilder.access$000(r0, r2)
                r1.setIcon(r2)
                return
        }

        @Override
        public void setIcon(android.graphics.Bitmap r4) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_icon"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setImageViewBitmap(r1, r4)
                return
        }

        @Override
        public void setInstallText(java.lang.String r4) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_install"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setTextViewText(r1, r4)
                return
        }

        @Override
        public void setName(java.lang.String r4) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_name"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setTextViewText(r1, r4)
                return
        }

        @Override
        public void setSize(java.lang.String r4) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_size"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setTextViewText(r1, r4)
                return
        }

        @Override
        public void setStatus(java.lang.String r4) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_status"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setTextViewText(r1, r4)
                return
        }
    }

    static class ProgressRemoteViewImpl implements com.kwad.sdk.api.core.IProgressRemoteView {
        private static final java.lang.String ACTION_CLICK_CONTROL_BTN = "com.ksad.action.ACTION_NOTIFICATION_CLICK_CONTROL_BTN";
        private static final java.lang.String KEY_TASKID = "taskId";
        private int btnControlId;
        private int btnTextColorChecked;
        private int btnTextColorUnchecked;
        private int downloadTaskId;
        private final android.content.Context mContext;
        private final android.content.Context mOriginContext;
        private final android.widget.RemoteViews mRemoteViews;

        private ProgressRemoteViewImpl(android.content.Context r3, int r4, boolean r5) {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.btnControlId = r0
                java.lang.String r0 = "#FFFFFFFF"
                int r0 = android.graphics.Color.parseColor(r0)
                r2.btnTextColorChecked = r0
                java.lang.String r0 = "#FF222222"
                int r0 = android.graphics.Color.parseColor(r0)
                r2.btnTextColorUnchecked = r0
                r0 = 0
                r2.downloadTaskId = r0
                r2.mContext = r3
                r2.downloadTaskId = r4
                boolean r4 = r3 instanceof com.kwad.sdk.api.core.ResContext
                if (r4 == 0) goto L27
                com.kwad.sdk.api.core.ResContext r3 = (com.kwad.sdk.api.core.ResContext) r3
                android.content.Context r3 = r3.getDelegatedContext()
            L27:
                r2.mOriginContext = r3
                if (r5 == 0) goto L2e
                java.lang.String r3 = "ksad_notification_download_progress_with_control"
                goto L30
            L2e:
                java.lang.String r3 = "ksad_notification_download_progress_without_control"
            L30:
                android.widget.RemoteViews r4 = new android.widget.RemoteViews
                android.content.Context r5 = r2.mOriginContext
                java.lang.String r5 = r5.getPackageName()
                android.content.Context r1 = r2.mOriginContext
                int r3 = com.kwad.sdk.api.core.ResUtil.getLayoutId(r1, r3)
                r4.<init>(r5, r3)
                r2.mRemoteViews = r4
                android.content.Context r3 = r2.mOriginContext
                java.lang.String r4 = "ksad_download_control_btn"
                int r3 = com.kwad.sdk.api.core.ResUtil.getId(r3, r4)
                r2.btnControlId = r3
                r2.initViews()
                r2.setControlBtnPaused(r0)
                return
        }

        ProgressRemoteViewImpl(android.content.Context r1, int r2, boolean r3, com.kwad.sdk.api.core.RemoteViewBuilder.1 r4) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        private void initViews() {
                r4 = this;
                android.content.Intent r0 = new android.content.Intent
                java.lang.String r1 = "com.ksad.action.ACTION_NOTIFICATION_CLICK_CONTROL_BTN"
                r0.<init>(r1)
                int r1 = r4.downloadTaskId
                java.lang.String r2 = "taskId"
                r0.putExtra(r2, r1)
                android.content.Context r1 = r4.mContext
                int r2 = r4.downloadTaskId
                r3 = 0
                android.app.PendingIntent r0 = android.app.PendingIntent.getBroadcast(r1, r2, r0, r3)
                android.widget.RemoteViews r1 = r4.mRemoteViews
                int r2 = r4.btnControlId
                r1.setOnClickPendingIntent(r2, r0)
                return
        }

        @Override
        public android.widget.RemoteViews build() {
                r1 = this;
                android.widget.RemoteViews r0 = r1.mRemoteViews
                return r0
        }

        @Override
        public void setControlBtnPaused(boolean r4) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                if (r0 != 0) goto L5
                return
            L5:
                if (r4 == 0) goto La
                java.lang.String r0 = "继续"
                goto Lc
            La:
                java.lang.String r0 = "暂停"
            Lc:
                android.widget.RemoteViews r1 = r3.mRemoteViews
                int r2 = r3.btnControlId
                r1.setTextViewText(r2, r0)
                if (r4 == 0) goto L18
                int r0 = r3.btnTextColorChecked
                goto L1a
            L18:
                int r0 = r3.btnTextColorUnchecked
            L1a:
                android.widget.RemoteViews r1 = r3.mRemoteViews
                int r2 = r3.btnControlId
                r1.setTextColor(r2, r0)
                if (r4 == 0) goto L28
                android.content.Context r4 = r3.mOriginContext
                java.lang.String r0 = "ksad_notification_control_btn_bg_checked"
                goto L2c
            L28:
                android.content.Context r4 = r3.mOriginContext
                java.lang.String r0 = "ksad_notification_control_btn_bg_unchecked"
            L2c:
                int r4 = com.kwad.sdk.api.core.ResUtil.getDrawableId(r4, r0)
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_control_bg_image"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setImageViewResource(r1, r4)
                return
        }

        @Override
        public void setIcon(int r2) {
                r1 = this;
                android.content.Context r0 = r1.mContext
                android.graphics.Bitmap r2 = com.kwad.sdk.api.core.RemoteViewBuilder.access$000(r0, r2)
                r1.setIcon(r2)
                return
        }

        @Override
        public void setIcon(android.graphics.Bitmap r4) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_icon"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setImageViewBitmap(r1, r4)
                return
        }

        @Override
        public void setName(java.lang.String r4) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_name"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setTextViewText(r1, r4)
                return
        }

        @Override
        public void setPercentNum(java.lang.String r4) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_percent_num"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setTextViewText(r1, r4)
                return
        }

        @Override
        public void setProgress(int r4, int r5, boolean r6) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_progress"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setProgressBar(r1, r4, r5, r6)
                return
        }

        @Override
        public void setSize(java.lang.String r4) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_size"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setTextViewText(r1, r4)
                return
        }

        @Override
        public void setStatus(java.lang.String r4) {
                r3 = this;
                android.widget.RemoteViews r0 = r3.mRemoteViews
                android.content.Context r1 = r3.mOriginContext
                java.lang.String r2 = "ksad_download_status"
                int r1 = com.kwad.sdk.api.core.ResUtil.getId(r1, r2)
                r0.setTextViewText(r1, r4)
                return
        }
    }

    public RemoteViewBuilder() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.graphics.Bitmap access$000(android.content.Context r0, int r1) {
            android.graphics.Bitmap r0 = getBitmap(r0, r1)
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public static com.kwad.sdk.api.core.ICompletedRemoteView createCompletedView(android.content.Context r2) {
            com.kwad.sdk.api.core.RemoteViewBuilder$CompletedRemoteViewImpl r0 = new com.kwad.sdk.api.core.RemoteViewBuilder$CompletedRemoteViewImpl
            r1 = 0
            r0.<init>(r2, r1)
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    @java.lang.Deprecated
    public static com.kwad.sdk.api.core.IProgressRemoteView createProgressView(android.content.Context r3) {
            com.kwad.sdk.api.core.RemoteViewBuilder$ProgressRemoteViewImpl r0 = new com.kwad.sdk.api.core.RemoteViewBuilder$ProgressRemoteViewImpl
            r1 = 0
            r2 = 0
            r0.<init>(r3, r1, r1, r2)
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkDynamicApi
    public static com.kwad.sdk.api.core.IProgressRemoteView createProgressView(android.content.Context r2, int r3, boolean r4) {
            com.kwad.sdk.api.core.RemoteViewBuilder$ProgressRemoteViewImpl r0 = new com.kwad.sdk.api.core.RemoteViewBuilder$ProgressRemoteViewImpl
            r1 = 0
            r0.<init>(r2, r3, r4, r1)
            return r0
    }

    private static android.graphics.Bitmap drawableToBitmap(android.graphics.drawable.Drawable r5) {
            boolean r0 = r5 instanceof android.graphics.drawable.BitmapDrawable
            if (r0 == 0) goto Lb
            android.graphics.drawable.BitmapDrawable r5 = (android.graphics.drawable.BitmapDrawable) r5
            android.graphics.Bitmap r5 = r5.getBitmap()
            return r5
        Lb:
            android.graphics.Rect r0 = r5.getBounds()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L1e
            android.graphics.Rect r0 = r5.getBounds()
            int r0 = r0.width()
            goto L22
        L1e:
            int r0 = r5.getIntrinsicWidth()
        L22:
            android.graphics.Rect r1 = r5.getBounds()
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L35
            android.graphics.Rect r1 = r5.getBounds()
            int r1 = r1.height()
            goto L39
        L35:
            int r1 = r5.getIntrinsicHeight()
        L39:
            r2 = 1
            if (r0 > 0) goto L3d
            r0 = r2
        L3d:
            if (r1 > 0) goto L40
            r1 = r2
        L40:
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2)
            android.graphics.Canvas r1 = new android.graphics.Canvas
            r1.<init>(r0)
            int r2 = r1.getWidth()
            int r3 = r1.getHeight()
            r4 = 0
            r5.setBounds(r4, r4, r2, r3)
            r5.draw(r1)
            return r0
    }

    private static android.graphics.Bitmap getBitmap(android.content.Context r0, int r1) {
            android.content.res.Resources r0 = r0.getResources()
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            android.graphics.Bitmap r0 = drawableToBitmap(r0)
            return r0
    }
}
