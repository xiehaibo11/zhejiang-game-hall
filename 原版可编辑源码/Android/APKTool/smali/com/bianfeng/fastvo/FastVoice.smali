.class public Lcom/bianfeng/fastvo/FastVoice;
.super Ljava/lang/Object;
.source "FastVoice.java"

# interfaces
.implements Lcom/bianfeng/fastvo/ErrorCode;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;,
        Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;
    }
.end annotation


# static fields
.field public static final MININUM_TIME:J = 0x3e8L

.field private static durTime:J

.field private static isPlaying:Z

.field private static isRecording:Z

.field static player:Lcom/bianfeng/fastvo/audio/Player;

.field static recorder:Lcom/bianfeng/fastvo/audio/Recorder;

.field private static voiceList:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$002(Z)Z
    .locals 0

    .line 28
    sput-boolean p0, Lcom/bianfeng/fastvo/FastVoice;->isRecording:Z

    return p0
.end method

.method static synthetic access$100()J
    .locals 2

    .line 28
    sget-wide v0, Lcom/bianfeng/fastvo/FastVoice;->durTime:J

    return-wide v0
.end method

.method static synthetic access$200()Ljava/util/Map;
    .locals 1

    .line 28
    sget-object v0, Lcom/bianfeng/fastvo/FastVoice;->voiceList:Ljava/util/Map;

    return-object v0
.end method

.method static synthetic access$302(Z)Z
    .locals 0

    .line 28
    sput-boolean p0, Lcom/bianfeng/fastvo/FastVoice;->isPlaying:Z

    return p0
.end method

.method public static cancelRecord()V
    .locals 1

    .line 146
    sget-object v0, Lcom/bianfeng/fastvo/FastVoice;->recorder:Lcom/bianfeng/fastvo/audio/Recorder;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/Recorder;->isRecording()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 147
    sget-object v0, Lcom/bianfeng/fastvo/FastVoice;->recorder:Lcom/bianfeng/fastvo/audio/Recorder;

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/Recorder;->cancel()V

    :cond_0
    return-void
.end method

