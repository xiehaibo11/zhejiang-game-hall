package com.tkay.expressad.video.signal.a;

import android.content.res.Configuration;

public class d implements com.tkay.expressad.video.signal.e, com.tkay.expressad.video.signal.h {
    protected static final String j = "DefaultJSContainerModule";

    @Override
    public void configurationChanged(int i, int i2, int i3) {
    }

    @Override
    public boolean endCardShowing() {
        return true;
    }

    @Override
    public void handlerPlayableException(String str) {
    }

    @Override
    public void hideAlertWebview() {
    }

    @Override
    public void ivRewardAdsWithoutVideo(String str) {
    }

    @Override
    public boolean miniCardLoaded() {
        return false;
    }

    @Override
    public boolean miniCardShowing() {
        return false;
    }

    @Override
    public void notifyCloseBtn(int i) {
    }

    @Override
    public void preLoadData(com.tkay.expressad.video.signal.factory.b bVar) {
    }

    @Override
    public void readyStatus(int i) {
    }

    @Override
    public boolean showAlertWebView() {
        return false;
    }

    @Override
    public void showEndcard(int i) {
    }

    @Override
    public void showPlayableView() {
    }

    @Override
    public void showVideoClickView(int i) {
    }

    @Override
    public void showVideoEndCover() {
    }

    @Override
    public void toggleCloseBtn(int i) {
    }

    @Override
    public void webviewshow() {
    }

    @Override
    public void showMiniCard(int i, int i2, int i3, int i4, int i5) {
        StringBuilder sb = new StringBuilder("showMiniCard top = ");
        sb.append(i);
        sb.append(" left = ");
        sb.append(i2);
        sb.append(" width = ");
        sb.append(i3);
        sb.append(" height = ");
        sb.append(i4);
        sb.append(" radius = ");
        sb.append(i5);
    }

    @Override
    public void resizeMiniCard(int i, int i2, int i3) {
        StringBuilder sb = new StringBuilder("showMiniCard width = ");
        sb.append(i);
        sb.append(" height = ");
        sb.append(i2);
        sb.append(" radius = ");
        sb.append(i3);
    }

    @Override
    public void install(com.tkay.expressad.foundation.d.c cVar) {
        new StringBuilder("install ,campaign=").append(cVar);
    }

    @Override
    public void orientation(Configuration configuration) {
        new StringBuilder("orientation ,config=").append(configuration);
    }
}
