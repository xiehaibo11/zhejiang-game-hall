package com.mbridge.msdk.video.js.bridge;

import android.os.Handler;
import android.os.Looper;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;

public class VideoBridge extends BaseVideoBridge {
    private Handler b = new Handler(Looper.getMainLooper());

    @Override
    public void init(final Object obj, final String str) {
        if (ae.b()) {
            super.init(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.init(obj, str);
                }
            });
        }
    }

    @Override
    public void click(final Object obj, final String str) {
        if (ae.b()) {
            super.click(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.click(obj, str);
                }
            });
        }
    }

    @Override
    public void statistics(final Object obj, final String str) {
        if (ae.b()) {
            super.statistics(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.statistics(obj, str);
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
                    VideoBridge.super.triggerCloseBtn(obj, str);
                }
            });
        }
    }

    @Override
    public void showVideoLocation(final Object obj, final String str) {
        if (ae.b()) {
            super.showVideoLocation(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.showVideoLocation(obj, str);
                }
            });
        }
    }

    @Override
    public void soundOperate(final Object obj, final String str) {
        if (ae.b()) {
            super.soundOperate(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.soundOperate(obj, str);
                }
            });
        }
    }

    @Override
    public void videoOperate(final Object obj, final String str) {
        if (ae.b()) {
            super.videoOperate(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.videoOperate(obj, str);
                }
            });
        }
    }

    @Override
    public void closeVideoOperte(final Object obj, final String str) {
        if (ae.b()) {
            super.closeVideoOperte(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.closeVideoOperte(obj, str);
                }
            });
        }
    }

    @Override
    public void progressOperate(final Object obj, final String str) {
        if (ae.b()) {
            super.progressOperate(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.progressOperate(obj, str);
                }
            });
        }
    }

    @Override
    public void progressBarOperate(final Object obj, final String str) {
        if (ae.b()) {
            super.progressBarOperate(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.progressBarOperate(obj, str);
                }
            });
        }
    }

    @Override
    public void getCurrentProgress(final Object obj, final String str) {
        if (ae.b()) {
            super.getCurrentProgress(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.getCurrentProgress(obj, str);
                }
            });
        }
    }

    @Override
    public void showVideoClickView(final Object obj, final String str) {
        if (ae.b()) {
            super.showVideoClickView(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.showVideoClickView(obj, str);
                }
            });
        }
    }

    @Override
    public void setScaleFitXY(final Object obj, final String str) {
        if (ae.b()) {
            super.setScaleFitXY(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.setScaleFitXY(obj, str);
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
                    VideoBridge.super.notifyCloseBtn(obj, str);
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
                    VideoBridge.super.toggleCloseBtn(obj, str);
                }
            });
        }
    }

    @Override
    public void handlerH5Exception(final Object obj, final String str) {
        if (ae.b()) {
            super.handlerH5Exception(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.handlerH5Exception(obj, str);
                }
            });
        }
    }

    @Override
    public void isSystemResume(final Object obj, final String str) {
        if (ae.b()) {
            super.isSystemResume(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.isSystemResume(obj, str);
                }
            });
        }
    }

    @Override
    public void readyStatus(final Object obj, final String str) {
        z.b("JS-Video-Brigde", "VIDEOBridge readyStatus");
        if (ae.b()) {
            super.readyStatus(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.readyStatus(obj, str);
                }
            });
        }
    }

    @Override
    public void playVideoFinishOperate(final Object obj, final String str) {
        if (ae.b()) {
            super.playVideoFinishOperate(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.playVideoFinishOperate(obj, str);
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
                    VideoBridge.super.openURL(obj, str);
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
                    VideoBridge.super.cai(obj, str);
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
                    VideoBridge.super.gial(obj, str);
                }
            });
        }
    }

    @Override
    public void showAlertView(final Object obj, final String str) {
        if (ae.b()) {
            super.showAlertView(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.showAlertView(obj, str);
                }
            });
        }
    }

    @Override
    public void closeWeb(final Object obj, final String str) {
        if (ae.b()) {
            super.closeWeb(obj, str);
            return;
        }
        this.b.post(new Runnable() {
            @Override
            public final void run() {
                VideoBridge.super.closeWeb(obj, str);
            }
        });
        z.d("JS-Video-Brigde", "type" + str);
    }

    @Override
    public void getSDKInfo(final Object obj, final String str) {
        if (ae.b()) {
            super.getSDKInfo(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.getSDKInfo(obj, str);
                }
            });
        }
    }

    @Override
    public void getFileInfo(final Object obj, final String str) {
        if (ae.b()) {
            super.getFileInfo(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.getFileInfo(obj, str);
                }
            });
        }
    }

    @Override
    public void loadads(final Object obj, final String str) {
        if (ae.b()) {
            super.loadads(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.loadads(obj, str);
                }
            });
        }
    }

    @Override
    public void reactDeveloper(final Object obj, final String str) {
        if (ae.b()) {
            super.reactDeveloper(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.reactDeveloper(obj, str);
                }
            });
        }
    }

    @Override
    public void reportUrls(final Object obj, final String str) {
        if (ae.b()) {
            super.reportUrls(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.reportUrls(obj, str);
                }
            });
        }
    }

    @Override
    public void createWebview(final Object obj, final String str) {
        if (ae.b()) {
            super.createWebview(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.createWebview(obj, str);
                }
            });
        }
    }

    @Override
    public void createView(final Object obj, final String str) {
        if (ae.b()) {
            super.createView(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.createView(obj, str);
                }
            });
        }
    }

    @Override
    public void createPlayerView(final Object obj, final String str) {
        if (ae.b()) {
            super.createPlayerView(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.createPlayerView(obj, str);
                }
            });
        }
    }

    @Override
    public void createSubPlayTemplateView(final Object obj, final String str) {
        if (ae.b()) {
            super.createSubPlayTemplateView(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.createSubPlayTemplateView(obj, str);
                }
            });
        }
    }

    @Override
    public void destroyComponent(final Object obj, final String str) {
        if (ae.b()) {
            super.destroyComponent(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.destroyComponent(obj, str);
                }
            });
        }
    }

    @Override
    public void getComponentOptions(final Object obj, final String str) {
        if (ae.b()) {
            super.getComponentOptions(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.getComponentOptions(obj, str);
                }
            });
        }
    }

    @Override
    public void setViewRect(final Object obj, final String str) {
        if (ae.b()) {
            super.setViewRect(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.setViewRect(obj, str);
                }
            });
        }
    }

    @Override
    public void removeFromSuperView(final Object obj, final String str) {
        if (ae.b()) {
            super.removeFromSuperView(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.removeFromSuperView(obj, str);
                }
            });
        }
    }

    @Override
    public void appendSubView(final Object obj, final String str) {
        if (ae.b()) {
            super.appendSubView(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.appendSubView(obj, str);
                }
            });
        }
    }

    @Override
    public void appendViewTo(final Object obj, final String str) {
        if (ae.b()) {
            super.appendViewTo(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.appendViewTo(obj, str);
                }
            });
        }
    }

    @Override
    public void onlyAppendSubView(final Object obj, final String str) {
        if (ae.b()) {
            super.onlyAppendSubView(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.onlyAppendSubView(obj, str);
                }
            });
        }
    }

    @Override
    public void onlyAppendViewTo(final Object obj, final String str) {
        if (ae.b()) {
            super.onlyAppendViewTo(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.onlyAppendViewTo(obj, str);
                }
            });
        }
    }

    @Override
    public void bringViewToFront(final Object obj, final String str) {
        if (ae.b()) {
            super.bringViewToFront(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.bringViewToFront(obj, str);
                }
            });
        }
    }

    @Override
    public void hideView(final Object obj, final String str) {
        if (ae.b()) {
            super.hideView(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.hideView(obj, str);
                }
            });
        }
    }

    @Override
    public void showView(final Object obj, final String str) {
        if (ae.b()) {
            super.showView(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.showView(obj, str);
                }
            });
        }
    }

    @Override
    public void setViewBgColor(final Object obj, final String str) {
        if (ae.b()) {
            super.setViewBgColor(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.setViewBgColor(obj, str);
                }
            });
        }
    }

    @Override
    public void setViewAlpha(final Object obj, final String str) {
        if (ae.b()) {
            super.setViewAlpha(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.setViewAlpha(obj, str);
                }
            });
        }
    }

    @Override
    public void setViewScale(final Object obj, final String str) {
        if (ae.b()) {
            super.setViewScale(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.setViewScale(obj, str);
                }
            });
        }
    }

    @Override
    public void insertViewAbove(final Object obj, final String str) {
        if (ae.b()) {
            super.insertViewAbove(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.insertViewAbove(obj, str);
                }
            });
        }
    }

    @Override
    public void insertViewBelow(final Object obj, final String str) {
        if (ae.b()) {
            super.insertViewBelow(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.insertViewBelow(obj, str);
                }
            });
        }
    }

    @Override
    public void onlyInsertViewAbove(final Object obj, final String str) {
        if (ae.b()) {
            super.onlyInsertViewAbove(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.onlyInsertViewAbove(obj, str);
                }
            });
        }
    }

    @Override
    public void onlyInsertViewBelow(final Object obj, final String str) {
        if (ae.b()) {
            super.onlyInsertViewBelow(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.onlyInsertViewBelow(obj, str);
                }
            });
        }
    }

    @Override
    public void webviewLoad(final Object obj, final String str) {
        if (ae.b()) {
            super.webviewLoad(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.webviewLoad(obj, str);
                }
            });
        }
    }

    @Override
    public void webviewReload(final Object obj, final String str) {
        if (ae.b()) {
            super.webviewReload(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.webviewReload(obj, str);
                }
            });
        }
    }

    @Override
    public void webviewGoBack(final Object obj, final String str) {
        if (ae.b()) {
            super.webviewGoBack(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.webviewGoBack(obj, str);
                }
            });
        }
    }

    @Override
    public void webviewGoForward(final Object obj, final String str) {
        if (ae.b()) {
            super.webviewGoForward(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.webviewGoForward(obj, str);
                }
            });
        }
    }

    @Override
    public void playerPlay(final Object obj, final String str) {
        if (ae.b()) {
            super.playerPlay(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.playerPlay(obj, str);
                }
            });
        }
    }

    @Override
    public void playerPause(final Object obj, final String str) {
        if (ae.b()) {
            super.playerPause(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.playerPause(obj, str);
                }
            });
        }
    }

    @Override
    public void playerResume(final Object obj, final String str) {
        if (ae.b()) {
            super.playerResume(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.playerResume(obj, str);
                }
            });
        }
    }

    @Override
    public void playerStop(final Object obj, final String str) {
        if (ae.b()) {
            super.playerStop(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.playerStop(obj, str);
                }
            });
        }
    }

    @Override
    public void playerUpdateFrame(final Object obj, final String str) {
        if (ae.b()) {
            super.playerUpdateFrame(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.playerUpdateFrame(obj, str);
                }
            });
        }
    }

    @Override
    public void playerMute(final Object obj, final String str) {
        if (ae.b()) {
            super.playerMute(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.playerMute(obj, str);
                }
            });
        }
    }

    @Override
    public void playerUnmute(final Object obj, final String str) {
        if (ae.b()) {
            super.playerUnmute(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.playerUnmute(obj, str);
                }
            });
        }
    }

    @Override
    public void playerGetMuteState(final Object obj, final String str) {
        if (ae.b()) {
            super.playerGetMuteState(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.playerGetMuteState(obj, str);
                }
            });
        }
    }

    @Override
    public void playerSetSource(final Object obj, final String str) {
        if (ae.b()) {
            super.playerSetSource(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.playerSetSource(obj, str);
                }
            });
        }
    }

    @Override
    public void playerSetRenderType(final Object obj, final String str) {
        if (ae.b()) {
            super.playerSetRenderType(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.playerSetRenderType(obj, str);
                }
            });
        }
    }

    @Override
    public void preloadSubPlayTemplateView(final Object obj, final String str) {
        if (ae.b()) {
            super.preloadSubPlayTemplateView(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.preloadSubPlayTemplateView(obj, str);
                }
            });
        }
    }

    @Override
    public void closeAd(final Object obj, final String str) {
        if (ae.b()) {
            super.closeAd(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.closeAd(obj, str);
                }
            });
        }
    }

    @Override
    public void broadcast(final Object obj, final String str) {
        if (ae.b()) {
            super.broadcast(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.broadcast(obj, str);
                }
            });
        }
    }

    @Override
    public void ivRewardAdsWithoutVideo(final Object obj, final String str) {
        if (ae.b()) {
            super.ivRewardAdsWithoutVideo(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.ivRewardAdsWithoutVideo(obj, str);
                }
            });
        }
    }

    @Override
    public void setSubPlayTemplateInfo(final Object obj, final String str) {
        if (ae.b()) {
            super.setSubPlayTemplateInfo(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.setSubPlayTemplateInfo(obj, str);
                }
            });
        }
    }

    @Override
    public void webviewFireEvent(final Object obj, final String str) {
        if (ae.b()) {
            super.webviewFireEvent(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.webviewFireEvent(obj, str);
                }
            });
        }
    }

    @Override
    public void increaseOfferFrequence(final Object obj, final String str) {
        if (ae.b()) {
            super.increaseOfferFrequence(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.increaseOfferFrequence(obj, str);
                }
            });
        }
    }

    @Override
    public void handleNativeObject(final Object obj, final String str) {
        if (ae.b()) {
            super.handleNativeObject(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.handleNativeObject(obj, str);
                }
            });
        }
    }

    @Override
    public void loadingResourceStatus(final Object obj, final String str) {
        if (ae.b()) {
            super.loadingResourceStatus(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.loadingResourceStatus(obj, str);
                }
            });
        }
    }

    @Override
    public void createNativeEC(final Object obj, final String str) {
        if (ae.b()) {
            super.createNativeEC(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.createNativeEC(obj, str);
                }
            });
        }
    }

    @Override
    public void setCacheItem(final Object obj, final String str) {
        if (ae.b()) {
            super.setCacheItem(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.setCacheItem(obj, str);
                }
            });
        }
    }

    @Override
    public void removeCacheItem(final Object obj, final String str) {
        if (ae.b()) {
            super.removeCacheItem(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.removeCacheItem(obj, str);
                }
            });
        }
    }

    @Override
    public void getAllCache(final Object obj, final String str) {
        if (ae.b()) {
            super.getAllCache(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.getAllCache(obj, str);
                }
            });
        }
    }

    @Override
    public void clearAllCache(final Object obj, final String str) {
        if (ae.b()) {
            super.clearAllCache(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.clearAllCache(obj, str);
                }
            });
        }
    }

    @Override
    public void getCutout(final Object obj, final String str) {
        if (ae.b()) {
            super.getCutout(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.getCutout(obj, str);
                }
            });
        }
    }

    @Override
    public void getAppSetting(final Object obj, final String str) {
        if (ae.b()) {
            super.getAppSetting(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.getAppSetting(obj, str);
                }
            });
        }
    }

    @Override
    public void getRewardSetting(final Object obj, final String str) {
        if (ae.b()) {
            super.getRewardSetting(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.getRewardSetting(obj, str);
                }
            });
        }
    }

    @Override
    public void getRewardUnitSetting(final Object obj, final String str) {
        if (ae.b()) {
            super.getRewardUnitSetting(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.getRewardUnitSetting(obj, str);
                }
            });
        }
    }

    @Override
    public void getUnitSetting(final Object obj, final String str) {
        if (ae.b()) {
            super.getUnitSetting(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.getUnitSetting(obj, str);
                }
            });
        }
    }

    @Override
    public void getEncryptPrice(final Object obj, final String str) {
        if (ae.b()) {
            super.getEncryptPrice(obj, str);
        } else {
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    VideoBridge.super.getEncryptPrice(obj, str);
                }
            });
        }
    }
}
