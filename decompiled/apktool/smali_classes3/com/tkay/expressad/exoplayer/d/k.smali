.class public final Lcom/tkay/expressad/exoplayer/d/k;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/d/i;


# instance fields
.field private final a:Landroid/media/MediaCrypto;

.field private final b:Z


# direct methods
.method private constructor <init>(Landroid/media/MediaCrypto;)V
    .locals 1

    const/4 v0, 0x0

    .line 36
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/d/k;-><init>(Landroid/media/MediaCrypto;Z)V

    return-void
.end method

.method public constructor <init>(Landroid/media/MediaCrypto;Z)V
    .locals 0

    .line 47
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 48
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/media/MediaCrypto;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/d/k;->a:Landroid/media/MediaCrypto;

    .line 49
    iput-boolean p2, p0, Lcom/tkay/expressad/exoplayer/d/k;->b:Z

    return-void
.end method


# virtual methods
.method public final a()Landroid/media/MediaCrypto;
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/k;->a:Landroid/media/MediaCrypto;

    return-object v0
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 1

    .line 61
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/d/k;->b:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/d/k;->a:Landroid/media/MediaCrypto;

    .line 62
    invoke-virtual {v0, p1}, Landroid/media/MediaCrypto;->requiresSecureDecoderComponent(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method
