package com.bianfeng.fastvo;

import android.content.Context;
import com.bianfeng.fastvo.action.DownloadFile;
import com.bianfeng.fastvo.action.DownloadListener;
import com.bianfeng.fastvo.action.DownloadTask;
import com.bianfeng.fastvo.action.OSSHelper;
import com.bianfeng.fastvo.action.UploadListener;
import com.bianfeng.fastvo.audio.AudioPlayCallback;
import com.bianfeng.fastvo.audio.AudioRecordCallback;
import com.bianfeng.fastvo.audio.PlayCallback;
import com.bianfeng.fastvo.audio.Player;
import com.bianfeng.fastvo.audio.RecordCallback;
import com.bianfeng.fastvo.audio.Recorder;
import com.bianfeng.fastvo.audio.amr.ArmPlayer;
import com.bianfeng.fastvo.audio.amr.ArmRecorder;
import com.bianfeng.fastvo.audio.spx.SpeexPlayer;
import com.bianfeng.fastvo.audio.spx.SpeexRecorder;
import com.bianfeng.fastvo.util.FileUtil;
import com.bianfeng.fastvo.util.LogUtil;
import com.bianfeng.fastvo.util.SecurityUtil;
import java.io.File;
import java.util.HashMap;
import java.util.Map;

public class FastVoice implements ErrorCode {
    public static final long MININUM_TIME = 1000;
    private static long durTime;
    private static boolean isPlaying;
    private static boolean isRecording;
    static Player player;
    static Recorder recorder;
    private static Map<String, String> voiceList;

    public static void init(Context context) {
        FileUtil.deleteDirectory(FastResource.defaultDataDir(context));
        FastResource.regist(context.getApplicationContext());
        voiceList = new HashMap();
        OSSHelper.init(context);
    }

    public static void startRecord(RecordCallback recordCallback) {
        durTime = System.currentTimeMillis();
        Recorder recorder2 = recorder;
        if (recorder2 != null && recorder2.isRecording()) {
            LogUtil.e("--------------------------------------");
            LogUtil.e("-- 上次录音未结束无法执行新的录音操作 --");
            LogUtil.e("--------------------------------------");
            recordCallback.onRecordFail(3, "上次录音未结束无法执行新的录音操作");
            return;
        }
        isRecording = true;
        int quality = FastConfig.getQuality();
        boolean zIsSpeex = FastConfig.isSpeex();
        String strMkDataFile = FastResource.mkDataFile("R" + quality + System.currentTimeMillis() + (zIsSpeex ? ".spx" : ".m4a"));
        FileUtil.deleteFile(strMkDataFile);
        if (!FastResource.createNewFile(strMkDataFile)) {
            recordCallback.onRecordFail(1, "文件目录被占用，创建文件失败");
            return;
        }
        if (!zIsSpeex) {
            recorder = new ArmRecorder(strMkDataFile);
        } else {
            recorder = new SpeexRecorder(strMkDataFile, quality);
        }
        recorder.start(new AudioRecordTask(recordCallback));
    }

    static class AudioRecordTask implements AudioRecordCallback, UploadListener {
        RecordCallback callback;
        private String fileName;

        public AudioRecordTask(RecordCallback recordCallback) {
            this.callback = recordCallback;
        }

        @Override
        public void onRecordSuccess(String str) {
            boolean unused = FastVoice.isRecording = false;
            if (FastVoice.durTime > 1000) {
                this.fileName = str;
                this.callback.onRecordSuccess(str);
                OSSHelper.upLoadFile(str, this);
                return;
            }
            this.callback.onRecordFail(1, "录音时间过短");
        }

        @Override
        public void onRecordFail(int i, String str) {
            boolean unused = FastVoice.isRecording = false;
            this.callback.onRecordFail(i, str);
        }

        @Override
        public void onRecordCancel() {
            boolean unused = FastVoice.isRecording = false;
            this.callback.onRecordCancel();
        }

        @Override
        public void onComplete(String str) {
            FastVoice.voiceList.put(str, this.fileName);
            this.callback.onUploadSuccess(str);
        }

        @Override
        public void onError(int i, String str) {
            this.callback.onRecordFail(i, str);
        }
    }

    public static void stopRecord() {
        durTime = System.currentTimeMillis() - durTime;
        Recorder recorder2 = recorder;
        if (recorder2 == null || !recorder2.isRecording()) {
            return;
        }
        recorder.release();
    }

