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
                if (r0 == 0) goto L19
                com.bianfeng.platform.executor.LogoActivity$AnimationFinishListener r1 = r3.finishListener
                if (r1 == 0) goto L19
                int r1 = r3.getNumberOfFrames()
                r2 = 1
                int r1 = r1 - r2
                if (r4 != r1) goto L13
                goto L14
            L13:
                r2 = 0
            L14:
                com.bianfeng.platform.executor.LogoActivity$AnimationFinishListener r1 = r3.finishListener
                r1.onAnimationChanged(r4, r2)
            L19:
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


        public FrameView(com.bianfeng.platform.executor.LogoActivity r1, android.content.Context r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                r0.context = r2
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r2 = new com.bianfeng.platform.executor.LogoActivity$AnimationDrawable
                r2.<init>(r1)
                r0.animationDrawable = r2
                r0.initAnimationDrawable()
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r1 = r0.animationDrawable
                r0.setImageDrawable(r1)
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_CROP
                r0.setScaleType(r1)
                return
        }

        private int getDrawableId(java.lang.String r4) {
                r3 = this;
                android.content.Context r0 = r3.context
                android.content.res.Resources r0 = r0.getResources()
                android.content.Context r1 = r3.context
                r1.getPackageName()
                java.lang.String r1 = "drawable"
                java.lang.String r2 = "com.daren.goldzj"
                int r4 = r0.getIdentifier(r4, r1, r2)
                return r4
        }

        private void initAnimationDrawable() {
                r7 = this;
                com.bianfeng.platform.executor.LogoActivity r0 = r7.this$0
                boolean r0 = com.bianfeng.ymnsdk.util.SystemUtil.isScreenLandscape(r0)
                if (r0 != 0) goto Lb
                java.lang.String r0 = "third_logo_port"
                goto Ld
            Lb:
                java.lang.String r0 = "third_logo_land"
            Ld:
                r1 = 0
                r2 = 0
                r3 = 0
            L10:
                r4 = 5
                if (r2 >= r4) goto L49
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                r4.append(r0)
                if (r2 != 0) goto L20
                java.lang.String r5 = ""
                goto L24
            L20:
                java.lang.Integer r5 = java.lang.Integer.valueOf(r2)
            L24:
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                int r4 = r7.getDrawableId(r4)
                if (r4 <= 0) goto L49
                android.content.Context r5 = r7.context
                android.content.res.Resources r5 = r5.getResources()
                android.graphics.drawable.Drawable r4 = r5.getDrawable(r4)
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r5 = r7.animationDrawable
                com.bianfeng.platform.executor.LogoActivity r6 = r7.this$0
                int r6 = r6.DURATION_FRAME
                r5.addFrame(r4, r6)
                int r3 = r3 + 1
                int r2 = r2 + 1
                goto L10
            L49:
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r0 = r7.animationDrawable
                r2 = 1
                r0.setOneShot(r2)
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r0 = r7.animationDrawable
                com.bianfeng.platform.executor.LogoActivity r4 = r7.this$0
                int r4 = r4.DURATION_FADE
                r0.setEnterFadeDuration(r4)
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r0 = r7.animationDrawable
                com.bianfeng.platform.executor.LogoActivity r4 = r7.this$0
                int r4 = r4.DURATION_FADE
                r0.setExitFadeDuration(r4)
                com.bianfeng.platform.executor.LogoActivity$AnimationDrawable r0 = r7.animationDrawable
                com.bianfeng.platform.executor.LogoActivity$FrameView$1 r4 = new com.bianfeng.platform.executor.LogoActivity$FrameView$1
                r4.<init>(r7)
                r0.setFinishListener(r4)
                if (r3 > r2) goto L8b
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = "splash logo image count = "
                r0.append(r2)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                com.bianfeng.ymnsdk.util.Logger.w(r0)
                com.bianfeng.platform.executor.LogoActivity r0 = r7.this$0
                android.os.Handler r2 = r0.handler
                int r0 = r0.DURATION_FRAME
                long r3 = (long) r0
                r2.sendEmptyMessageDelayed(r1, r3)
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

    private int getDuration(java.lang.String r2, int r3) {
            r1 = this;
            java.lang.String r2 = com.bianfeng.ymnsdk.feature.YmnProperties.getValue(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lb
            return r3
        Lb:
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L10
            return r2
        L10:
            r2 = move-exception
            r2.printStackTrace()
            return r3
    }

    @Override
    public boolean handleMessage(android.os.Message r1) {
            r0 = this;
            r0.startMainActivity()     // Catch: java.lang.Exception -> L4
            goto L8
        L4:
            r1 = move-exception
            r1.printStackTrace()
        L8:
            r1 = 0
            return r1
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            android.os.Handler r2 = new android.os.Handler
            r2.<init>(r1)
            r1.handler = r2
            int r2 = r1.DURATION_FRAME
            java.lang.String r0 = "ymnLogoFrameDuration"
            int r2 = r1.getDuration(r0, r2)
            r1.DURATION_FRAME = r2
            int r2 = r1.DURATION_FADE
            java.lang.String r0 = "ymnLogoFadeDuration"
            int r2 = r1.getDuration(r0, r2)
            r1.DURATION_FADE = r2
            com.bianfeng.platform.executor.LogoActivity$FrameView r2 = new com.bianfeng.platform.executor.LogoActivity$FrameView
            r2.<init>(r1, r1)
            r1.setContentView(r2)
            r2.start()
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
