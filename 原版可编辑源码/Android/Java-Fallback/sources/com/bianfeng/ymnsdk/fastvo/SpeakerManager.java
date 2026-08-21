package com.bianfeng.ymnsdk.fastvo;

public class SpeakerManager {
    private android.media.AudioManager audioManager;
    private int curVoice;
    private int maxVoice;

    public SpeakerManager(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "audio"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.media.AudioManager r2 = (android.media.AudioManager) r2
            r1.audioManager = r2
            r0 = 3
            int r2 = r2.getStreamMaxVolume(r0)
            r1.maxVoice = r2
            return
    }

    private void setCurVoice() {
            r4 = this;
            android.media.AudioManager r0 = r4.audioManager
            if (r0 == 0) goto Lb
            r1 = 3
            int r2 = r4.curVoice
            r3 = 4
            r0.setStreamVolume(r1, r2, r3)
        Lb:
            return
    }

    private void setMaxVoice() {
            r4 = this;
            android.media.AudioManager r0 = r4.audioManager
            if (r0 == 0) goto Lb
            r1 = 3
            int r2 = r4.maxVoice
            r3 = 4
            r0.setStreamVolume(r1, r2, r3)
        Lb:
            return
    }

    public void closeSpeakerphoneOn() {
            r4 = this;
            android.media.AudioManager r0 = r4.audioManager
            if (r0 == 0) goto L11
            r1 = 0
            r0.setSpeakerphoneOn(r1)
            android.media.AudioManager r0 = r4.audioManager
            r1 = 3
            int r2 = r4.curVoice
            r3 = 4
            r0.setStreamVolume(r1, r2, r3)
        L11:
            return
    }

    public void closeVolume() {
            r3 = this;
            android.media.AudioManager r0 = r3.audioManager
            if (r0 == 0) goto L11
            r1 = 3
            int r0 = r0.getStreamVolume(r1)
            if (r0 <= 0) goto L11
            android.media.AudioManager r0 = r3.audioManager
            r2 = 1
            r0.setStreamMute(r1, r2)
        L11:
            return
    }

    public void openSpeakerphoneOn(java.lang.String r9) {
            r8 = this;
            android.media.AudioManager r0 = r8.audioManager
            r1 = 3
            int r0 = r0.getStreamVolume(r1)
            r8.curVoice = r0
            if (r0 != 0) goto L11
            java.lang.String r9 = "当前音量静音"
            com.bianfeng.ymnsdk.util.Logger.i(r9)
            return
        L11:
            int r0 = r8.maxVoice
            double r2 = (double) r0
            r4 = 4602678819172646912(0x3fe0000000000000, double:0.5)
            java.lang.Double.isNaN(r2)
            double r2 = r2 * r4
            int r0 = (int) r2
            double r2 = java.lang.Double.parseDouble(r9)     // Catch: java.lang.Exception -> L39
            r6 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r9 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r9 <= 0) goto L27
            r2 = r6
        L27:
            r6 = 0
            int r9 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r9 > 0) goto L2e
            goto L2f
        L2e:
            r4 = r2
        L2f:
            int r9 = r8.maxVoice     // Catch: java.lang.Exception -> L39
            double r2 = (double) r9
            java.lang.Double.isNaN(r2)
            double r2 = r2 * r4
            int r0 = (int) r2
            goto L52
        L39:
            r9 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "openSpeakerphoneOn "
            r2.append(r3)
            java.lang.String r9 = r9.getMessage()
            r2.append(r9)
            java.lang.String r9 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r9)
        L52:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r2 = "openSpeakerphoneOn 音量 "
            r9.append(r2)
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r9)
            android.media.AudioManager r9 = r8.audioManager
            if (r9 == 0) goto L74
            r2 = 1
            r9.setSpeakerphoneOn(r2)
            android.media.AudioManager r9 = r8.audioManager
            r2 = 4
            r9.setStreamVolume(r1, r0, r2)
        L74:
            return
    }

    public void openVolume() {
            r3 = this;
            android.media.AudioManager r0 = r3.audioManager
            if (r0 == 0) goto L9
            r1 = 3
            r2 = 0
            r0.setStreamMute(r1, r2)
        L9:
            return
    }
}
