package org.cocos2dx.lib;

import android.content.Context;

public class Cocos2dxAccelerometer {
    private static final String TAG = "Cocos2dxAccelerometer";
    private final Context mContext;
    private DeviceMotionEvent mDeviceMotionEvent;

    class Acceleration {
        final Cocos2dxAccelerometer this$0;
        public float x;
        public float y;
        public float z;

        Acceleration(Cocos2dxAccelerometer r1) {
            this.this$0 = r1;
            this.x = 0.0f;
            this.y = 0.0f;
            this.z = 0.0f;
        }
    }

    class DeviceMotionEvent {
        public Acceleration acceleration;
        public Acceleration accelerationIncludingGravity;
        public RotationRate rotationRate;
        final Cocos2dxAccelerometer this$0;

        DeviceMotionEvent(Cocos2dxAccelerometer r2) {
            this.this$0 = r2;
            this.acceleration = new Acceleration(this.this$0);
            this.accelerationIncludingGravity = new Acceleration(this.this$0);
            this.rotationRate = new RotationRate(this.this$0);
        }
    }

    class RotationRate {
        public float alpha;
        public float beta;
        public float gamma;
        final Cocos2dxAccelerometer this$0;

        RotationRate(Cocos2dxAccelerometer r1) {
            this.this$0 = r1;
            this.alpha = 0.0f;
            this.beta = 0.0f;
            this.gamma = 0.0f;
        }
    }

    static {
    }

    public static native void onSensorChanged(float r0, float r1, float r2, long r3);

    public void disable() {
    }

    public void enable() {
    }

    public Cocos2dxAccelerometer(Context r2) {
        this.mDeviceMotionEvent = new DeviceMotionEvent(this);
        this.mContext = r2;
    }

    public void setInterval(float r1) {
        disable();
        enable();
    }

    public DeviceMotionEvent getDeviceMotionEvent() {
        return this.mDeviceMotionEvent;
    }
}
