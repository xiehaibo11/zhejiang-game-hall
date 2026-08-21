package org.cocos2dx.lib;

import android.content.Context;
import android.view.OrientationEventListener;

public class Cocos2dxOrientationHelper extends OrientationEventListener {
    private int currentOrientation;

    public static native void nativeOnOrientationChanged(int r0);

    public Cocos2dxOrientationHelper(Context r1) {
        super(r1);
        this.currentOrientation = Cocos2dxHelper.getDeviceRotation();
    }

    public void onPause() {
        disable();
    }

    public void onResume() {
        enable();
    }

    @Override
    public void onOrientationChanged(int r2) {
        if (Cocos2dxHelper.getDeviceRotation() == this.currentOrientation) goto L6;
        this.currentOrientation = Cocos2dxHelper.getDeviceRotation();
        nativeOnOrientationChanged(this.currentOrientation);
        return;
    }
}
