.class public Lcom/bianfeng/fastvo/audio/spx/Speex;
.super Ljava/lang/Object;
.source "Speex.java"


# static fields
.field private static final DEFAULT_COMPRESSION:I = 0x4

.field public static final QUALITY_11KBPS:I = 0x6

.field public static final QUALITY_15KBPS:I = 0x8

.field public static final QUALITY_4KBPS:I = 0x1

.field public static final QUALITY_6KBPS:I = 0x2

.field public static final QUALITY_8KBPS:I = 0x4

.field private static isOpened:Z


# instance fields
.field quality:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    :try_start_0
    const-string v0, "loadLibrary fastvo.so"

    .line 30
    invoke-static {v0}, Lcom/bianfeng/fastvo/util/LogUtil;->d(Ljava/lang/String;)V

    const-string v0, "fastvo"

    .line 31
    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 33
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected constructor <init>()V
    .locals 1

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x4

    .line 24
    iput v0, p0, Lcom/bianfeng/fastvo/audio/spx/Speex;->quality:I

    return-void
.end method


# virtual methods
.method public native close()V
.end method

.method public native decode([B[SI)I
.end method

.method public native encode([SI[BI)I
.end method

.method public native getFrameSize()I
.end method

.method public getQuality()I
    .locals 1

    .line 53
    iget v0, p0, Lcom/bianfeng/fastvo/audio/spx/Speex;->quality:I

    return v0
.end method

.method public init()V
    .locals 1

    const/4 v0, 0x4

    .line 41
    invoke-virtual {p0, v0}, Lcom/bianfeng/fastvo/audio/spx/Speex;->open(I)I

    return-void
.end method

.method public init(I)V
    .locals 1

    .line 45
    iput p1, p0, Lcom/bianfeng/fastvo/audio/spx/Speex;->quality:I

    .line 46
    sget-boolean v0, Lcom/bianfeng/fastvo/audio/spx/Speex;->isOpened:Z

    if-eqz v0, :cond_0

    .line 47
    invoke-virtual {p0}, Lcom/bianfeng/fastvo/audio/spx/Speex;->close()V

    .line 48
    :cond_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/fastvo/audio/spx/Speex;->open(I)I

    const/4 p1, 0x1

    .line 49
    sput-boolean p1, Lcom/bianfeng/fastvo/audio/spx/Speex;->isOpened:Z

    return-void
.end method

.method public native open(I)I
.end method
