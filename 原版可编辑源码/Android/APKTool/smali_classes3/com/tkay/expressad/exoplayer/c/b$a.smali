.class final Lcom/tkay/expressad/exoplayer/c/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/c/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field private final a:Landroid/media/MediaCodec$CryptoInfo;

.field private final b:Landroid/media/MediaCodec$CryptoInfo$Pattern;


# direct methods
.method private constructor <init>(Landroid/media/MediaCodec$CryptoInfo;)V
    .locals 1

    .line 128
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 129
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/c/b$a;->a:Landroid/media/MediaCodec$CryptoInfo;

    .line 130
    new-instance p1, Landroid/media/MediaCodec$CryptoInfo$Pattern;

    const/4 v0, 0x0

    invoke-direct {p1, v0, v0}, Landroid/media/MediaCodec$CryptoInfo$Pattern;-><init>(II)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/c/b$a;->b:Landroid/media/MediaCodec$CryptoInfo$Pattern;

    return-void
.end method

.method synthetic constructor <init>(Landroid/media/MediaCodec$CryptoInfo;B)V
    .locals 0

    .line 123
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/c/b$a;-><init>(Landroid/media/MediaCodec$CryptoInfo;)V

    return-void
.end method

.method private a(II)V
    .locals 1

    .line 134
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b$a;->b:Landroid/media/MediaCodec$CryptoInfo$Pattern;

    invoke-virtual {v0, p1, p2}, Landroid/media/MediaCodec$CryptoInfo$Pattern;->set(II)V

    .line 135
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/b$a;->a:Landroid/media/MediaCodec$CryptoInfo;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/c/b$a;->b:Landroid/media/MediaCodec$CryptoInfo$Pattern;

    invoke-virtual {p1, p2}, Landroid/media/MediaCodec$CryptoInfo;->setPattern(Landroid/media/MediaCodec$CryptoInfo$Pattern;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/c/b$a;II)V
    .locals 1

    .line 1134
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b$a;->b:Landroid/media/MediaCodec$CryptoInfo$Pattern;

    invoke-virtual {v0, p1, p2}, Landroid/media/MediaCodec$CryptoInfo$Pattern;->set(II)V

    .line 1135
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/b$a;->a:Landroid/media/MediaCodec$CryptoInfo;

    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/c/b$a;->b:Landroid/media/MediaCodec$CryptoInfo$Pattern;

    invoke-virtual {p1, p0}, Landroid/media/MediaCodec$CryptoInfo;->setPattern(Landroid/media/MediaCodec$CryptoInfo$Pattern;)V

    return-void
.end method
