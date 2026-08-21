package org.cocos2dx.lib;

public class Cocos2dxAccelerometer {
    private static final java.lang.String TAG = "Cocos2dxAccelerometer";
    private final android.content.Context mContext;
    private org.cocos2dx.lib.Cocos2dxAccelerometer.DeviceMotionEvent mDeviceMotionEvent;

    class Acceleration {
        final org.cocos2dx.lib.Cocos2dxAccelerometer this$0;
        public float x;
        public float y;
        public float z;

        Acceleration(org.cocos2dx.lib.Cocos2dxAccelerometer r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 0
                r0.x = r1
                r0.y = r1
                r0.z = r1
                return
        }
    }

    class DeviceMotionEvent {
        public org.cocos2dx.lib.Cocos2dxAccelerometer.Acceleration acceleration;
        public org.cocos2dx.lib.Cocos2dxAccelerometer.Acceleration accelerationIncludingGravity;
        public org.cocos2dx.lib.Cocos2dxAccelerometer.RotationRate rotationRate;
        final org.cocos2dx.lib.Cocos2dxAccelerometer this$0;

        DeviceMotionEvent(org.cocos2dx.lib.Cocos2dxAccelerometer r2) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                org.cocos2dx.lib.Cocos2dxAccelerometer$Acceleration r2 = new org.cocos2dx.lib.Cocos2dxAccelerometer$Acceleration
                org.cocos2dx.lib.Cocos2dxAccelerometer r0 = r1.this$0
                r2.<init>(r0)
                r1.acceleration = r2
                org.cocos2dx.lib.Cocos2dxAccelerometer$Acceleration r2 = new org.cocos2dx.lib.Cocos2dxAccelerometer$Acceleration
                org.cocos2dx.lib.Cocos2dxAccelerometer r0 = r1.this$0
                r2.<init>(r0)
                r1.accelerationIncludingGravity = r2
                org.cocos2dx.lib.Cocos2dxAccelerometer$RotationRate r2 = new org.cocos2dx.lib.Cocos2dxAccelerometer$RotationRate
                org.cocos2dx.lib.Cocos2dxAccelerometer r0 = r1.this$0
                r2.<init>(r0)
                r1.rotationRate = r2
                return
        }
    }

    class RotationRate {
        public float alpha;
        public float beta;
        public float gamma;
        final org.cocos2dx.lib.Cocos2dxAccelerometer this$0;

        RotationRate(org.cocos2dx.lib.Cocos2dxAccelerometer r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 0
                r0.alpha = r1
                r0.beta = r1
                r0.gamma = r1
                return
        }
    }

    static {
            return
    }

    public Cocos2dxAccelerometer(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            org.cocos2dx.lib.Cocos2dxAccelerometer$DeviceMotionEvent r0 = new org.cocos2dx.lib.Cocos2dxAccelerometer$DeviceMotionEvent
            r0.<init>(r1)
            r1.mDeviceMotionEvent = r0
            r1.mContext = r2
            return
    }

    public static native void onSensorChanged(float r0, float r1, float r2, long r3);

    public void disable() {
            r0 = this;
            return
    }

    public void enable() {
            r0 = this;
            return
    }

    public org.cocos2dx.lib.Cocos2dxAccelerometer.DeviceMotionEvent getDeviceMotionEvent() {
            r1 = this;
            org.cocos2dx.lib.Cocos2dxAccelerometer$DeviceMotionEvent r0 = r1.mDeviceMotionEvent
            return r0
    }

    public void setInterval(float r1) {
            r0 = this;
            r0.disable()
            r0.enable()
            return
    }
}
