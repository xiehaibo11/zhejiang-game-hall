package org.cocos2dx.lib;

public class Cocos2dxMusic {
    private static final java.lang.String TAG = "Cocos2dxMusic";
    private android.media.MediaPlayer mBackgroundMediaPlayer;
    private final android.content.Context mContext;
    private java.lang.String mCurrentPath;
    private boolean mIsAudioFocus;
    private boolean mIsLoop;
    private float mLeftVolume;
    private boolean mManualPaused;
    private boolean mPaused;
    private float mRightVolume;

    static {
            return
    }

    public Cocos2dxMusic(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mIsLoop = r0
            r1.mManualPaused = r0
            r0 = 1
            r1.mIsAudioFocus = r0
            r1.mContext = r2
            r1.initData()
            return
    }

    private android.media.MediaPlayer createMediaPlayer(java.lang.String r8) {
            r7 = this;
            android.media.MediaPlayer r6 = new android.media.MediaPlayer
            r6.<init>()
            java.lang.String r0 = "/"
            boolean r0 = r8.startsWith(r0)     // Catch: java.lang.Exception -> L61
            if (r0 == 0) goto L1d
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L61
            r0.<init>(r8)     // Catch: java.lang.Exception -> L61
            java.io.FileDescriptor r8 = r0.getFD()     // Catch: java.lang.Exception -> L61
            r6.setDataSource(r8)     // Catch: java.lang.Exception -> L61
            r0.close()     // Catch: java.lang.Exception -> L61
            goto L56
        L1d:
            com.android.vending.expansion.zipfile.ZipResourceFile r0 = org.cocos2dx.lib.Cocos2dxHelper.getObbFile()     // Catch: java.lang.Exception -> L61
            if (r0 == 0) goto L3c
            com.android.vending.expansion.zipfile.ZipResourceFile r0 = org.cocos2dx.lib.Cocos2dxHelper.getObbFile()     // Catch: java.lang.Exception -> L61
            android.content.res.AssetFileDescriptor r8 = r0.getAssetFileDescriptor(r8)     // Catch: java.lang.Exception -> L61
            java.io.FileDescriptor r1 = r8.getFileDescriptor()     // Catch: java.lang.Exception -> L61
            long r2 = r8.getStartOffset()     // Catch: java.lang.Exception -> L61
            long r4 = r8.getLength()     // Catch: java.lang.Exception -> L61
            r0 = r6
            r0.setDataSource(r1, r2, r4)     // Catch: java.lang.Exception -> L61
            goto L56
        L3c:
            android.content.Context r0 = r7.mContext     // Catch: java.lang.Exception -> L61
            android.content.res.AssetManager r0 = r0.getAssets()     // Catch: java.lang.Exception -> L61
            android.content.res.AssetFileDescriptor r8 = r0.openFd(r8)     // Catch: java.lang.Exception -> L61
            java.io.FileDescriptor r1 = r8.getFileDescriptor()     // Catch: java.lang.Exception -> L61
            long r2 = r8.getStartOffset()     // Catch: java.lang.Exception -> L61
            long r4 = r8.getLength()     // Catch: java.lang.Exception -> L61
            r0 = r6
            r0.setDataSource(r1, r2, r4)     // Catch: java.lang.Exception -> L61
        L56:
            r6.prepare()     // Catch: java.lang.Exception -> L61
            float r8 = r7.mLeftVolume     // Catch: java.lang.Exception -> L61
            float r0 = r7.mRightVolume     // Catch: java.lang.Exception -> L61
            r6.setVolume(r8, r0)     // Catch: java.lang.Exception -> L61
            goto L7d
        L61:
            r8 = move-exception
            r6 = 0
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxMusic.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "error: "
            r1.append(r2)
            java.lang.String r2 = r8.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.e(r0, r1, r8)
        L7d:
            return r6
    }

    private void initData() {
            r2 = this;
            r0 = 1056964608(0x3f000000, float:0.5)
            r2.mLeftVolume = r0
            r2.mRightVolume = r0
            r0 = 0
            r2.mBackgroundMediaPlayer = r0
            r1 = 0
            r2.mPaused = r1
            r2.mCurrentPath = r0
            return
    }

