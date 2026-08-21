.class public final Lcom/tkay/expressad/exoplayer/c/h;
.super Lcom/tkay/expressad/exoplayer/c/f;


# instance fields
.field public c:Ljava/nio/ByteBuffer;

.field private final d:Lcom/tkay/expressad/exoplayer/c/g;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/c/g<",
            "*",
            "Lcom/tkay/expressad/exoplayer/c/h;",
            "*>;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/c/g;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/c/g<",
            "*",
            "Lcom/tkay/expressad/exoplayer/c/h;",
            "*>;)V"
        }
    .end annotation

    .line 30
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/c/f;-><init>()V

    .line 31
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/c/h;->d:Lcom/tkay/expressad/exoplayer/c/g;

    return-void
.end method

.method private a(JI)Ljava/nio/ByteBuffer;
    .locals 0

    .line 42
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/c/h;->a:J

    .line 43
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/h;->c:Ljava/nio/ByteBuffer;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->capacity()I

    move-result p1

    if-ge p1, p3, :cond_1

    .line 44
    :cond_0
    invoke-static {p3}, Ljava/nio/ByteBuffer;->allocateDirect(I)Ljava/nio/ByteBuffer;

    move-result-object p1

    invoke-static {}, Ljava/nio/ByteOrder;->nativeOrder()Ljava/nio/ByteOrder;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/c/h;->c:Ljava/nio/ByteBuffer;

    .line 46
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/h;->c:Ljava/nio/ByteBuffer;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 47
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/h;->c:Ljava/nio/ByteBuffer;

    invoke-virtual {p1, p3}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 48
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/c/h;->c:Ljava/nio/ByteBuffer;

    return-object p1
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 53
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/c/f;->a()V

    .line 54
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/h;->c:Ljava/nio/ByteBuffer;

    if-eqz v0, :cond_0

    .line 55
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->clear()Ljava/nio/Buffer;

    :cond_0
    return-void
.end method

.method public final e()V
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/h;->d:Lcom/tkay/expressad/exoplayer/c/g;

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/exoplayer/c/g;->a(Lcom/tkay/expressad/exoplayer/c/f;)V

    return-void
.end method
