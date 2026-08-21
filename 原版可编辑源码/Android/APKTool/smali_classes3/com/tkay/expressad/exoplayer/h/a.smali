.class abstract Lcom/tkay/expressad/exoplayer/h/a;
.super Lcom/tkay/expressad/exoplayer/ae;


# instance fields
.field private final b:I

.field private final c:Lcom/tkay/expressad/exoplayer/h/aa;

.field private final d:Z


# direct methods
.method public constructor <init>(ZLcom/tkay/expressad/exoplayer/h/aa;)V
    .locals 0

    .line 41
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/ae;-><init>()V

    .line 42
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/h/a;->d:Z

    .line 43
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a;->c:Lcom/tkay/expressad/exoplayer/h/aa;

    .line 44
    invoke-interface {p2}, Lcom/tkay/expressad/exoplayer/h/aa;->a()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/a;->b:I

    return-void
.end method

.method private a(IZ)I
    .locals 0

    if-eqz p2, :cond_0

    .line 255
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a;->c:Lcom/tkay/expressad/exoplayer/h/aa;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/exoplayer/h/aa;->a(I)I

    move-result p1

    return p1

    .line 256
    :cond_0
    iget p2, p0, Lcom/tkay/expressad/exoplayer/h/a;->b:I

    add-int/lit8 p2, p2, -0x1

    if-ge p1, p2, :cond_1

    add-int/lit8 p1, p1, 0x1

    return p1

    :cond_1
    const/4 p1, -0x1

    return p1
.end method

.method private b(IZ)I
    .locals 0

    if-eqz p2, :cond_0

    .line 260
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a;->c:Lcom/tkay/expressad/exoplayer/h/aa;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/exoplayer/h/aa;->b(I)I

    move-result p1

    return p1

    :cond_0
    if-lez p1, :cond_1

    add-int/lit8 p1, p1, -0x1

    return p1

    :cond_1
    const/4 p1, -0x1

    return p1
.end method


# virtual methods
.method protected abstract a(I)I
.end method

.method public final a(IIZ)I
    .locals 5

    .line 50
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/a;->d:Z

    const/4 v1, 0x0

    const/4 v2, 0x2

    if-eqz v0, :cond_1

    const/4 p3, 0x1

    if-ne p2, p3, :cond_0

    move p2, v2

    :cond_0
    move p3, v1

    .line 56
    :cond_1
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a;->b(I)I

    move-result v0

    .line 57
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->e(I)I

    move-result v3

    .line 58
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v4

    sub-int/2addr p1, v3

    if-ne p2, v2, :cond_2

    goto :goto_0

    :cond_2
    move v1, p2

    :goto_0
    invoke-virtual {v4, p1, v1, p3}, Lcom/tkay/expressad/exoplayer/ae;->a(IIZ)I

    move-result p1

    const/4 v1, -0x1

    if-eq p1, v1, :cond_3

    add-int/2addr v3, p1

    return v3

    .line 66
    :cond_3
    invoke-direct {p0, v0, p3}, Lcom/tkay/expressad/exoplayer/h/a;->a(IZ)I

    move-result p1

    :goto_1
    if-eq p1, v1, :cond_4

    .line 67
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 68
    invoke-direct {p0, p1, p3}, Lcom/tkay/expressad/exoplayer/h/a;->a(IZ)I

    move-result p1

    goto :goto_1

    :cond_4
    if-eq p1, v1, :cond_5

    .line 71
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a;->e(I)I

    move-result p2

    .line 72
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/tkay/expressad/exoplayer/ae;->b(Z)I

    move-result p1

    add-int/2addr p2, p1

    return p2

    :cond_5
    if-ne p2, v2, :cond_6

    .line 76
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/h/a;->b(Z)I

    move-result p1

    return p1

    :cond_6
    return v1
.end method

.method public final a(Ljava/lang/Object;)I
    .locals 3

    .line 188
    instance-of v0, p1, Landroid/util/Pair;

    const/4 v1, -0x1

    if-nez v0, :cond_0

    return v1

    .line 191
    :cond_0
    check-cast p1, Landroid/util/Pair;

    .line 192
    iget-object v0, p1, Landroid/util/Pair;->first:Ljava/lang/Object;

    .line 193
    iget-object p1, p1, Landroid/util/Pair;->second:Ljava/lang/Object;

    .line 194
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->b(Ljava/lang/Object;)I

    move-result v0

    if-ne v0, v1, :cond_1

    return v1

    .line 198
    :cond_1
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v2

    invoke-virtual {v2, p1}, Lcom/tkay/expressad/exoplayer/ae;->a(Ljava/lang/Object;)I

    move-result p1

    if-ne p1, v1, :cond_2

    return v1

    .line 200
    :cond_2
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->d(I)I

    move-result v0

    add-int/2addr v0, p1

    return v0
.end method

