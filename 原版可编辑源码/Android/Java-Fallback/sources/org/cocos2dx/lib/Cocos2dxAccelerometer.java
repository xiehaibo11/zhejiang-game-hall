package org.cocos2dx.lib;

public class Cocos2dxAccelerometer implements android.hardware.SensorEventListener {
    static final float ALPHA = 0.25f;
    private static final java.lang.String TAG = "Cocos2dxAccelerometer";
    final float[] accelerometerValues;
    final float[] compassFieldValues;
    private final android.hardware.Sensor mAccelerometer;
    private final android.hardware.Sensor mCompass;
    private final android.content.Context mContext;
    private final int mNaturalOrientation;
    private final android.hardware.SensorManager mSensorManager;

    static {
            return
    }

    public Cocos2dxAccelerometer(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 3
            float[] r1 = new float[r0]
            r2.accelerometerValues = r1
            float[] r0 = new float[r0]
            r2.compassFieldValues = r0
            r2.mContext = r3
            android.content.Context r3 = r2.mContext
            java.lang.String r0 = "sensor"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.hardware.SensorManager r3 = (android.hardware.SensorManager) r3
            r2.mSensorManager = r3
            android.hardware.SensorManager r3 = r2.mSensorManager
            r0 = 1
            android.hardware.Sensor r3 = r3.getDefaultSensor(r0)
            r2.mAccelerometer = r3
            android.hardware.SensorManager r3 = r2.mSensorManager
            r0 = 2
            android.hardware.Sensor r3 = r3.getDefaultSensor(r0)
            r2.mCompass = r3
            android.content.Context r3 = r2.mContext
            java.lang.String r0 = "window"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.view.WindowManager r3 = (android.view.WindowManager) r3
            android.view.Display r3 = r3.getDefaultDisplay()
            int r3 = r3.getOrientation()
            r2.mNaturalOrientation = r3
            return
    }

    public static native void onSensorChanged(float r0, float r1, float r2, long r3);

    public void disable() {
            r1 = this;
            android.hardware.SensorManager r0 = r1.mSensorManager
            r0.unregisterListener(r1)
            return
    }

    public void enableAccel() {
            r3 = this;
            android.hardware.SensorManager r0 = r3.mSensorManager
            android.hardware.Sensor r1 = r3.mAccelerometer
            r2 = 1
            r0.registerListener(r3, r1, r2)
            return
    }

    public void enableCompass() {
            r3 = this;
            android.hardware.SensorManager r0 = r3.mSensorManager
            android.hardware.Sensor r1 = r3.mCompass
            r2 = 1
            r0.registerListener(r3, r1, r2)
            return
    }

    @Override
    public void onAccuracyChanged(android.hardware.Sensor r1, int r2) {
            r0 = this;
            return
    }

    @Override
    public void onSensorChanged(android.hardware.SensorEvent r9) {
            r8 = this;
            android.hardware.Sensor r0 = r9.sensor
            int r0 = r0.getType()
            r1 = 0
            r2 = 1
            r3 = 2
            if (r0 != r2) goto L5c
            float[] r0 = r9.values
            r0 = r0[r1]
            float[] r4 = r9.values
            r4 = r4[r2]
            float[] r5 = r9.values
            r5 = r5[r3]
            float[] r6 = r8.accelerometerValues
            r6[r1] = r0
            r6[r2] = r4
            r6[r3] = r5
            android.content.Context r1 = r8.mContext
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            int r1 = r1.orientation
            if (r1 != r3) goto L35
            int r6 = r8.mNaturalOrientation
            if (r6 == 0) goto L35
            float r1 = -r4
            r4 = r0
            r0 = r1
            goto L3f
        L35:
            if (r1 != r2) goto L3f
            int r1 = r8.mNaturalOrientation
            if (r1 == 0) goto L3f
            float r0 = -r0
            r7 = r4
            r4 = r0
            r0 = r7
        L3f:
            android.app.Activity r1 = org.cocos2dx.lib.Cocos2dxHelper.getActivity()
            android.view.WindowManager r1 = r1.getWindowManager()
            android.view.Display r1 = r1.getDefaultDisplay()
            int r1 = r1.getRotation()
            if (r1 == r3) goto L54
            r2 = 3
            if (r1 != r2) goto L56
        L54:
            float r0 = -r0
            float r4 = -r4
        L56:
            long r1 = r9.timestamp
            org.cocos2dx.lib.Cocos2dxGLSurfaceView.queueAccelerometer(r0, r4, r5, r1)
            goto L7c
        L5c:
            android.hardware.Sensor r0 = r9.sensor
            int r0 = r0.getType()
            if (r0 != r3) goto L7c
            float[] r0 = r8.compassFieldValues
            float[] r4 = r9.values
            r4 = r4[r1]
            r0[r1] = r4
            float[] r0 = r8.compassFieldValues
            float[] r1 = r9.values
            r1 = r1[r2]
            r0[r2] = r1
            float[] r0 = r8.compassFieldValues
            float[] r9 = r9.values
            r9 = r9[r3]
            r0[r3] = r9
        L7c:
            return
    }

    public void setInterval(float r4) {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 >= r1) goto Lf
            android.hardware.SensorManager r4 = r3.mSensorManager
            android.hardware.Sensor r0 = r3.mAccelerometer
            r1 = 1
            r4.registerListener(r3, r0, r1)
            goto L1c
        Lf:
            android.hardware.SensorManager r0 = r3.mSensorManager
            android.hardware.Sensor r1 = r3.mAccelerometer
            r2 = 1232348160(0x49742400, float:1000000.0)
            float r4 = r4 * r2
            int r4 = (int) r4
            r0.registerListener(r3, r1, r4)
        L1c:
            return
    }
}
