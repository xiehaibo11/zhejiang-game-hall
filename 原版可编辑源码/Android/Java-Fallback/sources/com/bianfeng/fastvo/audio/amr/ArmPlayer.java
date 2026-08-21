package com.bianfeng.fastvo.audio.amr;

public class ArmPlayer implements android.media.MediaPlayer.OnPreparedListener, android.media.MediaPlayer.OnCompletionListener, android.media.MediaPlayer.OnErrorListener, com.bianfeng.fastvo.ErrorCode, com.bianfeng.fastvo.audio.Player {
    com.bianfeng.fastvo.audio.AudioPlayCallback callback;
    java.lang.String dataSource;
    android.media.MediaPlayer player;

    public ArmPlayer(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r1.dataSource = r2
            android.media.MediaPlayer r2 = new android.media.MediaPlayer
            r2.<init>()
            r1.player = r2
            r0 = 3
            r2.setAudioStreamType(r0)
            android.media.MediaPlayer r2 = r1.player
            r2.setOnPreparedListener(r1)
            android.media.MediaPlayer r2 = r1.player
            r2.setOnCompletionListener(r1)
            android.media.MediaPlayer r2 = r1.player
            r2.setOnErrorListener(r1)
            android.media.MediaPlayer r2 = r1.player
            r0 = 1065353216(0x3f800000, float:1.0)
            r2.setVolume(r0, r0)
            return
    }

    @Override
    public boolean isPlaying() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.player
            boolean r0 = r0.isPlaying()
            return r0
    }

    @Override
    public void onCompletion(android.media.MediaPlayer r2) {
            r1 = this;
            android.media.MediaPlayer r2 = r1.player
            r0 = 0
            r2.seekTo(r0)
            com.bianfeng.fastvo.audio.AudioPlayCallback r2 = r1.callback
            r2.onPlayComplete()
            return
    }

    @Override
    public boolean onError(android.media.MediaPlayer r1, int r2, int r3) {
            r0 = this;
            android.media.MediaPlayer r1 = r0.player
            r1.release()
            com.bianfeng.fastvo.audio.AudioPlayCallback r1 = r0.callback
            r2 = 2
            java.lang.String r3 = "error"
            r1.onPlayFail(r2, r3)
            r1 = 1
            return r1
    }

    @Override
    public void onPrepared(android.media.MediaPlayer r1) {
            r0 = this;
            r1.start()
            return
    }

    @Override
    public void play(com.bianfeng.fastvo.audio.AudioPlayCallback r3) {
            r2 = this;
            r2.callback = r3     // Catch: java.lang.Exception -> Lf
            android.media.MediaPlayer r0 = r2.player     // Catch: java.lang.Exception -> Lf
            java.lang.String r1 = r2.dataSource     // Catch: java.lang.Exception -> Lf
            r0.setDataSource(r1)     // Catch: java.lang.Exception -> Lf
            android.media.MediaPlayer r0 = r2.player     // Catch: java.lang.Exception -> Lf
            r0.prepareAsync()     // Catch: java.lang.Exception -> Lf
            goto L1b
        Lf:
            r0 = move-exception
            r0.printStackTrace()
            r1 = 1
            java.lang.String r0 = r0.getMessage()
            r3.onPlayFail(r1, r0)
        L1b:
            return
    }

    @Override
    public void release() {
            r1 = this;
            boolean r0 = r1.isPlaying()
            if (r0 == 0) goto L10
            android.media.MediaPlayer r0 = r1.player
            r0.stop()
            android.media.MediaPlayer r0 = r1.player
            r0.release()
        L10:
            return
    }
}
