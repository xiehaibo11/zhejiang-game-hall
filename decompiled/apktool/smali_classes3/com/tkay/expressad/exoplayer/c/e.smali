.class public Lcom/tkay/expressad/exoplayer/c/e;
.super Lcom/tkay/expressad/exoplayer/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/c/e$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field public static final c:I = 0x2


# instance fields
.field public final d:Lcom/tkay/expressad/exoplayer/c/b;

.field public e:Ljava/nio/ByteBuffer;

.field public f:J

.field private final g:I


# direct methods
.method public constructor <init>(I)V
    .locals 1

    .line 82
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/c/a;-><init>()V

    .line 83
    new-instance v0, Lcom/tkay/expressad/exoplayer/c/b;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/c/b;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/c/e;->d:Lcom/tkay/expressad/exoplayer/c/b;

    .line 84
    iput p1, p0, Lcom/tkay/expressad/exoplayer/c/e;->g:I

    return-void
.end method

.method public static e()Lcom/tkay/expressad/exoplayer/c/e;
    .locals 2

    .line 74
    new-instance v0, Lcom/tkay/expressad/exoplayer/c/e;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/c/e;-><init>(I)V

    return-object v0
.end method

.method private e(I)Ljava/nio/ByteBuffer;
    .locals 4

    .line 156
    iget v0, p0, Lcom/tkay/expressad/exoplayer/c/e;->g:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 157
    invoke-static {p1}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    .line 159
    invoke-static {p1}, Ljava/nio/ByteBuffer;->allocateDirect(I)Ljava/nio/ByteBuffer;

    move-result-object p1

    return-object p1

    .line 161
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    if-nez v0, :cond_2

    const/4 v0, 0x0

    goto :goto_0

    :cond_2
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->capacity()I

    move-result v0

    .line 162
    :goto_0
    new-instance v1, Ljava/lang/IllegalStateException;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Buffer too small ("

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " < "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ")"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v1
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 149
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/c/a;->a()V

    .line 150
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    if-eqz v0, :cond_0

    .line 151
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->clear()Ljava/nio/Buffer;

    :cond_0
    return-void
.end method

.method public final d(I)V
    .locals 3

    .line 100
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    if-nez v0, :cond_0

    .line 101
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/c/e;->e(I)Ljava/nio/ByteBuffer;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    return-void

    .line 105
    :cond_0
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->capacity()I

    move-result v0

    .line 106
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->position()I

    move-result v1

    add-int/2addr p1, v1

    if-lt v0, p1, :cond_1

    return-void

    .line 112
    :cond_1
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/c/e;->e(I)Ljava/nio/ByteBuffer;

    move-result-object p1

    if-lez v1, :cond_2

    .line 115
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 116
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 117
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->put(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;

    .line 120
    :cond_2
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    return-void
.end method

.method public final f()Z
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    if-nez v0, :cond_0

    iget v0, p0, Lcom/tkay/expressad/exoplayer/c/e;->g:I

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final g()Z
    .locals 1

    const/high16 v0, 0x40000000    # 2.0f

    .line 135
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/c/e;->c(I)Z

    move-result v0

    return v0
.end method

.method public final h()V
    .locals 1

    .line 144
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/e;->e:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    return-void
.end method
