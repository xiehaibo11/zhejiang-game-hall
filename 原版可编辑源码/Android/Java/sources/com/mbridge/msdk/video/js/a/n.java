package com.mbridge.msdk.video.js.a;

import com.mbridge.msdk.video.module.MBridgeVideoView;

public final class n extends g {
    private MBridgeVideoView a;

    public n(MBridgeVideoView mBridgeVideoView) {
        this.a = mBridgeVideoView;
    }

    @Override
    public final void showVideoLocation(int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9) {
        super.showVideoLocation(i, i2, i3, i4, i5, i6, i7, i8, i9);
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.showVideoLocation(i, i2, i3, i4, i5, i6, i7, i8, i9);
        }
    }

    @Override
    public final void soundOperate(int i, int i2) {
        super.soundOperate(i, i2);
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.soundOperate(i, i2);
        }
    }

    @Override
    public final void soundOperate(int i, int i2, String str) {
        super.soundOperate(i, i2, str);
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.soundOperate(i, i2, str);
        }
    }

    @Override
    public final void videoOperate(int i) {
        super.videoOperate(i);
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.videoOperate(i);
        }
    }

    @Override
    public final void closeVideoOperate(int i, int i2) {
        super.closeVideoOperate(i, i2);
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.closeVideoOperate(i, i2);
        }
    }

    @Override
    public final void progressOperate(int i, int i2) {
        super.progressOperate(i, i2);
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.progressOperate(i, i2);
        }
    }

    @Override
    public final void progressBarOperate(int i) {
        super.progressBarOperate(i);
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.progressBarOperate(i);
        }
    }

    @Override
    public final String getCurrentProgress() {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            return mBridgeVideoView.getCurrentProgress();
        }
        return super.getCurrentProgress();
    }

    @Override
    public final void setVisible(int i) {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.setVisible(i);
        } else {
            super.setVisible(i);
        }
    }

    @Override
    public final void setCover(boolean z) {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.setCover(z);
        } else {
            super.setCover(z);
        }
    }

    @Override
    public final void setScaleFitXY(int i) {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.setScaleFitXY(i);
        } else {
            super.setScaleFitXY(i);
        }
    }

    @Override
    public final boolean isH5Canvas() {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            return mBridgeVideoView.isH5Canvas();
        }
        return super.isH5Canvas();
    }

    @Override
    public final int getBorderViewWidth() {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            return mBridgeVideoView.getBorderViewWidth();
        }
        return super.getBorderViewWidth();
    }

    @Override
    public final int getBorderViewHeight() {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            return mBridgeVideoView.getBorderViewHeight();
        }
        return super.getBorderViewHeight();
    }

    @Override
    public final int getBorderViewRadius() {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            return mBridgeVideoView.getBorderViewRadius();
        }
        return super.getBorderViewRadius();
    }

    @Override
    public final int getBorderViewTop() {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            return mBridgeVideoView.getBorderViewTop();
        }
        return super.getBorderViewTop();
    }

    @Override
    public final int getBorderViewLeft() {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            return mBridgeVideoView.getBorderViewLeft();
        }
        return super.getBorderViewLeft();
    }

    @Override
    public final void showIVRewardAlertView(String str) {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.showIVRewardAlertView(str);
        } else {
            super.showIVRewardAlertView(str);
        }
    }

    @Override
    public final void hideAlertView(int i) {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.hideAlertView(i);
        } else {
            super.hideAlertView(i);
        }
    }

    @Override
    public final void alertWebViewShowed() {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.alertWebViewShowed();
        } else {
            super.alertWebViewShowed();
        }
    }

    @Override
    public final void showAlertView() {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.showAlertView();
        } else {
            super.showAlertView();
        }
    }

    @Override
    public final void dismissAllAlert() {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.dismissAllAlert();
        } else {
            super.dismissAllAlert();
        }
    }

    @Override
    public final void setInstallDialogState(boolean z) {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.setInstallDialogState(z);
        } else {
            super.setInstallDialogState(z);
        }
    }

    @Override
    public final void setMiniEndCardState(boolean z) {
        MBridgeVideoView mBridgeVideoView = this.a;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.setMiniEndCardState(z);
        } else {
            super.setMiniEndCardState(z);
        }
    }
}