.method public final a(Z)I
    .locals 3

    .line 118
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/a;->b:I

    const/4 v1, -0x1

    if-nez v0, :cond_0

    return v1

    .line 121
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/a;->d:Z

    if-eqz v0, :cond_1

    const/4 p1, 0x0

    :cond_1
    if-eqz p1, :cond_2

    .line 125
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a;->c:Lcom/tkay/expressad/exoplayer/h/aa;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/aa;->b()I

    move-result v0

    goto :goto_0

    :cond_2
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/a;->b:I

    add-int/lit8 v0, v0, -0x1

    .line 126
    :cond_3
    :goto_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v2

    if-eqz v2, :cond_4

    .line 127
    invoke-direct {p0, v0, p1}, Lcom/tkay/expressad/exoplayer/h/a;->b(IZ)I

    move-result v0

    if-ne v0, v1, :cond_3

    return v1

    .line 133
    :cond_4
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->e(I)I

    move-result v1

    .line 134
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/ae;->a(Z)I

    move-result p1

    add-int/2addr v1, p1

    return v1
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;
    .locals 4

    .line 174
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a;->a(I)I

    move-result v0

    .line 175
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->e(I)I

    move-result v1

    .line 176
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->d(I)I

    move-result v2

    .line 177
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v3

    sub-int/2addr p1, v2

    invoke-virtual {v3, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    .line 179
    iget p1, p2, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    add-int/2addr p1, v1

    iput p1, p2, Lcom/tkay/expressad/exoplayer/ae$a;->c:I

    if-eqz p3, :cond_0

    .line 181
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->f(I)Ljava/lang/Object;

    move-result-object p1

    iget-object p3, p2, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    invoke-static {p1, p3}, Landroid/util/Pair;->create(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;

    move-result-object p1

    iput-object p1, p2, Lcom/tkay/expressad/exoplayer/ae$a;->b:Ljava/lang/Object;

    :cond_0
    return-object p2
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/ae$b;ZJ)Lcom/tkay/expressad/exoplayer/ae$b;
    .locals 9

    .line 161
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a;->b(I)I

    move-result v0

    .line 162
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->e(I)I

    move-result v1

    .line 163
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->d(I)I

    move-result v2

    .line 164
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v3

    sub-int v4, p1, v1

    move-object v5, p2

    move v6, p3

    move-wide v7, p4

    .line 165
    invoke-virtual/range {v3 .. v8}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$b;ZJ)Lcom/tkay/expressad/exoplayer/ae$b;

    .line 167
    iget p1, p2, Lcom/tkay/expressad/exoplayer/ae$b;->f:I

    add-int/2addr p1, v2

    iput p1, p2, Lcom/tkay/expressad/exoplayer/ae$b;->f:I

    .line 168
    iget p1, p2, Lcom/tkay/expressad/exoplayer/ae$b;->g:I

    add-int/2addr p1, v2

    iput p1, p2, Lcom/tkay/expressad/exoplayer/ae$b;->g:I

    return-object p2
.end method

.method protected abstract b(I)I
.end method

.method public final b(IIZ)I
    .locals 5

    .line 84
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/a;->d:Z

    const/4 v1, 0x0

    const/4 v2, 0x2

    if-eqz v0, :cond_1

    const/4 p3, 0x1

    if-ne p2, p3, :cond_0

    move p2, v2

    :cond_0
    move p3, v1

    .line 90
    :cond_1
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a;->b(I)I

    move-result v0

    .line 91
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->e(I)I

    move-result v3

    .line 92
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v4

    sub-int/2addr p1, v3

    if-ne p2, v2, :cond_2

    goto :goto_0

    :cond_2
    move v1, p2

    :goto_0
    invoke-virtual {v4, p1, v1, p3}, Lcom/tkay/expressad/exoplayer/ae;->b(IIZ)I

    move-result p1

    const/4 v1, -0x1

    if-eq p1, v1, :cond_3

    add-int/2addr v3, p1

    return v3

    .line 100
    :cond_3
    invoke-direct {p0, v0, p3}, Lcom/tkay/expressad/exoplayer/h/a;->b(IZ)I

    move-result p1

    :goto_1
    if-eq p1, v1, :cond_4

    .line 102
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 103
    invoke-direct {p0, p1, p3}, Lcom/tkay/expressad/exoplayer/h/a;->b(IZ)I

    move-result p1

    goto :goto_1

    :cond_4
    if-eq p1, v1, :cond_5

    .line 106
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a;->e(I)I

    move-result p2

    .line 107
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/tkay/expressad/exoplayer/ae;->a(Z)I

    move-result p1

    add-int/2addr p2, p1

    return p2

    :cond_5
    if-ne p2, v2, :cond_6

    .line 111
    invoke-virtual {p0, p3}, Lcom/tkay/expressad/exoplayer/h/a;->a(Z)I

    move-result p1

    return p1

    :cond_6
    return v1
.end method

.method protected abstract b(Ljava/lang/Object;)I
.end method

.method public final b(Z)I
    .locals 3

    .line 139
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/a;->b:I

    const/4 v1, -0x1

    if-nez v0, :cond_0

    return v1

    .line 142
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/a;->d:Z

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    move p1, v2

    :cond_1
    if-eqz p1, :cond_2

    .line 146
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a;->c:Lcom/tkay/expressad/exoplayer/h/aa;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/aa;->c()I

    move-result v2

    .line 147
    :cond_2
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 148
    invoke-direct {p0, v2, p1}, Lcom/tkay/expressad/exoplayer/h/a;->a(IZ)I

    move-result v2

    if-ne v2, v1, :cond_2

    return v1

    .line 154
    :cond_3
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/h/a;->e(I)I

    move-result v0

    .line 155
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/exoplayer/h/a;->c(I)Lcom/tkay/expressad/exoplayer/ae;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/tkay/expressad/exoplayer/ae;->b(Z)I

    move-result p1

    add-int/2addr v0, p1

    return v0
.end method

.method protected abstract c(I)Lcom/tkay/expressad/exoplayer/ae;
.end method

.method protected abstract d(I)I
.end method

.method protected abstract e(I)I
.end method

.method protected abstract f(I)Ljava/lang/Object;
.end method
