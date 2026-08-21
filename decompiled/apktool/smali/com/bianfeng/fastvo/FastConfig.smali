.class public Lcom/bianfeng/fastvo/FastConfig;
.super Ljava/lang/Object;
.source "FastConfig.java"


# static fields
.field public static MAX_RECORD_TIME:I = 0xea60

.field public static final REQUEST_KEY:Ljava/lang/String; = "50027.fpftrrdlrs"

.field public static final REQUEST_SECRET:Ljava/lang/String; = "54d3c9ce57288b607d6f92661a8b6c8f"

.field private static appId:Ljava/lang/String; = null

.field private static channel:Ljava/lang/String; = null

.field private static isSpeex:Z = true

.field private static openId:Ljava/lang/String; = ""

.field private static platformId:Ljava/lang/String; = null

.field private static quality:I = 0x4

.field private static sampleRate:I = 0x3

.field private static uid:Ljava/lang/String; = ""


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getAppId()Ljava/lang/String;
    .locals 1

    .line 55
    sget-object v0, Lcom/bianfeng/fastvo/FastConfig;->appId:Ljava/lang/String;

    return-object v0
.end method

.method public static getChannel()Ljava/lang/String;
    .locals 1

    .line 75
    sget-object v0, Lcom/bianfeng/fastvo/FastConfig;->channel:Ljava/lang/String;

    return-object v0
.end method

.method public static getMaxRecordTime()I
    .locals 1

    .line 27
    sget v0, Lcom/bianfeng/fastvo/FastConfig;->MAX_RECORD_TIME:I

    return v0
.end method

.method public static getOpenId()Ljava/lang/String;
    .locals 1

    .line 91
    sget-object v0, Lcom/bianfeng/fastvo/FastConfig;->openId:Ljava/lang/String;

    return-object v0
.end method

.method public static getPlatformId()Ljava/lang/String;
    .locals 1

    .line 65
    sget-object v0, Lcom/bianfeng/fastvo/FastConfig;->platformId:Ljava/lang/String;

    return-object v0
.end method

.method public static getQuality()I
    .locals 1

    .line 43
    sget v0, Lcom/bianfeng/fastvo/FastConfig;->quality:I

    return v0
.end method

.method public static getSampleRate()I
    .locals 1

    .line 47
    sget v0, Lcom/bianfeng/fastvo/FastConfig;->sampleRate:I

    return v0
.end method

.method public static getUid()Ljava/lang/String;
    .locals 1

    .line 83
    sget-object v0, Lcom/bianfeng/fastvo/FastConfig;->uid:Ljava/lang/String;

    return-object v0
.end method

.method public static isSpeex()Z
    .locals 1

    .line 31
    sget-boolean v0, Lcom/bianfeng/fastvo/FastConfig;->isSpeex:Z

    return v0
.end method

.method public static setAppId(Ljava/lang/String;)V
    .locals 1

    .line 59
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, "0"

    .line 61
    :cond_0
    sput-object p0, Lcom/bianfeng/fastvo/FastConfig;->appId:Ljava/lang/String;

    return-void
.end method

.method public static setChannel(Ljava/lang/String;)V
    .locals 0

    .line 79
    sput-object p0, Lcom/bianfeng/fastvo/FastConfig;->channel:Ljava/lang/String;

    return-void
.end method

.method public static setOpenId(Ljava/lang/String;)V
    .locals 0

    .line 95
    sput-object p0, Lcom/bianfeng/fastvo/FastConfig;->openId:Ljava/lang/String;

    return-void
.end method

.method public static setPlatformId(Ljava/lang/String;)V
    .locals 1

    .line 69
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, "0"

    .line 71
    :cond_0
    sput-object p0, Lcom/bianfeng/fastvo/FastConfig;->platformId:Ljava/lang/String;

    return-void
.end method

.method public static setQuality(I)V
    .locals 0

    .line 39
    sput p0, Lcom/bianfeng/fastvo/FastConfig;->quality:I

    return-void
.end method

.method public static setSampleRate(I)V
    .locals 0

    .line 51
    sput p0, Lcom/bianfeng/fastvo/FastConfig;->sampleRate:I

    return-void
.end method

.method public static setSpeex(Z)V
    .locals 0

    .line 35
    sput-boolean p0, Lcom/bianfeng/fastvo/FastConfig;->isSpeex:Z

    return-void
.end method

.method public static setUid(Ljava/lang/String;)V
    .locals 0

    .line 87
    sput-object p0, Lcom/bianfeng/fastvo/FastConfig;->uid:Ljava/lang/String;

    return-void
.end method
