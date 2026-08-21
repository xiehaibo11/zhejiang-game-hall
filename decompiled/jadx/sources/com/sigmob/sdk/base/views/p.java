package com.sigmob.sdk.base.views;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Path;
import android.view.View;

/* JADX INFO: loaded from: classes3.dex */
public class p extends View {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Paint f4974a;
    private final float b;

    public p(Context context, float f) {
        super(context);
        this.f4974a = new Paint();
        this.b = f;
    }

    private Path a(float f, float f2) {
        Path path = new Path();
        path.moveTo(a(com.tkay.expressad.foundation.g.a.aW) * f, b(com.tkay.expressad.foundation.g.a.aW) * f);
        path.lineTo(a(108) * f2, b(108) * f2);
        path.lineTo(a(144) * f, b(144) * f);
        path.lineTo(a(180) * f2, b(180) * f2);
        path.lineTo(a(216) * f, f * b(216));
        path.lineTo(a(252) * f2, f2 * b(252));
        path.close();
        return path;
    }

    private Path b(float f, float f2) {
        Path path = new Path();
        path.moveTo(a(0) * f, b(0) * f);
        path.lineTo(a(36) * f2, b(36) * f2);
        path.lineTo(a(72) * f, b(72) * f);
        path.lineTo(a(108) * f2, b(108) * f2);
        path.lineTo(a(144) * f, b(144) * f);
        path.lineTo(a(180) * f2, b(180) * f2);
        path.lineTo(a(216) * f, b(216) * f);
        path.lineTo(a(252) * f2, b(252) * f2);
        path.lineTo(a(com.tkay.expressad.foundation.g.a.aW) * f, f * b(com.tkay.expressad.foundation.g.a.aW));
        path.lineTo(a(324) * f2, f2 * b(324));
        path.close();
        return path;
    }

    float a(int i) {
        return (float) Math.cos((((double) i) * 3.141592653589793d) / 180.0d);
    }

    float b(int i) {
        return (float) Math.sin((((double) i) * 3.141592653589793d) / 180.0d);
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        Path pathB;
        super.onDraw(canvas);
        int height = getHeight();
        int i = (int) this.b;
        float f = height / 3.0f;
        float fB = (b(18) * f) / b(126);
        boolean z = true;
        this.f4974a.setAntiAlias(true);
        this.f4974a.setColor(Color.parseColor("#FFA500"));
        for (int i2 = i; i2 > 0; i2--) {
            if (z) {
                z = false;
                canvas.translate(2.0f + f, height / 2);
            } else {
                canvas.rotate(18.0f);
                canvas.translate(2.2f * f, 0.0f);
            }
            canvas.rotate(-18.0f);
            Path pathB2 = b(f, fB);
            this.f4974a.setStyle(Paint.Style.STROKE);
            canvas.drawPath(pathB2, this.f4974a);
            this.f4974a.setStyle(Paint.Style.FILL);
            canvas.drawPath(pathB2, this.f4974a);
        }
        float f2 = this.b;
        float f3 = i;
        if (f2 > f3) {
            float f4 = (f2 - f3) + 0.25f;
            if (f4 >= 1.0f) {
                canvas.rotate(18.0f);
                canvas.translate(f * 2.2f, 0.0f);
                canvas.rotate(-18.0f);
                pathB = b(f, fB);
                this.f4974a.setStyle(Paint.Style.STROKE);
                this.f4974a.setColor(Color.parseColor("#FFA500"));
                canvas.drawPath(pathB, this.f4974a);
            } else {
                canvas.rotate(18.0f);
                if (f4 >= 0.5f) {
                    canvas.translate(f * 2.2f, 0.0f);
                    canvas.rotate(-18.0f);
                    Path pathB3 = b(f, fB);
                    this.f4974a.setColor(Color.parseColor("#FFA500"));
                    this.f4974a.setStyle(Paint.Style.STROKE);
                    canvas.drawPath(pathB3, this.f4974a);
                    pathB = a(f, fB);
                    this.f4974a.setColor(Color.parseColor("#FFA500"));
                } else {
                    canvas.translate(f * 2.2f, 0.0f);
                    canvas.rotate(-18.0f);
                    pathB = b(f, fB);
                    this.f4974a.setStyle(Paint.Style.STROKE);
                    this.f4974a.setColor(Color.parseColor("#FFA500"));
                    canvas.drawPath(pathB, this.f4974a);
                }
            }
            this.f4974a.setStyle(Paint.Style.FILL);
            canvas.drawPath(pathB, this.f4974a);
        }
        for (int i3 = (int) (5.0f - this.b); i3 > 0; i3--) {
            canvas.rotate(18.0f);
            canvas.translate(f * 2.2f, 0.0f);
            canvas.rotate(-18.0f);
            Path pathB4 = b(f, fB);
            this.f4974a.setStyle(Paint.Style.STROKE);
            this.f4974a.setColor(Color.parseColor("#FFA500"));
            canvas.drawPath(pathB4, this.f4974a);
        }
    }
}
