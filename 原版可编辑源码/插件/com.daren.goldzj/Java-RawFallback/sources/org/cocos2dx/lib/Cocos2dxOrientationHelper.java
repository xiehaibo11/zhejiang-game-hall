package org.cocos2dx.lib;

public class Cocos2dxOrientationHelper extends android.view.OrientationEventListener {
    private int currentOrientation;

    public Cocos2dxOrientationHelper(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            int r1 = org.cocos2dx.lib.Cocos2dxHelper.getDeviceRotation()
            r0.currentOrientation = r1
            return
    }

    public static native void nativeOnOrientationChanged(int r0);

    @Override
    public void onOrientationChanged(int r2) {
            r1 = this;
            int r2 = org.cocos2dx.lib.Cocos2dxHelper.getDeviceRotation()
            int r0 = r1.currentOrientation
            if (r2 == r0) goto L13
            int r2 = org.cocos2dx.lib.Cocos2dxHelper.getDeviceRotation()
            r1.currentOrientation = r2
            int r2 = r1.currentOrientation
            nativeOnOrientationChanged(r2)
        L13:
            return
    }

    public void onPause() {
            r0 = this;
            r0.disable()
            return
    }

    public void onResume() {
            r0 = this;
            r0.enable()
            return
    }
}
