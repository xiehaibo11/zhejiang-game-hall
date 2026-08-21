.class final Lcom/tkay/expressad/exoplayer/f/d$e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/f/d$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/f/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "e"
.end annotation


# instance fields
.field private final a:I

.field private b:[Landroid/media/MediaCodecInfo;


# direct methods
.method public constructor <init>(Z)V
    .locals 0

    .line 564
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 565
    iput p1, p0, Lcom/tkay/expressad/exoplayer/f/d$e;->a:I

    return-void
.end method

.method private c()V
    .locals 2

    .line 591
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/d$e;->b:[Landroid/media/MediaCodecInfo;

    if-nez v0, :cond_0

    .line 592
    new-instance v0, Landroid/media/MediaCodecList;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/f/d$e;->a:I

    invoke-direct {v0, v1}, Landroid/media/MediaCodecList;-><init>(I)V

    invoke-virtual {v0}, Landroid/media/MediaCodecList;->getCodecInfos()[Landroid/media/MediaCodecInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/f/d$e;->b:[Landroid/media/MediaCodecInfo;

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 570
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/d$e;->c()V

    .line 571
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/d$e;->b:[Landroid/media/MediaCodecInfo;

    array-length v0, v0

    return v0
.end method

.method public final a(I)Landroid/media/MediaCodecInfo;
    .locals 1

    .line 576
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/d$e;->c()V

    .line 577
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/f/d$e;->b:[Landroid/media/MediaCodecInfo;

    aget-object p1, v0, p1

    return-object p1
.end method

.method public final a(Ljava/lang/String;Landroid/media/MediaCodecInfo$CodecCapabilities;)Z
    .locals 0

    const-string p1, "secure-playback"

    .line 587
    invoke-virtual {p2, p1}, Landroid/media/MediaCodecInfo$CodecCapabilities;->isFeatureSupported(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public final b()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method
