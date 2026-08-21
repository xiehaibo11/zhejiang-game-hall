package com.mbridge.msdk.playercommon;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import com.mbridge.msdk.foundation.b.b;
import com.mbridge.msdk.foundation.same.a;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import org.json.JSONException;
import org.json.JSONObject;

public class PlayerView extends LinearLayout {
    public static final String TAG = "PlayerView";
    private boolean isBTVideo;
    private boolean isBTVideoPlaying;
    private boolean mInitState;
    private boolean mIsCovered;
    private boolean mIsFirstCreateHolder;
    private boolean mIsNeedToRepeatPrepare;
    private boolean mIsSurfaceHolderDestoryed;
    private LinearLayout mLlSurContainer;
    private LinearLayout mLoadingView;
    private String mPlayUrl;
    private SurfaceHolder mSurfaceHolder;
    private VideoFeedsPlayer mVideoFeedsPlayer;
    protected int orientation;
    protected float xInScreen;
    protected float yInScreen;

    public PlayerView(Context context) {
        super(context);
        this.mInitState = false;
        this.mIsFirstCreateHolder = true;
        this.mIsSurfaceHolderDestoryed = false;
        this.mIsCovered = false;
        this.mIsNeedToRepeatPrepare = false;
        this.isBTVideo = false;
        this.isBTVideoPlaying = false;
        this.orientation = 1;
        init();
    }

