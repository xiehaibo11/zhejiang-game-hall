.class public Lcom/bianfeng/fastvo/util/FastovAppConextUtils;
.super Ljava/lang/Object;
.source "FastovAppConextUtils.java"


# static fields
.field private static final FASTOV_BUCKET_NAME:Ljava/lang/String; = "FASTOV_BUCKET_NAME"

.field private static final FASTOV_ENDPOINT_URL:Ljava/lang/String; = "FASTOV_ENDPOINT_URL"

.field private static final FASTOV_SIGN_URL:Ljava/lang/String; = "FASTVO_STSSERVER"

.field private static final KEY_BUCKET_NAME:Ljava/lang/String; = "asset-imeete"

.field private static final KEY_ENDPOINT:Ljava/lang/String; = "https://oss-cn-hangzhou.aliyuncs.com"

.field private static final KEY_SIGN_URL:Ljava/lang/String; = "https://api.bianfeng.com"

.field private static bucketName:Ljava/lang/String;

.field private static endpoint:Ljava/lang/String;

.field private static fastVoiceInterface:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

.field private static signUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getBucketName()Ljava/lang/String;
    .locals 1

    .line 49
    sget-object v0, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->bucketName:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 50
    sget-object v0, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->bucketName:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, "asset-imeete"

    return-object v0
.end method

.method public static getEndpoint()Ljava/lang/String;
    .locals 1

    .line 42
    sget-object v0, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->endpoint:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 43
    sget-object v0, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->endpoint:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, "https://oss-cn-hangzhou.aliyuncs.com"

    return-object v0
.end method

.method private static getMetaData(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 56
    sget-object v0, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->fastVoiceInterface:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getSignUrl()Ljava/lang/String;
    .locals 1

    .line 35
    sget-object v0, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->signUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 36
    sget-object v0, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->signUrl:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, "https://api.bianfeng.com"

    return-object v0
.end method

.method public static init(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;)V
    .locals 0

    .line 27
    sput-object p0, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->fastVoiceInterface:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    const-string p0, "FASTVO_STSSERVER"

    .line 28
    invoke-static {p0}, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->signUrl:Ljava/lang/String;

    const-string p0, "FASTOV_ENDPOINT_URL"

    .line 29
    invoke-static {p0}, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->endpoint:Ljava/lang/String;

    const-string p0, "FASTOV_BUCKET_NAME"

    .line 30
    invoke-static {p0}, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->getMetaData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/fastvo/util/FastovAppConextUtils;->bucketName:Ljava/lang/String;

    return-void
.end method
