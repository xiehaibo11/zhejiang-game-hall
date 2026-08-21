.class final Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;
.super Ljava/lang/Object;
.source "ExoPlayerImplInternal.java"

# interfaces
.implements Landroid/os/Handler$Callback;
.implements Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock$PlaybackParameterListener;
.implements Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage$Sender;
.implements Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod$Callback;
.implements Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$SourceInfoRefreshListener;
.implements Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelector$InvalidationListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;,
        Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$MediaSourceRefreshInfo;,
        Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;,
        Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;
    }
.end annotation


# static fields
.field private static final DEFAULT_RELEASE_TIMEOUT_MS:J = 0x1f4L

.field private static final IDLE_INTERVAL_MS:I = 0x3e8

.field private static final MSG_DO_SOME_WORK:I = 0x2

.field public static final MSG_ERROR:I = 0x2

.field private static final MSG_PERIOD_PREPARED:I = 0x9

.field public static final MSG_PLAYBACK_INFO_CHANGED:I = 0x0

.field public static final MSG_PLAYBACK_PARAMETERS_CHANGED:I = 0x1

.field private static final MSG_PREPARE:I = 0x0

.field private static final MSG_REFRESH_SOURCE_INFO:I = 0x8

.field private static final MSG_RELEASE:I = 0x7

.field private static final MSG_SEEK_TO:I = 0x3

.field private static final MSG_SEND_MESSAGE:I = 0xe

.field private static final MSG_SEND_MESSAGE_TO_TARGET_THREAD:I = 0xf

.field private static final MSG_SET_PLAYBACK_PARAMETERS:I = 0x4

.field private static final MSG_SET_PLAY_WHEN_READY:I = 0x1

.field private static final MSG_SET_REPEAT_MODE:I = 0xc

.field private static final MSG_SET_SEEK_PARAMETERS:I = 0x5

.field private static final MSG_SET_SHUFFLE_ENABLED:I = 0xd

.field private static final MSG_SOURCE_CONTINUE_LOADING_REQUESTED:I = 0xa

.field private static final MSG_STOP:I = 0x6

.field private static final MSG_TRACK_SELECTION_INVALIDATED:I = 0xb

.field private static final PREPARING_SOURCE_INTERVAL_MS:I = 0xa

.field private static final RENDERING_INTERVAL_MS:I = 0xa

.field private static final TAG:Ljava/lang/String; = "ExoPlayerImplInternal"


# instance fields
.field private final backBufferDurationUs:J

.field private final clock:Lcom/mbridge/msdk/playercommon/exoplayer2/util/Clock;

.field private final emptyTrackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

.field private enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

.field private final eventHandler:Landroid/os/Handler;

.field private final handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

.field private final internalPlaybackThread:Landroid/os/HandlerThread;

.field private final loadControl:Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;

.field private final mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

.field private mediaSource:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

.field private nextPendingMessageIndex:I

.field private pendingInitialSeekPosition:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;

.field private final pendingMessages:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;",
            ">;"
        }
    .end annotation
.end field

.field private pendingPrepareCount:I

.field private final period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

.field private playWhenReady:Z

.field private playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

.field private final playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

.field private final player:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayer;

.field private final queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

.field private rebuffering:Z

.field private released:Z

