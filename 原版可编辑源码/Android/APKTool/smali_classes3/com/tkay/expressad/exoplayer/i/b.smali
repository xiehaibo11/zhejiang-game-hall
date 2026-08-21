.class public abstract Lcom/tkay/expressad/exoplayer/i/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/i/f;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/i/b$a;
    }
.end annotation


# instance fields
.field private final a:[Lcom/tkay/expressad/exoplayer/m;

.field private final b:[J

.field private c:I

.field protected final g:Lcom/tkay/expressad/exoplayer/h/ae;

.field protected final h:I

.field protected final i:[I


# direct methods
.method public varargs constructor <init>(Lcom/tkay/expressad/exoplayer/h/ae;[I)V
    .locals 4

    .line 67
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 68
    array-length v0, p2

    const/4 v1, 0x0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 69
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/ae;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->g:Lcom/tkay/expressad/exoplayer/h/ae;

    .line 70
    array-length v0, p2

    iput v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->h:I

    .line 72
    new-array v0, v0, [Lcom/tkay/expressad/exoplayer/m;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->a:[Lcom/tkay/expressad/exoplayer/m;

    move v0, v1

    .line 73
    :goto_1
    array-length v2, p2

    if-ge v0, v2, :cond_1

    .line 74
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/i/b;->a:[Lcom/tkay/expressad/exoplayer/m;

    aget v3, p2, v0

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/exoplayer/h/ae;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v3

    aput-object v3, v2, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 76
    :cond_1
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/i/b;->a:[Lcom/tkay/expressad/exoplayer/m;

    new-instance v0, Lcom/tkay/expressad/exoplayer/i/b$a;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/i/b$a;-><init>(B)V

    invoke-static {p2, v0}, Ljava/util/Arrays;->sort([Ljava/lang/Object;Ljava/util/Comparator;)V

    .line 78
    iget p2, p0, Lcom/tkay/expressad/exoplayer/i/b;->h:I

    new-array p2, p2, [I

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/i/b;->i:[I

    .line 79
    :goto_2
    iget p2, p0, Lcom/tkay/expressad/exoplayer/i/b;->h:I

    if-ge v1, p2, :cond_2

    .line 80
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/i/b;->i:[I

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->a:[Lcom/tkay/expressad/exoplayer/m;

    aget-object v0, v0, v1

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/h/ae;->a(Lcom/tkay/expressad/exoplayer/m;)I

    move-result v0

    aput v0, p2, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 82
    :cond_2
    new-array p1, p2, [J

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/i/b;->b:[J

    return-void
.end method


# virtual methods
.method public a(JLjava/util/List;)I
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(J",
            "Ljava/util/List<",
            "+",
            "Lcom/tkay/expressad/exoplayer/h/b/i;",
            ">;)I"
        }
    .end annotation

    .line 153
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p1

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/m;)I
    .locals 2

    const/4 v0, 0x0

    .line 118
    :goto_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/i/b;->h:I

    if-ge v0, v1, :cond_1

    .line 119
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/i/b;->a:[Lcom/tkay/expressad/exoplayer/m;

    aget-object v1, v1, v0

    if-ne v1, p1, :cond_0

    return v0

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, -0x1

    return p1
.end method

.method public final a(I)Lcom/tkay/expressad/exoplayer/m;
    .locals 1

    .line 107
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->a:[Lcom/tkay/expressad/exoplayer/m;

    aget-object p1, v0, p1

    return-object p1
.end method

.method public a()V
    .locals 0

    return-void
.end method

.method public a(F)V
    .locals 0

    return-void
.end method

.method public final a(IJ)Z
    .locals 7

    .line 158
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    .line 159
    invoke-virtual {p0, p1, v0, v1}, Lcom/tkay/expressad/exoplayer/i/b;->b(IJ)Z

    move-result v2

    const/4 v3, 0x0

    move v4, v3

    .line 160
    :goto_0
    iget v5, p0, Lcom/tkay/expressad/exoplayer/i/b;->h:I

    const/4 v6, 0x1

    if-ge v4, v5, :cond_1

    if-nez v2, :cond_1

    if-eq v4, p1, :cond_0

    .line 161
    invoke-virtual {p0, v4, v0, v1}, Lcom/tkay/expressad/exoplayer/i/b;->b(IJ)Z

    move-result v2

    if-nez v2, :cond_0

    move v2, v6

    goto :goto_1

    :cond_0
    move v2, v3

    :goto_1
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_1
    if-nez v2, :cond_2

    return v3

    .line 166
    :cond_2
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/i/b;->b:[J

    aget-wide v3, v2, p1

    add-long/2addr v0, p2

    invoke-static {v3, v4, v0, v1}, Ljava/lang/Math;->max(JJ)J

    move-result-wide p2

    aput-wide p2, v2, p1

    return v6
.end method

.method public final b(I)I
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->i:[I

    aget p1, v0, p1

    return p1
.end method

.method protected final b(IJ)Z
    .locals 3

    .line 177
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->b:[J

    aget-wide v1, v0, p1

    cmp-long p1, v1, p2

    if-lez p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final c(I)I
    .locals 2

    const/4 v0, 0x0

    .line 128
    :goto_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/i/b;->h:I

    if-ge v0, v1, :cond_1

    .line 129
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/i/b;->i:[I

    aget v1, v1, v0

    if-ne v1, p1, :cond_0

    return v0

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, -0x1

    return p1
.end method

.method public final e()V
    .locals 0

    return-void
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 197
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 200
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/i/b;

    .line 201
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/i/b;->g:Lcom/tkay/expressad/exoplayer/h/ae;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/i/b;->g:Lcom/tkay/expressad/exoplayer/h/ae;

    if-ne v2, v3, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/i/b;->i:[I

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/i/b;->i:[I

    invoke-static {v2, p1}, Ljava/util/Arrays;->equals([I[I)Z

    move-result p1

    if-eqz p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final f()Lcom/tkay/expressad/exoplayer/h/ae;
    .locals 1

    .line 97
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->g:Lcom/tkay/expressad/exoplayer/h/ae;

    return-object v0
.end method

.method public final g()I
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->i:[I

    array-length v0, v0

    return v0
.end method

.method public final h()Lcom/tkay/expressad/exoplayer/m;
    .locals 2

    .line 138
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->a:[Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/i/b;->b()I

    move-result v1

    aget-object v0, v0, v1

    return-object v0
.end method

.method public hashCode()I
    .locals 2

    .line 184
    iget v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->c:I

    if-nez v0, :cond_0

    .line 185
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->g:Lcom/tkay/expressad/exoplayer/h/ae;

    invoke-static {v0}, Ljava/lang/System;->identityHashCode(Ljava/lang/Object;)I

    move-result v0

    mul-int/lit8 v0, v0, 0x1f

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/i/b;->i:[I

    invoke-static {v1}, Ljava/util/Arrays;->hashCode([I)I

    move-result v1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->c:I

    .line 187
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->c:I

    return v0
.end method

.method public final i()I
    .locals 2

    .line 143
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/b;->i:[I

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/i/b;->b()I

    move-result v1

    aget v0, v0, v1

    return v0
.end method
