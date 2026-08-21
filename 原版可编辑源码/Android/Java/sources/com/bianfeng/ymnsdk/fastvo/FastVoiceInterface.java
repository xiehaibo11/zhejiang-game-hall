package com.bianfeng.ymnsdk.fastvo;

import android.content.Context;
import com.bianfeng.fastvo.FastConfig;
import com.bianfeng.fastvo.FastVoice;
import com.bianfeng.fastvo.FastVoiceWrapper;
import com.bianfeng.fastvo.audio.PlayCallback;
import com.bianfeng.fastvo.audio.RecordCallback;
import com.bianfeng.fastvo.util.FastovAppConextUtils;
import com.bianfeng.platform.PlatformSdk;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;
import com.tencent.connect.common.Constants;
import java.util.Map;

@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class FastVoiceInterface extends YmnPluginWrapper {
    private static final int ADD_PERMISSION_FAIL = 26001;
    private static final int ADD_PERMISSION_SUCCESS = 26000;
    public static final String FASTVOICE_FUNCTION_CANCEL_RECORD = "fastvo_cancel_record";
    public static final String FASTVOICE_FUNCTION_START_NATIVE_RECORD = "fastvo_start_native_record";
    public static final String FASTVOICE_FUNCTION_START_PLAY = "fastvo_start_play";
    public static final String FASTVOICE_FUNCTION_START_PLAY_LOCAL = "fastvo_start_play_local";
    public static final String FASTVOICE_FUNCTION_START_RECORD = "fastvo_start_record";
    public static final String FASTVOICE_FUNCTION_STOP_PLAY = "fastvo_stop_play";
    public static final String FASTVOICE_FUNCTION_STOP_RECORD = "fastvo_stop_record";
    private SpeakerManager speakerManager;

    @Override
    public String getPluginId() {
        return Constants.VIA_REPORT_TYPE_CHAT_VIDEO;
    }

    @Override
    public String getPluginName() {
        return "fastvo";
    }

    @Override
    public int getPluginVersion() {
        return 35;
    }

    @Override
    public String getSdkVersion() {
        return "1.0.2";
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        FastovAppConextUtils.init(this);
        FastVoice.init(context);
        FastConfig.setAppId(getMetaData("TD_SDK_APP_ID"));
        FastConfig.setChannel(getMetaData("TD_CHANNEL_ID"));
        FastConfig.setPlatformId(PlatformSdk.getInstance().getPlatformId());
        if (getMetaData("FASTVO_QUALITY") != null) {
            FastConfig.setQuality(Integer.parseInt(getMetaData("FASTVO_QUALITY")));
        }
        if (getMetaData("FASTVO_SAMPLE_RATE") != null) {
            FastConfig.setSampleRate(Integer.parseInt(getMetaData("FASTVO_SAMPLE_RATE")));
        }
        this.speakerManager = new SpeakerManager(context);
    }

    @Override
    public void onLogin(Map<String, String> map) {
        super.onLogin(map);
        FastConfig.setUid(map.get("platformUserId"));
    }

    @YFunction(name = FASTVOICE_FUNCTION_START_RECORD)
    public void startSpeexRecord() {
        FastConfig.setSpeex(true);
        startRecord();
    }

    @YFunction(name = FASTVOICE_FUNCTION_START_RECORD)
    public void startSpeexRecord(String str) {
        FastConfig.setOpenId(str);
        FastConfig.setSpeex(true);
        startRecord();
    }

    @YFunction(name = FASTVOICE_FUNCTION_START_NATIVE_RECORD)
    public void startNativeRecord() {
        FastConfig.setSpeex(false);
        startRecord();
    }

    @YFunction(name = FASTVOICE_FUNCTION_START_NATIVE_RECORD)
    public void startNativeRecord(String str) {
        FastConfig.setOpenId(str);
        FastConfig.setSpeex(false);
        startRecord();
    }

    class 1 implements BfDataPermissionUtils.PermissCallback {
        @Override
        public void onAllow(int i, String str) {
        }

        1() {
        }

        @Override
        public void onAllowAll(int i) {
            Logger.i("开始录音");
            FastVoiceInterface.this.speakerManager.closeVolume();
            if (FastVoice.isPlaying()) {
                FastVoiceInterface.this.sendResult(FastVoiceWrapper.FASTVOICE_PLAY_FAIL, "播放失败，正在开始录音");
            }
            FastVoice.stopPlay();
            FastVoiceInterface.this.tryRunOnUiThreadOrJustRun(new Runnable() {
                @Override
                public void run() {
                    FastVoice.startRecord(new RecordCallback() {
                        @Override
                        public void onRecordSuccess(String str) {
                            FastVoiceInterface.this.sendResult(FastVoiceWrapper.FASTVOICE_RECORD_SUCCESS, str);
                        }

                        @Override
                        public void onRecordFail(int i2, String str) {
                            FastVoiceInterface.this.speakerManager.openVolume();
                            if (i2 == 3) {
                                FastVoiceInterface.this.sendResult(FastVoiceWrapper.FASTVOICE_IS_RECORDING, i2 + "|" + str);
                                return;
                            }
                            FastVoiceInterface.this.sendResult(FastVoiceWrapper.FASTVOICE_RECORD_FAIL, i2 + "|" + str);
                        }

                        @Override
                        public void onUploadSuccess(String str) {
                            FastVoiceInterface.this.sendResult(FastVoiceWrapper.FASTVOICE_UPLOAD_SUCCESS, str);
                        }

                        @Override
                        public void onRecordCancel() {
                            FastVoiceInterface.this.sendResult(FastVoiceWrapper.FASTVOICE_CANCEL_RECORD, "录音取消");
                        }
                    });
                }
            });
        }

        @Override
        public void onDeny(int i, String str) {
            FastVoiceInterface.this.sendResult(FastVoiceInterface.ADD_PERMISSION_FAIL, "授权失败" + str);
            FastVoiceInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "授权失败" + str);
        }

        @Override
        public void onDenyIn48Hours(int i, String str) {
            FastVoiceInterface.this.sendResult(FastVoiceInterface.ADD_PERMISSION_FAIL, "这个是48小时" + str);
            FastVoiceInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "这个是48小时" + str);
        }
    }

    private void startRecord() {
        BfDataPermissionUtils.newInstance(getActivity()).setCallback(new 1()).setPermissions("android.permission.RECORD_AUDIO").requestPermissions(1024);
    }

    @YFunction(name = FASTVOICE_FUNCTION_STOP_RECORD)
    public void stopRecord() {
        this.speakerManager.openVolume();
        FastVoice.stopRecord();
    }

    @YFunction(name = FASTVOICE_FUNCTION_CANCEL_RECORD)
    public void cancelRecord() {
        this.speakerManager.openVolume();
        FastVoice.cancelRecord();
    }

    @YFunction(name = FASTVOICE_FUNCTION_STOP_PLAY)
    public void stopPlay() {
        this.speakerManager.closeSpeakerphoneOn();
        FastVoice.stopPlay();
    }

    @YFunction(name = FASTVOICE_FUNCTION_START_PLAY)
    private void startPlay(String str) {
        startPlay(str, "0.5");
    }

    @YFunction(name = FASTVOICE_FUNCTION_START_PLAY)
    private void startPlay(String str, String str2) {
        Logger.i("开始播放--->" + str);
        if (FastVoice.isRecording()) {
            sendResult(FastVoiceWrapper.FASTVOICE_PLAY_FAIL, "语音播放失败，正在录音");
        } else {
            this.speakerManager.openSpeakerphoneOn(str2);
            FastVoice.startPlay(new PlayCallback() {
                @Override
                public void onPlayFail(int i, String str3) {
                    FastVoiceInterface.this.speakerManager.closeSpeakerphoneOn();
                    FastVoiceInterface.this.sendResult(FastVoiceWrapper.FASTVOICE_PLAY_FAIL, i + "|" + str3);
                }

                @Override
                public void onPlayComplete() {
                    FastVoice.stopPlay();
                    FastVoiceInterface.this.speakerManager.closeSpeakerphoneOn();
                    FastVoiceInterface.this.sendResult(FastVoiceWrapper.FASTVOICE_PLAY_COMPLETE, null);
                }

                @Override
                public void onDownloadComplete(String str3) {
                    FastVoiceInterface.this.sendResult(FastVoiceWrapper.FASTVOICE_DOWNLOAD_COMPLETE, str3);
                }
            }, str);
        }
    }
}
