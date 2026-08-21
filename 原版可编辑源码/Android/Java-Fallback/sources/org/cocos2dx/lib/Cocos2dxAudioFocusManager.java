package org.cocos2dx.lib;

class Cocos2dxAudioFocusManager {
    private static final int AUDIOFOCUS_GAIN = 0;
    private static final int AUDIOFOCUS_LOST = 1;
    private static final int AUDIOFOCUS_LOST_TRANSIENT = 2;
    private static final int AUDIOFOCUS_LOST_TRANSIENT_CAN_DUCK = 3;
    private static final java.lang.String TAG = "AudioFocusManager";
    private static android.media.AudioManager.OnAudioFocusChangeListener sAfChangeListener;



    static {
            org.cocos2dx.lib.Cocos2dxAudioFocusManager$1 r0 = new org.cocos2dx.lib.Cocos2dxAudioFocusManager$1
            r0.<init>()
            org.cocos2dx.lib.Cocos2dxAudioFocusManager.sAfChangeListener = r0
            return
    }

    Cocos2dxAudioFocusManager() {
            r0 = this;
            r0.<init>()
            return
    }

    static void access$000(int r0) {
            nativeOnAudioFocusChange(r0)
            return
    }

    private static native void nativeOnAudioFocusChange(int r0);

    static boolean registerAudioFocusListener(android.content.Context r3) {
            java.lang.String r0 = "audio"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.media.AudioManager r3 = (android.media.AudioManager) r3
            android.media.AudioManager$OnAudioFocusChangeListener r0 = org.cocos2dx.lib.Cocos2dxAudioFocusManager.sAfChangeListener
            r1 = 1
            r2 = 3
            int r3 = r3.requestAudioFocus(r0, r2, r1)
            java.lang.String r0 = "AudioFocusManager"
            if (r3 != r1) goto L1a
            java.lang.String r3 = "requestAudioFocus succeed"
            android.util.Log.d(r0, r3)
            return r1
        L1a:
            java.lang.String r3 = "requestAudioFocus failed!"
            android.util.Log.e(r0, r3)
            r3 = 0
            return r3
    }

    static void unregisterAudioFocusListener(android.content.Context r2) {
            java.lang.String r0 = "audio"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.media.AudioManager r2 = (android.media.AudioManager) r2
            android.media.AudioManager$OnAudioFocusChangeListener r0 = org.cocos2dx.lib.Cocos2dxAudioFocusManager.sAfChangeListener
            int r2 = r2.abandonAudioFocus(r0)
            java.lang.String r0 = "AudioFocusManager"
            r1 = 1
            if (r2 != r1) goto L19
            java.lang.String r2 = "abandonAudioFocus succeed!"
            android.util.Log.d(r0, r2)
            goto L1e
        L19:
            java.lang.String r2 = "abandonAudioFocus failed!"
            android.util.Log.e(r0, r2)
        L1e:
            org.cocos2dx.lib.Cocos2dxAudioFocusManager$2 r2 = new org.cocos2dx.lib.Cocos2dxAudioFocusManager$2
            r2.<init>()
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r2)
            return
    }
}
