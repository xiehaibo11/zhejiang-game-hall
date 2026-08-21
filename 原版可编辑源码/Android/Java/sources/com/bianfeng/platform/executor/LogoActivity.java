package com.bianfeng.platform.executor;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.text.TextUtils;
import android.widget.ImageView;
import com.bianfeng.ymnsdk.feature.YmnProperties;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.SystemUtil;
import com.tkay.expressad.foundation.h.i;

public class LogoActivity extends Activity implements Handler.Callback {
    Handler handler;
    int DURATION_FRAME = 1000;
    int DURATION_FADE = 200;

    public interface AnimationFinishListener {
        void onAnimationChanged(int i, boolean z);
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        this.handler = new Handler(this);
        this.DURATION_FRAME = getDuration("ymnLogoFrameDuration", this.DURATION_FRAME);
        this.DURATION_FADE = getDuration("ymnLogoFadeDuration", this.DURATION_FADE);
        FrameView view = new FrameView(this);
        setContentView(view);
        view.start();
    }

    private int getDuration(String key, int defVal) {
        String value = YmnProperties.getValue(key);
        if (TextUtils.isEmpty(value)) {
            return defVal;
        }
        try {
            return Integer.parseInt(value);
        } catch (Exception e) {
            e.printStackTrace();
            return defVal;
        }
    }

    @Override
    public boolean handleMessage(Message msg) {
        try {
            startMainActivity();
            return false;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public void startMainActivity() {
        if (isFinishing()) {
            return;
        }
        ComponentName component = new ComponentName(this, AppConfig.getMainActivity());
        Intent intent = new Intent();
        intent.setComponent(component);
        startActivity(intent);
        finish();
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

        private void initAnimationDrawable() {
            int logoCount = 0;
            String splashName = "third_logo_land";
            if (!SystemUtil.isScreenLandscape(LogoActivity.this)) {
                splashName = "third_logo_port";
            }
            int i = 0;
            while (i < 5) {
                StringBuilder sb = new StringBuilder();
                sb.append(splashName);
                sb.append(i == 0 ? "" : Integer.valueOf(i));
                int resId = getDrawableId(sb.toString());
                if (resId <= 0) {
                    break;
                }
                Drawable drawable = this.context.getResources().getDrawable(resId);
                this.animationDrawable.addFrame(drawable, LogoActivity.this.DURATION_FRAME);
                logoCount++;
                i++;
            }
            this.animationDrawable.setOneShot(true);
            this.animationDrawable.setEnterFadeDuration(LogoActivity.this.DURATION_FADE);
            this.animationDrawable.setExitFadeDuration(LogoActivity.this.DURATION_FADE);
            this.animationDrawable.setFinishListener(new AnimationFinishListener() {
                @Override
                public void onAnimationChanged(int index, boolean finished) {
                    if (finished) {
                        LogoActivity.this.handler.sendEmptyMessageDelayed(0, r0.DURATION_FRAME);
                    }
                }
            });
            if (logoCount <= 1) {
                Logger.w("splash logo image count = " + logoCount);
                LogoActivity logoActivity = LogoActivity.this;
                logoActivity.handler.sendEmptyMessageDelayed(0, (long) logoActivity.DURATION_FRAME);
            }
        }

        private int getDrawableId(String name) {
            return this.context.getResources().getIdentifier(name, i.c, this.context.getPackageName());
        }

        public void start() {
            this.animationDrawable.start();
        }
    }

    class AnimationDrawable extends android.graphics.drawable.AnimationDrawable {
        private AnimationFinishListener finishListener;

        AnimationDrawable() {
        }

        public AnimationFinishListener getFinishListener() {
            return this.finishListener;
        }

        void setFinishListener(AnimationFinishListener finishListener) {
            this.finishListener = finishListener;
        }

        @Override
        public boolean selectDrawable(int index) {
            boolean drawableChanged = super.selectDrawable(index);
            if (drawableChanged && this.finishListener != null) {
                boolean animationFinished = index == getNumberOfFrames() - 1;
                this.finishListener.onAnimationChanged(index, animationFinished);
            }
            return drawableChanged;
        }
    }
}
