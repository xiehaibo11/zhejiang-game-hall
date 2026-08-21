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
    Handler handler;
    int DURATION_FRAME = 1000;
    int DURATION_FADE = PaymentWrapper.PAYRESULT_SUCCESS;

    class AnimationDrawable extends android.graphics.drawable.AnimationDrawable {
        private AnimationFinishListener finishListener;

        AnimationDrawable() {
        }

        public AnimationFinishListener getFinishListener() {
            return this.finishListener;
        }

        @Override
        public boolean selectDrawable(int i) {
            boolean zSelectDrawable = super.selectDrawable(i);
            if (zSelectDrawable && this.finishListener != null) {
                this.finishListener.onAnimationChanged(i, i == getNumberOfFrames() - 1);
            }
            return zSelectDrawable;
        }

        void setFinishListener(AnimationFinishListener animationFinishListener) {
            this.finishListener = animationFinishListener;
        }
    }

    public interface AnimationFinishListener {
        void onAnimationChanged(int i, boolean z);
    }

    public class FrameView extends ImageView {
        AnimationDrawable animationDrawable;
        Context context;

        public FrameView(Context context) {
            super(context);
            this.context = context;
            this.animationDrawable = LogoActivity.this.new AnimationDrawable();
            initAnimationDrawable();
            setImageDrawable(this.animationDrawable);
            setScaleType(ImageView.ScaleType.CENTER_CROP);
        }

        private int getDrawableId(String str) {
            Resources resources = this.context.getResources();
            this.context.getPackageName();
            return resources.getIdentifier(str, "drawable", BuildConfig.APPLICATION_ID);
        }

        private void initAnimationDrawable() {
            String str = !SystemUtil.isScreenLandscape(LogoActivity.this) ? "third_logo_port" : "third_logo_land";
            int i = 0;
            int i2 = 0;
            while (i < 5) {
                StringBuilder sb = new StringBuilder();
                sb.append(str);
                sb.append(i == 0 ? "" : Integer.valueOf(i));
                int drawableId = getDrawableId(sb.toString());
                if (drawableId <= 0) {
                    break;
                }
                this.animationDrawable.addFrame(this.context.getResources().getDrawable(drawableId), LogoActivity.this.DURATION_FRAME);
                i2++;
                i++;
            }
            this.animationDrawable.setOneShot(true);
            this.animationDrawable.setEnterFadeDuration(LogoActivity.this.DURATION_FADE);
            this.animationDrawable.setExitFadeDuration(LogoActivity.this.DURATION_FADE);
            this.animationDrawable.setFinishListener(new AnimationFinishListener() {
                @Override
                public void onAnimationChanged(int i3, boolean z) {
                    if (z) {
                        LogoActivity.this.handler.sendEmptyMessageDelayed(0, r3.DURATION_FRAME);
                    }
                }
            });
            if (i2 <= 1) {
                Logger.w("splash logo image count = " + i2);
                LogoActivity logoActivity = LogoActivity.this;
                logoActivity.handler.sendEmptyMessageDelayed(0, (long) logoActivity.DURATION_FRAME);
            }
        }

        public void start() {
            this.animationDrawable.start();
        }
    }

    private int getDuration(String str, int i) {
        String value = YmnProperties.getValue(str);
        if (TextUtils.isEmpty(value)) {
            return i;
        }
        try {
            return Integer.parseInt(value);
        } catch (Exception e) {
            e.printStackTrace();
            return i;
        }
    }

    @Override
    public boolean handleMessage(Message message) {
        try {
            startMainActivity();
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.handler = new Handler(this);
        this.DURATION_FRAME = getDuration("ymnLogoFrameDuration", this.DURATION_FRAME);
        this.DURATION_FADE = getDuration("ymnLogoFadeDuration", this.DURATION_FADE);
        FrameView frameView = new FrameView(this);
        setContentView(frameView);
        frameView.start();
    }

    public void startMainActivity() {
        if (isFinishing()) {
            return;
        }
        ComponentName componentName = new ComponentName(this, AppConfig.getMainActivity());
        Intent intent = new Intent();
        intent.setComponent(componentName);
        startActivity(intent);
        finish();
    }
}
