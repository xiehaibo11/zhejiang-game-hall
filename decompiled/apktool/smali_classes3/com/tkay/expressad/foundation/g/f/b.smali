.class public final Lcom/tkay/expressad/foundation/g/f/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/f/l;


# instance fields
.field private a:I

.field private b:I

.field private final c:I

.field private d:I

.field private e:I

.field private f:I

.field private g:I

.field private h:I


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    .line 17
    invoke-direct {p0, v0}, Lcom/tkay/expressad/foundation/g/f/b;-><init>(B)V

    return-void
.end method

.method private constructor <init>(B)V
    .locals 1

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x2

    .line 10
    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->d:I

    const/4 p1, 0x0

    .line 11
    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->e:I

    .line 12
    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->f:I

    .line 13
    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->g:I

    .line 14
    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->h:I

    const/16 v0, 0x7530

    .line 24
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->a:I

    .line 25
    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->c:I

    return-void
.end method

.method private constructor <init>(IIIII)V
    .locals 1

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x2

    .line 10
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->d:I

    const/4 v0, 0x0

    .line 11
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->e:I

    .line 12
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->f:I

    .line 13
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->g:I

    .line 14
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->h:I

    .line 43
    invoke-static {p1, v0}, Ljava/lang/Math;->max(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->e:I

    .line 44
    invoke-static {p2, v0}, Ljava/lang/Math;->max(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->f:I

    .line 45
    invoke-static {p3, v0}, Ljava/lang/Math;->max(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->g:I

    .line 46
    invoke-static {p4, v0}, Ljava/lang/Math;->max(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->h:I

    .line 47
    invoke-static {p5, v0}, Ljava/lang/Math;->max(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->c:I

    return-void
.end method

.method private constructor <init>(IIIIII)V
    .locals 1

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x2

    .line 10
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->d:I

    const/4 v0, 0x0

    .line 11
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->e:I

    .line 12
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->f:I

    .line 13
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->g:I

    .line 14
    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->h:I

    .line 29
    invoke-static {p1, v0}, Ljava/lang/Math;->max(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->e:I

    .line 30
    invoke-static {p2, v0}, Ljava/lang/Math;->max(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->f:I

    .line 31
    invoke-static {p3, v0}, Ljava/lang/Math;->max(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->g:I

    .line 32
    invoke-static {p4, v0}, Ljava/lang/Math;->max(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->h:I

    .line 33
    invoke-static {p5, v0}, Ljava/lang/Math;->max(II)I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/foundation/g/f/b;->c:I

    .line 34
    iput p6, p0, Lcom/tkay/expressad/foundation/g/f/b;->d:I

    return-void
.end method


# virtual methods
.method public final a()I
    .locals 1

    .line 39
    iget v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->c:I

    return v0
.end method

.method public final b()I
    .locals 1

    .line 52
    iget v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->a:I

    return v0
.end method

.method public final c()I
    .locals 1

    .line 57
    iget v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->b:I

    return v0
.end method

.method public final d()Z
    .locals 3

    .line 62
    iget v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->b:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->b:I

    .line 63
    iget v2, p0, Lcom/tkay/expressad/foundation/g/f/b;->c:I

    if-le v0, v2, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    return v1
.end method

.method public final e()I
    .locals 1

    .line 71
    iget v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->e:I

    return v0
.end method

.method public final f()I
    .locals 1

    .line 76
    iget v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->f:I

    return v0
.end method

.method public final g()I
    .locals 1

    .line 81
    iget v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->g:I

    return v0
.end method

.method public final h()I
    .locals 1

    .line 86
    iget v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->h:I

    return v0
.end method

.method public final i()I
    .locals 1

    .line 91
    iget v0, p0, Lcom/tkay/expressad/foundation/g/f/b;->d:I

    return v0
.end method
