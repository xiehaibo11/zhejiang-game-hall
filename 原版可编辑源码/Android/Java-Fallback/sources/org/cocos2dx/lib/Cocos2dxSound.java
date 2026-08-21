package org.cocos2dx.lib;

public class Cocos2dxSound {
    private static final int INVALID_SOUND_ID = -1;
    private static final int INVALID_STREAM_ID = -1;
    private static final int LOAD_TIME_OUT = 500;
    private static final int MAX_SIMULTANEOUS_STREAMS_DEFAULT = 5;
    private static final int MAX_SIMULTANEOUS_STREAMS_I9100 = 3;
    private static final int SOUND_PRIORITY = 1;
    private static final int SOUND_QUALITY = 5;
    private static final float SOUND_RATE = 1.0f;
    private static final java.lang.String TAG = "Cocos2dxSound";
    private final android.content.Context mContext;
    private boolean mIsAudioFocus;
    private float mLeftVolume;
    private final java.lang.Object mLockPathStreamIDsMap;
    private final java.util.HashMap<java.lang.String, java.lang.Integer> mPathSoundIDMap;
    private final java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> mPathStreamIDsMap;
    private java.util.concurrent.ConcurrentHashMap<java.lang.Integer, org.cocos2dx.lib.Cocos2dxSound.SoundInfoForLoadedCompleted> mPlayWhenLoadedEffects;
    private float mRightVolume;
    private android.media.SoundPool mSoundPool;

    public class OnLoadCompletedListener implements android.media.SoundPool.OnLoadCompleteListener {
        final org.cocos2dx.lib.Cocos2dxSound this$0;

        public OnLoadCompletedListener(org.cocos2dx.lib.Cocos2dxSound r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onLoadComplete(android.media.SoundPool r8, int r9, int r10) {
                r7 = this;
                if (r10 != 0) goto L30
                org.cocos2dx.lib.Cocos2dxSound r8 = r7.this$0
                java.util.concurrent.ConcurrentHashMap r8 = org.cocos2dx.lib.Cocos2dxSound.access$000(r8)
                java.lang.Integer r10 = java.lang.Integer.valueOf(r9)
                java.lang.Object r8 = r8.get(r10)
                org.cocos2dx.lib.Cocos2dxSound$SoundInfoForLoadedCompleted r8 = (org.cocos2dx.lib.Cocos2dxSound.SoundInfoForLoadedCompleted) r8
                if (r8 == 0) goto L30
                org.cocos2dx.lib.Cocos2dxSound r0 = r7.this$0
                java.lang.String r1 = r8.path
                boolean r3 = r8.isLoop
                float r4 = r8.pitch
                float r5 = r8.pan
                float r6 = r8.gain
                r2 = r9
                int r9 = org.cocos2dx.lib.Cocos2dxSound.access$100(r0, r1, r2, r3, r4, r5, r6)
                r8.effectID = r9
                monitor-enter(r8)
                r8.notifyAll()     // Catch: java.lang.Throwable -> L2d
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L2d
                goto L30
            L2d:
                r9 = move-exception
                monitor-exit(r8)     // Catch: java.lang.Throwable -> L2d
                throw r9
            L30:
                return
        }
    }

    private class SoundInfoForLoadedCompleted {
        int effectID;
        float gain;
        boolean isLoop;
        float pan;
        java.lang.String path;
        float pitch;
        final org.cocos2dx.lib.Cocos2dxSound this$0;

        SoundInfoForLoadedCompleted(org.cocos2dx.lib.Cocos2dxSound r1, java.lang.String r2, boolean r3, float r4, float r5, float r6) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.path = r2
                r0.isLoop = r3
                r0.pitch = r4
                r0.pan = r5
                r0.gain = r6
                r1 = -1
                r0.effectID = r1
                return
        }
    }

    public Cocos2dxSound(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.mIsAudioFocus = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mPathStreamIDsMap = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.mLockPathStreamIDsMap = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mPathSoundIDMap = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.mPlayWhenLoadedEffects = r0
            r1.mContext = r2
            r1.initData()
            return
    }

    static java.util.concurrent.ConcurrentHashMap access$000(org.cocos2dx.lib.Cocos2dxSound r0) {
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, org.cocos2dx.lib.Cocos2dxSound$SoundInfoForLoadedCompleted> r0 = r0.mPlayWhenLoadedEffects
            return r0
    }

