package com.bianfeng.platform.executor;

public class LogoActivity extends android.app.Activity implements android.os.Handler.Callback {
    int DURATION_FADE;
    int DURATION_FRAME;
    android.os.Handler handler;

    class AnimationDrawable extends android.graphics.drawable.AnimationDrawable {
        private com.bianfeng.platform.executor.LogoActivity.AnimationFinishListener finishListener;
        final com.bianfeng.platform.executor.LogoActivity this$0;

        AnimationDrawable(com.bianfeng.platform.executor.LogoActivity r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        public com.bianfeng.platform.executor.LogoActivity.AnimationFinishListener getFinishListener() {
                r1 = this;
                com.bianfeng.platform.executor.LogoActivity$AnimationFinishListener r0 = r1.finishListener
                return r0
        }

        @Override
        public boolean selectDrawable(int r4) {
                r3 = this;
                boolean r0 = super.selectDrawable(r4)
                if (r0 == 0) goto L1a
                com.bianfeng.platform.executor.LogoActivity$AnimationFinishListener r1 = r3.finishListener
                if (r1 == 0) goto L1a
                int r1 = r3.getNumberOfFrames()
                r2 = 1
                int r1 = r1 - r2
                if (r4 != r1) goto L13
                goto L14
            L13:
                r2 = 0
            L14:
                r1 = r2
                com.bianfeng.platform.executor.LogoActivity$AnimationFinishListener r2 = r3.finishListener
                r2.onAnimationChanged(r4, r1)
            L1a:
                return r0
        }

        void setFinishListener(com.bianfeng.platform.executor.LogoActivity.AnimationFinishListener r1) {
                r0 = this;
                r0.finishListener = r1
                return
        }
    }

    public interface AnimationFinishListener {
        void onAnimationChanged(int r1, boolean r2);
    }

    public class FrameView extends android.widget.ImageView {
        com.bianfeng.platform.executor.LogoActivity.AnimationDrawable animationDrawable;
        android.content.Context context;
        final com.bianfeng.platform.executor.LogoActivity this$0;


        public FrameView(com.bianfeng.platform.executor.LogoActivity r2, android.content.Context r3) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>(r3)
                r1.context = r3
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r0 = new com.bianfeng.platform.executor.LogoActivity$AnimationDrawable
                r0.<init>(r2)
                r1.animationDrawable = r0
                r1.initAnimationDrawable()
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r0 = r1.animationDrawable
                r1.setImageDrawable(r0)
                android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.CENTER_CROP
                r1.setScaleType(r0)
                return
        }

        private int getDrawableId(java.lang.String r4) {
                r3 = this;
                android.content.Context r0 = r3.context
                android.content.res.Resources r0 = r0.getResources()
                android.content.Context r1 = r3.context
                java.lang.String r1 = r1.getPackageName()
                java.lang.String r2 = "drawable"
                int r0 = r0.getIdentifier(r4, r2, r1)
                return r0
        }

