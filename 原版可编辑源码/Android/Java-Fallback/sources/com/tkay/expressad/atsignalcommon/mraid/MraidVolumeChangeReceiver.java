package com.tkay.expressad.atsignalcommon.mraid;

public class MraidVolumeChangeReceiver {
    public static double a = -1.0d;
    private static final java.lang.String b = "android.media.VOLUME_CHANGED_ACTION";
    private static final java.lang.String c = "android.media.EXTRA_VOLUME_STREAM_TYPE";
    private android.content.Context d;
    private android.media.AudioManager e;
    private boolean f;
    private com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver.VolumeChangeListener g;
    private com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver.VolumeChangeBroadcastReceiver h;

    private static class VolumeChangeBroadcastReceiver extends android.content.BroadcastReceiver {
        private java.lang.ref.WeakReference<com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver> a;

        public VolumeChangeBroadcastReceiver(com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        @Override
        public void onReceive(android.content.Context r5, android.content.Intent r6) {
                r4 = this;
                java.lang.String r5 = r6.getAction()
                java.lang.String r0 = "android.media.VOLUME_CHANGED_ACTION"
                boolean r5 = r0.equals(r5)
                if (r5 == 0) goto L33
                r5 = -1
                java.lang.String r0 = "android.media.EXTRA_VOLUME_STREAM_TYPE"
                int r5 = r6.getIntExtra(r0, r5)
                r6 = 3
                if (r5 != r6) goto L33
                java.lang.ref.WeakReference<com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver> r5 = r4.a
                java.lang.Object r5 = r5.get()
                com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver r5 = (com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver) r5
                if (r5 == 0) goto L33
                com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver$VolumeChangeListener r6 = r5.getVolumeChangeListener()
                if (r6 == 0) goto L33
                double r0 = r5.getCurrentVolume()
                r2 = 0
                int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r5 < 0) goto L33
                r6.onVolumeChanged(r0)
            L33:
                return
        }
    }

    public interface VolumeChangeListener {
        void onVolumeChanged(double r1);
    }

    static {
            return
    }

    public MraidVolumeChangeReceiver(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.f = r0
            r1.d = r2
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r0 = "audio"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.media.AudioManager r2 = (android.media.AudioManager) r2
            r1.e = r2
            return
    }

    public double getCurrentVolume() {
            r5 = this;
            android.media.AudioManager r0 = r5.e
            r1 = 3
            r2 = -1
            if (r0 == 0) goto Lb
            int r0 = r0.getStreamMaxVolume(r1)
            goto Lc
        Lb:
            r0 = r2
        Lc:
            android.media.AudioManager r3 = r5.e
            if (r3 == 0) goto L14
            int r2 = r3.getStreamVolume(r1)
        L14:
            double r1 = (double) r2
            r3 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r1 = r1 * r3
            double r3 = (double) r0
            double r1 = r1 / r3
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver.a = r1
            return r1
    }

    public com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver.VolumeChangeListener getVolumeChangeListener() {
            r1 = this;
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver$VolumeChangeListener r0 = r1.g
            return r0
    }

    public void registerReceiver() {
            r3 = this;
            android.content.Context r0 = r3.d
            if (r0 == 0) goto L1f
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver$VolumeChangeBroadcastReceiver r0 = new com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver$VolumeChangeBroadcastReceiver
            r0.<init>(r3)
            r3.h = r0
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r1 = "android.media.VOLUME_CHANGED_ACTION"
            r0.addAction(r1)
            android.content.Context r1 = r3.d
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver$VolumeChangeBroadcastReceiver r2 = r3.h
            r1.registerReceiver(r2, r0)
            r0 = 1
            r3.f = r0
        L1f:
            return
    }

    public void setVolumeChangeListener(com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver.VolumeChangeListener r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void unregisterReceiver() {
            r2 = this;
            boolean r0 = r2.f
            if (r0 == 0) goto L18
            android.content.Context r0 = r2.d
            if (r0 == 0) goto L18
            com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver$VolumeChangeBroadcastReceiver r1 = r2.h     // Catch: java.lang.Exception -> L14
            r0.unregisterReceiver(r1)     // Catch: java.lang.Exception -> L14
            r0 = 0
            r2.g = r0     // Catch: java.lang.Exception -> L14
            r0 = 0
            r2.f = r0     // Catch: java.lang.Exception -> L14
            return
        L14:
            r0 = move-exception
            r0.printStackTrace()
        L18:
            return
    }
}
