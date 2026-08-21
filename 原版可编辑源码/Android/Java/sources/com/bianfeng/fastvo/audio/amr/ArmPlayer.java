package com.bianfeng.fastvo.audio.amr;

import android.media.MediaPlayer;
import com.bianfeng.fastvo.ErrorCode;
import com.bianfeng.fastvo.audio.AudioPlayCallback;
import com.bianfeng.fastvo.audio.Player;

public class ArmPlayer implements MediaPlayer.OnPreparedListener, MediaPlayer.OnCompletionListener, MediaPlayer.OnErrorListener, ErrorCode, Player {
    AudioPlayCallback callback;
    String dataSource;
    MediaPlayer player;

    public ArmPlayer(String str) {
        this.dataSource = str;
        MediaPlayer mediaPlayer = new MediaPlayer();
        this.player = mediaPlayer;
        mediaPlayer.setAudioStreamType(3);
        this.player.setOnPreparedListener(this);
        this.player.setOnCompletionListener(this);
        this.player.setOnErrorListener(this);
        this.player.setVolume(1.0f, 1.0f);
    }

    @Override
    public boolean isPlaying() {
        return this.player.isPlaying();
    }

    @Override
    public void play(AudioPlayCallback audioPlayCallback) {
        try {
            this.callback = audioPlayCallback;
            this.player.setDataSource(this.dataSource);
            this.player.prepareAsync();
        } catch (Exception e) {
            e.printStackTrace();
            audioPlayCallback.onPlayFail(1, e.getMessage());
        }
    }

    @Override
    public void onPrepared(MediaPlayer mediaPlayer) {
        mediaPlayer.start();
    }

    @Override
    public void onCompletion(MediaPlayer mediaPlayer) {
        this.player.seekTo(0);
        this.callback.onPlayComplete();
    }

    @Override
    public boolean onError(MediaPlayer mediaPlayer, int i, int i2) {
        this.player.release();
        this.callback.onPlayFail(2, "error");
        return true;
    }

    @Override
    public void release() {
        if (isPlaying()) {
            this.player.stop();
            this.player.release();
        }
    }
}
