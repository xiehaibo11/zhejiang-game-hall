.class public Lorg/cocos2dx/lib/Cocos2dxSound;
.super Ljava/lang/Object;
.source "Cocos2dxSound.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lorg/cocos2dx/lib/Cocos2dxSound$OnLoadCompletedListener;,
        Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;
    }
.end annotation


# static fields
.field private static final INVALID_SOUND_ID:I = -0x1

.field private static final INVALID_STREAM_ID:I = -0x1

.field private static final LOAD_TIME_OUT:I = 0x1f4

.field private static final MAX_SIMULTANEOUS_STREAMS_DEFAULT:I = 0x5

.field private static final MAX_SIMULTANEOUS_STREAMS_I9100:I = 0x3

.field private static final SOUND_PRIORITY:I = 0x1

.field private static final SOUND_QUALITY:I = 0x5

.field private static final SOUND_RATE:F = 1.0f

.field private static final TAG:Ljava/lang/String; = "Cocos2dxSound"


# instance fields
.field private final mContext:Landroid/content/Context;

.field private mIsAudioFocus:Z

.field private mLeftVolume:F

.field private final mLockPathStreamIDsMap:Ljava/lang/Object;

.field private final mPathSoundIDMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private final mPathStreamIDsMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;>;"
        }
    .end annotation
.end field

.field private mPlayWhenLoadedEffects:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/Integer;",
            "Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;",
            ">;"
        }
    .end annotation
.end field

.field private mRightVolume:F

.field private mSoundPool:Landroid/media/SoundPool;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 84
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 56
    iput-boolean v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mIsAudioFocus:Z

    .line 61
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    .line 63
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLockPathStreamIDsMap:Ljava/lang/Object;

    .line 65
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    .line 68
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPlayWhenLoadedEffects:Ljava/util/concurrent/ConcurrentHashMap;

    .line 85
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mContext:Landroid/content/Context;

    .line 87
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->initData()V

    return-void
.end method

.method static synthetic access$000(Lorg/cocos2dx/lib/Cocos2dxSound;)Ljava/util/concurrent/ConcurrentHashMap;
    .locals 0

    .line 41
    iget-object p0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPlayWhenLoadedEffects:Ljava/util/concurrent/ConcurrentHashMap;

    return-object p0
.end method

.method static synthetic access$100(Lorg/cocos2dx/lib/Cocos2dxSound;Ljava/lang/String;IZFFF)I
    .locals 0

    .line 41
    invoke-direct/range {p0 .. p6}, Lorg/cocos2dx/lib/Cocos2dxSound;->doPlayEffect(Ljava/lang/String;IZFFF)I

    move-result p0

    return p0
.end method

.method private clamp(FFF)F
    .locals 0

    .line 375
    invoke-static {p1, p3}, Ljava/lang/Math;->min(FF)F

    move-result p1

    invoke-static {p2, p1}, Ljava/lang/Math;->max(FF)F

    move-result p1

    return p1
.end method

