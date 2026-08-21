.class final Lcom/tkay/expressad/exoplayer/f/d$d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/f/d$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/f/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "d"
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 599
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 599
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/f/d$d;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 603
    invoke-static {}, Landroid/media/MediaCodecList;->getCodecCount()I

    move-result v0

    return v0
.end method

.method public final a(I)Landroid/media/MediaCodecInfo;
    .locals 0

    .line 608
    invoke-static {p1}, Landroid/media/MediaCodecList;->getCodecInfoAt(I)Landroid/media/MediaCodecInfo;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/lang/String;Landroid/media/MediaCodecInfo$CodecCapabilities;)Z
    .locals 0

    const-string p2, "video/avc"

    .line 620
    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    return p1
.end method

.method public final b()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
