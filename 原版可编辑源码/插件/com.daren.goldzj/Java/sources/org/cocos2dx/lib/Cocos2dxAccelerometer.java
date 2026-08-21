package org.cocos2dx.lib;

import android.content.Context;

public class Cocos2dxAccelerometer {
    private static final String TAG = "Cocos2dxAccelerometer";
    private final Context mContext;
    private DeviceMotionEvent mDeviceMotionEvent = new DeviceMotionEvent();

    public static native void onSensorChanged(float f, float f2, float f3, long j);

    public void disable() {
    }

    public void enable() {
    }

    class Acceleration {
        public float x = 0.0f;
        public float y = 0.0f;
        public float z = 0.0f;

        Acceleration() {
        }
    }

    class RotationRate {
        public float alpha = 0.0f;
        public float beta = 0.0f;
        public float gamma = 0.0f;

        RotationRate() {
        }
    }

    class DeviceMotionEvent {
        public Acceleration acceleration;
        public Acceleration accelerationIncludingGravity;
        public RotationRate rotationRate;

        DeviceMotionEvent() {
            this.acceleration = Cocos2dxAccelerometer.this.new Acceleration();
            this.accelerationIncludingGravity = Cocos2dxAccelerometer.this.new Acceleration();
            this.rotationRate = Cocos2dxAccelerometer.this.new RotationRate();
        }
    }

    public Cocos2dxAccelerometer(Context context) {
        this.mContext = context;
    }

    public void setInterval(float f) {
        disable();
        enable();
    }

    public DeviceMotionEvent getDeviceMotionEvent() {
        return this.mDeviceMotionEvent;
    }
}
