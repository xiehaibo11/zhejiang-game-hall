package com.bianfeng.platform.executor;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.text.TextUtils;
import android.widget.ImageView;
import com.bianfeng.platform.PaymentWrapper;
import com.bianfeng.ymnsdk.feature.YmnProperties;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.SystemUtil;
import com.bianqi.wpll.BuildConfig;

public class LogoActivity extends Activity implements Handler.Callback {
    int DURATION_FADE;
    int DURATION_FRAME;
    Handler handler;

    class AnimationDrawable extends android.graphics.drawable.AnimationDrawable {
        private AnimationFinishListener finishListener;
        final LogoActivity this$0;

        AnimationDrawable(LogoActivity r1) {
            this.this$0 = r1;
        }

        public AnimationFinishListener getFinishListener() {
            return this.finishListener;
        }

        @Override
        public boolean selectDrawable(int r4) {
            boolean r0 = super.selectDrawable(r4);
            if (r0 == true) goto L5;
        L11:
            return r0;
        L5:
            if (this.finishListener == null) goto L11;
            boolean r2 = true;
            if (r4 == (getNumberOfFrames() - 1)) goto L10;
            r2 = false;
        L10:
            this.finishListener.onAnimationChanged(r4, r2);
            goto L11
        }

        void setFinishListener(AnimationFinishListener r1) {
            this.finishListener = r1;
        }
    }

    public interface AnimationFinishListener {
        void onAnimationChanged(int r1, boolean r2);
    }

    public class FrameView extends ImageView {
        AnimationDrawable animationDrawable;
        Context context;
        final LogoActivity this$0;

        public FrameView(LogoActivity r1, Context r2) {
            this.this$0 = r1;
            super(r2);
            this.context = r2;
            this.animationDrawable = new AnimationDrawable(r1);
            initAnimationDrawable();
            setImageDrawable(this.animationDrawable);
            setScaleType(ImageView.ScaleType.CENTER_CROP);
        }

        private int getDrawableId(String r4) {
            Resources r0 = this.context.getResources();
            this.context.getPackageName();
            return r0.getIdentifier(r4, "drawable", BuildConfig.APPLICATION_ID);
        }

        private void initAnimationDrawable() {
            if (SystemUtil.isScreenLandscape(this.this$0) == true) goto L5;
            String r0 = "third_logo_port";
        L6:
            int r2 = 0;
            int r3 = 0;
        L8:
            if (r2 >= 5) goto L16;
            StringBuilder r4 = new StringBuilder();
            r4.append(r0);
            if (r2 != 0) goto L12;
            Object r5 = "";
        L13:
            r4.append(r5);
            int r42 = getDrawableId(r4.toString());
            if (r42 <= 0) goto L16;
            this.animationDrawable.addFrame(this.context.getResources().getDrawable(r42), this.this$0.DURATION_FRAME);
            r3 = r3 + 1;
            r2 = r2 + 1;
            goto L8
        L12:
            r5 = Integer.valueOf(r2);
        L16:
            this.animationDrawable.setOneShot(true);
            this.animationDrawable.setEnterFadeDuration(this.this$0.DURATION_FADE);
            this.animationDrawable.setExitFadeDuration(this.this$0.DURATION_FADE);
            this.animationDrawable.setFinishListener(new 1(this));
            if (r3 > 1) goto L22;
            Logger.w("splash logo image count = " + r3);
            LogoActivity r02 = this.this$0;
            r02.handler.sendEmptyMessageDelayed(0, (long) r02.DURATION_FRAME);
            return;
        L22:
            return;
        L5:
            r0 = "third_logo_land";
            goto L6
        }

        public void start() {
            this.animationDrawable.start();
        }
    }

    public LogoActivity() {
        this.DURATION_FRAME = 1000;
        this.DURATION_FADE = PaymentWrapper.PAYRESULT_SUCCESS;
    }

    private int getDuration(String r2, int r3) {
        String r22 = YmnProperties.getValue(r2);
        if (TextUtils.isEmpty(r22) == false) goto L10;
        return r3;
    L10:
        return Integer.parseInt(r22);
    L7:
        e = move-exception;
        e.printStackTrace();
        return r3;
    }

    @Override
    public boolean handleMessage(Message r1) {
        startMainActivity();     // Catch: Exception -> L4
        return false;
    L4:
        e = move-exception;
        e.printStackTrace();
        return false;
    }

    @Override
    protected void onCreate(Bundle r2) {
        super.onCreate(r2);
        this.handler = new Handler(this);
        this.DURATION_FRAME = getDuration("ymnLogoFrameDuration", this.DURATION_FRAME);
        this.DURATION_FADE = getDuration("ymnLogoFadeDuration", this.DURATION_FADE);
        FrameView r22 = new FrameView(this, this);
        setContentView(r22);
        r22.start();
    }

    public void startMainActivity() {
        if (isFinishing() == false) goto L5;
        return;
    L5:
        ComponentName r0 = new ComponentName(this, AppConfig.getMainActivity());
        Intent r1 = new Intent();
        r1.setComponent(r0);
        startActivity(r1);
        finish();
    }
}