.method private createSoundIDFromAsset(Ljava/lang/String;)I
    .locals 4

    const/4 v0, -0x1

    :try_start_0
    const-string v1, "/"

    .line 351
    invoke-virtual {p1, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 352
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v1, p1, v2}, Landroid/media/SoundPool;->load(Ljava/lang/String;I)I

    move-result p1

    goto :goto_0

    .line 354
    :cond_0
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getObbFile()Lcom/android/vending/expansion/zipfile/ZipResourceFile;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 355
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getObbFile()Lcom/android/vending/expansion/zipfile/ZipResourceFile;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/android/vending/expansion/zipfile/ZipResourceFile;->getAssetFileDescriptor(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;

    move-result-object p1

    .line 356
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v1, p1, v2}, Landroid/media/SoundPool;->load(Landroid/content/res/AssetFileDescriptor;I)I

    move-result p1

    goto :goto_0

    .line 358
    :cond_1
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mContext:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v3

    invoke-virtual {v3, p1}, Landroid/content/res/AssetManager;->openFd(Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;

    move-result-object p1

    invoke-virtual {v1, p1, v2}, Landroid/media/SoundPool;->load(Landroid/content/res/AssetFileDescriptor;I)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 363
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "error: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Cocos2dxSound"

    invoke-static {v2, v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    const/4 p1, -0x1

    :goto_0
    if-nez p1, :cond_2

    const/4 p1, -0x1

    :cond_2
    return p1
.end method

.method private declared-synchronized doPlayEffect(Ljava/lang/String;IZFFF)I
    .locals 16

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    move/from16 v2, p5

    monitor-enter p0

    .line 382
    :try_start_0
    iget v3, v1, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    mul-float v3, v3, p6

    const/4 v4, 0x0

    const/high16 v5, 0x3f800000    # 1.0f

    invoke-direct {v1, v2, v4, v5}, Lorg/cocos2dx/lib/Cocos2dxSound;->clamp(FFF)F

    move-result v6

    sub-float v6, v5, v6

    mul-float v3, v3, v6

    .line 383
    iget v6, v1, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    mul-float v6, v6, p6

    neg-float v2, v2

    invoke-direct {v1, v2, v4, v5}, Lorg/cocos2dx/lib/Cocos2dxSound;->clamp(FFF)F

    move-result v2

    sub-float v2, v5, v2

    mul-float v6, v6, v2

    mul-float v2, p4, v5

    const/high16 v7, 0x3f000000    # 0.5f

    const/high16 v8, 0x40000000    # 2.0f

    .line 384
    invoke-direct {v1, v2, v7, v8}, Lorg/cocos2dx/lib/Cocos2dxSound;->clamp(FFF)F

    move-result v15

    .line 387
    iget-object v9, v1, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-direct {v1, v3, v4, v5}, Lorg/cocos2dx/lib/Cocos2dxSound;->clamp(FFF)F

    move-result v11

    invoke-direct {v1, v6, v4, v5}, Lorg/cocos2dx/lib/Cocos2dxSound;->clamp(FFF)F

    move-result v12

    const/4 v13, 0x1

    if-eqz p3, :cond_0

    const/4 v2, -0x1

    const/4 v14, -0x1

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    const/4 v14, 0x0

    :goto_0
    move/from16 v10, p2

    invoke-virtual/range {v9 .. v15}, Landroid/media/SoundPool;->play(IFFIIF)I

    move-result v2

    .line 389
    iget-object v3, v1, Lorg/cocos2dx/lib/Cocos2dxSound;->mLockPathStreamIDsMap:Ljava/lang/Object;

    monitor-enter v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 391
    :try_start_1
    iget-object v4, v1, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v4, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/ArrayList;

    if-nez v4, :cond_1

    .line 393
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    .line 394
    iget-object v5, v1, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v5, v0, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 396
    :cond_1
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 397
    monitor-exit v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 399
    monitor-exit p0

    return v2

    :catchall_0
    move-exception v0

    .line 397
    :try_start_2
    monitor-exit v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :try_start_3
    throw v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private initData()V
    .locals 3

    .line 91
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxHelper;->getDeviceModel()Ljava/lang/String;

    move-result-object v0

    const-string v1, "GT-I9100"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x3

    const/4 v2, 0x5

    if-eqz v0, :cond_0

    .line 92
    new-instance v0, Landroid/media/SoundPool;

    invoke-direct {v0, v1, v1, v2}, Landroid/media/SoundPool;-><init>(III)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    goto :goto_0

    .line 95
    :cond_0
    new-instance v0, Landroid/media/SoundPool;

    invoke-direct {v0, v2, v1, v2}, Landroid/media/SoundPool;-><init>(III)V

    iput-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    .line 98
    :goto_0
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxSound$OnLoadCompletedListener;

    invoke-direct {v1, p0}, Lorg/cocos2dx/lib/Cocos2dxSound$OnLoadCompletedListener;-><init>(Lorg/cocos2dx/lib/Cocos2dxSound;)V

    invoke-virtual {v0, v1}, Landroid/media/SoundPool;->setOnLoadCompleteListener(Landroid/media/SoundPool$OnLoadCompleteListener;)V

    const/high16 v0, 0x3f000000    # 0.5f

    .line 100
    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    .line 101
    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    return-void
.end method

.method private setEffectsVolumeInternal(FF)V
    .locals 5

    .line 319
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLockPathStreamIDsMap:Ljava/lang/Object;

    monitor-enter v0

    .line 321
    :try_start_0
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 322
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 323
    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 324
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 325
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    .line 326
    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v4, v3, p1, p2}, Landroid/media/SoundPool;->setVolume(IFF)V

    goto :goto_0

    .line 330
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method


# virtual methods
.method public end()V
    .locals 2

    .line 334
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0}, Landroid/media/SoundPool;->release()V

    .line 335
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLockPathStreamIDsMap:Ljava/lang/Object;

    monitor-enter v0

    .line 336
    :try_start_0
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->clear()V

    .line 337
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 338
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 339
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPlayWhenLoadedEffects:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->clear()V

    const/high16 v0, 0x3f000000    # 0.5f

    .line 341
    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    .line 342
    iput v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    .line 344
    invoke-direct {p0}, Lorg/cocos2dx/lib/Cocos2dxSound;->initData()V

    return-void

    :catchall_0
    move-exception v1

    .line 337
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method public getEffectsVolume()F
    .locals 2

    .line 289
    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    iget v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    add-float/2addr v0, v1

    const/high16 v1, 0x40000000    # 2.0f

    div-float/2addr v0, v1

    return v0
