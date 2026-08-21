.class final Lcom/czhj/wire/okio/Segment;
.super Ljava/lang/Object;


# static fields
.field static final a:I = 0x2000

.field static final b:I = 0x400


# instance fields
.field final c:[B

.field d:I

.field e:I

.field f:Z

.field g:Z

.field h:Lcom/czhj/wire/okio/Segment;

.field i:Lcom/czhj/wire/okio/Segment;


# direct methods
.method constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x2000

    new-array v0, v0, [B

    iput-object v0, p0, Lcom/czhj/wire/okio/Segment;->c:[B

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/czhj/wire/okio/Segment;->g:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/czhj/wire/okio/Segment;->f:Z

    return-void
.end method

.method constructor <init>(Lcom/czhj/wire/okio/Segment;)V
    .locals 3

    iget-object v0, p1, Lcom/czhj/wire/okio/Segment;->c:[B

    iget v1, p1, Lcom/czhj/wire/okio/Segment;->d:I

    iget v2, p1, Lcom/czhj/wire/okio/Segment;->e:I

    invoke-direct {p0, v0, v1, v2}, Lcom/czhj/wire/okio/Segment;-><init>([BII)V

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/czhj/wire/okio/Segment;->f:Z

    return-void
.end method

.method constructor <init>([BII)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/czhj/wire/okio/Segment;->c:[B

    iput p2, p0, Lcom/czhj/wire/okio/Segment;->d:I

    iput p3, p0, Lcom/czhj/wire/okio/Segment;->e:I

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/czhj/wire/okio/Segment;->g:Z

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/czhj/wire/okio/Segment;->f:Z

    return-void
.end method


# virtual methods
.method public compact()V
    .locals 4

    iget-object v0, p0, Lcom/czhj/wire/okio/Segment;->i:Lcom/czhj/wire/okio/Segment;

    if-eq v0, p0, :cond_3

    iget-boolean v1, v0, Lcom/czhj/wire/okio/Segment;->g:Z

    if-nez v1, :cond_0

    return-void

    :cond_0
    iget v1, p0, Lcom/czhj/wire/okio/Segment;->e:I

    iget v2, p0, Lcom/czhj/wire/okio/Segment;->d:I

    sub-int/2addr v1, v2

    iget v2, v0, Lcom/czhj/wire/okio/Segment;->e:I

    rsub-int v2, v2, 0x2000

    iget-boolean v3, v0, Lcom/czhj/wire/okio/Segment;->f:Z

    if-eqz v3, :cond_1

    const/4 v0, 0x0

    goto :goto_0

    :cond_1
    iget v0, v0, Lcom/czhj/wire/okio/Segment;->d:I

    :goto_0
    add-int/2addr v2, v0

    if-le v1, v2, :cond_2

    return-void

    :cond_2
    iget-object v0, p0, Lcom/czhj/wire/okio/Segment;->i:Lcom/czhj/wire/okio/Segment;

    invoke-virtual {p0, v0, v1}, Lcom/czhj/wire/okio/Segment;->writeTo(Lcom/czhj/wire/okio/Segment;I)V

    invoke-virtual {p0}, Lcom/czhj/wire/okio/Segment;->pop()Lcom/czhj/wire/okio/Segment;

    invoke-static {p0}, Lcom/czhj/wire/okio/SegmentPool;->a(Lcom/czhj/wire/okio/Segment;)V

    return-void

    :cond_3
    new-instance v0, Ljava/lang/IllegalStateException;

    invoke-direct {v0}, Ljava/lang/IllegalStateException;-><init>()V

    throw v0
.end method

.method public pop()Lcom/czhj/wire/okio/Segment;
    .locals 4

    iget-object v0, p0, Lcom/czhj/wire/okio/Segment;->h:Lcom/czhj/wire/okio/Segment;

    const/4 v1, 0x0

    if-eq v0, p0, :cond_0

    goto :goto_0

    :cond_0
    move-object v0, v1

    :goto_0
    iget-object v2, p0, Lcom/czhj/wire/okio/Segment;->i:Lcom/czhj/wire/okio/Segment;

    iget-object v3, p0, Lcom/czhj/wire/okio/Segment;->h:Lcom/czhj/wire/okio/Segment;

    iput-object v3, v2, Lcom/czhj/wire/okio/Segment;->h:Lcom/czhj/wire/okio/Segment;

    iget-object v3, p0, Lcom/czhj/wire/okio/Segment;->h:Lcom/czhj/wire/okio/Segment;

    iput-object v2, v3, Lcom/czhj/wire/okio/Segment;->i:Lcom/czhj/wire/okio/Segment;

    iput-object v1, p0, Lcom/czhj/wire/okio/Segment;->h:Lcom/czhj/wire/okio/Segment;

    iput-object v1, p0, Lcom/czhj/wire/okio/Segment;->i:Lcom/czhj/wire/okio/Segment;

    return-object v0
.end method

.method public push(Lcom/czhj/wire/okio/Segment;)Lcom/czhj/wire/okio/Segment;
    .locals 1

    iput-object p0, p1, Lcom/czhj/wire/okio/Segment;->i:Lcom/czhj/wire/okio/Segment;

    iget-object v0, p0, Lcom/czhj/wire/okio/Segment;->h:Lcom/czhj/wire/okio/Segment;

    iput-object v0, p1, Lcom/czhj/wire/okio/Segment;->h:Lcom/czhj/wire/okio/Segment;

    iget-object v0, p0, Lcom/czhj/wire/okio/Segment;->h:Lcom/czhj/wire/okio/Segment;

    iput-object p1, v0, Lcom/czhj/wire/okio/Segment;->i:Lcom/czhj/wire/okio/Segment;

    iput-object p1, p0, Lcom/czhj/wire/okio/Segment;->h:Lcom/czhj/wire/okio/Segment;

    return-object p1
.end method

.method public split(I)Lcom/czhj/wire/okio/Segment;
    .locals 5

    if-lez p1, :cond_1

    iget v0, p0, Lcom/czhj/wire/okio/Segment;->e:I

    iget v1, p0, Lcom/czhj/wire/okio/Segment;->d:I

    sub-int/2addr v0, v1

    if-gt p1, v0, :cond_1

    const/16 v0, 0x400

    if-lt p1, v0, :cond_0

    new-instance v0, Lcom/czhj/wire/okio/Segment;

    invoke-direct {v0, p0}, Lcom/czhj/wire/okio/Segment;-><init>(Lcom/czhj/wire/okio/Segment;)V

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/czhj/wire/okio/SegmentPool;->a()Lcom/czhj/wire/okio/Segment;

    move-result-object v0

    iget-object v1, p0, Lcom/czhj/wire/okio/Segment;->c:[B

    iget v2, p0, Lcom/czhj/wire/okio/Segment;->d:I

    iget-object v3, v0, Lcom/czhj/wire/okio/Segment;->c:[B

    const/4 v4, 0x0

    invoke-static {v1, v2, v3, v4, p1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    :goto_0
    iget v1, v0, Lcom/czhj/wire/okio/Segment;->d:I

    add-int/2addr v1, p1

    iput v1, v0, Lcom/czhj/wire/okio/Segment;->e:I

    iget v1, p0, Lcom/czhj/wire/okio/Segment;->d:I

    add-int/2addr v1, p1

    iput v1, p0, Lcom/czhj/wire/okio/Segment;->d:I

    iget-object p1, p0, Lcom/czhj/wire/okio/Segment;->i:Lcom/czhj/wire/okio/Segment;

    invoke-virtual {p1, v0}, Lcom/czhj/wire/okio/Segment;->push(Lcom/czhj/wire/okio/Segment;)Lcom/czhj/wire/okio/Segment;

    return-object v0

    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p1
.end method

.method public writeTo(Lcom/czhj/wire/okio/Segment;I)V
    .locals 4

    iget-boolean v0, p1, Lcom/czhj/wire/okio/Segment;->g:Z

    if-eqz v0, :cond_3

    iget v0, p1, Lcom/czhj/wire/okio/Segment;->e:I

    add-int v1, v0, p2

    const/16 v2, 0x2000

    if-le v1, v2, :cond_2

    iget-boolean v1, p1, Lcom/czhj/wire/okio/Segment;->f:Z

    if-nez v1, :cond_1

    add-int v1, v0, p2

    iget v3, p1, Lcom/czhj/wire/okio/Segment;->d:I

    sub-int/2addr v1, v3

    if-gt v1, v2, :cond_0

    iget-object v1, p1, Lcom/czhj/wire/okio/Segment;->c:[B

    sub-int/2addr v0, v3

    const/4 v2, 0x0

    invoke-static {v1, v3, v1, v2, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iget v0, p1, Lcom/czhj/wire/okio/Segment;->e:I

    iget v1, p1, Lcom/czhj/wire/okio/Segment;->d:I

    sub-int/2addr v0, v1

    iput v0, p1, Lcom/czhj/wire/okio/Segment;->e:I

    iput v2, p1, Lcom/czhj/wire/okio/Segment;->d:I

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p1

    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p1

    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/czhj/wire/okio/Segment;->c:[B

    iget v1, p0, Lcom/czhj/wire/okio/Segment;->d:I

    iget-object v2, p1, Lcom/czhj/wire/okio/Segment;->c:[B

    iget v3, p1, Lcom/czhj/wire/okio/Segment;->e:I

    invoke-static {v0, v1, v2, v3, p2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iget v0, p1, Lcom/czhj/wire/okio/Segment;->e:I

    add-int/2addr v0, p2

    iput v0, p1, Lcom/czhj/wire/okio/Segment;->e:I

    iget p1, p0, Lcom/czhj/wire/okio/Segment;->d:I

    add-int/2addr p1, p2

    iput p1, p0, Lcom/czhj/wire/okio/Segment;->d:I

    return-void

    :cond_3
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p1
.end method
