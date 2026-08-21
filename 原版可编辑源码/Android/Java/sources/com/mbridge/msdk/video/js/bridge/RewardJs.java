package com.mbridge.msdk.video.js.bridge;

import android.os.Handler;
import android.os.Looper;
import com.mbridge.msdk.foundation.tools.ae;

public class RewardJs extends BaseRewardJs implements IRewardBridge {
    private Handler b = new Handler(Looper.getMainLooper());

    @Override
    public void getEndScreenInfo(final Object obj, final String str) {
        if (ae.b()) {
            super.getEndScreenInfo(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    RewardJs.super.getEndScreenInfo(obj, str);
                }
            });
        }
    }

    @Override
    public void install(final Object obj, final String str) {
        if (ae.b()) {
            super.install(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    RewardJs.super.install(obj, str);
                }
            });
        }
    }

    @Override
    public void notifyCloseBtn(final Object obj, final String str) {
        if (ae.b()) {
            super.notifyCloseBtn(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    RewardJs.super.notifyCloseBtn(obj, str);
                }
            });
        }
    }

    @Override
    public void toggleCloseBtn(final Object obj, final String str) {
        if (ae.b()) {
            super.toggleCloseBtn(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    RewardJs.super.toggleCloseBtn(obj, str);
                }
            });
        }
    }

    @Override
    public void triggerCloseBtn(final Object obj, final String str) {
        if (ae.b()) {
            super.triggerCloseBtn(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    RewardJs.super.getEndScreenInfo(obj, str);
                }
            });
        }
    }

    @Override
    public void setOrientation(final Object obj, final String str) {
        if (ae.b()) {
            super.setOrientation(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    RewardJs.super.setOrientation(obj, str);
                }
            });
        }
    }

    @Override
    public void handlerPlayableException(final Object obj, final String str) {
        if (ae.b()) {
            super.handlerPlayableException(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    RewardJs.super.handlerPlayableException(obj, str);
                }
            });
        }
    }

    @Override
    public void openURL(final Object obj, final String str) {
        if (ae.b()) {
            super.openURL(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    RewardJs.super.openURL(obj, str);
                }
            });
        }
    }

    @Override
    public void cai(final Object obj, final String str) {
        if (ae.b()) {
            super.cai(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    RewardJs.super.cai(obj, str);
                }
            });
        }
    }

    @Override
    public void gial(final Object obj, final String str) {
        if (ae.b()) {
            super.gial(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    RewardJs.super.gial(obj, str);
                }
            });
        }
    }
}