    public PlayerView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mInitState = false;
        this.mIsFirstCreateHolder = true;
        this.mIsSurfaceHolderDestoryed = false;
        this.mIsCovered = false;
        this.mIsNeedToRepeatPrepare = false;
        this.isBTVideo = false;
        this.isBTVideoPlaying = false;
        this.orientation = 1;
        init();
    }

    public void setIsBTVideo(boolean z) {
        this.isBTVideo = z;
    }

    public void setIsBTVideoPlaying(boolean z) {
        this.isBTVideoPlaying = z;
    }

    private void init() {
        try {
            initView();
            initPlayer();
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    private void initPlayer() {
        this.mVideoFeedsPlayer = new VideoFeedsPlayer();
    }

    public void addSurfaceView() {
        try {
            z.b("PlayerView", "addSurfaceView");
            SurfaceView surfaceView = new SurfaceView(getContext().getApplicationContext());
            SurfaceHolder holder = surfaceView.getHolder();
            this.mSurfaceHolder = holder;
            holder.setType(3);
            this.mSurfaceHolder.setKeepScreenOn(true);
            this.mSurfaceHolder.addCallback(new MySurfaceHoldeCallback());
            this.mLlSurContainer.addView(surfaceView, -1, -1);
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void removeSurface() {
        try {
            z.b("PlayerView", "removeSurface");
            this.mLlSurContainer.removeAllViews();
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    private void initView() {
        View viewInflate = LayoutInflater.from(getContext()).inflate(s.a(getContext(), "mbridge_playercommon_player_view", "layout"), (ViewGroup) null);
        if (viewInflate != null) {
            this.mLlSurContainer = (LinearLayout) viewInflate.findViewById(s.a(getContext(), "mbridge_playercommon_ll_sur_container", "id"));
            this.mLoadingView = (LinearLayout) viewInflate.findViewById(s.a(getContext(), "mbridge_playercommon_ll_loading", "id"));
            addSurfaceView();
            addView(viewInflate, -1, -1);
        }
    }

    public boolean initVFPData(String str, String str2, VideoPlayerStatusListener videoPlayerStatusListener) {
        if (TextUtils.isEmpty(str)) {
            z.b("PlayerView", "playUrl==null");
            return false;
        }
        this.mPlayUrl = str;
        this.mVideoFeedsPlayer.initPlayer(getContext(), this.mLoadingView, str, videoPlayerStatusListener);
        this.mInitState = true;
        return true;
    }

    public boolean playVideo(int i) {
        try {
            if (this.mVideoFeedsPlayer == null) {
                z.b("PlayerView", "player init error 播放失败");
                return false;
            }
            if (!this.mInitState) {
                z.b("PlayerView", "vfp init failed 播放失败");
                return false;
            }
            this.mVideoFeedsPlayer.play(this.mPlayUrl, i);
            this.mIsNeedToRepeatPrepare = false;
            return true;
        } catch (Throwable th) {
            z.c("PlayerView", th.getMessage(), th);
            return false;
        }
    }

    public boolean playVideo() {
        return playVideo(0);
    }

    public void onPause() {
        try {
            pause();
            if (this.mVideoFeedsPlayer != null) {
                this.mVideoFeedsPlayer.setIsFrontDesk(false);
            }
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void pause() {
        try {
            if (this.mVideoFeedsPlayer != null) {
                this.mVideoFeedsPlayer.pause();
            }
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void resumeStart() {
        try {
            start(true);
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void setDataSource() {
        try {
            if (this.mVideoFeedsPlayer != null) {
                this.mVideoFeedsPlayer.showLoading();
                this.mVideoFeedsPlayer.setDataSource();
                this.mIsNeedToRepeatPrepare = false;
            }
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void start(boolean z) {
        try {
            if (this.mVideoFeedsPlayer == null || this.mIsCovered) {
                return;
            }
            this.mVideoFeedsPlayer.start(z);
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void prepare() {
        try {
            if (this.mVideoFeedsPlayer != null) {
                this.mVideoFeedsPlayer.prepare();
            }
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void start(int i) {
        try {
            if (this.mVideoFeedsPlayer != null) {
                this.mVideoFeedsPlayer.start(i);
            }
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void justSeekTo(int i) {
        try {
            if (this.mVideoFeedsPlayer != null) {
                this.mVideoFeedsPlayer.justSeekTo(i);
            }
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void seekTo(int i) {
        try {
            if (this.mVideoFeedsPlayer != null) {
                this.mVideoFeedsPlayer.seekTo(i);
            }
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void stop() {
        try {
            if (this.mVideoFeedsPlayer != null) {
                this.mVideoFeedsPlayer.stop();
            }
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void openSound() {
        VideoFeedsPlayer videoFeedsPlayer = this.mVideoFeedsPlayer;
        if (videoFeedsPlayer != null) {
            videoFeedsPlayer.openSound();
        }
    }

    public void closeSound() {
        VideoFeedsPlayer videoFeedsPlayer = this.mVideoFeedsPlayer;
        if (videoFeedsPlayer != null) {
            videoFeedsPlayer.closeSound();
        }
    }

    public void setDesk(boolean z) {
        this.mVideoFeedsPlayer.setIsFrontDesk(z);
    }

    public void onResume() {
        try {
            this.mVideoFeedsPlayer.setIsFrontDesk(true);
            if (this.mVideoFeedsPlayer != null && !this.mIsSurfaceHolderDestoryed && !isComplete() && !this.mIsCovered) {
                z.b("PlayerView", "onresume========");
                if (this.mVideoFeedsPlayer.hasPrepare()) {
                    resumeStart();
                } else {
                    playVideo(0);
                }
            }
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public void coverUnlockResume() {
        try {
            this.mVideoFeedsPlayer.setIsFrontDesk(true);
            if (this.mVideoFeedsPlayer != null) {
                z.b("PlayerView", "coverUnlockResume========");
                if (!this.mVideoFeedsPlayer.hasPrepare() || this.mIsNeedToRepeatPrepare) {
                    playVideo(0);
                } else {
                    start(true);
                }
            }
        } catch (Throwable th) {
            z.d("PlayerView", th.getMessage());
        }
    }

    public void release() {
        try {
            if (this.mVideoFeedsPlayer != null) {
                this.mVideoFeedsPlayer.releasePlayer();
            }
            if (this.mSurfaceHolder != null) {
                z.d("PlayerView", "mSurfaceHolder release");
                this.mSurfaceHolder.getSurface().release();
            }
        } catch (Throwable th) {
            z.d("PlayerView", th.getMessage());
        }
    }

    public int getCurPosition() {
        try {
            if (this.mVideoFeedsPlayer != null) {
                return this.mVideoFeedsPlayer.getCurPosition();
            }
            return 0;
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
            return 0;
        }
    }

    public int getDuration() {
        VideoFeedsPlayer videoFeedsPlayer = this.mVideoFeedsPlayer;
        if (videoFeedsPlayer != null) {
            return videoFeedsPlayer.getDuration();
        }
        return 0;
    }

    private class MySurfaceHoldeCallback implements SurfaceHolder.Callback {
        private MySurfaceHoldeCallback() {
        }

        @Override
        public void surfaceCreated(SurfaceHolder surfaceHolder) {
            try {
                z.b("PlayerView", "surfaceCreated");
                if (PlayerView.this.mVideoFeedsPlayer != null && surfaceHolder != null) {
                    PlayerView.this.mSurfaceHolder = surfaceHolder;
                    PlayerView.this.mVideoFeedsPlayer.setDisplay(surfaceHolder);
                }
                PlayerView.this.mIsFirstCreateHolder = false;
            } catch (Exception e) {
                z.d("PlayerView", e.getMessage());
            }
        }

        @Override
        public void surfaceDestroyed(SurfaceHolder surfaceHolder) {
            try {
                z.b("PlayerView", "surfaceDestroyed ");
                PlayerView.this.mIsSurfaceHolderDestoryed = true;
                PlayerView.this.mIsNeedToRepeatPrepare = true;
                PlayerView.this.mVideoFeedsPlayer.pause();
            } catch (Exception e) {
                z.d("PlayerView", e.getMessage());
            }
        }

        @Override
        public void surfaceChanged(SurfaceHolder surfaceHolder, int i, int i2, int i3) {
            try {
                z.b("PlayerView", "surfaceChanged");
                if (PlayerView.this.mIsSurfaceHolderDestoryed && !PlayerView.this.mIsCovered && !PlayerView.this.isComplete() && !PlayerView.this.isBTVideo && !b.c) {
                    if (PlayerView.this.mVideoFeedsPlayer.hasPrepare()) {
                        z.b("PlayerView", "surfaceChanged  start====");
                        PlayerView.this.resumeStart();
                    } else {
                        z.b("PlayerView", "surfaceChanged  PLAY====");
                        PlayerView.this.playVideo(0);
                    }
                    if (PlayerView.this.isBTVideo) {
                        if (PlayerView.this.isBTVideoPlaying) {
                            if (!PlayerView.this.mVideoFeedsPlayer.hasPrepare()) {
                                PlayerView.this.mVideoFeedsPlayer.prepare();
                            }
                            PlayerView.this.mVideoFeedsPlayer.start(false);
                        } else {
                            PlayerView.this.pause();
                        }
                    }
                }
                PlayerView.this.mIsSurfaceHolderDestoryed = false;
            } catch (Exception e) {
                z.d("PlayerView", e.getMessage());
            }
        }
    }

    public boolean isComplete() {
        try {
            if (this.mVideoFeedsPlayer != null) {
                return this.mVideoFeedsPlayer.isComplete();
            }
            return false;
        } catch (Throwable th) {
            z.c("PlayerView", th.getMessage(), th);
            return false;
        }
    }

    public void initBufferIngParam(int i) {
        VideoFeedsPlayer videoFeedsPlayer = this.mVideoFeedsPlayer;
        if (videoFeedsPlayer != null) {
            videoFeedsPlayer.initBufferIngParam(i);
        }
    }

    public boolean isPlayIng() {
        try {
            if (this.mVideoFeedsPlayer != null) {
                return this.mVideoFeedsPlayer.isPlayIng();
            }
            return false;
        } catch (Throwable th) {
            z.d("PlayerView", th.getMessage());
            return false;
        }
    }

    public void setIsCovered(boolean z) {
        try {
            this.mIsCovered = z;
            z.d("PlayerView", "mIsCovered:" + z);
        } catch (Exception e) {
            z.d("PlayerView", e.getMessage());
        }
    }

    public boolean isSilent() {
        return this.mVideoFeedsPlayer.isSilent();
    }

    public void setVolume(float f, float f2) {
        VideoFeedsPlayer videoFeedsPlayer = this.mVideoFeedsPlayer;
        if (videoFeedsPlayer != null) {
            videoFeedsPlayer.setVolume(f, f2);
        }
    }

    public void setPlaybackParams(float f) {
        VideoFeedsPlayer videoFeedsPlayer = this.mVideoFeedsPlayer;
        if (videoFeedsPlayer != null) {
            videoFeedsPlayer.setPlaybackParams(f);
        }
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        this.xInScreen = motionEvent.getRawX();
        this.yInScreen = motionEvent.getRawY();
        return super.onInterceptTouchEvent(motionEvent);
    }

    public JSONObject buildH5JsonObject(int i) {
        JSONObject jSONObject;
        JSONObject jSONObject2 = new JSONObject();
        try {
            jSONObject = new JSONObject();
        } catch (JSONException e) {
            e = e;
        }
        try {
            jSONObject.put(a.n, ae.a(com.mbridge.msdk.foundation.controller.a.f().j(), this.xInScreen));
            jSONObject.put(a.o, ae.a(com.mbridge.msdk.foundation.controller.a.f().j(), this.yInScreen));
            jSONObject.put(a.q, i);
            try {
                this.orientation = getContext().getResources().getConfiguration().orientation;
            } catch (Exception e2) {
                e2.printStackTrace();
            }
            jSONObject.put(a.r, this.orientation);
            jSONObject.put(a.s, ae.d(getContext()));
            return jSONObject;
        } catch (JSONException e3) {
            e = e3;
            jSONObject2 = jSONObject;
            e.printStackTrace();
            return jSONObject2;
        }
    }
}
