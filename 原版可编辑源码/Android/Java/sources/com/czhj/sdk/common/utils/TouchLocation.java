package com.czhj.sdk.common.utils;

import android.view.MotionEvent;
import android.view.View;
import java.io.Serializable;

public class TouchLocation implements Serializable {
    private final int a;
    private final int b;

    public TouchLocation(int i, int i2) {
        this.a = i;
        this.b = i2;
    }

    public static TouchLocation getTouchLocation(View view, MotionEvent motionEvent) {
        if (view == null) {
            return null;
        }
        int rawX = (int) motionEvent.getRawX();
        int rawY = (int) motionEvent.getRawY();
        int[] iArr = new int[2];
        view.getLocationOnScreen(iArr);
        return new TouchLocation(rawX - iArr[0], rawY - iArr[1]);
    }

    public int getX() {
        return this.a;
    }

    public int getY() {
        return this.b;
    }
}