    public static void cancelRecord() {
        Recorder recorder2 = recorder;
        if (recorder2 == null || !recorder2.isRecording()) {
            return;
        }
        recorder.cancel();
    }

    public static void startPlay(PlayCallback playCallback, String str) {
        String str2 = voiceList.get(str);
        if (!str.startsWith("http")) {
            startPlay(playCallback, str, true);
        } else if (FileUtil.isFileExist(str2)) {
            startPlay(playCallback, str2, true);
        } else {
            startPlay(playCallback, str, false);
        }
    }

    public static void startPlay(final PlayCallback playCallback, String str, boolean z) {
        Player player2;
        if (isPlaying || ((player2 = player) != null && player2.isPlaying())) {
            LogUtil.e("--------------------------------------");
            LogUtil.e("-- 上次播放未结束无法执行新的播放操作 --");
            LogUtil.e("--------------------------------------");
            playCallback.onPlayFail(1, "上次播放未结束无法执行新的播放操作");
            return;
        }
        isPlaying = true;
        Player player3 = player;
        if (player3 != null) {
            player3.release();
            player = null;
        }
        boolean zEquals = FileUtil.getSuffix(str).equals(".spx");
        if (z) {
            if (new File(str).exists()) {
                if (!zEquals) {
                    player = new ArmPlayer(str);
                } else {
                    player = new SpeexPlayer(str);
                }
                player.play(new AudioPlayCallback() {
                    @Override
                    public void onPlayComplete() {
                        boolean unused = FastVoice.isPlaying = false;
                        LogUtil.d("onPlayComplete");
                        playCallback.onPlayComplete();
                    }

                    @Override
                    public void onPlayFail(int i, String str2) {
                        boolean unused = FastVoice.isPlaying = false;
                        playCallback.onPlayFail(i, str2);
                    }
                });
                return;
            }
            playCallback.onPlayFail(1, "未找到本地语音文件");
            return;
        }
        new AudioPlayTask(playCallback).start(str);
    }

    public static boolean isPlaying() {
        return isPlaying;
    }

    public static boolean isRecording() {
        return isRecording;
    }

    static class AudioPlayTask implements AudioPlayCallback, DownloadListener {
        PlayCallback callback;
        int retryCount;

        @Override
        public void onUpdate(DownloadFile downloadFile) {
        }

        public AudioPlayTask(PlayCallback playCallback) {
            this.callback = playCallback;
        }

        public void start(String str) {
            DownloadFile downloadFile = new DownloadFile();
            downloadFile.url = str;
            downloadFile.filePath = FastResource.mkDataFile("P" + FastConfig.getQuality() + SecurityUtil.md5(str) + FileUtil.getSuffix(str));
            new DownloadTask(FastResource.getApplication(), this).start(downloadFile);
        }

        @Override
        public void onBegin(DownloadFile downloadFile) {
            LogUtil.d("begin download spx file");
        }

        @Override
        public void onComplete(DownloadFile downloadFile) {
            LogUtil.d("complete download spx file");
            this.callback.onDownloadComplete(downloadFile.filePath);
            boolean zEquals = FileUtil.getSuffix(downloadFile.filePath).equals(".spx");
            if (!zEquals) {
                FastVoice.player = new ArmPlayer(downloadFile.filePath);
            } else {
                FastVoice.player = new SpeexPlayer(downloadFile.filePath);
            }
            LogUtil.d("use SpeexPlayer : " + zEquals);
            FastVoice.player.play(this);
        }

        @Override
        public void onError(int i, DownloadFile downloadFile) {
            boolean unused = FastVoice.isPlaying = false;
            int i2 = this.retryCount;
            this.retryCount = i2 + 1;
            if (i2 < 3) {
                start(downloadFile.url);
            } else {
                this.callback.onPlayFail(i, "try download more than 3 times");
            }
        }

        @Override
        public void onPlayComplete() {
            boolean unused = FastVoice.isPlaying = false;
            LogUtil.d("onPlayComplete");
            this.callback.onPlayComplete();
        }

        @Override
        public void onPlayFail(int i, String str) {
            boolean unused = FastVoice.isPlaying = false;
            this.callback.onPlayFail(i, str);
        }
    }

    public static void stopPlay() {
        isPlaying = false;
        Player player2 = player;
        if (player2 != null) {
            player2.release();
            player = null;
        }
    }
}
