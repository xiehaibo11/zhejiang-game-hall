package com.tkay.expressad.foundation.webview;

import android.graphics.drawable.Drawable;
import android.view.ViewGroup;

/* JADX INFO: loaded from: classes3.dex */
public interface a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6971a = 4;
    public static final int b = 5;
    public static final int c = 6;
    public static final int d = 7;
    public static final int e = 8;

    /* JADX INFO: renamed from: com.tkay.expressad.foundation.webview.a$a, reason: collision with other inner class name */
    public interface InterfaceC0467a {
        void a();

        void b();
    }

    Drawable getBackground();

    ViewGroup.LayoutParams getLayoutParams();

    float getProgress();

    int getVisibility();

    void initResource(boolean z);

    void onThemeChange();

    void setBackgroundColor(int i);

    void setBackgroundDrawable(Drawable drawable);

    void setLayoutParams(ViewGroup.LayoutParams layoutParams);

    void setPaused(boolean z);

    void setProgress(float f, boolean z);

    void setProgressBarListener(InterfaceC0467a interfaceC0467a);

    void setProgressState(int i);

    void setVisibility(int i);

    void setVisible(boolean z);

    void startEndAnimation();
}
