.class public final Lcom/tkay/expressad/exoplayer/c/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/c/b$a;
    }
.end annotation


# instance fields
.field public a:[B

.field public b:[B

.field public c:I

.field public d:[I

.field public e:[I

.field public f:I

.field public g:I

.field public h:I

.field private final i:Landroid/media/MediaCodec$CryptoInfo;

.field private final j:Lcom/tkay/expressad/exoplayer/c/b$a;


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 65
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 66
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/4 v1, 0x0

    const/16 v2, 0x10

    if-lt v0, v2, :cond_0

    .line 1104
    new-instance v0, Landroid/media/MediaCodec$CryptoInfo;

    invoke-direct {v0}, Landroid/media/MediaCodec$CryptoInfo;-><init>()V

    goto :goto_0

    :cond_0
    move-object v0, v1

    .line 66
    :goto_0
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    .line 67
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v2, 0x18

    if-lt v0, v2, :cond_1

    new-instance v1, Lcom/tkay/expressad/exoplayer/c/b$a;

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    const/4 v2, 0x0

    invoke-direct {v1, v0, v2}, Lcom/tkay/expressad/exoplayer/c/b$a;-><init>(Landroid/media/MediaCodec$CryptoInfo;B)V

    :cond_1
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/c/b;->j:Lcom/tkay/expressad/exoplayer/c/b$a;

    return-void
.end method

.method private static b()Landroid/media/MediaCodec$CryptoInfo;
    .locals 1

    .line 104
    new-instance v0, Landroid/media/MediaCodec$CryptoInfo;

    invoke-direct {v0}, Landroid/media/MediaCodec$CryptoInfo;-><init>()V

    return-object v0
.end method

.method private c()V
    .locals 3

    .line 111
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/c/b;->f:I

    iput v1, v0, Landroid/media/MediaCodec$CryptoInfo;->numSubSamples:I

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/b;->d:[I

    iput-object v1, v0, Landroid/media/MediaCodec$CryptoInfo;->numBytesOfClearData:[I

    .line 113
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/b;->e:[I

    iput-object v1, v0, Landroid/media/MediaCodec$CryptoInfo;->numBytesOfEncryptedData:[I

    .line 114
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/b;->b:[B

    iput-object v1, v0, Landroid/media/MediaCodec$CryptoInfo;->key:[B

    .line 115
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/b;->a:[B

    iput-object v1, v0, Landroid/media/MediaCodec$CryptoInfo;->iv:[B

    .line 116
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/c/b;->c:I

    iput v1, v0, Landroid/media/MediaCodec$CryptoInfo;->mode:I

    .line 117
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x18

    if-lt v0, v1, :cond_0

    .line 118
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b;->j:Lcom/tkay/expressad/exoplayer/c/b$a;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/c/b;->g:I

    iget v2, p0, Lcom/tkay/expressad/exoplayer/c/b;->h:I

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/c/b$a;->a(Lcom/tkay/expressad/exoplayer/c/b$a;II)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()Landroid/media/MediaCodec$CryptoInfo;
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    return-object v0
.end method

.method public final a(I[I[I[B[BIII)V
    .locals 0

    .line 75
    iput p1, p0, Lcom/tkay/expressad/exoplayer/c/b;->f:I

    .line 76
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/c/b;->d:[I

    .line 77
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/c/b;->e:[I

    .line 78
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/c/b;->b:[B

    .line 79
    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/c/b;->a:[B

    .line 80
    iput p6, p0, Lcom/tkay/expressad/exoplayer/c/b;->c:I

    .line 81
    iput p7, p0, Lcom/tkay/expressad/exoplayer/c/b;->g:I

    .line 82
    iput p8, p0, Lcom/tkay/expressad/exoplayer/c/b;->h:I

    .line 83
    sget p1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 p2, 0x10

    if-lt p1, p2, :cond_0

    .line 1111
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget p2, p0, Lcom/tkay/expressad/exoplayer/c/b;->f:I

    iput p2, p1, Landroid/media/MediaCodec$CryptoInfo;->numSubSamples:I

    .line 1112
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/c/b;->d:[I

    iput-object p2, p1, Landroid/media/MediaCodec$CryptoInfo;->numBytesOfClearData:[I

    .line 1113
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/c/b;->e:[I

    iput-object p2, p1, Landroid/media/MediaCodec$CryptoInfo;->numBytesOfEncryptedData:[I

    .line 1114
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/c/b;->b:[B

    iput-object p2, p1, Landroid/media/MediaCodec$CryptoInfo;->key:[B

    .line 1115
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/c/b;->a:[B

    iput-object p2, p1, Landroid/media/MediaCodec$CryptoInfo;->iv:[B

    .line 1116
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/b;->i:Landroid/media/MediaCodec$CryptoInfo;

    iget p2, p0, Lcom/tkay/expressad/exoplayer/c/b;->c:I

    iput p2, p1, Landroid/media/MediaCodec$CryptoInfo;->mode:I

    .line 1117
    sget p1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 p2, 0x18

    if-lt p1, p2, :cond_0

    .line 1118
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/b;->j:Lcom/tkay/expressad/exoplayer/c/b$a;

    iget p2, p0, Lcom/tkay/expressad/exoplayer/c/b;->g:I

    iget p3, p0, Lcom/tkay/expressad/exoplayer/c/b;->h:I

    invoke-static {p1, p2, p3}, Lcom/tkay/expressad/exoplayer/c/b$a;->a(Lcom/tkay/expressad/exoplayer/c/b$a;II)V

    :cond_0
    return-void
.end method