    static int access$100(org.cocos2dx.lib.Cocos2dxSound r0, java.lang.String r1, int r2, boolean r3, float r4, float r5, float r6) {
            int r0 = r0.doPlayEffect(r1, r2, r3, r4, r5, r6)
            return r0
    }

    private float clamp(float r1, float r2, float r3) {
            r0 = this;
            float r1 = java.lang.Math.min(r1, r3)
            float r1 = java.lang.Math.max(r2, r1)
            return r1
    }

    private int createSoundIDFromAsset(java.lang.String r5) {
            r4 = this;
            r0 = -1
            java.lang.String r1 = "/"
            boolean r1 = r5.startsWith(r1)     // Catch: java.lang.Exception -> L37
            r2 = 0
            if (r1 == 0) goto L11
            android.media.SoundPool r1 = r4.mSoundPool     // Catch: java.lang.Exception -> L37
            int r5 = r1.load(r5, r2)     // Catch: java.lang.Exception -> L37
            goto L53
        L11:
            com.android.vending.expansion.zipfile.ZipResourceFile r1 = org.cocos2dx.lib.Cocos2dxHelper.getObbFile()     // Catch: java.lang.Exception -> L37
            if (r1 == 0) goto L26
            com.android.vending.expansion.zipfile.ZipResourceFile r1 = org.cocos2dx.lib.Cocos2dxHelper.getObbFile()     // Catch: java.lang.Exception -> L37
            android.content.res.AssetFileDescriptor r5 = r1.getAssetFileDescriptor(r5)     // Catch: java.lang.Exception -> L37
            android.media.SoundPool r1 = r4.mSoundPool     // Catch: java.lang.Exception -> L37
            int r5 = r1.load(r5, r2)     // Catch: java.lang.Exception -> L37
            goto L53
        L26:
            android.media.SoundPool r1 = r4.mSoundPool     // Catch: java.lang.Exception -> L37
            android.content.Context r3 = r4.mContext     // Catch: java.lang.Exception -> L37
            android.content.res.AssetManager r3 = r3.getAssets()     // Catch: java.lang.Exception -> L37
            android.content.res.AssetFileDescriptor r5 = r3.openFd(r5)     // Catch: java.lang.Exception -> L37
            int r5 = r1.load(r5, r2)     // Catch: java.lang.Exception -> L37
            goto L53
        L37:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "error: "
            r1.append(r2)
            java.lang.String r2 = r5.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "Cocos2dxSound"
            android.util.Log.e(r2, r1, r5)
            r5 = -1
        L53:
            if (r5 != 0) goto L56
            r5 = -1
        L56:
            return r5
    }

