.class public final Lcom/tkay/expressad/mbbanner/a/b/e;
.super Ljava/lang/Object;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:I

.field private d:I


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 2

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 5
    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->a:Ljava/lang/String;

    .line 6
    iput-object v0, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->b:Ljava/lang/String;

    const/4 v0, 0x0

    .line 7
    iput v0, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->c:I

    const/4 v1, 0x1

    .line 8
    iput v1, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->d:I

    .line 11
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->a:Ljava/lang/String;

    .line 12
    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->b:Ljava/lang/String;

    .line 13
    iput v0, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->c:I

    .line 14
    iput p3, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->d:I

    return-void
.end method

.method private b(I)V
    .locals 0

    .line 46
    iput p1, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->d:I

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 0

    .line 22
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->a:Ljava/lang/String;

    return-void
.end method

.method private d()Ljava/lang/String;
    .locals 1

    .line 18
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->a:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 26
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 38
    iput p1, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->c:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 30
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->b:Ljava/lang/String;

    return-void
.end method

.method public final b()I
    .locals 1

    .line 34
    iget v0, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->c:I

    return v0
.end method

.method public final c()I
    .locals 1

    .line 42
    iget v0, p0, Lcom/tkay/expressad/mbbanner/a/b/e;->d:I

    return v0
.end method
