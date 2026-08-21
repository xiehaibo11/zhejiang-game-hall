.class public final Lcom/tkay/expressad/out/f;
.super Ljava/lang/Object;


# instance fields
.field private a:I

.field private b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a()I
    .locals 1

    .line 14
    iget v0, p0, Lcom/tkay/expressad/out/f;->a:I

    return v0
.end method

.method private b()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    .line 20
    iget-object v0, p0, Lcom/tkay/expressad/out/f;->b:Ljava/util/List;

    return-object v0
.end method

.method private c()Ljava/lang/String;
    .locals 1

    .line 26
    iget-object v0, p0, Lcom/tkay/expressad/out/f;->c:Ljava/lang/String;

    return-object v0
.end method

.method private d()Ljava/lang/String;
    .locals 1

    .line 32
    iget-object v0, p0, Lcom/tkay/expressad/out/f;->d:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final a(I)V
    .locals 0

    .line 17
    iput p1, p0, Lcom/tkay/expressad/out/f;->a:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/tkay/expressad/out/f;->c:Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 23
    iput-object p1, p0, Lcom/tkay/expressad/out/f;->b:Ljava/util/List;

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/expressad/out/f;->d:Ljava/lang/String;

    return-void
.end method