        private void initAnimationDrawable() {
                r7 = this;
                r0 = 0
                java.lang.String r1 = "third_logo_land"
                com.bianfeng.platform.executor.LogoActivity r2 = r7.this$0
                boolean r2 = com.bianfeng.ymnsdk.util.SystemUtil.isScreenLandscape(r2)
                if (r2 != 0) goto Ld
                java.lang.String r1 = "third_logo_port"
            Ld:
                r2 = 0
            Le:
                r3 = 5
                if (r2 >= r3) goto L48
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r1)
                if (r2 != 0) goto L1e
                java.lang.String r4 = ""
                goto L22
            L1e:
                java.lang.Integer r4 = java.lang.Integer.valueOf(r2)
            L22:
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                int r3 = r7.getDrawableId(r3)
                if (r3 <= 0) goto L48
                android.content.Context r4 = r7.context
                android.content.res.Resources r4 = r4.getResources()
                android.graphics.drawable.Drawable r4 = r4.getDrawable(r3)
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r5 = r7.animationDrawable
                com.bianfeng.platform.executor.LogoActivity r6 = r7.this$0
                int r6 = r6.DURATION_FRAME
                r5.addFrame(r4, r6)
                int r0 = r0 + 1
                int r2 = r2 + 1
                goto Le
            L48:
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r2 = r7.animationDrawable
                r3 = 1
                r2.setOneShot(r3)
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r2 = r7.animationDrawable
                com.bianfeng.platform.executor.LogoActivity r4 = r7.this$0
                int r4 = r4.DURATION_FADE
                r2.setEnterFadeDuration(r4)
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r2 = r7.animationDrawable
                com.bianfeng.platform.executor.LogoActivity r4 = r7.this$0
                int r4 = r4.DURATION_FADE
                r2.setExitFadeDuration(r4)
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r2 = r7.animationDrawable
                com.bianfeng.platform.executor.LogoActivity$FrameView$1 r4 = new com.bianfeng.platform.executor.LogoActivity$FrameView$1
                r4.<init>(r7)
                r2.setFinishListener(r4)
                if (r0 > r3) goto L8b
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "splash logo image count = "
                r2.append(r3)
                r2.append(r0)
                java.lang.String r2 = r2.toString()
                com.bianfeng.ymnsdk.util.Logger.w(r2)
                com.bianfeng.platform.executor.LogoActivity r2 = r7.this$0
                android.os.Handler r3 = r2.handler
                r4 = 0
                int r2 = r2.DURATION_FRAME
                long r5 = (long) r2
                r3.sendEmptyMessageDelayed(r4, r5)
            L8b:
                return
        }

        public void start() {
                r1 = this;
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r0 = r1.animationDrawable
                r0.start()
                return
        }
    }

    public LogoActivity() {
            r1 = this;
            r1.<init>()
            r0 = 1000(0x3e8, float:1.401E-42)
            r1.DURATION_FRAME = r0
            r0 = 200(0xc8, float:2.8E-43)
            r1.DURATION_FADE = r0
            return
    }

    private int getDuration(java.lang.String r3, int r4) {
            r2 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.YmnProperties.getValue(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Lb
            return r4
        Lb:
            int r1 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L10
            return r1
        L10:
            r1 = move-exception
            r1.printStackTrace()
            return r4
    }

    @Override
    public boolean handleMessage(android.os.Message r2) {
            r1 = this;
            r1.startMainActivity()     // Catch: java.lang.Exception -> L4
            goto L8
        L4:
            r0 = move-exception
            r0.printStackTrace()
        L8:
            r0 = 0
            return r0
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            android.os.Handler r0 = new android.os.Handler
            r0.<init>(r2)
            r2.handler = r0
            int r0 = r2.DURATION_FRAME
            java.lang.String r1 = "ymnLogoFrameDuration"
            int r0 = r2.getDuration(r1, r0)
            r2.DURATION_FRAME = r0
            int r0 = r2.DURATION_FADE
            java.lang.String r1 = "ymnLogoFadeDuration"
            int r0 = r2.getDuration(r1, r0)
            r2.DURATION_FADE = r0
            com.bianfeng.platform.executor.LogoActivity$FrameView r0 = new com.bianfeng.platform.executor.LogoActivity$FrameView
            r0.<init>(r2, r2)
            r2.setContentView(r0)
            r0.start()
            return
    }

    public void startMainActivity() {
            r2 = this;
            boolean r0 = r2.isFinishing()
            if (r0 == 0) goto L7
            return
        L7:
            android.content.ComponentName r0 = new android.content.ComponentName
            java.lang.String r1 = com.bianfeng.platform.executor.AppConfig.getMainActivity()
            r0.<init>(r2, r1)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            r1.setComponent(r0)
            r2.startActivity(r1)
            r2.finish()
            return
    }
}
