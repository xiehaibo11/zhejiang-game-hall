package com.sigmob.sdk.videoplayer;

import android.content.Context;
import android.util.AttributeSet;
import android.view.TextureView;

/* JADX INFO: loaded from: classes3.dex */
public class m extends TextureView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected static final String f5272a = "ResizeTextureView";
    public int b;
    public int c;

    public m(Context context) {
        super(context);
        this.b = 0;
        this.c = 0;
        this.b = 0;
        this.c = 0;
    }

    public m(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = 0;
        this.c = 0;
        this.b = 0;
        this.c = 0;
    }

    public void a(int i, int i2) {
        if (this.b == i && this.c == i2) {
            return;
        }
        this.b = i;
        this.c = i2;
        requestLayout();
    }

    /* JADX WARN: Code restructure failed: missing block: B:40:0x00eb, code lost:
    
        if (r2 > r12) goto L41;
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x00ed, code lost:
    
        r2 = (r12 * r4) / r3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x0100, code lost:
    
        if (r2 > r12) goto L41;
     */
    /* JADX WARN: Removed duplicated region for block: B:70:0x013e  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected void onMeasure(int r18, int r19) {
        /*
            Method dump skipped, instruction units count: 324
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.videoplayer.m.onMeasure(int, int):void");
    }

    @Override // android.view.View
    public void setRotation(float f) {
        if (f != getRotation()) {
            super.setRotation(f);
            requestLayout();
        }
    }
}
