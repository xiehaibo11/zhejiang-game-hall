.class final Lcom/tkay/expressad/exoplayer/b/u;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/b/f;


# instance fields
.field private b:Z

.field private c:I

.field private d:I

.field private e:I

.field private f:I

.field private g:I

.field private h:Ljava/nio/ByteBuffer;

.field private i:Ljava/nio/ByteBuffer;

.field private j:[B

.field private k:I

.field private l:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 44
    sget-object v0, Lcom/tkay/expressad/exoplayer/b/u;->a:Ljava/nio/ByteBuffer;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->h:Ljava/nio/ByteBuffer;

    .line 45
    sget-object v0, Lcom/tkay/expressad/exoplayer/b/u;->a:Ljava/nio/ByteBuffer;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->i:Ljava/nio/ByteBuffer;

    const/4 v0, -0x1

    .line 46
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->e:I

    .line 47
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->f:I

    const/4 v0, 0x0

    new-array v0, v0, [B

    .line 48
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->j:[B

    return-void
.end method


# virtual methods
.method public final a(II)V
    .locals 0

    .line 61
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/u;->c:I

    .line 62
    iput p2, p0, Lcom/tkay/expressad/exoplayer/b/u;->d:I

    return-void
.end method

.method public final a(Ljava/nio/ByteBuffer;)V
    .locals 7

    .line 103
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v0

    .line 104
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->limit()I

    move-result v1

    sub-int v2, v1, v0

    .line 108
    iget v3, p0, Lcom/tkay/expressad/exoplayer/b/u;->g:I

    invoke-static {v2, v3}, Ljava/lang/Math;->min(II)I

    move-result v3

    .line 109
    iget v4, p0, Lcom/tkay/expressad/exoplayer/b/u;->g:I

    sub-int/2addr v4, v3

    iput v4, p0, Lcom/tkay/expressad/exoplayer/b/u;->g:I

    add-int/2addr v0, v3

    .line 110
    invoke-virtual {p1, v0}, Ljava/nio/ByteBuffer;->position(I)Ljava/nio/Buffer;

    .line 111
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->g:I

    if-lez v0, :cond_0

    return-void

    :cond_0
    sub-int/2addr v2, v3

    .line 121
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->k:I

    add-int/2addr v0, v2

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/u;->j:[B

    array-length v3, v3

    sub-int/2addr v0, v3

    .line 122
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/u;->h:Ljava/nio/ByteBuffer;

    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->capacity()I

    move-result v3

    if-ge v3, v0, :cond_1

    .line 123
    invoke-static {v0}, Ljava/nio/ByteBuffer;->allocateDirect(I)Ljava/nio/ByteBuffer;

    move-result-object v3

    invoke-static {}, Ljava/nio/ByteOrder;->nativeOrder()Ljava/nio/ByteOrder;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/expressad/exoplayer/b/u;->h:Ljava/nio/ByteBuffer;

    goto :goto_0

    .line 125
    :cond_1
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/u;->h:Ljava/nio/ByteBuffer;

    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->clear()Ljava/nio/Buffer;

    .line 129
    :goto_0
    iget v3, p0, Lcom/tkay/expressad/exoplayer/b/u;->k:I

    const/4 v4, 0x0

    invoke-static {v0, v4, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(III)I

    move-result v3

    .line 130
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/b/u;->h:Ljava/nio/ByteBuffer;

    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/b/u;->j:[B

    invoke-virtual {v5, v6, v4, v3}, Ljava/nio/ByteBuffer;->put([BII)Ljava/nio/ByteBuffer;

    sub-int/2addr v0, v3

    .line 134
    invoke-static {v0, v4, v2}, Lcom/tkay/expressad/exoplayer/k/af;->a(III)I

    move-result v0

    .line 135
    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->position()I

    move-result v5

    add-int/2addr v5, v0

    invoke-virtual {p1, v5}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    .line 136
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/b/u;->h:Ljava/nio/ByteBuffer;

    invoke-virtual {v5, p1}, Ljava/nio/ByteBuffer;->put(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;

    .line 137
    invoke-virtual {p1, v1}, Ljava/nio/ByteBuffer;->limit(I)Ljava/nio/Buffer;

    sub-int/2addr v2, v0

    .line 141
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->k:I

    sub-int/2addr v0, v3

    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->k:I

    .line 142
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/u;->j:[B

    invoke-static {v1, v3, v1, v4, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 143
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->j:[B

    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/u;->k:I

    invoke-virtual {p1, v0, v1, v2}, Ljava/nio/ByteBuffer;->get([BII)Ljava/nio/ByteBuffer;

    .line 144
    iget p1, p0, Lcom/tkay/expressad/exoplayer/b/u;->k:I

    add-int/2addr p1, v2

    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/u;->k:I

    .line 146
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/u;->h:Ljava/nio/ByteBuffer;

    invoke-virtual {p1}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 147
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/u;->h:Ljava/nio/ByteBuffer;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/u;->i:Ljava/nio/ByteBuffer;

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 83
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->b:Z

    return v0
.end method

.method public final a(III)Z
    .locals 2

    const/4 v0, 0x2

    if-ne p3, v0, :cond_3

    .line 71
    iput p2, p0, Lcom/tkay/expressad/exoplayer/b/u;->e:I

    .line 72
    iput p1, p0, Lcom/tkay/expressad/exoplayer/b/u;->f:I

    .line 73
    iget p1, p0, Lcom/tkay/expressad/exoplayer/b/u;->d:I

    mul-int p3, p1, p2

    mul-int/2addr p3, v0

    new-array p3, p3, [B

    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/b/u;->j:[B

    const/4 p3, 0x0

    .line 74
    iput p3, p0, Lcom/tkay/expressad/exoplayer/b/u;->k:I

    .line 75
    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/u;->c:I

    mul-int/2addr p2, v1

    mul-int/2addr p2, v0

    iput p2, p0, Lcom/tkay/expressad/exoplayer/b/u;->g:I

    .line 76
    iget-boolean p2, p0, Lcom/tkay/expressad/exoplayer/b/u;->b:Z

    const/4 v0, 0x1

    if-nez v1, :cond_1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    move p1, p3

    goto :goto_1

    :cond_1
    :goto_0
    move p1, v0

    .line 77
    :goto_1
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/u;->b:Z

    if-eq p2, p1, :cond_2

    return v0

    :cond_2
    return p3

    .line 69
    :cond_3
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/f$a;

    invoke-direct {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/b/f$a;-><init>(III)V

    throw v0
.end method

.method public final b()I
    .locals 1

    .line 88
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->e:I

    return v0
.end method

.method public final c()I
    .locals 1

    const/4 v0, 0x2

    return v0
.end method

.method public final d()I
    .locals 1

    .line 98
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->f:I

    return v0
.end method

.method public final e()V
    .locals 1

    const/4 v0, 0x1

    .line 152
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->l:Z

    return-void
.end method

.method public final f()Ljava/nio/ByteBuffer;
    .locals 2

    .line 157
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->i:Ljava/nio/ByteBuffer;

    .line 158
    sget-object v1, Lcom/tkay/expressad/exoplayer/b/u;->a:Ljava/nio/ByteBuffer;

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/u;->i:Ljava/nio/ByteBuffer;

    return-object v0
.end method

.method public final g()Z
    .locals 2

    .line 165
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->l:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->i:Ljava/nio/ByteBuffer;

    sget-object v1, Lcom/tkay/expressad/exoplayer/b/u;->a:Ljava/nio/ByteBuffer;

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final h()V
    .locals 1

    .line 170
    sget-object v0, Lcom/tkay/expressad/exoplayer/b/u;->a:Ljava/nio/ByteBuffer;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->i:Ljava/nio/ByteBuffer;

    const/4 v0, 0x0

    .line 171
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->l:Z

    .line 174
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->g:I

    .line 175
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->k:I

    return-void
.end method

.method public final i()V
    .locals 1

    .line 180
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/u;->h()V

    .line 181
    sget-object v0, Lcom/tkay/expressad/exoplayer/b/u;->a:Ljava/nio/ByteBuffer;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->h:Ljava/nio/ByteBuffer;

    const/4 v0, -0x1

    .line 182
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->e:I

    .line 183
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->f:I

    const/4 v0, 0x0

    new-array v0, v0, [B

    .line 184
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/u;->j:[B

    return-void
.end method
