package com.tkay.expressad.video.signal.communication;

import android.os.Handler;
import android.os.Looper;
import com.tkay.expressad.foundation.h.t;

public class RewardJs extends BaseRewardJs implements IRewardBridge {
    private Handler j = new Handler(Looper.getMainLooper());

    @Override
    public void getEndScreenInfo(final Object obj, final String str) {
        if (t.b()) {
            super.getEndScreenInfo(obj, str);
        } else {
            this.j.post(new Runnable() {
                @Override
                public void run() {
                    RewardJs.super.getEndScreenInfo(obj, str);
                }
            });
        }
    }

    @Override
    public void install(final Object obj, final String str) {
        if (t.b()) {
            super.install(obj, str);
        } else {
            this.j.post(new Runnable() {
                @Override
                public void run() {
                    RewardJs.super.install(obj, str);
                }
            });
        }
    }

    @Override
    public void notifyCloseBtn(final Object obj, final String str) {
        if (t.b()) {
            super.notifyCloseBtn(obj, str);
        } else {
            this.j.post(new Runnable() {
                @Override
                public void run() {
                    RewardJs.super.notifyCloseBtn(obj, str);
                }
            });
        }
    }

    @Override
    public void toggleCloseBtn(final Object obj, final String str) {
        if (t.b()) {
            super.toggleCloseBtn(obj, str);
        } else {
            this.j.post(new Runnable() {
                @Override
                public void run() {
                    RewardJs.super.toggleCloseBtn(obj, str);
                }
            });
        }
    }

    @Override
    public void triggerCloseBtn(final Object obj, final String str) {
        if (t.b()) {
            super.triggerCloseBtn(obj, str);
        } else {
            this.j.post(new Runnable() {
                @Override
                public void run() {
                    RewardJs.super.getEndScreenInfo(obj, str);
                }
            });
        }
    }

    @Override
    public void setOrientation(final Object obj, final String str) {
        if (t.b()) {
            super.setOrientation(obj, str);
        } else {
            this.j.post(new Runnable() {
                @Override
                public void run() {
                    RewardJs.super.setOrientation(obj, str);
                }
            });
        }
    }

    @Override
    public void handlerPlayableException(final Object obj, final String str) {
        if (t.b()) {
            super.handlerPlayableException(obj, str);
        } else {
            this.j.post(new Runnable() {
                @Override
                public void run() {
                    RewardJs.super.handlerPlayableException(obj, str);
                }
            });
        }
    }

    @Override
    public void openURL(final Object obj, final String str) {
        if (t.b()) {
            super.openURL(obj, str);
        } else {
            this.j.post(new Runnable() {
                @Override
                public void run() {
                    RewardJs.super.openURL(obj, str);
                }
            });
        }
    }

    @Override
    public void cai(final Object obj, final String str) {
        if (t.b()) {
            super.cai(obj, str);
        } else {
            this.j.post(new Runnable() {
                @Override
                public void run() {
                    RewardJs.super.cai(obj, str);
                }
            });
        }
    }

    @Override
    public void gial(final Object obj, final String str) {
        if (t.b()) {
            super.gial(obj, str);
        } else {
            this.j.post(new Runnable() {
                @Override
                public void run() {
                    RewardJs.super.gial(obj, str);
                }
            });
        }
    }

    @Override
    public void feedbackPopupOperate(Object obj, String str) {
        super.feedbackPopupOperate(obj, str);
    }

    @Override
    public void feedbackOperate(Object obj, String str) {
        super.feedbackOperate(obj, str);
    }

    @Override
    public void feedbackLayoutOperate(Object obj, String str) {
        super.feedbackLayoutOperate(obj, str);
    }
}
