package org.cocos2dx.lib;

import android.content.Context;
import android.view.OrientationEventListener;

public class Cocos2dxOrientationHelper extends OrientationEventListener {
    private int currentOrientation;

    public static native void nativeOnOrientationChanged(int i);

    public Cocos2dxOrientationHelper(Context context) {
        super(context);
        this.currentOrientation = Cocos2dxHelper.getDeviceRotation();
    }

    public void onPause() {
        disable();
    }

    public void onResume() {
        enable();
    }

    @Override
    public void onOrientationChanged(int i) {
        if (Cocos2dxHelper.getDeviceRotation() != this.currentOrientation) {
            this.currentOrientation = Cocos2dxHelper.getDeviceRotation();
            nativeOnOrientationChanged(this.currentOrientation);
        }
    }
}