.method public static init(Landroid/content/Context;)V
    .locals 1

    .line 47
    invoke-static {p0}, Lcom/bianfeng/fastvo/FastResource;->defaultDataDir(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/fastvo/util/FileUtil;->deleteDirectory(Ljava/lang/String;)Z

    .line 48
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/fastvo/FastResource;->regist(Landroid/content/Context;)V

    .line 49
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bianfeng/fastvo/FastVoice;->voiceList:Ljava/util/Map;

    .line 51
    invoke-static {p0}, Lcom/bianfeng/fastvo/action/OSSHelper;->init(Landroid/content/Context;)V

    return-void
.end method

.method public static isPlaying()Z
    .locals 1

    .line 222
    sget-boolean v0, Lcom/bianfeng/fastvo/FastVoice;->isPlaying:Z

    return v0
.end method

.method public static isRecording()Z
    .locals 1

    .line 226
    sget-boolean v0, Lcom/bianfeng/fastvo/FastVoice;->isRecording:Z

    return v0
.end method

.method public static startPlay(Lcom/bianfeng/fastvo/audio/PlayCallback;Ljava/lang/String;)V
    .locals 3

    .line 157
    sget-object v0, Lcom/bianfeng/fastvo/FastVoice;->voiceList:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "http"

    .line 159
    invoke-virtual {p1, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x1

    if-nez v1, :cond_0

    .line 160
    invoke-static {p0, p1, v2}, Lcom/bianfeng/fastvo/FastVoice;->startPlay(Lcom/bianfeng/fastvo/audio/PlayCallback;Ljava/lang/String;Z)V

    goto :goto_0

    .line 161
    :cond_0
    invoke-static {v0}, Lcom/bianfeng/fastvo/util/FileUtil;->isFileExist(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 162
    invoke-static {p0, v0, v2}, Lcom/bianfeng/fastvo/FastVoice;->startPlay(Lcom/bianfeng/fastvo/audio/PlayCallback;Ljava/lang/String;Z)V

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    .line 164
    invoke-static {p0, p1, v0}, Lcom/bianfeng/fastvo/FastVoice;->startPlay(Lcom/bianfeng/fastvo/audio/PlayCallback;Ljava/lang/String;Z)V

    :goto_0
    return-void
.end method

.method public static startPlay(Lcom/bianfeng/fastvo/audio/PlayCallback;Ljava/lang/String;Z)V
    .locals 3

    .line 175
    sget-boolean v0, Lcom/bianfeng/fastvo/FastVoice;->isPlaying:Z

    const/4 v1, 0x1

    if-nez v0, :cond_5

    sget-object v0, Lcom/bianfeng/fastvo/FastVoice;->player:Lcom/bianfeng/fastvo/audio/Player;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/Player;->isPlaying()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_2

    .line 183
    :cond_0
    sput-boolean v1, Lcom/bianfeng/fastvo/FastVoice;->isPlaying:Z

    .line 185
    sget-object v0, Lcom/bianfeng/fastvo/FastVoice;->player:Lcom/bianfeng/fastvo/audio/Player;

    if-eqz v0, :cond_1

    .line 186
    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/Player;->release()V

    const/4 v0, 0x0

    .line 187
    sput-object v0, Lcom/bianfeng/fastvo/FastVoice;->player:Lcom/bianfeng/fastvo/audio/Player;

    .line 190
    :cond_1
    invoke-static {p1}, Lcom/bianfeng/fastvo/util/FileUtil;->getSuffix(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v2, ".spx"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz p2, :cond_4

    .line 193
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result p2

    if-eqz p2, :cond_3

    if-nez v0, :cond_2

    .line 194
    new-instance p2, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;

    invoke-direct {p2, p1}, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;-><init>(Ljava/lang/String;)V

    sput-object p2, Lcom/bianfeng/fastvo/FastVoice;->player:Lcom/bianfeng/fastvo/audio/Player;

    goto :goto_0

    .line 195
    :cond_2
    new-instance p2, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;

    invoke-direct {p2, p1}, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;-><init>(Ljava/lang/String;)V

    sput-object p2, Lcom/bianfeng/fastvo/FastVoice;->player:Lcom/bianfeng/fastvo/audio/Player;

    .line 196
    :goto_0
    sget-object p1, Lcom/bianfeng/fastvo/FastVoice;->player:Lcom/bianfeng/fastvo/audio/Player;

    new-instance p2, Lcom/bianfeng/fastvo/FastVoice$1;

    invoke-direct {p2, p0}, Lcom/bianfeng/fastvo/FastVoice$1;-><init>(Lcom/bianfeng/fastvo/audio/PlayCallback;)V

    invoke-interface {p1, p2}, Lcom/bianfeng/fastvo/audio/Player;->play(Lcom/bianfeng/fastvo/audio/AudioPlayCallback;)V

    goto :goto_1

    :cond_3
    const-string p1, "\u672a\u627e\u5230\u672c\u5730\u8bed\u97f3\u6587\u4ef6"

    .line 213
    invoke-interface {p0, v1, p1}, Lcom/bianfeng/fastvo/audio/PlayCallback;->onPlayFail(ILjava/lang/String;)V

    goto :goto_1

    .line 216
    :cond_4
    new-instance p2, Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;

    invoke-direct {p2, p0}, Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;-><init>(Lcom/bianfeng/fastvo/audio/PlayCallback;)V

    .line 217
    invoke-virtual {p2, p1}, Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;->start(Ljava/lang/String;)V

    :goto_1
    return-void

    :cond_5
    :goto_2
    const-string p1, "--------------------------------------"

    .line 176
    invoke-static {p1}, Lcom/bianfeng/fastvo/util/LogUtil;->e(Ljava/lang/String;)V

    const-string p2, "-- \u4e0a\u6b21\u64ad\u653e\u672a\u7ed3\u675f\u65e0\u6cd5\u6267\u884c\u65b0\u7684\u64ad\u653e\u64cd\u4f5c --"

    .line 177
    invoke-static {p2}, Lcom/bianfeng/fastvo/util/LogUtil;->e(Ljava/lang/String;)V

    .line 178
    invoke-static {p1}, Lcom/bianfeng/fastvo/util/LogUtil;->e(Ljava/lang/String;)V

    const-string p1, "\u4e0a\u6b21\u64ad\u653e\u672a\u7ed3\u675f\u65e0\u6cd5\u6267\u884c\u65b0\u7684\u64ad\u653e\u64cd\u4f5c"

    .line 179
    invoke-interface {p0, v1, p1}, Lcom/bianfeng/fastvo/audio/PlayCallback;->onPlayFail(ILjava/lang/String;)V

    return-void
.end method

.method public static startRecord(Lcom/bianfeng/fastvo/audio/RecordCallback;)V
    .locals 7

    .line 59
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sput-wide v0, Lcom/bianfeng/fastvo/FastVoice;->durTime:J

    .line 61
    sget-object v0, Lcom/bianfeng/fastvo/FastVoice;->recorder:Lcom/bianfeng/fastvo/audio/Recorder;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/Recorder;->isRecording()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "--------------------------------------"

    .line 62
    invoke-static {v0}, Lcom/bianfeng/fastvo/util/LogUtil;->e(Ljava/lang/String;)V

    const-string v1, "-- \u4e0a\u6b21\u5f55\u97f3\u672a\u7ed3\u675f\u65e0\u6cd5\u6267\u884c\u65b0\u7684\u5f55\u97f3\u64cd\u4f5c --"

    .line 63
    invoke-static {v1}, Lcom/bianfeng/fastvo/util/LogUtil;->e(Ljava/lang/String;)V

    .line 64
    invoke-static {v0}, Lcom/bianfeng/fastvo/util/LogUtil;->e(Ljava/lang/String;)V

    const/4 v0, 0x3

    const-string v1, "\u4e0a\u6b21\u5f55\u97f3\u672a\u7ed3\u675f\u65e0\u6cd5\u6267\u884c\u65b0\u7684\u5f55\u97f3\u64cd\u4f5c"

    .line 65
    invoke-interface {p0, v0, v1}, Lcom/bianfeng/fastvo/audio/RecordCallback;->onRecordFail(ILjava/lang/String;)V

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 69
    sput-boolean v0, Lcom/bianfeng/fastvo/FastVoice;->isRecording:Z

    .line 70
    invoke-static {}, Lcom/bianfeng/fastvo/FastConfig;->getQuality()I

    move-result v1

    .line 71
    invoke-static {}, Lcom/bianfeng/fastvo/FastConfig;->isSpeex()Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v3, ".spx"

    goto :goto_0

    :cond_1
    const-string v3, ".m4a"

    .line 74
    :goto_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "R"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/fastvo/FastResource;->mkDataFile(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 75
    invoke-static {v3}, Lcom/bianfeng/fastvo/util/FileUtil;->deleteFile(Ljava/lang/String;)Z

    .line 77
    invoke-static {v3}, Lcom/bianfeng/fastvo/FastResource;->createNewFile(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_2

    const-string v1, "\u6587\u4ef6\u76ee\u5f55\u88ab\u5360\u7528\uff0c\u521b\u5efa\u6587\u4ef6\u5931\u8d25"

    .line 78
    invoke-interface {p0, v0, v1}, Lcom/bianfeng/fastvo/audio/RecordCallback;->onRecordFail(ILjava/lang/String;)V

    return-void

    :cond_2
    if-nez v2, :cond_3

    .line 81
    new-instance v0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;

    invoke-direct {v0, v3}, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/bianfeng/fastvo/FastVoice;->recorder:Lcom/bianfeng/fastvo/audio/Recorder;

    goto :goto_1

    .line 82
    :cond_3
    new-instance v0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;

    invoke-direct {v0, v3, v1}, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/bianfeng/fastvo/FastVoice;->recorder:Lcom/bianfeng/fastvo/audio/Recorder;

    .line 83
    :goto_1
    sget-object v0, Lcom/bianfeng/fastvo/FastVoice;->recorder:Lcom/bianfeng/fastvo/audio/Recorder;

    new-instance v1, Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;

    invoke-direct {v1, p0}, Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;-><init>(Lcom/bianfeng/fastvo/audio/RecordCallback;)V

    invoke-interface {v0, v1}, Lcom/bianfeng/fastvo/audio/Recorder;->start(Lcom/bianfeng/fastvo/audio/AudioRecordCallback;)V

    return-void
.end method

.method public static stopPlay()V
    .locals 1

    const/4 v0, 0x0

    .line 293
    sput-boolean v0, Lcom/bianfeng/fastvo/FastVoice;->isPlaying:Z

    .line 294
    sget-object v0, Lcom/bianfeng/fastvo/FastVoice;->player:Lcom/bianfeng/fastvo/audio/Player;

    if-eqz v0, :cond_0

    .line 295
    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/Player;->release()V

    const/4 v0, 0x0

    .line 296
    sput-object v0, Lcom/bianfeng/fastvo/FastVoice;->player:Lcom/bianfeng/fastvo/audio/Player;

    :cond_0
    return-void
.end method

.method public static stopRecord()V
    .locals 4

    .line 135
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/bianfeng/fastvo/FastVoice;->durTime:J

    sub-long/2addr v0, v2

    sput-wide v0, Lcom/bianfeng/fastvo/FastVoice;->durTime:J

    .line 137
    sget-object v0, Lcom/bianfeng/fastvo/FastVoice;->recorder:Lcom/bianfeng/fastvo/audio/Recorder;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/Recorder;->isRecording()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 138
    sget-object v0, Lcom/bianfeng/fastvo/FastVoice;->recorder:Lcom/bianfeng/fastvo/audio/Recorder;

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/Recorder;->release()V

    :cond_0
    return-void
.end method
