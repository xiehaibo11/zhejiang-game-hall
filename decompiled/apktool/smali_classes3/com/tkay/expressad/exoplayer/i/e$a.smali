.class public final Lcom/tkay/expressad/exoplayer/i/e$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/i/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/i/e$a$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field public static final c:I = 0x2

.field public static final d:I = 0x3


# instance fields
.field public final e:I
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field private final f:I

.field private final g:[I

.field private final h:[Lcom/tkay/expressad/exoplayer/h/af;

.field private final i:[I

.field private final j:[[[I

.field private final k:Lcom/tkay/expressad/exoplayer/h/af;


# direct methods
.method constructor <init>([I[Lcom/tkay/expressad/exoplayer/h/af;[I[[[ILcom/tkay/expressad/exoplayer/h/af;)V
    .locals 0

    .line 105
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 106
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->g:[I

    .line 107
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->h:[Lcom/tkay/expressad/exoplayer/h/af;

    .line 108
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->j:[[[I

    .line 109
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->i:[I

    .line 110
    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->k:Lcom/tkay/expressad/exoplayer/h/af;

    .line 111
    array-length p1, p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->f:I

    .line 112
    iput p1, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->e:I

    return-void
.end method

.method private a(II[I)I
    .locals 7

    const/4 v0, 0x0

    const/16 v1, 0x10

    const/4 v2, 0x0

    move v3, v1

    move-object v4, v2

    move v1, v0

    move v2, v1

    .line 275
    :goto_0
    array-length v5, p3

    if-ge v0, v5, :cond_1

    .line 276
    aget v5, p3, v0

    .line 277
    iget-object v6, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->h:[Lcom/tkay/expressad/exoplayer/h/af;

    aget-object v6, v6, p1

    .line 278
    invoke-virtual {v6, p2}, Lcom/tkay/expressad/exoplayer/h/af;->a(I)Lcom/tkay/expressad/exoplayer/h/ae;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/tkay/expressad/exoplayer/h/ae;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v5

    iget-object v5, v5, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    add-int/lit8 v6, v2, 0x1

    if-nez v2, :cond_0

    move-object v4, v5

    goto :goto_1

    .line 282
    :cond_0
    invoke-static {v4, v5}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    xor-int/lit8 v2, v2, 0x1

    or-int/2addr v1, v2

    .line 284
    :goto_1
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->j:[[[I

    aget-object v2, v2, p1

    aget-object v2, v2, p2

    aget v2, v2, v0

    and-int/lit8 v2, v2, 0x18

    .line 285
    invoke-static {v3, v2}, Ljava/lang/Math;->min(II)I

    move-result v3

    add-int/lit8 v0, v0, 0x1

    move v2, v6

    goto :goto_0

    :cond_1
    if-eqz v1, :cond_2

    .line 291
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->i:[I

    aget p1, p2, p1

    invoke-static {v3, p1}, Ljava/lang/Math;->min(II)I

    move-result p1

    return p1

    :cond_2
    return v3
.end method

.method private b(III)I
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 201
    invoke-virtual {p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/i/e$a;->a(III)I

    move-result p1

    return p1
.end method

.method private c(I)I
    .locals 7

    .line 151
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->j:[[[I

    aget-object p1, v0, p1

    const/4 v0, 0x0

    move v1, v0

    move v2, v1

    .line 152
    :goto_0
    array-length v3, p1

    if-ge v1, v3, :cond_3

    move v3, v0

    .line 153
    :goto_1
    aget-object v4, p1, v1

    array-length v4, v4

    if-ge v3, v4, :cond_2

    .line 155
    aget-object v4, p1, v1

    aget v4, v4, v3

    and-int/lit8 v4, v4, 0x7

    const/4 v5, 0x3

    if-eq v4, v5, :cond_1

    const/4 v6, 0x4

    if-eq v4, v6, :cond_0

    const/4 v4, 0x1

    goto :goto_2

    :cond_0
    return v5

    :cond_1
    const/4 v4, 0x2

    .line 165
    :goto_2
    invoke-static {v2, v4}, Ljava/lang/Math;->max(II)I

    move-result v2

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_3
    return v2
.end method

.method private c()Lcom/tkay/expressad/exoplayer/h/af;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 3303
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->k:Lcom/tkay/expressad/exoplayer/h/af;

    return-object v0
.end method

.method private d(I)I
    .locals 10
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x0

    move v1, v0

    move v2, v1

    .line 1190
    :goto_0
    iget v3, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->f:I

    if-ge v1, v3, :cond_5

    .line 1191
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->g:[I

    aget v3, v3, v1

    if-ne v3, p1, :cond_4

    .line 2151
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->j:[[[I

    aget-object v3, v3, v1

    move v4, v0

    move v5, v4

    .line 2152
    :goto_1
    array-length v6, v3

    const/4 v7, 0x3

    if-ge v4, v6, :cond_3

    move v6, v0

    .line 2153
    :goto_2
    aget-object v8, v3, v4

    array-length v8, v8

    if-ge v6, v8, :cond_2

    .line 2155
    aget-object v8, v3, v4

    aget v8, v8, v6

    and-int/lit8 v8, v8, 0x7

    if-eq v8, v7, :cond_1

    const/4 v9, 0x4

    if-eq v8, v9, :cond_0

    const/4 v8, 0x1

    goto :goto_3

    :cond_0
    move v5, v7

    goto :goto_4

    :cond_1
    const/4 v8, 0x2

    .line 2165
    :goto_3
    invoke-static {v5, v8}, Ljava/lang/Math;->max(II)I

    move-result v5

    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    :cond_2
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 1192
    :cond_3
    :goto_4
    invoke-static {v2, v5}, Ljava/lang/Math;->max(II)I

    move-result v2

    :cond_4
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_5
    return v2
.end method

.method private e(I)I
    .locals 10

    const/4 v0, 0x0

    move v1, v0

    move v2, v1

    .line 190
    :goto_0
    iget v3, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->f:I

    if-ge v1, v3, :cond_5

    .line 191
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->g:[I

    aget v3, v3, v1

    if-ne v3, p1, :cond_4

    .line 3151
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->j:[[[I

    aget-object v3, v3, v1

    move v4, v0

    move v5, v4

    .line 3152
    :goto_1
    array-length v6, v3

    const/4 v7, 0x3

    if-ge v4, v6, :cond_3

    move v6, v0

    .line 3153
    :goto_2
    aget-object v8, v3, v4

    array-length v8, v8

    if-ge v6, v8, :cond_2

    .line 3155
    aget-object v8, v3, v4

    aget v8, v8, v6

    and-int/lit8 v8, v8, 0x7

    if-eq v8, v7, :cond_1

    const/4 v9, 0x4

    if-eq v8, v9, :cond_0

    const/4 v8, 0x1

    goto :goto_3

    :cond_0
    move v5, v7

    goto :goto_4

    :cond_1
    const/4 v8, 0x2

    .line 3165
    :goto_3
    invoke-static {v5, v8}, Ljava/lang/Math;->max(II)I

    move-result v5

    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    :cond_2
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 192
    :cond_3
    :goto_4
    invoke-static {v2, v5}, Ljava/lang/Math;->max(II)I

    move-result v2

    :cond_4
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_5
    return v2
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 117
    iget v0, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->f:I

    return v0
.end method

.method public final a(I)I
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->g:[I

    aget p1, v0, p1

    return p1
.end method

.method public final a(II)I
    .locals 8

    .line 244
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->h:[Lcom/tkay/expressad/exoplayer/h/af;

    aget-object v0, v0, p1

    invoke-virtual {v0, p2}, Lcom/tkay/expressad/exoplayer/h/af;->a(I)Lcom/tkay/expressad/exoplayer/h/ae;

    move-result-object v0

    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/ae;->a:I

    .line 246
    new-array v1, v0, [I

    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    :goto_0
    if-ge v3, v0, :cond_1

    .line 249
    invoke-virtual {p0, p1, p2, v3}, Lcom/tkay/expressad/exoplayer/i/e$a;->a(III)I

    move-result v5

    const/4 v6, 0x4

    if-ne v5, v6, :cond_0

    add-int/lit8 v5, v4, 0x1

    .line 253
    aput v3, v1, v4

    move v4, v5

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 256
    :cond_1
    invoke-static {v1, v4}, Ljava/util/Arrays;->copyOf([II)[I

    move-result-object v0

    const/16 v1, 0x10

    const/4 v3, 0x0

    move v4, v2

    move-object v5, v3

    move v3, v4

    .line 3275
    :goto_1
    array-length v6, v0

    if-ge v2, v6, :cond_3

    .line 3276
    aget v6, v0, v2

    .line 3277
    iget-object v7, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->h:[Lcom/tkay/expressad/exoplayer/h/af;

    aget-object v7, v7, p1

    .line 3278
    invoke-virtual {v7, p2}, Lcom/tkay/expressad/exoplayer/h/af;->a(I)Lcom/tkay/expressad/exoplayer/h/ae;

    move-result-object v7

    invoke-virtual {v7, v6}, Lcom/tkay/expressad/exoplayer/h/ae;->a(I)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v6

    iget-object v6, v6, Lcom/tkay/expressad/exoplayer/m;->h:Ljava/lang/String;

    add-int/lit8 v7, v4, 0x1

    if-nez v4, :cond_2

    move-object v5, v6

    goto :goto_2

    .line 3282
    :cond_2
    invoke-static {v5, v6}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v4

    xor-int/lit8 v4, v4, 0x1

    or-int/2addr v3, v4

    .line 3284
    :goto_2
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->j:[[[I

    aget-object v4, v4, p1

    aget-object v4, v4, p2

    aget v4, v4, v2

    and-int/lit8 v4, v4, 0x18

    .line 3285
    invoke-static {v1, v4}, Ljava/lang/Math;->min(II)I

    move-result v1

    add-int/lit8 v2, v2, 0x1

    move v4, v7

    goto :goto_1

    :cond_3
    if-eqz v3, :cond_4

    .line 3291
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->i:[I

    aget p1, p2, p1

    invoke-static {v1, p1}, Ljava/lang/Math;->min(II)I

    move-result p1

    return p1

    :cond_4
    return v1
.end method

.method public final a(III)I
    .locals 1

    .line 217
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->j:[[[I

    aget-object p1, v0, p1

    aget-object p1, p1, p2

    aget p1, p1, p3

    and-int/lit8 p1, p1, 0x7

    return p1
.end method

.method public final b()Lcom/tkay/expressad/exoplayer/h/af;
    .locals 1

    .line 303
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->k:Lcom/tkay/expressad/exoplayer/h/af;

    return-object v0
.end method

.method public final b(I)Lcom/tkay/expressad/exoplayer/h/af;
    .locals 1

    .line 138
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/i/e$a;->h:[Lcom/tkay/expressad/exoplayer/h/af;

    aget-object p1, v0, p1

    return-object p1
.end method
