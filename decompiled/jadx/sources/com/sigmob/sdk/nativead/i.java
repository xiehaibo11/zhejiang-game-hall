package com.sigmob.sdk.nativead;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.widget.RelativeLayout;

/* JADX INFO: loaded from: classes3.dex */
public class i extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f5105a = 0;
    public static final int b = 1;
    public static final int c = 2;
    protected f d;

    public i(Context context) {
        super(context);
    }

    public i(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public i(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    boolean a(MotionEvent motionEvent) {
        return false;
    }

    public boolean b() {
        return false;
    }

    public void c() {
    }

    public void d() {
    }

    public p getSigVideoAdController() {
        return null;
    }
}
