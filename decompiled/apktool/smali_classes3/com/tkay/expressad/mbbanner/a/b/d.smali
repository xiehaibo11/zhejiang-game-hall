.class public Lcom/tkay/expressad/mbbanner/a/b/d;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Ljava/lang/String;

.field private c:I

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 5
    const-class v0, Lcom/tkay/expressad/mbbanner/a/b/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/mbbanner/a/b/d;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;I)V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 13
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/b/d;->b:Ljava/lang/String;

    .line 14
    iput p2, p0, Lcom/tkay/expressad/mbbanner/a/b/d;->c:I

    return-void
.end method

.method private a()Ljava/lang/String;
    .locals 1

    .line 18
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/b/d;->b:Ljava/lang/String;

    return-object v0
.end method

.method private a(I)V
    .locals 0

    .line 30
    iput p1, p0, Lcom/tkay/expressad/mbbanner/a/b/d;->c:I

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 0

    .line 22
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/b/d;->b:Ljava/lang/String;

    return-void
.end method

.method private b()I
    .locals 1

    .line 26
    iget v0, p0, Lcom/tkay/expressad/mbbanner/a/b/d;->c:I

    return v0
.end method

.method private b(Ljava/lang/String;)V
    .locals 0

    .line 38
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/b/d;->d:Ljava/lang/String;

    return-void
.end method

.method private c()Ljava/lang/String;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/b/d;->d:Ljava/lang/String;

    return-object v0
.end method

.method private c(Ljava/lang/String;)V
    .locals 0

    .line 46
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/b/d;->e:Ljava/lang/String;

    return-void
.end method

.method private d()Ljava/lang/String;
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/b/d;->e:Ljava/lang/String;

    return-object v0
.end method
