package org.cocos2dx.lib;

import android.content.Context;
import android.media.AudioManager;
import android.util.Log;

class Cocos2dxAudioFocusManager {
    private static final int AUDIOFOCUS_GAIN = 0;
    private static final int AUDIOFOCUS_LOST = 1;
    private static final int AUDIOFOCUS_LOST_TRANSIENT = 2;
    private static final int AUDIOFOCUS_LOST_TRANSIENT_CAN_DUCK = 3;
    private static final String TAG = "AudioFocusManager";
    private static AudioManager.OnAudioFocusChangeListener sAfChangeListener;

    private static native void nativeOnAudioFocusChange(int r0);

    Cocos2dxAudioFocusManager() {
    }

    static void access$000(int r0) {
        nativeOnAudioFocusChange(r0);
    }

    static {
        sAfChangeListener = new 1();
    }

    static boolean registerAudioFocusListener(Context r3) {
        if (((AudioManager) r3.getSystemService("audio")).requestAudioFocus(sAfChangeListener, 3, 1) != 1) goto L6;
        Log.d(TAG, "requestAudioFocus succeed");
        return true;
    L6:
        Log.e(TAG, "requestAudioFocus failed!");
        return false;
    }

    static void unregisterAudioFocusListener(Context r2) {
        if (((AudioManager) r2.getSystemService("audio")).abandonAudioFocus(sAfChangeListener) != 1) goto L5;
        Log.d(TAG, "abandonAudioFocus succeed!");
    L6:
        Cocos2dxHelper.runOnGLThread(new 2());
        return;
    L5:
        Log.e(TAG, "abandonAudioFocus failed!");
        goto L6
    }
}