    private synchronized int doPlayEffect(java.lang.String r17, int r18, boolean r19, float r20, float r21, float r22) {
            r16 = this;
            r1 = r16
            r0 = r17
            r2 = r21
            monitor-enter(r16)
            float r3 = r1.mLeftVolume     // Catch: java.lang.Throwable -> L69
            float r3 = r3 * r22
            r4 = 0
            r5 = 1065353216(0x3f800000, float:1.0)
            float r6 = r1.clamp(r2, r4, r5)     // Catch: java.lang.Throwable -> L69
            float r6 = r5 - r6
            float r3 = r3 * r6
            float r6 = r1.mRightVolume     // Catch: java.lang.Throwable -> L69
            float r6 = r6 * r22
            float r2 = -r2
            float r2 = r1.clamp(r2, r4, r5)     // Catch: java.lang.Throwable -> L69
            float r2 = r5 - r2
            float r6 = r6 * r2
            float r2 = r20 * r5
            r7 = 1056964608(0x3f000000, float:0.5)
            r8 = 1073741824(0x40000000, float:2.0)
            float r15 = r1.clamp(r2, r7, r8)     // Catch: java.lang.Throwable -> L69
            android.media.SoundPool r9 = r1.mSoundPool     // Catch: java.lang.Throwable -> L69
            float r11 = r1.clamp(r3, r4, r5)     // Catch: java.lang.Throwable -> L69
            float r12 = r1.clamp(r6, r4, r5)     // Catch: java.lang.Throwable -> L69
            r13 = 1
            if (r19 == 0) goto L3d
            r2 = -1
            r14 = -1
            goto L3f
        L3d:
            r2 = 0
            r14 = 0
        L3f:
            r10 = r18
            int r2 = r9.play(r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> L69
            java.lang.Object r3 = r1.mLockPathStreamIDsMap     // Catch: java.lang.Throwable -> L69
            monitor-enter(r3)     // Catch: java.lang.Throwable -> L69
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r4 = r1.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L66
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L66
            java.util.ArrayList r4 = (java.util.ArrayList) r4     // Catch: java.lang.Throwable -> L66
            if (r4 != 0) goto L5c
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L66
            r4.<init>()     // Catch: java.lang.Throwable -> L66
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r5 = r1.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L66
            r5.put(r0, r4)     // Catch: java.lang.Throwable -> L66
        L5c:
            java.lang.Integer r0 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L66
            r4.add(r0)     // Catch: java.lang.Throwable -> L66
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L66
            monitor-exit(r16)
            return r2
        L66:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L66
            throw r0     // Catch: java.lang.Throwable -> L69
        L69:
            r0 = move-exception
            monitor-exit(r16)
            throw r0
    }

    private void initData() {
            r3 = this;
            java.lang.String r0 = org.cocos2dx.lib.Cocos2dxHelper.getDeviceModel()
            java.lang.String r1 = "GT-I9100"
            boolean r0 = r0.contains(r1)
            r1 = 3
            r2 = 5
            if (r0 == 0) goto L16
            android.media.SoundPool r0 = new android.media.SoundPool
            r0.<init>(r1, r1, r2)
            r3.mSoundPool = r0
            goto L1d
        L16:
            android.media.SoundPool r0 = new android.media.SoundPool
            r0.<init>(r2, r1, r2)
            r3.mSoundPool = r0
        L1d:
            android.media.SoundPool r0 = r3.mSoundPool
            org.cocos2dx.lib.Cocos2dxSound$OnLoadCompletedListener r1 = new org.cocos2dx.lib.Cocos2dxSound$OnLoadCompletedListener
            r1.<init>(r3)
            r0.setOnLoadCompleteListener(r1)
            r0 = 1056964608(0x3f000000, float:0.5)
            r3.mLeftVolume = r0
            r3.mRightVolume = r0
            return
    }

    private void setEffectsVolumeInternal(float r6, float r7) {
            r5 = this;
            java.lang.Object r0 = r5.mLockPathStreamIDsMap
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L43
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L43
            if (r1 != 0) goto L41
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L43
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L43
        L15:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r2 == 0) goto L41
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L43
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L43
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L43
            java.util.ArrayList r2 = (java.util.ArrayList) r2     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L43
        L2b:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r3 == 0) goto L15
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L43
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L43
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> L43
            android.media.SoundPool r4 = r5.mSoundPool     // Catch: java.lang.Throwable -> L43
            r4.setVolume(r3, r6, r7)     // Catch: java.lang.Throwable -> L43
            goto L2b
        L41:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            return
        L43:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            throw r6
    }

    public void end() {
            r2 = this;
            android.media.SoundPool r0 = r2.mSoundPool
            r0.release()
            java.lang.Object r0 = r2.mLockPathStreamIDsMap
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r2.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L22
            r1.clear()     // Catch: java.lang.Throwable -> L22
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r2.mPathSoundIDMap
            r0.clear()
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, org.cocos2dx.lib.Cocos2dxSound$SoundInfoForLoadedCompleted> r0 = r2.mPlayWhenLoadedEffects
            r0.clear()
            r0 = 1056964608(0x3f000000, float:0.5)
            r2.mLeftVolume = r0
            r2.mRightVolume = r0
            r2.initData()
            return
        L22:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            throw r1
    }

    public float getEffectsVolume() {
            r2 = this;
            float r0 = r2.mLeftVolume
            float r1 = r2.mRightVolume
            float r0 = r0 + r1
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
            return r0
    }

    public void onEnterBackground() {
            r1 = this;
            android.media.SoundPool r0 = r1.mSoundPool
            r0.autoPause()
            return
    }

    public void onEnterForeground() {
            r1 = this;
            android.media.SoundPool r0 = r1.mSoundPool
            r0.autoResume()
            return
    }

    public void pauseAllEffects() {
            r5 = this;
            java.lang.Object r0 = r5.mLockPathStreamIDsMap
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L43
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L43
            if (r1 != 0) goto L41
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L43
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L43
        L15:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r2 == 0) goto L41
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L43
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L43
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L43
            java.util.ArrayList r2 = (java.util.ArrayList) r2     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L43
        L2b:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r3 == 0) goto L15
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L43
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L43
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> L43
            android.media.SoundPool r4 = r5.mSoundPool     // Catch: java.lang.Throwable -> L43
            r4.pause(r3)     // Catch: java.lang.Throwable -> L43
            goto L2b
        L41:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            return
        L43:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            throw r1
    }

    public void pauseEffect(int r2) {
            r1 = this;
            android.media.SoundPool r0 = r1.mSoundPool
            r0.pause(r2)
            return
    }

    public int playEffect(java.lang.String r11, boolean r12, float r13, float r14, float r15) {
            r10 = this;
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r10.mPathSoundIDMap
            java.lang.Object r0 = r0.get(r11)
            java.lang.Integer r0 = (java.lang.Integer) r0
            if (r0 == 0) goto L19
            int r3 = r0.intValue()
            r1 = r10
            r2 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            int r11 = r1.doPlayEffect(r2, r3, r4, r5, r6, r7)
            goto L4f
        L19:
            int r0 = r10.preloadEffect(r11)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            int r1 = r0.intValue()
            r2 = -1
            if (r1 != r2) goto L29
            return r2
        L29:
            org.cocos2dx.lib.Cocos2dxSound$SoundInfoForLoadedCompleted r1 = new org.cocos2dx.lib.Cocos2dxSound$SoundInfoForLoadedCompleted
            r3 = r1
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            r8 = r14
            r9 = r15
            r3.<init>(r4, r5, r6, r7, r8, r9)
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, org.cocos2dx.lib.Cocos2dxSound$SoundInfoForLoadedCompleted> r11 = r10.mPlayWhenLoadedEffects
            r11.putIfAbsent(r0, r1)
            monitor-enter(r1)
            r11 = 500(0x1f4, double:2.47E-321)
            r1.wait(r11)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L43
            goto L47
        L41:
            r11 = move-exception
            goto L50
        L43:
            r11 = move-exception
            r11.printStackTrace()     // Catch: java.lang.Throwable -> L41
        L47:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L41
            int r11 = r1.effectID
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, org.cocos2dx.lib.Cocos2dxSound$SoundInfoForLoadedCompleted> r12 = r10.mPlayWhenLoadedEffects
            r12.remove(r0)
        L4f:
            return r11
        L50:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L41
            throw r11
    }

    public int preloadEffect(java.lang.String r4) {
            r3 = this;
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r3.mPathSoundIDMap
            java.lang.Object r0 = r0.get(r4)
            java.lang.Integer r0 = (java.lang.Integer) r0
            if (r0 != 0) goto L1e
            int r0 = r3.createSoundIDFromAsset(r4)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            int r1 = r0.intValue()
            r2 = -1
            if (r1 == r2) goto L1e
            java.util.HashMap<java.lang.String, java.lang.Integer> r1 = r3.mPathSoundIDMap
            r1.put(r4, r0)
        L1e:
            int r4 = r0.intValue()
            return r4
    }

    public void resumeAllEffects() {
            r5 = this;
            java.lang.Object r0 = r5.mLockPathStreamIDsMap
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L43
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L43
            if (r1 != 0) goto L41
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L43
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L43
        L15:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r2 == 0) goto L41
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L43
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L43
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L43
            java.util.ArrayList r2 = (java.util.ArrayList) r2     // Catch: java.lang.Throwable -> L43
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L43
        L2b:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L43
            if (r3 == 0) goto L15
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L43
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L43
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> L43
            android.media.SoundPool r4 = r5.mSoundPool     // Catch: java.lang.Throwable -> L43
            r4.resume(r3)     // Catch: java.lang.Throwable -> L43
            goto L2b
        L41:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            return
        L43:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L43
            throw r1
    }

    public void resumeEffect(int r2) {
            r1 = this;
            android.media.SoundPool r0 = r1.mSoundPool
            r0.resume(r2)
            return
    }

    void setAudioFocus(boolean r3) {
            r2 = this;
            r2.mIsAudioFocus = r3
            boolean r3 = r2.mIsAudioFocus
            r0 = 0
            if (r3 == 0) goto La
            float r3 = r2.mLeftVolume
            goto Lb
        La:
            r3 = 0
        Lb:
            boolean r1 = r2.mIsAudioFocus
            if (r1 == 0) goto L11
            float r0 = r2.mRightVolume
        L11:
            r2.setEffectsVolumeInternal(r3, r0)
            return
    }

    public void setEffectsVolume(float r3) {
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
            boolean r3 = r2.mIsAudioFocus
            if (r3 != 0) goto L17
            return
        L17:
            float r3 = r2.mLeftVolume
            float r0 = r2.mRightVolume
            r2.setEffectsVolumeInternal(r3, r0)
            return
    }

    public void stopAllEffects() {
            r5 = this;
            java.lang.Object r0 = r5.mLockPathStreamIDsMap
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L48
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L48
            if (r1 != 0) goto L41
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L48
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L48
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L48
        L15:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto L41
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L48
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L48
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L48
            java.util.ArrayList r2 = (java.util.ArrayList) r2     // Catch: java.lang.Throwable -> L48
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L48
        L2b:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L48
            if (r3 == 0) goto L15
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L48
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L48
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> L48
            android.media.SoundPool r4 = r5.mSoundPool     // Catch: java.lang.Throwable -> L48
            r4.stop(r3)     // Catch: java.lang.Throwable -> L48
            goto L2b
        L41:
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L48
            r1.clear()     // Catch: java.lang.Throwable -> L48
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L48
            return
        L48:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L48
            throw r1
    }

    public void stopEffect(int r6) {
            r5 = this;
            android.media.SoundPool r0 = r5.mSoundPool
            r0.stop(r6)
            java.lang.Object r0 = r5.mLockPathStreamIDsMap
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L4d
            java.util.Set r1 = r1.keySet()     // Catch: java.lang.Throwable -> L4d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L4d
        L12:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L4d
            if (r2 == 0) goto L4b
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L4d
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r3 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Throwable -> L4d
            java.util.ArrayList r3 = (java.util.ArrayList) r3     // Catch: java.lang.Throwable -> L4d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L4d
            boolean r3 = r3.contains(r4)     // Catch: java.lang.Throwable -> L4d
            if (r3 == 0) goto L12
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L4d
            java.util.ArrayList r1 = (java.util.ArrayList) r1     // Catch: java.lang.Throwable -> L4d
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r3 = r5.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.Throwable -> L4d
            java.util.ArrayList r2 = (java.util.ArrayList) r2     // Catch: java.lang.Throwable -> L4d
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L4d
            int r6 = r2.indexOf(r6)     // Catch: java.lang.Throwable -> L4d
            r1.remove(r6)     // Catch: java.lang.Throwable -> L4d
        L4b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4d
            return
        L4d:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4d
            throw r6
    }

    public void unloadEffect(java.lang.String r5) {
            r4 = this;
            java.lang.Object r0 = r4.mLockPathStreamIDsMap
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r4.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L46
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L46
            java.util.ArrayList r1 = (java.util.ArrayList) r1     // Catch: java.lang.Throwable -> L46
            if (r1 == 0) goto L27
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L46
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L46
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L46
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L46
            android.media.SoundPool r3 = r4.mSoundPool     // Catch: java.lang.Throwable -> L46
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L46
            r3.stop(r2)     // Catch: java.lang.Throwable -> L46
            goto L11
        L27:
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.Integer>> r1 = r4.mPathStreamIDsMap     // Catch: java.lang.Throwable -> L46
            r1.remove(r5)     // Catch: java.lang.Throwable -> L46
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r4.mPathSoundIDMap
            java.lang.Object r0 = r0.get(r5)
            java.lang.Integer r0 = (java.lang.Integer) r0
            if (r0 == 0) goto L45
            android.media.SoundPool r1 = r4.mSoundPool
            int r0 = r0.intValue()
            r1.unload(r0)
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r4.mPathSoundIDMap
            r0.remove(r5)
        L45:
            return
        L46:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
            throw r5
    }
}
