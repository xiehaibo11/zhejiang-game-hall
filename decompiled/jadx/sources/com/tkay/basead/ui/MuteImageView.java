package com.tkay.basead.ui;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.ImageView;

/* JADX INFO: loaded from: classes3.dex */
public class MuteImageView extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f5804a;

    public MuteImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f5804a = false;
    }

    public void setMute(boolean z) {
        if (z) {
            setSelected(true);
        } else {
            setSelected(false);
        }
    }
}
