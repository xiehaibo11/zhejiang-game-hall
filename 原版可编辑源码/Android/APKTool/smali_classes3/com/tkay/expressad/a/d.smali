.class public Lcom/tkay/expressad/a/d;
.super Ljava/lang/Object;


# static fields
.field protected static final b:I = 0x1

.field protected static final c:I = 0x2

.field protected static final d:I = 0x4

.field protected static final e:I = 0x8

.field protected static final f:I = 0x10

.field protected static final g:I = 0x20


# instance fields
.field private a:I

.field protected h:Lcom/tkay/expressad/a/e;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 10
    iput v0, p0, Lcom/tkay/expressad/a/d;->a:I

    return-void
.end method

.method private a()I
    .locals 1

    .line 16
    iget v0, p0, Lcom/tkay/expressad/a/d;->a:I

    return v0
.end method

.method private a(I)V
    .locals 0

    .line 20
    iput p1, p0, Lcom/tkay/expressad/a/d;->a:I

    return-void
.end method

.method private a(Lcom/tkay/expressad/a/e;)V
    .locals 0

    .line 44
    iput-object p1, p0, Lcom/tkay/expressad/a/d;->h:Lcom/tkay/expressad/a/e;

    return-void
.end method

.method private c()Z
    .locals 2

    .line 24
    iget v0, p0, Lcom/tkay/expressad/a/d;->a:I

    const/16 v1, 0x8

    if-eq v0, v1, :cond_1

    const/16 v1, 0x10

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method private d()Z
    .locals 2

    .line 28
    iget v0, p0, Lcom/tkay/expressad/a/d;->a:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private e()Z
    .locals 2

    .line 32
    iget v0, p0, Lcom/tkay/expressad/a/d;->a:I

    const/16 v1, 0x20

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private f()Z
    .locals 2

    .line 36
    iget v0, p0, Lcom/tkay/expressad/a/d;->a:I

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public b()V
    .locals 1

    const/16 v0, 0x8

    .line 40
    iput v0, p0, Lcom/tkay/expressad/a/d;->a:I

    return-void
.end method