    public void end() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.mBackgroundMediaPlayer
            if (r0 == 0) goto L7
            r0.release()
        L7:
            r1.initData()
            return
    }

    public float getBackgroundVolume() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer
            if (r0 == 0) goto Ld
            float r0 = r2.mLeftVolume
            float r1 = r2.mRightVolume
            float r0 = r0 + r1
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public boolean isBackgroundMusicPlaying() {
            r3 = this;
            r0 = 0
            android.media.MediaPlayer r1 = r3.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> Ld
            if (r1 != 0) goto L6
            goto L14
        L6:
            android.media.MediaPlayer r1 = r3.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> Ld
            boolean r0 = r1.isPlaying()     // Catch: java.lang.IllegalStateException -> Ld
            goto L14
        Ld:
            java.lang.String r1 = org.cocos2dx.lib.Cocos2dxMusic.TAG
            java.lang.String r2 = "isBackgroundMusicPlaying, IllegalStateException was triggered!"
            android.util.Log.e(r1, r2)
        L14:
            return r0
    }

    public void onEnterBackground() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> L15
            if (r0 == 0) goto L1c
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> L15
            boolean r0 = r0.isPlaying()     // Catch: java.lang.IllegalStateException -> L15
            if (r0 == 0) goto L1c
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> L15
            r0.pause()     // Catch: java.lang.IllegalStateException -> L15
            r0 = 1
            r2.mPaused = r0     // Catch: java.lang.IllegalStateException -> L15
            goto L1c
        L15:
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxMusic.TAG
            java.lang.String r1 = "onEnterBackground, IllegalStateException was triggered!"
            android.util.Log.e(r0, r1)
        L1c:
            return
    }

    public void onEnterForeground() {
            r2 = this;
            boolean r0 = r2.mManualPaused     // Catch: java.lang.IllegalStateException -> L15
            if (r0 != 0) goto L1c
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> L15
            if (r0 == 0) goto L1c
            boolean r0 = r2.mPaused     // Catch: java.lang.IllegalStateException -> L15
            if (r0 == 0) goto L1c
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> L15
            r0.start()     // Catch: java.lang.IllegalStateException -> L15
            r0 = 0
            r2.mPaused = r0     // Catch: java.lang.IllegalStateException -> L15
            goto L1c
        L15:
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxMusic.TAG
            java.lang.String r1 = "onEnterForeground, IllegalStateException was triggered!"
            android.util.Log.e(r0, r1)
        L1c:
            return
    }

    public void pauseBackgroundMusic() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> L17
            if (r0 == 0) goto L1e
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> L17
            boolean r0 = r0.isPlaying()     // Catch: java.lang.IllegalStateException -> L17
            if (r0 == 0) goto L1e
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> L17
            r0.pause()     // Catch: java.lang.IllegalStateException -> L17
            r0 = 1
            r2.mPaused = r0     // Catch: java.lang.IllegalStateException -> L17
            r2.mManualPaused = r0     // Catch: java.lang.IllegalStateException -> L17
            goto L1e
        L17:
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxMusic.TAG
            java.lang.String r1 = "pauseBackgroundMusic, IllegalStateException was triggered!"
            android.util.Log.e(r0, r1)
        L1e:
            return
    }

    public void playBackgroundMusic(java.lang.String r3, boolean r4) {
            r2 = this;
            java.lang.String r0 = r2.mCurrentPath
            if (r0 != 0) goto Ld
            android.media.MediaPlayer r0 = r2.createMediaPlayer(r3)
            r2.mBackgroundMediaPlayer = r0
            r2.mCurrentPath = r3
            goto L22
        Ld:
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L22
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer
            if (r0 == 0) goto L1a
            r0.release()
        L1a:
            android.media.MediaPlayer r0 = r2.createMediaPlayer(r3)
            r2.mBackgroundMediaPlayer = r0
            r2.mCurrentPath = r3
        L22:
            android.media.MediaPlayer r3 = r2.mBackgroundMediaPlayer
            if (r3 != 0) goto L2e
            java.lang.String r3 = org.cocos2dx.lib.Cocos2dxMusic.TAG
            java.lang.String r4 = "playBackgroundMusic: background media player is null"
            android.util.Log.e(r3, r4)
            goto L5e
        L2e:
            boolean r0 = r2.mPaused     // Catch: java.lang.Exception -> L57
            r1 = 0
            if (r0 == 0) goto L3c
            r3.seekTo(r1)     // Catch: java.lang.Exception -> L57
            android.media.MediaPlayer r3 = r2.mBackgroundMediaPlayer     // Catch: java.lang.Exception -> L57
            r3.start()     // Catch: java.lang.Exception -> L57
            goto L4d
        L3c:
            boolean r3 = r3.isPlaying()     // Catch: java.lang.Exception -> L57
            if (r3 == 0) goto L48
            android.media.MediaPlayer r3 = r2.mBackgroundMediaPlayer     // Catch: java.lang.Exception -> L57
            r3.seekTo(r1)     // Catch: java.lang.Exception -> L57
            goto L4d
        L48:
            android.media.MediaPlayer r3 = r2.mBackgroundMediaPlayer     // Catch: java.lang.Exception -> L57
            r3.start()     // Catch: java.lang.Exception -> L57
        L4d:
            android.media.MediaPlayer r3 = r2.mBackgroundMediaPlayer     // Catch: java.lang.Exception -> L57
            r3.setLooping(r4)     // Catch: java.lang.Exception -> L57
            r2.mPaused = r1     // Catch: java.lang.Exception -> L57
            r2.mIsLoop = r4     // Catch: java.lang.Exception -> L57
            goto L5e
        L57:
            java.lang.String r3 = org.cocos2dx.lib.Cocos2dxMusic.TAG
            java.lang.String r4 = "playBackgroundMusic: error state"
            android.util.Log.e(r3, r4)
        L5e:
            return
    }

    public void preloadBackgroundMusic(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.mCurrentPath
            if (r0 == 0) goto La
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L19
        La:
            android.media.MediaPlayer r0 = r1.mBackgroundMediaPlayer
            if (r0 == 0) goto L11
            r0.release()
        L11:
            android.media.MediaPlayer r0 = r1.createMediaPlayer(r2)
            r1.mBackgroundMediaPlayer = r0
            r1.mCurrentPath = r2
        L19:
            return
    }

    public void resumeBackgroundMusic() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> L13
            if (r0 == 0) goto L1a
            boolean r0 = r2.mPaused     // Catch: java.lang.IllegalStateException -> L13
            if (r0 == 0) goto L1a
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer     // Catch: java.lang.IllegalStateException -> L13
            r0.start()     // Catch: java.lang.IllegalStateException -> L13
            r0 = 0
            r2.mPaused = r0     // Catch: java.lang.IllegalStateException -> L13
            r2.mManualPaused = r0     // Catch: java.lang.IllegalStateException -> L13
            goto L1a
        L13:
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxMusic.TAG
            java.lang.String r1 = "resumeBackgroundMusic, IllegalStateException was triggered!"
            android.util.Log.e(r0, r1)
        L1a:
            return
    }

    public void rewindBackgroundMusic() {
            r2 = this;
            android.media.MediaPlayer r0 = r2.mBackgroundMediaPlayer
            if (r0 == 0) goto Lb
            java.lang.String r0 = r2.mCurrentPath
            boolean r1 = r2.mIsLoop
            r2.playBackgroundMusic(r0, r1)
        Lb:
            return
    }

    void setAudioFocus(boolean r3) {
            r2 = this;
            r2.mIsAudioFocus = r3
            android.media.MediaPlayer r3 = r2.mBackgroundMediaPlayer
            if (r3 == 0) goto L1a
            boolean r3 = r2.mIsAudioFocus
            r0 = 0
            if (r3 == 0) goto Le
            float r3 = r2.mLeftVolume
            goto Lf
        Le:
            r3 = 0
        Lf:
            boolean r1 = r2.mIsAudioFocus
            if (r1 == 0) goto L15
            float r0 = r2.mRightVolume
        L15:
            android.media.MediaPlayer r1 = r2.mBackgroundMediaPlayer
            r1.setVolume(r3, r0)
        L1a:
            return
    }

    public void setBackgroundVolume(float r3) {
            r2 = this;
            r0 = 0
            int r1 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r1 >= 0) goto L6
            r3 = 0
        L6:
            r0 = 1065353216(0x3f800000, float:1.0)
            int r1 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r1 <= 0) goto Le
            r3 = 1065353216(0x3f800000, float:1.0)
        Le:
            r2.mRightVolume = r3
            r2.mLeftVolume = r3
            android.media.MediaPlayer r3 = r2.mBackgroundMediaPlayer
            if (r3 == 0) goto L21
            boolean r0 = r2.mIsAudioFocus
            if (r0 == 0) goto L21
            float r0 = r2.mLeftVolume
            float r1 = r2.mRightVolume
            r3.setVolume(r0, r1)
        L21:
            return
    }

    public void stopBackgroundMusic() {
            r1 = this;
            android.media.MediaPlayer r0 = r1.mBackgroundMediaPlayer
            if (r0 == 0) goto L12
            r0.release()
            java.lang.String r0 = r1.mCurrentPath
            android.media.MediaPlayer r0 = r1.createMediaPlayer(r0)
            r1.mBackgroundMediaPlayer = r0
            r0 = 0
            r1.mPaused = r0
        L12:
            return
    }

    public boolean willPlayBackgroundMusic() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            java.lang.String r1 = "audio"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.media.AudioManager r0 = (android.media.AudioManager) r0
            boolean r0 = r0.isMusicActive()
            r0 = r0 ^ 1
            return r0
    }
}