.end method

.method public onEnterBackground()V
    .locals 1

    .line 403
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0}, Landroid/media/SoundPool;->autoPause()V

    return-void
.end method

.method public onEnterForeground()V
    .locals 1

    .line 407
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0}, Landroid/media/SoundPool;->autoResume()V

    return-void
.end method

.method public pauseAllEffects()V
    .locals 5

    .line 231
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLockPathStreamIDsMap:Ljava/lang/Object;

    monitor-enter v0

    .line 232
    :try_start_0
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 233
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 234
    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 235
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 236
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    .line 237
    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v4, v3}, Landroid/media/SoundPool;->pause(I)V

    goto :goto_0

    .line 241
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public pauseEffect(I)V
    .locals 1

    .line 216
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0, p1}, Landroid/media/SoundPool;->pause(I)V

    return-void
.end method

.method public playEffect(Ljava/lang/String;ZFFF)I
    .locals 10

    .line 159
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    if-eqz v0, :cond_0

    .line 166
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v3

    move-object v1, p0

    move-object v2, p1

    move v4, p2

    move v5, p3

    move v6, p4

    move v7, p5

    invoke-direct/range {v1 .. v7}, Lorg/cocos2dx/lib/Cocos2dxSound;->doPlayEffect(Ljava/lang/String;IZFFF)I

    move-result p1

    goto :goto_1

    .line 169
    :cond_0
    invoke-virtual {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxSound;->preloadEffect(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    .line 170
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const/4 v2, -0x1

    if-ne v1, v2, :cond_1

    return v2

    .line 175
    :cond_1
    new-instance v1, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;

    move-object v3, v1

    move-object v4, p0

    move-object v5, p1

    move v6, p2

    move v7, p3

    move v8, p4

    move v9, p5

    invoke-direct/range {v3 .. v9}, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;-><init>(Lorg/cocos2dx/lib/Cocos2dxSound;Ljava/lang/String;ZFFF)V

    .line 176
    iget-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPlayWhenLoadedEffects:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->putIfAbsent(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 178
    monitor-enter v1

    const-wide/16 p1, 0x1f4

    .line 180
    :try_start_0
    invoke-virtual {v1, p1, p2}, Ljava/lang/Object;->wait(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    goto :goto_2

    :catch_0
    move-exception p1

    .line 182
    :try_start_1
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 184
    :goto_0
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 186
    iget p1, v1, Lorg/cocos2dx/lib/Cocos2dxSound$SoundInfoForLoadedCompleted;->effectID:I

    .line 187
    iget-object p2, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPlayWhenLoadedEffects:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :goto_1
    return p1

    .line 184
    :goto_2
    :try_start_2
    monitor-exit v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p1
.end method

.method public preloadEffect(Ljava/lang/String;)I
    .locals 3

    .line 109
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    if-nez v0, :cond_0

    .line 112
    invoke-direct {p0, p1}, Lorg/cocos2dx/lib/Cocos2dxSound;->createSoundIDFromAsset(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    .line 114
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_0

    .line 115
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-virtual {v1, p1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 119
    :cond_0
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result p1

    return p1
.end method

.method public resumeAllEffects()V
    .locals 5

    .line 248
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLockPathStreamIDsMap:Ljava/lang/Object;

    monitor-enter v0

    .line 251
    :try_start_0
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 252
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 253
    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 254
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 255
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    .line 256
    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v4, v3}, Landroid/media/SoundPool;->resume(I)V

    goto :goto_0

    .line 260
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public resumeEffect(I)V
    .locals 1

    .line 224
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0, p1}, Landroid/media/SoundPool;->resume(I)V

    return-void
.end method

.method setAudioFocus(Z)V
    .locals 2

    .line 415
    iput-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mIsAudioFocus:Z

    .line 416
    iget-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mIsAudioFocus:Z

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    iget p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 417
    :goto_0
    iget-boolean v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mIsAudioFocus:Z

    if-eqz v1, :cond_1

    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    .line 419
    :cond_1
    invoke-direct {p0, p1, v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->setEffectsVolumeInternal(FF)V

    return-void
.end method

.method public setEffectsVolume(F)V
    .locals 2

    const/4 v0, 0x0

    cmpg-float v1, p1, v0

    if-gez v1, :cond_0

    const/4 p1, 0x0

    :cond_0
    const/high16 v0, 0x3f800000    # 1.0f

    cmpl-float v1, p1, v0

    if-lez v1, :cond_1

    const/high16 p1, 0x3f800000    # 1.0f

    .line 305
    :cond_1
    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    iput p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    .line 307
    iget-boolean p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mIsAudioFocus:Z

    if-nez p1, :cond_2

    return-void

    .line 310
    :cond_2
    iget p1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLeftVolume:F

    iget v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mRightVolume:F

    invoke-direct {p0, p1, v0}, Lorg/cocos2dx/lib/Cocos2dxSound;->setEffectsVolumeInternal(FF)V

    return-void
.end method

.method public stopAllEffects()V
    .locals 5

    .line 267
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLockPathStreamIDsMap:Ljava/lang/Object;

    monitor-enter v0

    .line 269
    :try_start_0
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 270
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 271
    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 272
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 273
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    .line 274
    iget-object v4, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v4, v3}, Landroid/media/SoundPool;->stop(I)V

    goto :goto_0

    .line 280
    :cond_1
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->clear()V

    .line 281
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public stopEffect(I)V
    .locals 5

    .line 198
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0, p1}, Landroid/media/SoundPool;->stop(I)V

    .line 200
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLockPathStreamIDsMap:Ljava/lang/Object;

    monitor-enter v0

    .line 202
    :try_start_0
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 203
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/ArrayList;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 204
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/ArrayList;

    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/ArrayList;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/util/ArrayList;->indexOf(Ljava/lang/Object;)I

    move-result p1

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    .line 208
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public unloadEffect(Ljava/lang/String;)V
    .locals 4

    .line 128
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mLockPathStreamIDsMap:Ljava/lang/Object;

    monitor-enter v0

    .line 130
    :try_start_0
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/ArrayList;

    if-eqz v1, :cond_0

    .line 132
    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    .line 133
    iget-object v3, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    invoke-virtual {v3, v2}, Landroid/media/SoundPool;->stop(I)V

    goto :goto_0

    .line 136
    :cond_0
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathStreamIDsMap:Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 137
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 140
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    if-eqz v0, :cond_1

    .line 142
    iget-object v1, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mSoundPool:Landroid/media/SoundPool;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/media/SoundPool;->unload(I)Z

    .line 143
    iget-object v0, p0, Lorg/cocos2dx/lib/Cocos2dxSound;->mPathSoundIDMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    return-void

    :catchall_0
    move-exception p1

    .line 137
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method
