package com.tkay.expressad.video.signal.a;

import com.tkay.expressad.video.module.TkayVideoView;

/* JADX INFO: loaded from: classes3.dex */
public final class n extends g {
    private TkayVideoView t;

    public n(TkayVideoView tkayVideoView) {
        this.t = tkayVideoView;
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void showVideoLocation(int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9) {
        super.showVideoLocation(i, i2, i3, i4, i5, i6, i7, i8, i9);
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.showVideoLocation(i, i2, i3, i4, i5, i6, i7, i8, i9);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void soundOperate(int i, int i2) {
        super.soundOperate(i, i2);
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.soundOperate(i, i2);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void soundOperate(int i, int i2, String str) {
        super.soundOperate(i, i2, str);
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.soundOperate(i, i2, str);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void videoOperate(int i) {
        super.videoOperate(i);
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.videoOperate(i);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void closeVideoOperate(int i, int i2) {
        super.closeVideoOperate(i, i2);
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.closeVideoOperate(i, i2);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void progressOperate(int i, int i2) {
        super.progressOperate(i, i2);
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.progressOperate(i, i2);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final String getCurrentProgress() {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            return tkayVideoView.getCurrentProgress();
        }
        return super.getCurrentProgress();
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void setVisible(int i) {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.setVisible(i);
        } else {
            super.setVisible(i);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void setCover(boolean z) {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.setCover(z);
        } else {
            super.setCover(z);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void setScaleFitXY(int i) {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.setScaleFitXY(i);
        } else {
            super.setScaleFitXY(i);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final boolean isH5Canvas() {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            return tkayVideoView.isH5Canvas();
        }
        return super.isH5Canvas();
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final int getBorderViewWidth() {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            return tkayVideoView.getBorderViewWidth();
        }
        return super.getBorderViewWidth();
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final int getBorderViewHeight() {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            return tkayVideoView.getBorderViewHeight();
        }
        return super.getBorderViewHeight();
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final int getBorderViewRadius() {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            return tkayVideoView.getBorderViewRadius();
        }
        return super.getBorderViewRadius();
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final int getBorderViewTop() {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            return tkayVideoView.getBorderViewTop();
        }
        return super.getBorderViewTop();
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final int getBorderViewLeft() {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            return tkayVideoView.getBorderViewLeft();
        }
        return super.getBorderViewLeft();
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void showIVRewardAlertView(String str) {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.showIVRewardAlertView(str);
        } else {
            super.showIVRewardAlertView(str);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void hideAlertView(int i) {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.hideAlertView(i);
        } else {
            super.hideAlertView(i);
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void alertWebViewShowed() {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.alertWebViewShowed();
        } else {
            super.alertWebViewShowed();
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void showAlertView() {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.showAlertView();
        } else {
            super.showAlertView();
        }
    }

    @Override // com.tkay.expressad.video.signal.a.g, com.tkay.expressad.video.signal.j
    public final void dismissAllAlert() {
        TkayVideoView tkayVideoView = this.t;
        if (tkayVideoView != null) {
            tkayVideoView.dismissAllAlert();
        } else {
            super.dismissAllAlert();
        }
    }
}
