package com.tkay.expressad.video.signal.a;

import android.content.res.Configuration;
import com.tkay.expressad.video.module.TkayContainerView;

public final class k extends d {
    private TkayContainerView k;

    public k(TkayContainerView tkayContainerView) {
        this.k = tkayContainerView;
    }

    @Override
    public final boolean showAlertWebView() {
        super.showAlertWebView();
        TkayContainerView tkayContainerView = this.k;
        if (tkayContainerView != null) {
            return tkayContainerView.showAlertWebView();
        }
        return false;
    }

    @Override
    public final void showVideoClickView(int i) {
        super.showVideoClickView(i);
        TkayContainerView tkayContainerView = this.k;
        if (tkayContainerView != null) {
            tkayContainerView.showVideoClickView(i);
        }
    }

    @Override
    public final void preLoadData(com.tkay.expressad.video.signal.factory.b bVar) {
        super.preLoadData(bVar);
        try {
            if (this.k != null) {
                this.k.preLoadData(bVar);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void showPlayableView() {
        super.showPlayableView();
        try {
            if (this.k != null) {
                this.k.showPlayableView();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void showEndcard(int i) {
        super.showEndcard(i);
        try {
            if (this.k != null) {
                this.k.showEndcard(i);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void toggleCloseBtn(int i) {
        super.toggleCloseBtn(i);
        try {
            if (this.k != null) {
                this.k.toggleCloseBtn(i);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void install(com.tkay.expressad.foundation.d.c cVar) {
        super.install(cVar);
        try {
            if (this.k != null) {
                this.k.install(cVar);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void webviewshow() {
        super.webviewshow();
        try {
            if (this.k != null) {
                this.k.webviewshow();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void orientation(Configuration configuration) {
        super.orientation(configuration);
        try {
            if (this.k != null) {
                this.k.orientation(configuration);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final boolean endCardShowing() {
        try {
            if (this.k != null) {
                return this.k.endCardShowing();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return super.endCardShowing();
    }

    @Override
    public final boolean miniCardShowing() {
        try {
            if (this.k != null) {
                return this.k.miniCardShowing();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return super.miniCardShowing();
    }

    @Override
    public final boolean miniCardLoaded() {
        try {
            if (this.k != null) {
                return this.k.miniCardLoaded();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return super.miniCardLoaded();
    }

    @Override
    public final void readyStatus(int i) {
        try {
            if (this.k != null) {
                this.k.readyStatus(i);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        super.readyStatus(i);
    }

    @Override
    public final void showMiniCard(int i, int i2, int i3, int i4, int i5) {
        super.showMiniCard(i, i2, i3, i4, i5);
        try {
            if (this.k != null) {
                this.k.showMiniCard(i, i2, i3, i4, i5);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void resizeMiniCard(int i, int i2, int i3) {
        super.resizeMiniCard(i, i2, i3);
        try {
            if (this.k != null) {
                this.k.resizeMiniCard(i, i2, i3);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void configurationChanged(int i, int i2, int i3) {
        super.configurationChanged(i, i2, i3);
        try {
            if (this.k != null) {
                this.k.configurationChanged(i, i2, i3);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    @Override
    public final void hideAlertWebview() {
        super.hideAlertWebview();
        TkayContainerView tkayContainerView = this.k;
        if (tkayContainerView != null) {
            tkayContainerView.hideAlertWebview();
        }
    }

    @Override
    public final void ivRewardAdsWithoutVideo(String str) {
        super.ivRewardAdsWithoutVideo(str);
        TkayContainerView tkayContainerView = this.k;
        if (tkayContainerView != null) {
            tkayContainerView.ivRewardAdsWithoutVideo(str);
        }
    }
}
