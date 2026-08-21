package com.bianfeng.ymnsdk.fastvo;

import android.content.Context;
import android.media.AudioManager;
import com.bianfeng.ymnsdk.util.Logger;

/* JADX INFO: loaded from: classes.dex */
public class SpeakerManager {
    private AudioManager audioManager;
    private int curVoice;
    private int maxVoice;

    public SpeakerManager(Context context) {
        AudioManager audioManager = (AudioManager) context.getSystemService("audio");
        this.audioManager = audioManager;
        this.maxVoice = audioManager.getStreamMaxVolume(3);
    }

    public void openSpeakerphoneOn(String str) {
        int streamVolume = this.audioManager.getStreamVolume(3);
        this.curVoice = streamVolume;
        if (streamVolume == 0) {
            Logger.i("当前音量静音");
            return;
        }
        double d = this.maxVoice;
        double d2 = 0.5d;
        Double.isNaN(d);
        int i = (int) (d * 0.5d);
        try {
            double d3 = Double.parseDouble(str);
            if (d3 > 1.0d) {
                d3 = 1.0d;
            }
            if (d3 > 0.0d) {
                d2 = d3;
            }
            double d4 = this.maxVoice;
            Double.isNaN(d4);
            i = (int) (d4 * d2);
        } catch (Exception e) {
            Logger.i("openSpeakerphoneOn " + e.getMessage());
        }
        Logger.i("openSpeakerphoneOn 音量 " + i);
        AudioManager audioManager = this.audioManager;
        if (audioManager != null) {
            audioManager.setSpeakerphoneOn(true);
            this.audioManager.setStreamVolume(3, i, 4);
        }
    }

    public void closeSpeakerphoneOn() {
        AudioManager audioManager = this.audioManager;
        if (audioManager != null) {
            audioManager.setSpeakerphoneOn(false);
            this.audioManager.setStreamVolume(3, this.curVoice, 4);
        }
    }

    public void openVolume() {
        AudioManager audioManager = this.audioManager;
        if (audioManager != null) {
            audioManager.setStreamMute(3, false);
        }
    }

    private void setMaxVoice() {
        AudioManager audioManager = this.audioManager;
        if (audioManager != null) {
            audioManager.setStreamVolume(3, this.maxVoice, 4);
        }
    }

    private void setCurVoice() {
        AudioManager audioManager = this.audioManager;
        if (audioManager != null) {
            audioManager.setStreamVolume(3, this.curVoice, 4);
        }
    }

    public void closeVolume() {
        AudioManager audioManager = this.audioManager;
        if (audioManager == null || audioManager.getStreamVolume(3) <= 0) {
            return;
        }
        this.audioManager.setStreamMute(3, true);
    }
}