.field private final rendererCapabilities:[Lcom/mbridge/msdk/playercommon/exoplayer2/RendererCapabilities;

.field private rendererPositionUs:J

.field private final renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

.field private repeatMode:I

.field private final retainBackBufferFromKeyframe:Z

.field private seekParameters:Lcom/mbridge/msdk/playercommon/exoplayer2/SeekParameters;

.field private shuffleModeEnabled:Z

.field private final trackSelector:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelector;

.field private final window:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;


# direct methods
.method public constructor <init>([Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelector;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;ZIZLandroid/os/Handler;Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayer;Lcom/mbridge/msdk/playercommon/exoplayer2/util/Clock;)V
    .locals 10

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object/from16 v3, p10

    .line 134
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 135
    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    .line 136
    iput-object v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->trackSelector:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelector;

    move-object v4, p3

    .line 137
    iput-object v4, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->emptyTrackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    move-object v5, p4

    .line 138
    iput-object v5, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->loadControl:Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;

    move v6, p5

    .line 139
    iput-boolean v6, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playWhenReady:Z

    move/from16 v6, p6

    .line 140
    iput v6, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->repeatMode:I

    move/from16 v6, p7

    .line 141
    iput-boolean v6, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->shuffleModeEnabled:Z

    move-object/from16 v6, p8

    .line 142
    iput-object v6, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->eventHandler:Landroid/os/Handler;

    move-object/from16 v6, p9

    .line 143
    iput-object v6, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->player:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayer;

    .line 144
    iput-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->clock:Lcom/mbridge/msdk/playercommon/exoplayer2/util/Clock;

    .line 145
    new-instance v6, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-direct {v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;-><init>()V

    iput-object v6, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    .line 147
    invoke-interface {p4}, Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;->getBackBufferDurationUs()J

    move-result-wide v6

    iput-wide v6, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->backBufferDurationUs:J

    .line 148
    invoke-interface {p4}, Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;->retainBackBufferFromKeyframe()Z

    move-result v5

    iput-boolean v5, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->retainBackBufferFromKeyframe:Z

    .line 150
    sget-object v5, Lcom/mbridge/msdk/playercommon/exoplayer2/SeekParameters;->DEFAULT:Lcom/mbridge/msdk/playercommon/exoplayer2/SeekParameters;

    iput-object v5, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekParameters:Lcom/mbridge/msdk/playercommon/exoplayer2/SeekParameters;

    .line 151
    new-instance v5, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    sget-object v6, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->EMPTY:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    sget-object v7, Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;->EMPTY:Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;

    const-wide v8, -0x7fffffffffffffffL    # -4.9E-324

    move-object p4, v5

    move-object p5, v6

    move-wide/from16 p6, v8

    move-object/from16 p8, v7

    move-object/from16 p9, p3

    invoke-direct/range {p4 .. p9}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;-><init>(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;JLcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;)V

    iput-object v5, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 157
    new-instance v4, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    const/4 v5, 0x0

    invoke-direct {v4, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;-><init>(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$1;)V

    iput-object v4, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    .line 158
    array-length v4, v1

    new-array v4, v4, [Lcom/mbridge/msdk/playercommon/exoplayer2/RendererCapabilities;

    iput-object v4, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererCapabilities:[Lcom/mbridge/msdk/playercommon/exoplayer2/RendererCapabilities;

    const/4 v4, 0x0

    move v5, v4

    .line 159
    :goto_0
    array-length v6, v1

    if-ge v5, v6, :cond_0

    .line 160
    aget-object v6, v1, v5

    invoke-interface {v6, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->setIndex(I)V

    .line 161
    iget-object v6, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererCapabilities:[Lcom/mbridge/msdk/playercommon/exoplayer2/RendererCapabilities;

    aget-object v7, v1, v5

    invoke-interface {v7}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->getCapabilities()Lcom/mbridge/msdk/playercommon/exoplayer2/RendererCapabilities;

    move-result-object v7

    aput-object v7, v6, v5

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 163
    :cond_0
    new-instance v1, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    invoke-direct {v1, p0, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;-><init>(Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock$PlaybackParameterListener;Lcom/mbridge/msdk/playercommon/exoplayer2/util/Clock;)V

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    .line 164
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    new-array v1, v4, [Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    .line 165
    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    .line 166
    new-instance v1, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;

    invoke-direct {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;-><init>()V

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->window:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;

    .line 167
    new-instance v1, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    invoke-direct {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;-><init>()V

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    .line 168
    invoke-virtual {p2, p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelector;->init(Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelector$InvalidationListener;)V

    .line 172
    new-instance v1, Landroid/os/HandlerThread;

    const/16 v2, -0x10

    const-string v4, "ExoPlayerImplInternal:Handler"

    invoke-direct {v1, v4, v2}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;I)V

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->internalPlaybackThread:Landroid/os/HandlerThread;

    .line 174
    invoke-virtual {v1}, Landroid/os/HandlerThread;->start()V

    .line 175
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->internalPlaybackThread:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-interface {v3, v1, p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/Clock;->createHandler(Landroid/os/Looper;Landroid/os/Handler$Callback;)Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    move-result-object v1

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    return-void
.end method

.method static synthetic access$400(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 49
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->deliverMessage(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V

    return-void
.end method

.method private deliverMessage(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 868
    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->isCanceled()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 872
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->getTarget()Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage$Target;

    move-result-object v1

    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->getType()I

    move-result v2

    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->getPayload()Ljava/lang/Object;

    move-result-object v3

    invoke-interface {v1, v2, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage$Target;->handleMessage(ILjava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 874
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->markAsProcessed(Z)V

    return-void

    :catchall_0
    move-exception v1

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->markAsProcessed(Z)V

    .line 875
    throw v1
.end method

.method private disableRenderer(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 981
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->onRendererDisabled(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)V

    .line 982
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->ensureStopped(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)V

    .line 983
    invoke-interface {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->disable()V

    return-void
.end method

.method private doSomeWork()V
    .locals 17
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;,
            Ljava/io/IOException;
        }
    .end annotation

    move-object/from16 v0, p0

    .line 500
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->clock:Lcom/mbridge/msdk/playercommon/exoplayer2/util/Clock;

    invoke-interface {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/Clock;->uptimeMillis()J

    move-result-wide v1

    .line 501
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updatePeriods()V

    .line 502
    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->hasPlayingPeriod()Z

    move-result v3

    const-wide/16 v4, 0xa

    if-nez v3, :cond_0

    .line 504
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeThrowPeriodPrepareError()V

    .line 505
    invoke-direct {v0, v1, v2, v4, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->scheduleNextWork(JJ)V

    return-void

    .line 508
    :cond_0
    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v3

    const-string v6, "doSomeWork"

    .line 510
    invoke-static {v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/TraceUtil;->beginSection(Ljava/lang/String;)V

    .line 512
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updatePlaybackPositions()V

    .line 513
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v6

    const-wide/16 v8, 0x3e8

    mul-long/2addr v6, v8

    .line 515
    iget-object v10, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->mediaPeriod:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;

    iget-object v11, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v11, v11, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    iget-wide v13, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->backBufferDurationUs:J

    sub-long/2addr v11, v13

    iget-boolean v13, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->retainBackBufferFromKeyframe:Z

    invoke-interface {v10, v11, v12, v13}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;->discardBuffer(JZ)V

    .line 520
    iget-object v10, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v11, v10

    const/4 v13, 0x1

    move v15, v13

    move/from16 v16, v15

    const/4 v14, 0x0

    :goto_0
    if-ge v14, v11, :cond_6

    aget-object v12, v10, v14

    .line 524
    iget-wide v8, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    invoke-interface {v12, v8, v9, v6, v7}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->render(JJ)V

    if-eqz v16, :cond_1

    .line 525
    invoke-interface {v12}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->isEnded()Z

    move-result v8

    if-eqz v8, :cond_1

    move/from16 v16, v13

    goto :goto_1

    :cond_1
    const/16 v16, 0x0

    .line 530
    :goto_1
    invoke-interface {v12}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->isReady()Z

    move-result v8

    if-nez v8, :cond_3

    invoke-interface {v12}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->isEnded()Z

    move-result v8

    if-nez v8, :cond_3

    .line 531
    invoke-direct {v0, v12}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererWaitingForNextStream(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)Z

    move-result v8

    if-eqz v8, :cond_2

    goto :goto_2

    :cond_2
    const/4 v8, 0x0

    goto :goto_3

    :cond_3
    :goto_2
    move v8, v13

    :goto_3
    if-nez v8, :cond_4

    .line 533
    invoke-interface {v12}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->maybeThrowStreamError()V

    :cond_4
    if-eqz v15, :cond_5

    if-eqz v8, :cond_5

    move v15, v13

    goto :goto_4

    :cond_5
    const/4 v15, 0x0

    :goto_4
    add-int/lit8 v14, v14, 0x1

    const-wide/16 v8, 0x3e8

    goto :goto_0

    :cond_6
    if-nez v15, :cond_7

    .line 538
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeThrowPeriodPrepareError()V

    .line 541
    :cond_7
    iget-object v6, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-wide v6, v6, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->durationUs:J

    const/4 v8, 0x4

    const/4 v9, 0x3

    const/4 v10, 0x2

    if-eqz v16, :cond_9

    const-wide v11, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v11, v6, v11

    if-eqz v11, :cond_8

    .line 542
    iget-object v11, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v11, v11, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    cmp-long v6, v6, v11

    if-gtz v6, :cond_9

    :cond_8
    iget-object v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-boolean v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->isFinal:Z

    if-eqz v3, :cond_9

    .line 546
    invoke-direct {v0, v8}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setState(I)V

    .line 547
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->stopRenderers()V

    goto :goto_5

    .line 548
    :cond_9
    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    if-ne v3, v10, :cond_a

    .line 549
    invoke-direct {v0, v15}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->shouldTransitionToReadyState(Z)Z

    move-result v3

    if-eqz v3, :cond_a

    .line 550
    invoke-direct {v0, v9}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setState(I)V

    .line 551
    iget-boolean v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playWhenReady:Z

    if-eqz v3, :cond_d

    .line 552
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->startRenderers()V

    goto :goto_5

    .line 554
    :cond_a
    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    if-ne v3, v9, :cond_d

    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v3, v3

    if-nez v3, :cond_b

    .line 555
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->isTimelineReady()Z

    move-result v3

    if-eqz v3, :cond_c

    goto :goto_5

    :cond_b
    if-nez v15, :cond_d

    .line 556
    :cond_c
    iget-boolean v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playWhenReady:Z

    iput-boolean v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rebuffering:Z

    .line 557
    invoke-direct {v0, v10}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setState(I)V

    .line 558
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->stopRenderers()V

    .line 561
    :cond_d
    :goto_5
    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    if-ne v3, v10, :cond_e

    .line 562
    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v6, v3

    const/4 v12, 0x0

    :goto_6
    if-ge v12, v6, :cond_e

    aget-object v7, v3, v12

    .line 563
    invoke-interface {v7}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->maybeThrowStreamError()V

    add-int/lit8 v12, v12, 0x1

    goto :goto_6

    .line 567
    :cond_e
    iget-boolean v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playWhenReady:Z

    if-eqz v3, :cond_f

    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    if-eq v3, v9, :cond_10

    :cond_f
    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    if-ne v3, v10, :cond_11

    .line 569
    :cond_10
    invoke-direct {v0, v1, v2, v4, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->scheduleNextWork(JJ)V

    goto :goto_7

    .line 570
    :cond_11
    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v3, v3

    if-eqz v3, :cond_12

    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    if-eq v3, v8, :cond_12

    const-wide/16 v3, 0x3e8

    .line 571
    invoke-direct {v0, v1, v2, v3, v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->scheduleNextWork(JJ)V

    goto :goto_7

    .line 573
    :cond_12
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    invoke-interface {v1, v10}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->removeMessages(I)V

    .line 576
    :goto_7
    invoke-static {}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/TraceUtil;->endSection()V

    return-void
.end method

.method private enableRenderer(IZI)V
    .locals 11
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 1603
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    .line 1604
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    aget-object v1, v1, p1

    .line 1605
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    aput-object v1, v2, p3

    .line 1606
    invoke-interface {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->getState()I

    move-result p3

    if-nez p3, :cond_2

    .line 1607
    iget-object p3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    iget-object p3, p3, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->rendererConfigurations:[Lcom/mbridge/msdk/playercommon/exoplayer2/RendererConfiguration;

    aget-object v3, p3, p1

    .line 1609
    iget-object p3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    iget-object p3, p3, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->selections:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectionArray;

    invoke-virtual {p3, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectionArray;->get(I)Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelection;

    move-result-object p3

    .line 1611
    invoke-static {p3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->getFormats(Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelection;)[Lcom/mbridge/msdk/playercommon/exoplayer2/Format;

    move-result-object v4

    .line 1613
    iget-boolean p3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playWhenReady:Z

    const/4 v2, 0x1

    const/4 v5, 0x0

    if-eqz p3, :cond_0

    iget-object p3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget p3, p3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    const/4 v6, 0x3

    if-ne p3, v6, :cond_0

    move p3, v2

    goto :goto_0

    :cond_0
    move p3, v5

    :goto_0
    if-nez p2, :cond_1

    if-eqz p3, :cond_1

    move v8, v2

    goto :goto_1

    :cond_1
    move v8, v5

    .line 1617
    :goto_1
    iget-object p2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->sampleStreams:[Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;

    aget-object v5, p2, p1

    iget-wide v6, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    .line 1619
    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->getRendererOffset()J

    move-result-wide v9

    move-object v2, v1

    .line 1617
    invoke-interface/range {v2 .. v10}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->enable(Lcom/mbridge/msdk/playercommon/exoplayer2/RendererConfiguration;[Lcom/mbridge/msdk/playercommon/exoplayer2/Format;Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;JZJ)V

    .line 1620
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->onRendererEnabled(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)V

    if-eqz p3, :cond_2

    .line 1623
    invoke-interface {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->start()V

    :cond_2
    return-void
.end method

.method private enableRenderers([ZI)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 1590
    new-array p2, p2, [Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    iput-object p2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    .line 1592
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {p2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object p2

    const/4 v0, 0x0

    move v1, v0

    .line 1593
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v2, v2

    if-ge v0, v2, :cond_1

    .line 1594
    iget-object v2, p2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    invoke-virtual {v2, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->isRendererEnabled(I)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 1595
    aget-boolean v2, p1, v0

    add-int/lit8 v3, v1, 0x1

    invoke-direct {p0, v0, v2, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enableRenderer(IZI)V

    move v1, v3

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private ensureStopped(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 975
    invoke-interface {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->getState()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 976
    invoke-interface {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->stop()V

    :cond_0
    return-void
.end method

.method private getFirstPeriodIndex()I
    .locals 3

    .line 764
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->timeline:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    .line 765
    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->shuffleModeEnabled:Z

    .line 767
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getFirstWindowIndex(Z)I

    move-result v1

    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->window:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getWindow(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;)Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;

    move-result-object v0

    iget v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;->firstPeriodIndex:I

    :goto_0
    return v0
.end method

.method private static getFormats(Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelection;)[Lcom/mbridge/msdk/playercommon/exoplayer2/Format;
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    .line 1637
    invoke-interface {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelection;->length()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v0

    .line 1638
    :goto_0
    new-array v2, v1, [Lcom/mbridge/msdk/playercommon/exoplayer2/Format;

    :goto_1
    if-ge v0, v1, :cond_1

    .line 1640
    invoke-interface {p0, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelection;->getFormat(I)Lcom/mbridge/msdk/playercommon/exoplayer2/Format;

    move-result-object v3

    aput-object v3, v2, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    :cond_1
    return-object v2
.end method

.method private getPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;IJ)Landroid/util/Pair;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;",
            "IJ)",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation

    .line 1363
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->window:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;

    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    move-object v0, p1

    move v3, p2

    move-wide v4, p3

    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;IJ)Landroid/util/Pair;

    move-result-object p1

    return-object p1
.end method

.method private handleContinueLoadingRequested(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;)V
    .locals 2

    .line 1531
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->isLoading(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    .line 1535
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    iget-wide v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->reevaluateBuffer(J)V

    .line 1536
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeContinueLoading()V

    return-void
.end method

.method private handlePeriodPrepared(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 1513
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->isLoading(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    .line 1517
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getLoadingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object p1

    .line 1518
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->getPlaybackParameters()Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;

    move-result-object v0

    iget v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;->speed:F

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->handlePrepared(F)V

    .line 1519
    iget-object v0, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackGroups:Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;

    iget-object p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    invoke-direct {p0, v0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updateLoadControlTrackSelection(Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;)V

    .line 1521
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->hasPlayingPeriod()Z

    move-result p1

    if-nez p1, :cond_1

    .line 1523
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->advancePlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object p1

    .line 1524
    iget-object p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-wide v0, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->startPositionUs:J

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resetRendererPosition(J)V

    const/4 p1, 0x0

    .line 1525
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updatePlayingPeriodRenderers(Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;)V

    .line 1527
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeContinueLoading()V

    return-void
.end method

.method private handleSourceInfoRefreshEndedPlayback()V
    .locals 2

    const/4 v0, 0x4

    .line 1266
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setState(I)V

    const/4 v0, 0x0

    const/4 v1, 0x1

    .line 1268
    invoke-direct {p0, v0, v1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resetInternal(ZZZ)V

    return-void
.end method

.method private handleSourceInfoRefreshed(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$MediaSourceRefreshInfo;)V
    .locals 19
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 1140
    iget-object v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$MediaSourceRefreshInfo;->source:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaSource:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

    if-eq v2, v3, :cond_0

    return-void

    .line 1145
    :cond_0
    iget-object v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v2, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->timeline:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    .line 1146
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$MediaSourceRefreshInfo;->timeline:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    .line 1147
    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$MediaSourceRefreshInfo;->manifest:Ljava/lang/Object;

    .line 1148
    iget-object v4, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v4, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->setTimeline(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;)V

    .line 1149
    iget-object v4, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    invoke-virtual {v4, v3, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->copyWithTimeline(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;Ljava/lang/Object;)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v1

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 1150
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resolvePendingMessagePositions()V

    .line 1152
    iget v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingPrepareCount:I

    const/4 v4, 0x0

    const/4 v5, 0x1

    const-wide v6, -0x7fffffffffffffffL    # -4.9E-324

    const-wide/16 v8, 0x0

    if-lez v1, :cond_7

    .line 1153
    iget-object v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->incrementPendingOperationAcks(I)V

    .line 1154
    iput v4, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingPrepareCount:I

    .line 1155
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingInitialSeekPosition:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;

    if-eqz v1, :cond_3

    .line 1157
    invoke-direct {v0, v1, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resolveSeekPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;Z)Landroid/util/Pair;

    move-result-object v1

    const/4 v2, 0x0

    .line 1158
    iput-object v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingInitialSeekPosition:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;

    if-nez v1, :cond_1

    .line 1162
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handleSourceInfoRefreshEndedPlayback()V

    goto/16 :goto_2

    .line 1164
    :cond_1
    iget-object v2, v1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 1165
    iget-object v1, v1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v14

    .line 1166
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v1, v2, v14, v15}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->resolveMediaPeriodIdForAds(IJ)Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    move-result-object v11

    .line 1167
    iget-object v10, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 1169
    invoke-virtual {v11}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->isAd()Z

    move-result v1

    if-eqz v1, :cond_2

    move-wide v12, v8

    goto :goto_0

    :cond_2
    move-wide v12, v14

    .line 1168
    :goto_0
    invoke-virtual/range {v10 .. v15}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v1

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    goto :goto_2

    .line 1171
    :cond_3
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->startPositionUs:J

    cmp-long v1, v1, v6

    if-nez v1, :cond_6

    .line 1172
    invoke-virtual {v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 1173
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handleSourceInfoRefreshEndedPlayback()V

    goto :goto_2

    .line 1175
    :cond_4
    iget-boolean v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->shuffleModeEnabled:Z

    .line 1176
    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getFirstWindowIndex(Z)I

    move-result v1

    .line 1175
    invoke-direct {v0, v3, v1, v6, v7}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->getPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;IJ)Landroid/util/Pair;

    move-result-object v1

    .line 1177
    iget-object v2, v1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 1178
    iget-object v1, v1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v14

    .line 1179
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v1, v2, v14, v15}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->resolveMediaPeriodIdForAds(IJ)Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    move-result-object v11

    .line 1180
    iget-object v10, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 1183
    invoke-virtual {v11}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->isAd()Z

    move-result v1

    if-eqz v1, :cond_5

    move-wide v12, v8

    goto :goto_1

    :cond_5
    move-wide v12, v14

    .line 1181
    :goto_1
    invoke-virtual/range {v10 .. v15}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v1

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    :cond_6
    :goto_2
    return-void

    .line 1190
    :cond_7
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->periodId:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    iget v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->periodIndex:I

    .line 1191
    iget-object v10, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v13, v10, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->contentPositionUs:J

    .line 1192
    invoke-virtual {v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->isEmpty()Z

    move-result v10

    if-eqz v10, :cond_a

    .line 1194
    invoke-virtual {v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_9

    .line 1195
    iget-object v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    .line 1196
    invoke-virtual {v2, v1, v13, v14}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->resolveMediaPeriodIdForAds(IJ)Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    move-result-object v12

    .line 1197
    iget-object v11, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 1199
    invoke-virtual {v12}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->isAd()Z

    move-result v1

    if-eqz v1, :cond_8

    goto :goto_3

    :cond_8
    move-wide v8, v13

    :goto_3
    move-wide v1, v13

    move-wide v13, v8

    move-wide v15, v1

    .line 1198
    invoke-virtual/range {v11 .. v16}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v1

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    :cond_9
    return-void

    .line 1203
    :cond_a
    iget-object v10, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v10}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getFrontPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v10

    if-nez v10, :cond_b

    .line 1204
    iget-object v11, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    .line 1205
    invoke-virtual {v2, v1, v11, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;Z)Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    move-result-object v11

    iget-object v11, v11, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;->uid:Ljava/lang/Object;

    goto :goto_4

    :cond_b
    iget-object v11, v10, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->uid:Ljava/lang/Object;

    .line 1206
    :goto_4
    invoke-virtual {v3, v11}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getIndexOfPeriod(Ljava/lang/Object;)I

    move-result v11

    const/4 v12, -0x1

    if-ne v11, v12, :cond_10

    .line 1210
    invoke-direct {v0, v1, v2, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resolveSubsequentPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline;Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;)I

    move-result v1

    if-ne v1, v12, :cond_c

    .line 1213
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handleSourceInfoRefreshEndedPlayback()V

    return-void

    .line 1217
    :cond_c
    iget-object v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    .line 1218
    invoke-virtual {v3, v1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;)Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    move-result-object v1

    iget v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;->windowIndex:I

    .line 1217
    invoke-direct {v0, v3, v1, v6, v7}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->getPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;IJ)Landroid/util/Pair;

    move-result-object v1

    .line 1219
    iget-object v2, v1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 1220
    iget-object v1, v1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v1, Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    .line 1221
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v1, v2, v6, v7}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->resolveMediaPeriodIdForAds(IJ)Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    move-result-object v14

    .line 1222
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    invoke-virtual {v3, v2, v1, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;Z)Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    if-eqz v10, :cond_e

    .line 1226
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;->uid:Ljava/lang/Object;

    .line 1227
    iget-object v3, v10, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    invoke-virtual {v3, v12}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->copyWithPeriodIndex(I)Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    move-result-object v3

    iput-object v3, v10, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    .line 1228
    :goto_5
    iget-object v3, v10, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    if-eqz v3, :cond_e

    .line 1229
    iget-object v10, v10, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    .line 1230
    iget-object v3, v10, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->uid:Ljava/lang/Object;

    invoke-virtual {v3, v1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_d

    .line 1231
    iget-object v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    iget-object v4, v10, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    invoke-virtual {v3, v4, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getUpdatedMediaPeriodInfo(Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;I)Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    move-result-object v3

    iput-object v3, v10, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    goto :goto_5

    .line 1233
    :cond_d
    iget-object v3, v10, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    invoke-virtual {v3, v12}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->copyWithPeriodIndex(I)Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    move-result-object v3

    iput-object v3, v10, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    goto :goto_5

    .line 1238
    :cond_e
    invoke-virtual {v14}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->isAd()Z

    move-result v1

    if-eqz v1, :cond_f

    goto :goto_6

    :cond_f
    move-wide v8, v6

    :goto_6
    invoke-direct {v0, v14, v8, v9}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekToPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;J)J

    move-result-wide v15

    .line 1239
    iget-object v13, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-wide/from16 v17, v6

    invoke-virtual/range {v13 .. v18}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v1

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    return-void

    :cond_10
    if-eq v11, v1, :cond_11

    .line 1245
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    invoke-virtual {v1, v11}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->copyWithPeriodIndex(I)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v1

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 1248
    :cond_11
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->periodId:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    .line 1249
    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->isAd()Z

    move-result v2

    if-eqz v2, :cond_13

    .line 1250
    iget-object v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v2, v11, v13, v14}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->resolveMediaPeriodIdForAds(IJ)Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    move-result-object v12

    .line 1251
    invoke-virtual {v12, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_13

    .line 1254
    invoke-virtual {v12}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->isAd()Z

    move-result v1

    if-eqz v1, :cond_12

    goto :goto_7

    :cond_12
    move-wide v8, v13

    :goto_7
    invoke-direct {v0, v12, v8, v9}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekToPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;J)J

    move-result-wide v1

    .line 1255
    iget-object v11, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-wide v3, v13

    move-wide v13, v1

    move-wide v15, v3

    invoke-virtual/range {v11 .. v16}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v1

    iput-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    return-void

    .line 1260
    :cond_13
    iget-object v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    iget-wide v5, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    invoke-virtual {v2, v1, v5, v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->updateQueuedPeriods(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;J)Z

    move-result v1

    if-nez v1, :cond_14

    .line 1261
    invoke-direct {v0, v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekToCurrentPosition(Z)V

    :cond_14
    return-void
.end method

.method private isTimelineReady()Z
    .locals 5

    .line 1116
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    .line 1117
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-wide v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->durationUs:J

    const-wide v3, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v3, v1, v3

    if-eqz v3, :cond_1

    .line 1118
    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    cmp-long v1, v3, v1

    if-ltz v1, :cond_1

    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    if-eqz v1, :cond_0

    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    iget-boolean v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->prepared:Z

    if-nez v1, :cond_1

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->id:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    .line 1121
    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->isAd()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method private maybeContinueLoading()V
    .locals 5

    .line 1540
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getLoadingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    .line 1541
    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->getNextLoadPositionUs()J

    move-result-wide v1

    const-wide/high16 v3, -0x8000000000000000L

    cmp-long v3, v1, v3

    if-nez v3, :cond_0

    const/4 v0, 0x0

    .line 1543
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setIsLoading(Z)V

    return-void

    .line 1546
    :cond_0
    iget-wide v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    .line 1547
    invoke-virtual {v0, v3, v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->toPeriodTime(J)J

    move-result-wide v3

    sub-long/2addr v1, v3

    .line 1548
    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->loadControl:Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;

    iget-object v4, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    .line 1550
    invoke-virtual {v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->getPlaybackParameters()Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;

    move-result-object v4

    iget v4, v4, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;->speed:F

    .line 1549
    invoke-interface {v3, v1, v2, v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;->shouldContinueLoading(JF)Z

    move-result v1

    .line 1551
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setIsLoading(Z)V

    if-eqz v1, :cond_1

    .line 1553
    iget-wide v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->continueLoading(J)V

    :cond_1
    return-void
.end method

.method private maybeNotifyPlaybackInfoChanged()V
    .locals 5

    .line 382
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->hasPendingUpdate(Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 383
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->eventHandler:Landroid/os/Handler;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    .line 386
    invoke-static {v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->access$100(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;)I

    move-result v2

    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    .line 387
    invoke-static {v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->access$200(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    .line 388
    invoke-static {v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->access$300(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;)I

    move-result v3

    goto :goto_0

    :cond_0
    const/4 v3, -0x1

    :goto_0
    iget-object v4, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 384
    invoke-virtual {v0, v1, v2, v3, v4}, Landroid/os/Handler;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object v0

    .line 391
    invoke-virtual {v0}, Landroid/os/Message;->sendToTarget()V

    .line 392
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->reset(Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;)V

    :cond_1
    return-void
.end method

.method private maybeThrowPeriodPrepareError()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 1125
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getLoadingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    .line 1126
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getReadingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v1

    if-eqz v0, :cond_3

    .line 1127
    iget-boolean v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->prepared:Z

    if-nez v2, :cond_3

    if-eqz v1, :cond_0

    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    if-ne v1, v0, :cond_3

    .line 1129
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_2

    aget-object v4, v1, v3

    .line 1130
    invoke-interface {v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->hasReadStreamToEnd()Z

    move-result v4

    if-nez v4, :cond_1

    return-void

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 1134
    :cond_2
    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->mediaPeriod:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;

    invoke-interface {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;->maybeThrowPrepareError()V

    :cond_3
    return-void
.end method

.method private maybeTriggerPendingMessages(JJ)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 920
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_b

    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->periodId:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->isAd()Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_5

    .line 925
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->startPositionUs:J

    cmp-long v0, v0, p1

    if-nez v0, :cond_1

    const-wide/16 v0, 0x1

    sub-long/2addr p1, v0

    .line 929
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->periodId:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    iget v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->periodIndex:I

    .line 930
    iget v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    const/4 v2, 0x0

    if-lez v1, :cond_2

    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    add-int/lit8 v1, v1, -0x1

    .line 931
    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;

    goto :goto_0

    :cond_2
    move-object v1, v2

    :goto_0
    if-eqz v1, :cond_4

    .line 932
    iget v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodIndex:I

    if-gt v3, v0, :cond_3

    iget v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodIndex:I

    if-ne v3, v0, :cond_4

    iget-wide v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodTimeUs:J

    cmp-long v1, v3, p1

    if-lez v1, :cond_4

    .line 936
    :cond_3
    iget v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    add-int/lit8 v1, v1, -0x1

    iput v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    if-lez v1, :cond_2

    .line 937
    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    add-int/lit8 v1, v1, -0x1

    .line 938
    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;

    goto :goto_0

    .line 940
    :cond_4
    iget v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    .line 941
    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v1, v3, :cond_5

    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    iget v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    .line 942
    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;

    goto :goto_1

    :cond_5
    move-object v1, v2

    :goto_1
    if-eqz v1, :cond_7

    .line 944
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodUid:Ljava/lang/Object;

    if-eqz v3, :cond_7

    iget v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodIndex:I

    if-lt v3, v0, :cond_6

    iget v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodIndex:I

    if-ne v3, v0, :cond_7

    iget-wide v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodTimeUs:J

    cmp-long v3, v3, p1

    if-gtz v3, :cond_7

    .line 949
    :cond_6
    iget v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    .line 950
    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    .line 951
    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v1, v3, :cond_5

    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    iget v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    .line 952
    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;

    goto :goto_1

    :cond_7
    :goto_2
    if-eqz v1, :cond_b

    .line 956
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodUid:Ljava/lang/Object;

    if-eqz v3, :cond_b

    iget v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodIndex:I

    if-ne v3, v0, :cond_b

    iget-wide v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodTimeUs:J

    cmp-long v3, v3, p1

    if-lez v3, :cond_b

    iget-wide v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodTimeUs:J

    cmp-long v3, v3, p3

    if-gtz v3, :cond_b

    .line 961
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->message:Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;

    invoke-direct {p0, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->sendMessageToTarget(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V

    .line 962
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->message:Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;

    invoke-virtual {v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->getDeleteAfterDelivery()Z

    move-result v3

    if-nez v3, :cond_9

    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->message:Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->isCanceled()Z

    move-result v1

    if-eqz v1, :cond_8

    goto :goto_3

    .line 965
    :cond_8
    iget v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    add-int/lit8 v1, v1, 0x1

    iput v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    goto :goto_4

    .line 963
    :cond_9
    :goto_3
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    iget v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    .line 967
    :goto_4
    iget v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    .line 968
    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v1, v3, :cond_a

    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    iget v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    .line 969
    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;

    goto :goto_2

    :cond_a
    move-object v1, v2

    goto :goto_2

    :cond_b
    :goto_5
    return-void
.end method

.method private maybeUpdateLoadingPeriod()V
    .locals 12
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 1491
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    iget-wide v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->reevaluateBuffer(J)V

    .line 1492
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->shouldLoadNextMediaPeriod()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1493
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    iget-wide v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getNextMediaPeriodInfo(JLcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;)Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    move-result-object v0

    if-nez v0, :cond_0

    .line 1495
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaSource:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

    invoke-interface {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;->maybeThrowSourceInfoRefreshError()V

    goto :goto_0

    .line 1497
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->timeline:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    iget-object v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->id:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    iget v2, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->periodIndex:I

    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    const/4 v11, 0x1

    invoke-virtual {v1, v2, v3, v11}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;Z)Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    move-result-object v1

    iget-object v9, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;->uid:Ljava/lang/Object;

    .line 1498
    iget-object v4, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    iget-object v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererCapabilities:[Lcom/mbridge/msdk/playercommon/exoplayer2/RendererCapabilities;

    iget-object v6, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->trackSelector:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelector;

    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->loadControl:Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;

    .line 1502
    invoke-interface {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;->getAllocator()Lcom/mbridge/msdk/playercommon/exoplayer2/upstream/Allocator;

    move-result-object v7

    iget-object v8, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaSource:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

    move-object v10, v0

    .line 1499
    invoke-virtual/range {v4 .. v10}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->enqueueNextMediaPeriod([Lcom/mbridge/msdk/playercommon/exoplayer2/RendererCapabilities;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelector;Lcom/mbridge/msdk/playercommon/exoplayer2/upstream/Allocator;Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;Ljava/lang/Object;Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;)Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;

    move-result-object v1

    .line 1506
    iget-wide v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->startPositionUs:J

    invoke-interface {v1, p0, v2, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;->prepare(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod$Callback;J)V

    .line 1507
    invoke-direct {p0, v11}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setIsLoading(Z)V

    :cond_1
    :goto_0
    return-void
.end method

.method private prepareInternal(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;ZZ)V
    .locals 2

    .line 397
    iget v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingPrepareCount:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingPrepareCount:I

    .line 398
    invoke-direct {p0, v1, p2, p3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resetInternal(ZZZ)V

    .line 399
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->loadControl:Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;

    invoke-interface {p2}, Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;->onPrepared()V

    .line 400
    iput-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaSource:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

    const/4 p2, 0x2

    .line 401
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setState(I)V

    .line 402
    iget-object p3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->player:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayer;

    invoke-interface {p1, p3, v1, p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;->prepareSource(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayer;ZLcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$SourceInfoRefreshListener;)V

    .line 403
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->sendEmptyMessage(I)Z

    return-void
.end method

.method private releaseInternal()V
    .locals 3

    const/4 v0, 0x1

    .line 747
    invoke-direct {p0, v0, v0, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resetInternal(ZZZ)V

    .line 749
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->loadControl:Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;

    invoke-interface {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;->onReleased()V

    .line 750
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setState(I)V

    .line 752
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x12

    if-lt v1, v2, :cond_0

    .line 753
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->internalPlaybackThread:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->quitSafely()Z

    goto :goto_0

    .line 755
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->internalPlaybackThread:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->quit()Z

    .line 757
    :goto_0
    monitor-enter p0

    .line 758
    :try_start_0
    iput-boolean v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->released:Z

    .line 759
    invoke-virtual {p0}, Ljava/lang/Object;->notifyAll()V

    .line 760
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0
.end method

.method private rendererWaitingForNextStream(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)Z
    .locals 2

    .line 1629
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getReadingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    .line 1630
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    if-eqz v1, :cond_0

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    iget-boolean v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->prepared:Z

    if-eqz v0, :cond_0

    .line 1631
    invoke-interface {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->hasReadStreamToEnd()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method private reselectTracksInternal()V
    .locals 15
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 987
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->hasPlayingPeriod()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 991
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->getPlaybackParameters()Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;

    move-result-object v0

    iget v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;->speed:F

    .line 993
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v1

    .line 994
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getReadingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v2

    const/4 v3, 0x1

    move v4, v3

    :goto_0
    if-eqz v1, :cond_d

    .line 997
    iget-boolean v5, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->prepared:Z

    if-nez v5, :cond_1

    goto/16 :goto_5

    .line 1001
    :cond_1
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->selectTracks(F)Z

    move-result v5

    const/4 v6, 0x0

    if-eqz v5, :cond_b

    const/4 v0, 0x4

    if-eqz v4, :cond_8

    .line 1014
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v1

    .line 1015
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->removeAfter(Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;)Z

    move-result v2

    .line 1017
    iget-object v4, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v4, v4

    new-array v4, v4, [Z

    .line 1018
    iget-object v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v7, v5, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    .line 1019
    invoke-virtual {v1, v7, v8, v2, v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->applyTrackSelection(JZ[Z)J

    move-result-wide v7

    .line 1021
    iget-object v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackGroups:Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;

    iget-object v5, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    invoke-direct {p0, v2, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updateLoadControlTrackSelection(Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;)V

    .line 1023
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget v2, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    if-eq v2, v0, :cond_2

    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v9, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    cmp-long v2, v7, v9

    if-eqz v2, :cond_2

    .line 1025
    iget-object v9, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v10, v9, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->periodId:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v13, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->contentPositionUs:J

    move-wide v11, v7

    invoke-virtual/range {v9 .. v14}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 1027
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    invoke-virtual {v2, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->setPositionDiscontinuity(I)V

    .line 1028
    invoke-direct {p0, v7, v8}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resetRendererPosition(J)V

    .line 1032
    :cond_2
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v2, v2

    new-array v2, v2, [Z

    move v5, v6

    move v7, v5

    .line 1033
    :goto_1
    iget-object v8, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v9, v8

    if-ge v5, v9, :cond_7

    .line 1034
    aget-object v8, v8, v5

    .line 1035
    invoke-interface {v8}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->getState()I

    move-result v9

    if-eqz v9, :cond_3

    move v9, v3

    goto :goto_2

    :cond_3
    move v9, v6

    :goto_2
    aput-boolean v9, v2, v5

    .line 1036
    iget-object v9, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->sampleStreams:[Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;

    aget-object v9, v9, v5

    if-eqz v9, :cond_4

    add-int/lit8 v7, v7, 0x1

    .line 1040
    :cond_4
    aget-boolean v10, v2, v5

    if-eqz v10, :cond_6

    .line 1041
    invoke-interface {v8}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->getStream()Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;

    move-result-object v10

    if-eq v9, v10, :cond_5

    .line 1043
    invoke-direct {p0, v8}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->disableRenderer(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)V

    goto :goto_3

    .line 1044
    :cond_5
    aget-boolean v9, v4, v5

    if-eqz v9, :cond_6

    .line 1046
    iget-wide v9, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    invoke-interface {v8, v9, v10}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->resetPosition(J)V

    :cond_6
    :goto_3
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 1050
    :cond_7
    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v4, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackGroups:Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;

    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    .line 1051
    invoke-virtual {v3, v4, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->copyWithTrackInfo(Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 1053
    invoke-direct {p0, v2, v7}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enableRenderers([ZI)V

    goto :goto_4

    .line 1056
    :cond_8
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->removeAfter(Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;)Z

    .line 1057
    iget-boolean v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->prepared:Z

    if-eqz v2, :cond_9

    .line 1058
    iget-object v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-wide v2, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->startPositionUs:J

    iget-wide v4, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    .line 1060
    invoke-virtual {v1, v4, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->toPeriodTime(J)J

    move-result-wide v4

    .line 1059
    invoke-static {v2, v3, v4, v5}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v2

    .line 1061
    invoke-virtual {v1, v2, v3, v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->applyTrackSelection(JZ)J

    .line 1062
    iget-object v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackGroups:Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;

    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    invoke-direct {p0, v2, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updateLoadControlTrackSelection(Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;)V

    .line 1065
    :cond_9
    :goto_4
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    if-eq v1, v0, :cond_a

    .line 1066
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeContinueLoading()V

    .line 1067
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updatePlaybackPositions()V

    .line 1068
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/4 v1, 0x2

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->sendEmptyMessage(I)Z

    :cond_a
    return-void

    :cond_b
    if-ne v1, v2, :cond_c

    move v4, v6

    .line 1009
    :cond_c
    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    goto/16 :goto_0

    :cond_d
    :goto_5
    return-void
.end method

.method private resetInternal(ZZZ)V
    .locals 16

    move-object/from16 v1, p0

    .line 773
    iget-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/4 v2, 0x2

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->removeMessages(I)V

    const/4 v2, 0x0

    .line 774
    iput-boolean v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rebuffering:Z

    .line 775
    iget-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->stop()V

    const-wide/16 v3, 0x0

    .line 776
    iput-wide v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    .line 777
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v4, v3

    move v5, v2

    :goto_0
    if-ge v5, v4, :cond_0

    aget-object v0, v3, v5

    .line 779
    :try_start_0
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->disableRenderer(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)V
    :try_end_0
    .catch Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    goto :goto_1

    :catch_1
    move-exception v0

    :goto_1
    const-string v6, "ExoPlayerImplInternal"

    const-string v7, "Stop failed."

    .line 782
    invoke-static {v6, v7, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_2
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_0
    new-array v0, v2, [Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    .line 785
    iput-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    .line 786
    iget-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    xor-int/lit8 v3, p2, 0x1

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->clear(Z)V

    .line 787
    invoke-direct {v1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setIsLoading(Z)V

    const/4 v0, 0x0

    if-eqz p2, :cond_1

    .line 789
    iput-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingInitialSeekPosition:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;

    :cond_1
    if-eqz p3, :cond_3

    .line 792
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    sget-object v4, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->EMPTY:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->setTimeline(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;)V

    .line 793
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_3
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;

    .line 794
    iget-object v4, v4, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->message:Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;

    invoke-virtual {v4, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->markAsProcessed(Z)V

    goto :goto_3

    .line 796
    :cond_2
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->clear()V

    .line 797
    iput v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->nextPendingMessageIndex:I

    .line 799
    :cond_3
    new-instance v2, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    if-eqz p3, :cond_4

    sget-object v3, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->EMPTY:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    goto :goto_4

    :cond_4
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->timeline:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    :goto_4
    move-object v5, v3

    if-eqz p3, :cond_5

    move-object v6, v0

    goto :goto_5

    :cond_5
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->manifest:Ljava/lang/Object;

    move-object v6, v3

    :goto_5
    if-eqz p2, :cond_6

    new-instance v3, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    .line 803
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->getFirstPeriodIndex()I

    move-result v4

    invoke-direct {v3, v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;-><init>(I)V

    goto :goto_6

    :cond_6
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->periodId:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    :goto_6
    move-object v7, v3

    const-wide v3, -0x7fffffffffffffffL    # -4.9E-324

    if-eqz p2, :cond_7

    move-wide v8, v3

    goto :goto_7

    :cond_7
    iget-object v8, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v8, v8, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    :goto_7
    if-eqz p2, :cond_8

    goto :goto_8

    :cond_8
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->contentPositionUs:J

    :goto_8
    move-wide v10, v3

    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget v12, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    const/4 v13, 0x0

    if-eqz p3, :cond_9

    sget-object v3, Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;->EMPTY:Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;

    goto :goto_9

    :cond_9
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->trackGroups:Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;

    :goto_9
    move-object v14, v3

    if-eqz p3, :cond_a

    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->emptyTrackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    goto :goto_a

    :cond_a
    iget-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    :goto_a
    move-object v15, v3

    move-object v4, v2

    invoke-direct/range {v4 .. v15}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;-><init>(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;Ljava/lang/Object;Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJIZLcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;)V

    iput-object v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    if-eqz p1, :cond_b

    .line 812
    iget-object v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaSource:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

    if-eqz v2, :cond_b

    .line 813
    invoke-interface {v2, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;->releaseSource(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$SourceInfoRefreshListener;)V

    .line 814
    iput-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaSource:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

    :cond_b
    return-void
.end method

.method private resetRendererPosition(J)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 718
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    .line 719
    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->hasPlayingPeriod()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    .line 721
    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->toRendererTime(J)J

    move-result-wide p1

    :goto_0
    iput-wide p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    .line 722
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->resetPosition(J)V

    .line 723
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length p2, p1

    const/4 v0, 0x0

    :goto_1
    if-ge v0, p2, :cond_1

    aget-object v1, p1, v0

    .line 724
    iget-wide v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    invoke-interface {v1, v2, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->resetPosition(J)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    :cond_1
    return-void
.end method

.method private resolvePendingMessagePosition(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;)Z
    .locals 7

    .line 891
    iget-object v0, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodUid:Ljava/lang/Object;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez v0, :cond_1

    .line 893
    new-instance v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;

    iget-object v3, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->message:Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;

    .line 896
    invoke-virtual {v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->getTimeline()Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    move-result-object v3

    iget-object v4, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->message:Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;

    .line 897
    invoke-virtual {v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->getWindowIndex()I

    move-result v4

    iget-object v5, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->message:Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;

    .line 898
    invoke-virtual {v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->getPositionMs()J

    move-result-wide v5

    invoke-static {v5, v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/C;->msToUs(J)J

    move-result-wide v5

    invoke-direct {v0, v3, v4, v5, v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;-><init>(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;IJ)V

    .line 894
    invoke-direct {p0, v0, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resolveSeekPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;Z)Landroid/util/Pair;

    move-result-object v0

    if-nez v0, :cond_0

    return v2

    .line 903
    :cond_0
    iget-object v2, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Integer;

    .line 904
    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget-object v3, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v3, Ljava/lang/Long;

    .line 905
    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    iget-object v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v5, v5, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->timeline:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    iget-object v0, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Integer;

    .line 906
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iget-object v6, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    invoke-virtual {v5, v0, v6, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;Z)Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    move-result-object v0

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;->uid:Ljava/lang/Object;

    .line 903
    invoke-virtual {p1, v2, v3, v4, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->setResolvedPosition(IJLjava/lang/Object;)V

    goto :goto_0

    .line 909
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->timeline:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    iget-object v3, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodUid:Ljava/lang/Object;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getIndexOfPeriod(Ljava/lang/Object;)I

    move-result v0

    const/4 v3, -0x1

    if-ne v0, v3, :cond_2

    return v2

    .line 913
    :cond_2
    iput v0, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->resolvedPeriodIndex:I

    :goto_0
    return v1
.end method

.method private resolvePendingMessagePositions()V
    .locals 3

    .line 879
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    add-int/lit8 v0, v0, -0x1

    :goto_0
    if-ltz v0, :cond_1

    .line 880
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resolvePendingMessagePosition(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 882
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;

    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;->message:Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->markAsProcessed(Z)V

    .line 883
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    :cond_0
    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    .line 887
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    invoke-static {v0}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    return-void
.end method

.method private resolveSeekPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;Z)Landroid/util/Pair;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;",
            "Z)",
            "Landroid/util/Pair<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation

    .line 1312
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->timeline:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    .line 1313
    iget-object v1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;->timeline:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    .line 1314
    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->isEmpty()Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    return-object v3

    .line 1318
    :cond_0
    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_1

    move-object v1, v0

    .line 1326
    :cond_1
    :try_start_0
    iget-object v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->window:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;

    iget-object v6, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    iget v7, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;->windowIndex:I

    iget-wide v8, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;->windowPositionUs:J

    move-object v4, v1

    invoke-virtual/range {v4 .. v9}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;IJ)Landroid/util/Pair;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_0 .. :try_end_0} :catch_0

    if-ne v0, v1, :cond_2

    return-object p1

    .line 1338
    :cond_2
    iget-object v2, p1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Integer;

    .line 1339
    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget-object v4, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    const/4 v5, 0x1

    invoke-virtual {v1, v2, v4, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;Z)Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    move-result-object v2

    iget-object v2, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;->uid:Ljava/lang/Object;

    .line 1338
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getIndexOfPeriod(Ljava/lang/Object;)I

    move-result v2

    const/4 v4, -0x1

    if-eq v2, v4, :cond_3

    .line 1342
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    iget-object p1, p1, Landroid/util/Pair;->second:Ljava/lang/Object;

    invoke-static {p2, p1}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p1

    return-object p1

    :cond_3
    if-eqz p2, :cond_4

    .line 1346
    iget-object p1, p1, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    invoke-direct {p0, p1, v1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resolveSubsequentPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline;Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;)I

    move-result p1

    if-eq p1, v4, :cond_4

    .line 1349
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    .line 1350
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;)Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    move-result-object p1

    iget p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;->windowIndex:I

    const-wide v1, -0x7fffffffffffffffL    # -4.9E-324

    .line 1349
    invoke-direct {p0, v0, p1, v1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->getPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;IJ)Landroid/util/Pair;

    move-result-object p1

    return-object p1

    :cond_4
    return-object v3

    .line 1330
    :catch_0
    new-instance p2, Lcom/mbridge/msdk/playercommon/exoplayer2/IllegalSeekPositionException;

    iget v1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;->windowIndex:I

    iget-wide v2, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;->windowPositionUs:J

    invoke-direct {p2, v0, v1, v2, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/IllegalSeekPositionException;-><init>(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;IJ)V

    throw p2
.end method

.method private resolveSubsequentPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline;Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;)I
    .locals 9

    .line 1285
    invoke-virtual {p2}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriodCount()I

    move-result v0

    const/4 v1, -0x1

    const/4 v2, 0x0

    move v4, p1

    move p1, v1

    :goto_0
    if-ge v2, v0, :cond_1

    if-ne p1, v1, :cond_1

    .line 1287
    iget-object v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    iget-object v6, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->window:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;

    iget v7, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->repeatMode:I

    iget-boolean v8, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->shuffleModeEnabled:Z

    move-object v3, p2

    invoke-virtual/range {v3 .. v8}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getNextPeriodIndex(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Window;IZ)I

    move-result v4

    if-ne v4, v1, :cond_0

    goto :goto_1

    .line 1293
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    const/4 v3, 0x1

    .line 1294
    invoke-virtual {p2, v4, p1, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;Z)Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    move-result-object p1

    iget-object p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;->uid:Ljava/lang/Object;

    .line 1293
    invoke-virtual {p3, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getIndexOfPeriod(Ljava/lang/Object;)I

    move-result p1

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    return p1
.end method

.method private scheduleNextWork(JJ)V
    .locals 2

    .line 580
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/4 v1, 0x2

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->removeMessages(I)V

    .line 581
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    add-long/2addr p1, p3

    invoke-interface {v0, v1, p1, p2}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->sendEmptyMessageAtTime(IJ)Z

    return-void
.end method

.method private seekToCurrentPosition(Z)V
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 441
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-object v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->id:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    .line 442
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    const/4 v3, 0x1

    .line 443
    invoke-direct {p0, v2, v0, v1, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekToPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JZ)J

    move-result-wide v3

    .line 444
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    cmp-long v0, v3, v0

    if-eqz v0, :cond_0

    .line 445
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v5, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->contentPositionUs:J

    .line 446
    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    if-eqz p1, :cond_0

    .line 448
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->setPositionDiscontinuity(I)V

    :cond_0
    return-void
.end method

.method private seekToInternal(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;)V
    .locals 20
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    .line 585
    iget-object v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->incrementPendingOperationAcks(I)V

    .line 592
    invoke-direct {v1, v0, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resolveSeekPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;Z)Landroid/util/Pair;

    move-result-object v2

    const-wide/16 v4, 0x0

    const/4 v6, 0x0

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    if-nez v2, :cond_0

    .line 596
    new-instance v2, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->getFirstPeriodIndex()I

    move-result v9

    invoke-direct {v2, v9}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;-><init>(I)V

    move-object v15, v2

    move v2, v3

    move-wide v12, v7

    move-wide/from16 v18, v12

    goto :goto_1

    .line 602
    :cond_0
    iget-object v9, v2, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v9, Ljava/lang/Integer;

    invoke-virtual {v9}, Ljava/lang/Integer;->intValue()I

    move-result v9

    .line 603
    iget-object v10, v2, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v10, Ljava/lang/Long;

    invoke-virtual {v10}, Ljava/lang/Long;->longValue()J

    move-result-wide v10

    .line 604
    iget-object v12, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v12, v9, v10, v11}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->resolveMediaPeriodIdForAds(IJ)Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    move-result-object v9

    .line 605
    invoke-virtual {v9}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->isAd()Z

    move-result v12

    if-eqz v12, :cond_1

    move v2, v3

    move-wide v12, v4

    :goto_0
    move-object v15, v9

    move-wide/from16 v18, v10

    goto :goto_1

    .line 609
    :cond_1
    iget-object v2, v2, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v2, Ljava/lang/Long;

    invoke-virtual {v2}, Ljava/lang/Long;->longValue()J

    move-result-wide v12

    .line 610
    iget-wide v14, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;->windowPositionUs:J

    cmp-long v2, v14, v7

    if-nez v2, :cond_2

    move v2, v3

    goto :goto_0

    :cond_2
    move v2, v6

    goto :goto_0

    :goto_1
    const/4 v9, 0x2

    .line 615
    :try_start_0
    iget-object v10, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaSource:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

    if-eqz v10, :cond_a

    iget v10, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingPrepareCount:I

    if-lez v10, :cond_3

    goto :goto_4

    :cond_3
    cmp-long v0, v12, v7

    if-nez v0, :cond_4

    const/4 v0, 0x4

    .line 620
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setState(I)V

    .line 621
    invoke-direct {v1, v6, v3, v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resetInternal(ZZZ)V

    goto :goto_5

    .line 626
    :cond_4
    iget-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->periodId:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    invoke-virtual {v15, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 627
    iget-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    if-eqz v0, :cond_5

    cmp-long v4, v12, v4

    if-eqz v4, :cond_5

    .line 629
    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->mediaPeriod:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;

    iget-object v4, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekParameters:Lcom/mbridge/msdk/playercommon/exoplayer2/SeekParameters;

    .line 630
    invoke-interface {v0, v12, v13, v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;->getAdjustedSeekPositionUs(JLcom/mbridge/msdk/playercommon/exoplayer2/SeekParameters;)J

    move-result-wide v4

    goto :goto_2

    :cond_5
    move-wide v4, v12

    .line 633
    :goto_2
    invoke-static {v4, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/C;->usToMs(J)J

    move-result-wide v7

    iget-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v10, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    invoke-static {v10, v11}, Lcom/mbridge/msdk/playercommon/exoplayer2/C;->usToMs(J)J

    move-result-wide v10

    cmp-long v0, v7, v10

    if-nez v0, :cond_8

    .line 635
    iget-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v3, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 644
    iget-object v14, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-wide/from16 v16, v3

    invoke-virtual/range {v14 .. v19}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    if-eqz v2, :cond_6

    .line 646
    iget-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    invoke-virtual {v0, v9}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->setPositionDiscontinuity(I)V

    :cond_6
    return-void

    :cond_7
    move-wide v4, v12

    .line 639
    :cond_8
    :try_start_1
    invoke-direct {v1, v15, v4, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekToPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;J)J

    move-result-wide v4

    cmp-long v0, v12, v4

    if-eqz v0, :cond_9

    goto :goto_3

    :cond_9
    move v3, v6

    :goto_3
    or-int/2addr v2, v3

    move-wide/from16 v16, v4

    goto :goto_6

    .line 617
    :cond_a
    :goto_4
    iput-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingInitialSeekPosition:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :goto_5
    move-wide/from16 v16, v12

    .line 644
    :goto_6
    iget-object v14, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    invoke-virtual/range {v14 .. v19}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    if-eqz v2, :cond_b

    .line 646
    iget-object v0, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    invoke-virtual {v0, v9}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->setPositionDiscontinuity(I)V

    :cond_b
    return-void

    :catchall_0
    move-exception v0

    .line 644
    iget-object v14, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-wide/from16 v16, v12

    invoke-virtual/range {v14 .. v19}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v3

    iput-object v3, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    if-eqz v2, :cond_c

    .line 646
    iget-object v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    invoke-virtual {v2, v9}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->setPositionDiscontinuity(I)V

    .line 648
    :cond_c
    throw v0
.end method

.method private seekToPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;J)J
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 654
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    .line 655
    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getReadingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v1

    if-eq v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 654
    :goto_0
    invoke-direct {p0, p1, p2, p3, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekToPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JZ)J

    move-result-wide p1

    return-wide p1
.end method

.method private seekToPeriodPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JZ)J
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 661
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->stopRenderers()V

    const/4 v0, 0x0

    .line 662
    iput-boolean v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rebuffering:Z

    const/4 v1, 0x2

    .line 663
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setState(I)V

    .line 666
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v2

    move-object v3, v2

    :goto_0
    if-eqz v3, :cond_1

    .line 669
    invoke-direct {p0, p1, p2, p3, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->shouldKeepPeriodHolder(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JLcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 670
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->removeAfter(Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;)Z

    goto :goto_1

    .line 673
    :cond_0
    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->advancePlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v3

    goto :goto_0

    :cond_1
    :goto_1
    if-ne v2, v3, :cond_2

    if-eqz p4, :cond_4

    .line 678
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length p4, p1

    move v2, v0

    :goto_2
    if-ge v2, p4, :cond_3

    aget-object v4, p1, v2

    .line 679
    invoke-direct {p0, v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->disableRenderer(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    :cond_3
    new-array p1, v0, [Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    .line 681
    iput-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    const/4 v2, 0x0

    :cond_4
    if-eqz v3, :cond_6

    .line 687
    invoke-direct {p0, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updatePlayingPeriodRenderers(Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;)V

    .line 688
    iget-boolean p1, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->hasEnabledTracks:Z

    if-eqz p1, :cond_5

    .line 689
    iget-object p1, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->mediaPeriod:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;->seekToUs(J)J

    move-result-wide p1

    .line 690
    iget-object p3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->mediaPeriod:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;

    iget-wide v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->backBufferDurationUs:J

    sub-long v2, p1, v2

    iget-boolean p4, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->retainBackBufferFromKeyframe:Z

    invoke-interface {p3, v2, v3, p4}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;->discardBuffer(JZ)V

    move-wide p2, p1

    .line 693
    :cond_5
    invoke-direct {p0, p2, p3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resetRendererPosition(J)V

    .line 694
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeContinueLoading()V

    goto :goto_3

    .line 696
    :cond_6
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    const/4 p4, 0x1

    invoke-virtual {p1, p4}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->clear(Z)V

    .line 697
    invoke-direct {p0, p2, p3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resetRendererPosition(J)V

    .line 700
    :goto_3
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    invoke-interface {p1, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->sendEmptyMessage(I)Z

    return-wide p2
.end method

.method private sendMessageInternal(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 820
    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->getPositionMs()J

    move-result-wide v0

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    .line 822
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->sendMessageToTarget(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V

    goto :goto_1

    .line 823
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaSource:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingPrepareCount:I

    if-lez v0, :cond_1

    goto :goto_0

    .line 827
    :cond_1
    new-instance v0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;-><init>(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V

    .line 828
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resolvePendingMessagePosition(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 829
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 831
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    invoke-static {p1}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    goto :goto_1

    :cond_2
    const/4 v0, 0x0

    .line 833
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->markAsProcessed(Z)V

    goto :goto_1

    .line 825
    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingMessages:Ljava/util/ArrayList;

    new-instance v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;

    invoke-direct {v1, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PendingMessageInfo;-><init>(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :goto_1
    return-void
.end method

.method private sendMessageToTarget(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 839
    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->getHandler()Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/Handler;->getLooper()Landroid/os/Looper;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    invoke-interface {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->getLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_1

    .line 840
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->deliverMessage(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V

    .line 841
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    const/4 v0, 0x3

    const/4 v1, 0x2

    if-eq p1, v0, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    if-ne p1, v1, :cond_2

    .line 844
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    invoke-interface {p1, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->sendEmptyMessage(I)Z

    goto :goto_0

    .line 847
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/16 v1, 0xf

    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    :cond_2
    :goto_0
    return-void
.end method

.method private sendMessageToTargetThread(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V
    .locals 2

    .line 852
    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->getHandler()Landroid/os/Handler;

    move-result-object v0

    .line 853
    new-instance v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$1;

    invoke-direct {v1, p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$1;-><init>(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private setIsLoading(Z)V
    .locals 1

    .line 376
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-boolean v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->isLoading:Z

    if-eq v0, p1, :cond_0

    .line 377
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->copyWithIsLoading(Z)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    :cond_0
    return-void
.end method

.method private setPlayWhenReadyInternal(Z)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 407
    iput-boolean v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rebuffering:Z

    .line 408
    iput-boolean p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playWhenReady:Z

    if-nez p1, :cond_0

    .line 410
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->stopRenderers()V

    .line 411
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updatePlaybackPositions()V

    goto :goto_0

    .line 413
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    const/4 v0, 0x3

    const/4 v1, 0x2

    if-ne p1, v0, :cond_1

    .line 414
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->startRenderers()V

    .line 415
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    invoke-interface {p1, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->sendEmptyMessage(I)Z

    goto :goto_0

    .line 416
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    if-ne p1, v1, :cond_2

    .line 417
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    invoke-interface {p1, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->sendEmptyMessage(I)Z

    :cond_2
    :goto_0
    return-void
.end method

.method private setPlaybackParametersInternal(Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;)V
    .locals 1

    .line 729
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->setPlaybackParameters(Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;

    return-void
.end method

.method private setRepeatModeInternal(I)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 424
    iput p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->repeatMode:I

    .line 425
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->updateRepeatMode(I)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    .line 426
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekToCurrentPosition(Z)V

    :cond_0
    return-void
.end method

.method private setSeekParametersInternal(Lcom/mbridge/msdk/playercommon/exoplayer2/SeekParameters;)V
    .locals 0

    .line 733
    iput-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekParameters:Lcom/mbridge/msdk/playercommon/exoplayer2/SeekParameters;

    return-void
.end method

.method private setShuffleModeEnabledInternal(Z)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 432
    iput-boolean p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->shuffleModeEnabled:Z

    .line 433
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->updateShuffleModeEnabled(Z)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    .line 434
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekToCurrentPosition(Z)V

    :cond_0
    return-void
.end method

.method private setState(I)V
    .locals 1

    .line 370
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->playbackState:I

    if-eq v0, p1, :cond_0

    .line 371
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->copyWithPlaybackState(I)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    :cond_0
    return-void
.end method

.method private shouldKeepPeriodHolder(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JLcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;)Z
    .locals 2

    .line 706
    iget-object v0, p4, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->id:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-boolean p1, p4, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->prepared:Z

    if-eqz p1, :cond_1

    .line 707
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->timeline:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;

    iget-object v0, p4, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->id:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    iget v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;->periodIndex:I

    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;->getPeriod(ILcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;)Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    .line 708
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    invoke-virtual {p1, p2, p3}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;->getAdGroupIndexAfterPositionUs(J)I

    move-result p1

    const/4 p2, -0x1

    if-eq p1, p2, :cond_0

    .line 709
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->period:Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;

    .line 710
    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline$Period;->getAdGroupTimeUs(I)J

    move-result-wide p1

    iget-object p3, p4, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-wide p3, p3, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->endPositionUs:J

    cmp-long p1, p1, p3

    if-nez p1, :cond_1

    :cond_0
    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method private shouldTransitionToReadyState(Z)Z
    .locals 7

    .line 1093
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v0, v0

    if-nez v0, :cond_0

    .line 1095
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->isTimelineReady()Z

    move-result p1

    return p1

    :cond_0
    const/4 v0, 0x0

    if-nez p1, :cond_1

    return v0

    .line 1100
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-boolean p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->isLoading:Z

    const/4 v1, 0x1

    if-nez p1, :cond_2

    return v1

    .line 1106
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getLoadingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object p1

    .line 1107
    iget-object v2, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-boolean v2, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->isFinal:Z

    xor-int/2addr v2, v1

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->getBufferedPositionUs(Z)J

    move-result-wide v2

    const-wide/high16 v4, -0x8000000000000000L

    cmp-long v4, v2, v4

    if-eqz v4, :cond_3

    .line 1108
    iget-object v4, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->loadControl:Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;

    iget-wide v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    .line 1110
    invoke-virtual {p1, v5, v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->toPeriodTime(J)J

    move-result-wide v5

    sub-long/2addr v2, v5

    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    .line 1111
    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->getPlaybackParameters()Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;

    move-result-object p1

    iget p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;->speed:F

    iget-boolean v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rebuffering:Z

    .line 1109
    invoke-interface {v4, v2, v3, p1, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;->shouldStartPlayback(JFZ)Z

    move-result p1

    if-eqz p1, :cond_4

    :cond_3
    move v0, v1

    :cond_4
    return v0
.end method

.method private startRenderers()V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 454
    iput-boolean v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rebuffering:Z

    .line 455
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->start()V

    .line 456
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v2, v1

    :goto_0
    if-ge v0, v2, :cond_0

    aget-object v3, v1, v0

    .line 457
    invoke-interface {v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->start()V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private stopInternal(ZZ)V
    .locals 2

    const/4 v0, 0x1

    .line 737
    invoke-direct {p0, v0, p1, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resetInternal(ZZZ)V

    .line 739
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    iget v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingPrepareCount:I

    add-int/2addr v1, p2

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->incrementPendingOperationAcks(I)V

    const/4 p1, 0x0

    .line 741
    iput p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingPrepareCount:I

    .line 742
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->loadControl:Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;

    invoke-interface {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;->onStopped()V

    .line 743
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setState(I)V

    return-void
.end method

.method private stopRenderers()V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 462
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->stop()V

    .line 463
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, v0, v2

    .line 464
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->ensureStopped(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private updateLoadControlTrackSelection(Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;)V
    .locals 2

    .line 1074
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->loadControl:Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;

    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    iget-object p2, p2, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->selections:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectionArray;

    invoke-interface {v0, v1, p1, p2}, Lcom/mbridge/msdk/playercommon/exoplayer2/LoadControl;->onTracksSelected([Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectionArray;)V

    return-void
.end method

.method private updatePeriods()V
    .locals 13
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;,
            Ljava/io/IOException;
        }
    .end annotation

    .line 1367
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaSource:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

    if-nez v0, :cond_0

    return-void

    .line 1371
    :cond_0
    iget v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->pendingPrepareCount:I

    if-lez v1, :cond_1

    .line 1373
    invoke-interface {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;->maybeThrowSourceInfoRefreshError()V

    return-void

    .line 1378
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeUpdateLoadingPeriod()V

    .line 1379
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getLoadingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    .line 1380
    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->isFullyBuffered()Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    .line 1382
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-boolean v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->isLoading:Z

    if-nez v0, :cond_4

    .line 1383
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeContinueLoading()V

    goto :goto_1

    .line 1381
    :cond_3
    :goto_0
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setIsLoading(Z)V

    .line 1386
    :cond_4
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->hasPlayingPeriod()Z

    move-result v0

    if-nez v0, :cond_5

    return-void

    .line 1392
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    .line 1393
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getReadingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v2

    const/4 v3, 0x1

    move v4, v1

    .line 1395
    :goto_2
    iget-boolean v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playWhenReady:Z

    if-eqz v5, :cond_8

    if-eq v0, v2, :cond_8

    iget-wide v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    iget-object v7, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    iget-wide v7, v7, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->rendererPositionOffsetUs:J

    cmp-long v5, v5, v7

    if-ltz v5, :cond_8

    if-eqz v4, :cond_6

    .line 1401
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeNotifyPlaybackInfoChanged()V

    .line 1403
    :cond_6
    iget-object v4, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-boolean v4, v4, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->isLastInTimelinePeriod:Z

    if-eqz v4, :cond_7

    move v4, v1

    goto :goto_3

    :cond_7
    const/4 v4, 0x3

    .line 1408
    :goto_3
    iget-object v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->advancePlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v5

    .line 1409
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updatePlayingPeriodRenderers(Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;)V

    .line 1410
    iget-object v6, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v0, v5, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-object v7, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->id:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    iget-object v0, v5, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-wide v8, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->startPositionUs:J

    iget-object v0, v5, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-wide v10, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->contentPositionUs:J

    invoke-virtual/range {v6 .. v11}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 1412
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->setPositionDiscontinuity(I)V

    .line 1413
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updatePlaybackPositions()V

    move v4, v3

    move-object v0, v5

    goto :goto_2

    .line 1417
    :cond_8
    iget-object v0, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-boolean v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->isFinal:Z

    if-eqz v0, :cond_b

    .line 1418
    :goto_4
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v3, v0

    if-ge v1, v3, :cond_a

    .line 1419
    aget-object v0, v0, v1

    .line 1420
    iget-object v3, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->sampleStreams:[Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;

    aget-object v3, v3, v1

    if-eqz v3, :cond_9

    .line 1423
    invoke-interface {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->getStream()Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;

    move-result-object v4

    if-ne v4, v3, :cond_9

    .line 1424
    invoke-interface {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->hasReadStreamToEnd()Z

    move-result v3

    if-eqz v3, :cond_9

    .line 1425
    invoke-interface {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->setCurrentStreamFinal()V

    :cond_9
    add-int/lit8 v1, v1, 0x1

    goto :goto_4

    :cond_a
    return-void

    .line 1432
    :cond_b
    iget-object v0, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    if-eqz v0, :cond_16

    iget-object v0, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    iget-boolean v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->prepared:Z

    if-nez v0, :cond_c

    goto/16 :goto_c

    :cond_c
    move v0, v1

    .line 1437
    :goto_5
    iget-object v4, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v5, v4

    if-ge v0, v5, :cond_f

    .line 1438
    aget-object v4, v4, v0

    .line 1439
    iget-object v5, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->sampleStreams:[Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;

    aget-object v5, v5, v0

    .line 1440
    invoke-interface {v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->getStream()Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;

    move-result-object v6

    if-ne v6, v5, :cond_e

    if-eqz v5, :cond_d

    .line 1441
    invoke-interface {v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->hasReadStreamToEnd()Z

    move-result v4

    if-nez v4, :cond_d

    goto :goto_6

    :cond_d
    add-int/lit8 v0, v0, 0x1

    goto :goto_5

    :cond_e
    :goto_6
    return-void

    .line 1447
    :cond_f
    iget-object v0, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    .line 1448
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->advanceReadingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v2

    .line 1449
    iget-object v4, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    .line 1451
    iget-object v5, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->mediaPeriod:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;

    .line 1452
    invoke-interface {v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;->readDiscontinuity()J

    move-result-wide v5

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v5, v5, v7

    if-eqz v5, :cond_10

    move v5, v3

    goto :goto_7

    :cond_10
    move v5, v1

    :goto_7
    move v6, v1

    .line 1453
    :goto_8
    iget-object v7, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v8, v7

    if-ge v6, v8, :cond_16

    .line 1454
    aget-object v7, v7, v6

    .line 1455
    invoke-virtual {v0, v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->isRendererEnabled(I)Z

    move-result v8

    if-nez v8, :cond_11

    goto :goto_b

    :cond_11
    if-eqz v5, :cond_12

    goto :goto_a

    .line 1462
    :cond_12
    invoke-interface {v7}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->isCurrentStreamFinal()Z

    move-result v8

    if-nez v8, :cond_15

    .line 1463
    iget-object v8, v4, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->selections:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectionArray;

    invoke-virtual {v8, v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectionArray;->get(I)Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelection;

    move-result-object v8

    .line 1464
    invoke-virtual {v4, v6}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->isRendererEnabled(I)Z

    move-result v9

    .line 1465
    iget-object v10, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererCapabilities:[Lcom/mbridge/msdk/playercommon/exoplayer2/RendererCapabilities;

    aget-object v10, v10, v6

    invoke-interface {v10}, Lcom/mbridge/msdk/playercommon/exoplayer2/RendererCapabilities;->getTrackType()I

    move-result v10

    const/4 v11, 0x5

    if-ne v10, v11, :cond_13

    move v10, v3

    goto :goto_9

    :cond_13
    move v10, v1

    .line 1466
    :goto_9
    iget-object v11, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->rendererConfigurations:[Lcom/mbridge/msdk/playercommon/exoplayer2/RendererConfiguration;

    aget-object v11, v11, v6

    .line 1467
    iget-object v12, v4, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->rendererConfigurations:[Lcom/mbridge/msdk/playercommon/exoplayer2/RendererConfiguration;

    aget-object v12, v12, v6

    if-eqz v9, :cond_14

    .line 1468
    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/playercommon/exoplayer2/RendererConfiguration;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_14

    if-nez v10, :cond_14

    .line 1475
    invoke-static {v8}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->getFormats(Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelection;)[Lcom/mbridge/msdk/playercommon/exoplayer2/Format;

    move-result-object v8

    .line 1476
    iget-object v9, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->sampleStreams:[Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;

    aget-object v9, v9, v6

    .line 1477
    invoke-virtual {v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->getRendererOffset()J

    move-result-wide v10

    .line 1476
    invoke-interface {v7, v8, v9, v10, v11}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->replaceStream([Lcom/mbridge/msdk/playercommon/exoplayer2/Format;Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;J)V

    goto :goto_b

    .line 1484
    :cond_14
    :goto_a
    invoke-interface {v7}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->setCurrentStreamFinal()V

    :cond_15
    :goto_b
    add-int/lit8 v6, v6, 0x1

    goto :goto_8

    :cond_16
    :goto_c
    return-void
.end method

.method private updatePlaybackPositions()V
    .locals 8
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 469
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->hasPlayingPeriod()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 474
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    .line 475
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->mediaPeriod:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;

    invoke-interface {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;->readDiscontinuity()J

    move-result-wide v4

    const-wide v1, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v1, v4, v1

    if-eqz v1, :cond_1

    .line 477
    invoke-direct {p0, v4, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->resetRendererPosition(J)V

    .line 480
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    cmp-long v1, v4, v1

    if-eqz v1, :cond_2

    .line 481
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v3, v2, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->periodId:Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;

    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v6, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->contentPositionUs:J

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->fromNewPosition(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource$MediaPeriodId;JJ)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 483
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfoUpdate:Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;

    const/4 v2, 0x4

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$PlaybackInfoUpdate;->setPositionDiscontinuity(I)V

    goto :goto_0

    .line 486
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->mediaClock:Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/DefaultMediaClock;->syncAndGetPositionUs()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->rendererPositionUs:J

    .line 487
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->toPeriodTime(J)J

    move-result-wide v1

    .line 488
    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-wide v3, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    invoke-direct {p0, v3, v4, v1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeTriggerPendingMessages(JJ)V

    .line 489
    iget-object v3, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iput-wide v1, v3, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->positionUs:J

    .line 493
    :cond_2
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enabledRenderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v2, v2

    if-nez v2, :cond_3

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->info:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;

    iget-wide v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodInfo;->durationUs:J

    goto :goto_1

    :cond_3
    const/4 v2, 0x1

    .line 496
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->getBufferedPositionUs(Z)J

    move-result-wide v2

    :goto_1
    iput-wide v2, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->bufferedPositionUs:J

    return-void
.end method

.method private updatePlayingPeriodRenderers(Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;)V
    .locals 8
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;
        }
    .end annotation

    .line 1560
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getPlayingPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    if-eqz v0, :cond_6

    if-ne p1, v0, :cond_0

    goto :goto_2

    .line 1565
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v1, v1

    new-array v1, v1, [Z

    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    .line 1566
    :goto_0
    iget-object v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->renderers:[Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;

    array-length v6, v5

    if-ge v3, v6, :cond_5

    .line 1567
    aget-object v5, v5, v3

    .line 1568
    invoke-interface {v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->getState()I

    move-result v6

    if-eqz v6, :cond_1

    const/4 v6, 0x1

    goto :goto_1

    :cond_1
    move v6, v2

    :goto_1
    aput-boolean v6, v1, v3

    .line 1569
    iget-object v6, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    invoke-virtual {v6, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->isRendererEnabled(I)Z

    move-result v6

    if-eqz v6, :cond_2

    add-int/lit8 v4, v4, 0x1

    .line 1572
    :cond_2
    aget-boolean v6, v1, v3

    if-eqz v6, :cond_4

    iget-object v6, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    .line 1573
    invoke-virtual {v6, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->isRendererEnabled(I)Z

    move-result v6

    if-eqz v6, :cond_3

    .line 1574
    invoke-interface {v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->isCurrentStreamFinal()Z

    move-result v6

    if-eqz v6, :cond_4

    .line 1575
    invoke-interface {v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;->getStream()Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;

    move-result-object v6

    iget-object v7, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->sampleStreams:[Lcom/mbridge/msdk/playercommon/exoplayer2/source/SampleStream;

    aget-object v7, v7, v3

    if-ne v6, v7, :cond_4

    .line 1579
    :cond_3
    invoke-direct {p0, v5}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->disableRenderer(Lcom/mbridge/msdk/playercommon/exoplayer2/Renderer;)V

    :cond_4
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 1582
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    iget-object v2, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackGroups:Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;

    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    .line 1583
    invoke-virtual {p1, v2, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;->copyWithTrackInfo(Lcom/mbridge/msdk/playercommon/exoplayer2/source/TrackGroupArray;Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;)Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->playbackInfo:Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackInfo;

    .line 1585
    invoke-direct {p0, v1, v4}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->enableRenderers([ZI)V

    :cond_6
    :goto_2
    return-void
.end method

.method private updateTrackSelectionPlaybackSpeed(F)V
    .locals 5

    .line 1078
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->queue:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodQueue;->getFrontPeriod()Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    move-result-object v0

    :goto_0
    if-eqz v0, :cond_2

    .line 1080
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    if-eqz v1, :cond_1

    .line 1081
    iget-object v1, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->trackSelectorResult:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;

    iget-object v1, v1, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectorResult;->selections:Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectionArray;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelectionArray;->getAll()[Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelection;

    move-result-object v1

    .line 1082
    array-length v2, v1

    const/4 v3, 0x0

    :goto_1
    if-ge v3, v2, :cond_1

    aget-object v4, v1, v3

    if-eqz v4, :cond_0

    .line 1084
    invoke-interface {v4, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/trackselection/TrackSelection;->onPlaybackSpeed(F)V

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    .line 1088
    :cond_1
    iget-object v0, v0, Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;->next:Lcom/mbridge/msdk/playercommon/exoplayer2/MediaPeriodHolder;

    goto :goto_0

    :cond_2
    return-void
.end method


# virtual methods
.method public final getPlaybackLooper()Landroid/os/Looper;
    .locals 1

    .line 246
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->internalPlaybackThread:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v0

    return-object v0
.end method

.method public final handleMessage(Landroid/os/Message;)Z
    .locals 6

    const-string v0, "ExoPlayerImplInternal"

    const/4 v1, 0x2

    const/4 v2, 0x1

    const/4 v3, 0x0

    .line 290
    :try_start_0
    iget v4, p1, Landroid/os/Message;->what:I

    packed-switch v4, :pswitch_data_0

    return v3

    .line 337
    :pswitch_0
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->sendMessageToTargetThread(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V

    goto/16 :goto_5

    .line 334
    :pswitch_1
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->sendMessageInternal(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V

    goto/16 :goto_5

    .line 304
    :pswitch_2
    iget p1, p1, Landroid/os/Message;->arg1:I

    if-eqz p1, :cond_0

    move p1, v2

    goto :goto_0

    :cond_0
    move p1, v3

    :goto_0
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setShuffleModeEnabledInternal(Z)V

    goto/16 :goto_5

    .line 301
    :pswitch_3
    iget p1, p1, Landroid/os/Message;->arg1:I

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setRepeatModeInternal(I)V

    goto/16 :goto_5

    .line 331
    :pswitch_4
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->reselectTracksInternal()V

    goto/16 :goto_5

    .line 328
    :pswitch_5
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handleContinueLoadingRequested(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;)V

    goto/16 :goto_5

    .line 322
    :pswitch_6
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handlePeriodPrepared(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;)V

    goto/16 :goto_5

    .line 325
    :pswitch_7
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$MediaSourceRefreshInfo;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handleSourceInfoRefreshed(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$MediaSourceRefreshInfo;)V

    goto :goto_5

    .line 340
    :pswitch_8
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->releaseInternal()V

    return v2

    .line 319
    :pswitch_9
    iget p1, p1, Landroid/os/Message;->arg1:I

    if-eqz p1, :cond_1

    move p1, v2

    goto :goto_1

    :cond_1
    move p1, v3

    :goto_1
    invoke-direct {p0, p1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->stopInternal(ZZ)V

    goto :goto_5

    .line 316
    :pswitch_a
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/mbridge/msdk/playercommon/exoplayer2/SeekParameters;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setSeekParametersInternal(Lcom/mbridge/msdk/playercommon/exoplayer2/SeekParameters;)V

    goto :goto_5

    .line 313
    :pswitch_b
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setPlaybackParametersInternal(Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;)V

    goto :goto_5

    .line 310
    :pswitch_c
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->seekToInternal(Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;)V

    goto :goto_5

    .line 307
    :pswitch_d
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->doSomeWork()V

    goto :goto_5

    .line 298
    :pswitch_e
    iget p1, p1, Landroid/os/Message;->arg1:I

    if-eqz p1, :cond_2

    move p1, v2

    goto :goto_2

    :cond_2
    move p1, v3

    :goto_2
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->setPlayWhenReadyInternal(Z)V

    goto :goto_5

    .line 292
    :pswitch_f
    iget-object v4, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v4, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;

    iget v5, p1, Landroid/os/Message;->arg1:I

    if-eqz v5, :cond_3

    move v5, v2

    goto :goto_3

    :cond_3
    move v5, v3

    :goto_3
    iget p1, p1, Landroid/os/Message;->arg2:I

    if-eqz p1, :cond_4

    move p1, v2

    goto :goto_4

    :cond_4
    move p1, v3

    :goto_4
    invoke-direct {p0, v4, v5, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->prepareInternal(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;ZZ)V

    .line 346
    :goto_5
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeNotifyPlaybackInfoChanged()V
    :try_end_0
    .catch Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_6

    :catch_0
    move-exception p1

    const-string v4, "Internal runtime error."

    .line 358
    invoke-static {v0, v4, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 359
    invoke-direct {p0, v3, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->stopInternal(ZZ)V

    .line 360
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->eventHandler:Landroid/os/Handler;

    invoke-static {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;->createForUnexpected(Ljava/lang/RuntimeException;)Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    .line 361
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    .line 362
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeNotifyPlaybackInfoChanged()V

    goto :goto_6

    :catch_1
    move-exception p1

    const-string v4, "Source error."

    .line 353
    invoke-static {v0, v4, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 354
    invoke-direct {p0, v3, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->stopInternal(ZZ)V

    .line 355
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->eventHandler:Landroid/os/Handler;

    invoke-static {p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;->createForSource(Ljava/io/IOException;)Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlaybackException;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    .line 356
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeNotifyPlaybackInfoChanged()V

    goto :goto_6

    :catch_2
    move-exception p1

    const-string v4, "Playback error."

    .line 348
    invoke-static {v0, v4, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 349
    invoke-direct {p0, v3, v3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->stopInternal(ZZ)V

    .line 350
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->eventHandler:Landroid/os/Handler;

    invoke-virtual {v0, v1, p1}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    .line 351
    invoke-direct {p0}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->maybeNotifyPlaybackInfoChanged()V

    :goto_6
    return v2

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public final onContinueLoadingRequested(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;)V
    .locals 2

    .line 266
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/16 v1, 0xa

    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final bridge synthetic onContinueLoadingRequested(Lcom/mbridge/msdk/playercommon/exoplayer2/source/SequenceableLoader;)V
    .locals 0

    .line 49
    check-cast p1, Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->onContinueLoadingRequested(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;)V

    return-void
.end method

.method public final onPlaybackParametersChanged(Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;)V
    .locals 2

    .line 280
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->eventHandler:Landroid/os/Handler;

    const/4 v1, 0x1

    invoke-virtual {v0, v1, p1}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/Message;->sendToTarget()V

    .line 281
    iget p1, p1, Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;->speed:F

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->updateTrackSelectionPlaybackSpeed(F)V

    return-void
.end method

.method public final onPrepared(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaPeriod;)V
    .locals 2

    .line 261
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/16 v1, 0x9

    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final onSourceInfoRefreshed(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;Ljava/lang/Object;)V
    .locals 2

    .line 253
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    new-instance v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$MediaSourceRefreshInfo;

    invoke-direct {v1, p1, p2, p3}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$MediaSourceRefreshInfo;-><init>(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;Ljava/lang/Object;)V

    const/16 p1, 0x8

    invoke-interface {v0, p1, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    .line 254
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final onTrackSelectionsInvalidated()V
    .locals 2

    .line 273
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/16 v1, 0xb

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->sendEmptyMessage(I)Z

    return-void
.end method

.method public final prepare(Lcom/mbridge/msdk/playercommon/exoplayer2/source/MediaSource;ZZ)V
    .locals 2

    .line 179
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/4 v1, 0x0

    .line 180
    invoke-interface {v0, v1, p2, p3, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(IIILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    .line 181
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final declared-synchronized release()V
    .locals 7

    monitor-enter p0

    .line 224
    :try_start_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->released:Z

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->internalPlaybackThread:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->isAlive()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_2

    .line 227
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/4 v1, 0x7

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->sendEmptyMessage(I)Z

    .line 229
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->clock:Lcom/mbridge/msdk/playercommon/exoplayer2/util/Clock;

    invoke-interface {v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/Clock;->elapsedRealtime()J

    move-result-wide v0

    const-wide/16 v2, 0x1f4

    add-long/2addr v0, v2

    const/4 v4, 0x0

    .line 232
    :goto_0
    iget-boolean v5, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->released:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v5, :cond_1

    const-wide/16 v5, 0x0

    cmp-long v5, v2, v5

    if-lez v5, :cond_1

    .line 234
    :try_start_1
    invoke-virtual {p0, v2, v3}, Ljava/lang/Object;->wait(J)V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    const/4 v2, 0x1

    move v4, v2

    .line 238
    :goto_1
    :try_start_2
    iget-object v2, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->clock:Lcom/mbridge/msdk/playercommon/exoplayer2/util/Clock;

    invoke-interface {v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/Clock;->elapsedRealtime()J

    move-result-wide v2

    sub-long v2, v0, v2

    goto :goto_0

    :cond_1
    if-eqz v4, :cond_2

    .line 241
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->interrupt()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 243
    :cond_2
    monitor-exit p0

    return-void

    .line 225
    :cond_3
    :goto_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final seekTo(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;IJ)V
    .locals 2

    .line 197
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    new-instance v1, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;

    invoke-direct {v1, p1, p2, p3, p4}, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal$SeekPosition;-><init>(Lcom/mbridge/msdk/playercommon/exoplayer2/Timeline;IJ)V

    const/4 p1, 0x3

    invoke-interface {v0, p1, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    .line 198
    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final declared-synchronized sendMessage(Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;)V
    .locals 2

    monitor-enter p0

    .line 215
    :try_start_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->released:Z

    if-eqz v0, :cond_0

    const-string v0, "ExoPlayerImplInternal"

    const-string v1, "Ignoring messages sent after release."

    .line 216
    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    .line 217
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/playercommon/exoplayer2/PlayerMessage;->markAsProcessed(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 218
    monitor-exit p0

    return-void

    .line 220
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/16 v1, 0xe

    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 221
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final setPlayWhenReady(Z)V
    .locals 3

    .line 185
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-interface {v0, v2, p1, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(III)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final setPlaybackParameters(Lcom/mbridge/msdk/playercommon/exoplayer2/PlaybackParameters;)V
    .locals 2

    .line 202
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/4 v1, 0x4

    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final setRepeatMode(I)V
    .locals 3

    .line 189
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/16 v1, 0xc

    const/4 v2, 0x0

    invoke-interface {v0, v1, p1, v2}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(III)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final setSeekParameters(Lcom/mbridge/msdk/playercommon/exoplayer2/SeekParameters;)V
    .locals 2

    .line 206
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/4 v1, 0x5

    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final setShuffleModeEnabled(Z)V
    .locals 3

    .line 193
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/4 v1, 0x0

    const/16 v2, 0xd

    invoke-interface {v0, v2, p1, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(III)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method

.method public final stop(Z)V
    .locals 3

    .line 210
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/exoplayer2/ExoPlayerImplInternal;->handler:Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;

    const/4 v1, 0x0

    const/4 v2, 0x6

    invoke-interface {v0, v2, p1, v1}, Lcom/mbridge/msdk/playercommon/exoplayer2/util/HandlerWrapper;->obtainMessage(III)Landroid/os/Message;

    move-result-object p1

    invoke-virtual {p1}, Landroid/os/Message;->sendToTarget()V

    return-void
.end method
