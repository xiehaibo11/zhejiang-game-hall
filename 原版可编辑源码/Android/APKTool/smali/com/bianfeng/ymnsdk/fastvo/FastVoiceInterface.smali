.class public Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "FastVoiceInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field private static final ADD_PERMISSION_FAIL:I = 0x6591

.field private static final ADD_PERMISSION_SUCCESS:I = 0x6590

.field public static final FASTVOICE_FUNCTION_CANCEL_RECORD:Ljava/lang/String; = "fastvo_cancel_record"

.field public static final FASTVOICE_FUNCTION_START_NATIVE_RECORD:Ljava/lang/String; = "fastvo_start_native_record"

.field public static final FASTVOICE_FUNCTION_START_PLAY:Ljava/lang/String; = "fastvo_start_play"

.field public static final FASTVOICE_FUNCTION_START_PLAY_LOCAL:Ljava/lang/String; = "fastvo_start_play_local"

.field public static final FASTVOICE_FUNCTION_START_RECORD:Ljava/lang/String; = "fastvo_start_record"

.field public static final FASTVOICE_FUNCTION_STOP_PLAY:Ljava/lang/String; = "fastvo_stop_play"

.field public static final FASTVOICE_FUNCTION_STOP_RECORD:Ljava/lang/String; = "fastvo_stop_record"


# instance fields
.field private speakerManager:Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;)Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->speakerManager:Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;

    return-object p0
.end method

.method private startPlay(Ljava/lang/String;)V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "fastvo_start_play"
    .end annotation

    const-string v0, "0.5"

    .line 185
    invoke-direct {p0, p1, v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->startPlay(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private startPlay(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "fastvo_start_play"
    .end annotation

    .line 189
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f00\u59cb\u64ad\u653e--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 190
    invoke-static {}, Lcom/bianfeng/fastvo/FastVoice;->isRecording()Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 p1, 0x57d

    const-string p2, "\u8bed\u97f3\u64ad\u653e\u5931\u8d25\uff0c\u6b63\u5728\u5f55\u97f3"

    .line 191
    invoke-virtual {p0, p1, p2}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    return-void

    .line 194
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->speakerManager:Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;

    invoke-virtual {v0, p2}, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->openSpeakerphoneOn(Ljava/lang/String;)V

    .line 195
    new-instance p2, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$2;

    invoke-direct {p2, p0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$2;-><init>(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;)V

    invoke-static {p2, p1}, Lcom/bianfeng/fastvo/FastVoice;->startPlay(Lcom/bianfeng/fastvo/audio/PlayCallback;Ljava/lang/String;)V

    return-void
.end method

.method private startRecord()V
    .locals 2

    .line 105
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;-><init>(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    const-string v1, "android.permission.RECORD_AUDIO"

    .line 161
    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    const/16 v1, 0x400

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z

    return-void
.end method


# virtual methods
.method public cancelRecord()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "fastvo_cancel_record"
    .end annotation

    .line 173
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->speakerManager:Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->openVolume()V

    .line 174
    invoke-static {}, Lcom/bianfeng/fastvo/FastVoice;->cancelRecord()V

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "26"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "fastvo"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0x23

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "1.0.2"

    return-object v0
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 2

    .line 55
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 56
    invoke-static {p0}, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->init(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;)V

    .line 57
    invoke-static {p1}, Lcom/bianfeng/fastvo/FastVoice;->init(Landroid/content/Context;)V

    const-string v0, "TD_SDK_APP_ID"

    .line 58
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/fastvo/FastConfig;->setAppId(Ljava/lang/String;)V

    const-string v0, "TD_CHANNEL_ID"

    .line 59
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/fastvo/FastConfig;->setChannel(Ljava/lang/String;)V

    .line 60
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/fastvo/FastConfig;->setPlatformId(Ljava/lang/String;)V

    const-string v0, "FASTVO_QUALITY"

    .line 61
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 62
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/bianfeng/fastvo/FastConfig;->setQuality(I)V

    :cond_0
    const-string v0, "FASTVO_SAMPLE_RATE"

    .line 64
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 65
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Lcom/bianfeng/fastvo/FastConfig;->setSampleRate(I)V

    .line 67
    :cond_1
    new-instance v0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->speakerManager:Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;

    return-void
.end method

.method public onLogin(Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 74
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onLogin(Ljava/util/Map;)V

    const-string v0, "platformUserId"

    .line 75
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-static {p1}, Lcom/bianfeng/fastvo/FastConfig;->setUid(Ljava/lang/String;)V

    return-void
.end method

.method public startNativeRecord()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "fastvo_start_native_record"
    .end annotation

    const/4 v0, 0x0

    .line 93
    invoke-static {v0}, Lcom/bianfeng/fastvo/FastConfig;->setSpeex(Z)V

    .line 94
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->startRecord()V

    return-void
.end method

.method public startNativeRecord(Ljava/lang/String;)V
    .locals 0
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "fastvo_start_native_record"
    .end annotation

    .line 99
    invoke-static {p1}, Lcom/bianfeng/fastvo/FastConfig;->setOpenId(Ljava/lang/String;)V

    const/4 p1, 0x0

    .line 100
    invoke-static {p1}, Lcom/bianfeng/fastvo/FastConfig;->setSpeex(Z)V

    .line 101
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->startRecord()V

    return-void
.end method

.method public startSpeexRecord()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "fastvo_start_record"
    .end annotation

    const/4 v0, 0x1

    .line 80
    invoke-static {v0}, Lcom/bianfeng/fastvo/FastConfig;->setSpeex(Z)V

    .line 81
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->startRecord()V

    return-void
.end method

.method public startSpeexRecord(Ljava/lang/String;)V
    .locals 0
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "fastvo_start_record"
    .end annotation

    .line 86
    invoke-static {p1}, Lcom/bianfeng/fastvo/FastConfig;->setOpenId(Ljava/lang/String;)V

    const/4 p1, 0x1

    .line 87
    invoke-static {p1}, Lcom/bianfeng/fastvo/FastConfig;->setSpeex(Z)V

    .line 88
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->startRecord()V

    return-void
.end method

.method public stopPlay()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "fastvo_stop_play"
    .end annotation

    .line 179
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->speakerManager:Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->closeSpeakerphoneOn()V

    .line 180
    invoke-static {}, Lcom/bianfeng/fastvo/FastVoice;->stopPlay()V

    return-void
.end method

.method public stopRecord()V
    .locals 1
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "fastvo_stop_record"
    .end annotation

    .line 167
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->speakerManager:Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->openVolume()V

    .line 168
    invoke-static {}, Lcom/bianfeng/fastvo/FastVoice;->stopRecord()V

    return-void
.end method
