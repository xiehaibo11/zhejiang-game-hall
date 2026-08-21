.class public Lcom/tkay/expressad/mbbanner/a/c/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/mbbanner/a/c/c;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Lcom/tkay/expressad/mbbanner/a/c/c;

.field private c:Lcom/tkay/expressad/d/c;

.field private d:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 13
    const-class v0, Lcom/tkay/expressad/mbbanner/a/c/e;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/mbbanner/a/c/e;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/tkay/expressad/mbbanner/a/c/c;Lcom/tkay/expressad/d/c;)V
    .locals 1

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 17
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->d:Z

    .line 20
    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->c:Lcom/tkay/expressad/d/c;

    .line 21
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->b:Lcom/tkay/expressad/mbbanner/a/c/c;

    return-void
.end method

.method private static a(Lcom/tkay/expressad/d/c;Z)Z
    .locals 5

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    return v0

    :cond_0
    if-eqz p0, :cond_2

    .line 102
    invoke-virtual {p0}, Lcom/tkay/expressad/d/c;->a()D

    move-result-wide v1

    const-wide/high16 v3, 0x3ff0000000000000L    # 1.0

    cmpl-double p1, v1, v3

    if-nez p1, :cond_1

    return v0

    .line 105
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/d/c;->a()D

    move-result-wide p0

    .line 106
    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    invoke-virtual {v1}, Ljava/util/Random;->nextDouble()D

    move-result-wide v1

    cmpl-double p0, v1, p0

    if-lez p0, :cond_2

    const/4 p0, 0x1

    return p0

    :cond_2
    return v0
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->b:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_0

    .line 63
    invoke-interface {v0}, Lcom/tkay/expressad/mbbanner/a/c/c;->a()V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 55
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->b:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_0

    iget-boolean v1, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->d:Z

    if-nez v1, :cond_0

    .line 56
    invoke-interface {v0, p1}, Lcom/tkay/expressad/mbbanner/a/c/c;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;Z)V
    .locals 1

    .line 83
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->b:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz p2, :cond_0

    .line 84
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->d:Z

    invoke-interface {p2, p1, v0}, Lcom/tkay/expressad/mbbanner/a/c/c;->a(Lcom/tkay/expressad/foundation/d/c;Z)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 48
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->b:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_0

    .line 49
    invoke-interface {v0, p1}, Lcom/tkay/expressad/mbbanner/a/c/c;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_1

    .line 28
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 29
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->c:Lcom/tkay/expressad/d/c;

    const/4 v1, 0x0

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->A()Z

    move-result v2

    if-nez v2, :cond_0

    if-eqz v0, :cond_0

    .line 1102
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->a()D

    move-result-wide v2

    const-wide/high16 v4, 0x3ff0000000000000L    # 1.0

    cmpl-double v2, v2, v4

    if-eqz v2, :cond_0

    .line 1105
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->a()D

    move-result-wide v2

    .line 1106
    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    invoke-virtual {v0}, Ljava/util/Random;->nextDouble()D

    move-result-wide v4

    cmpl-double v0, v4, v2

    if-lez v0, :cond_0

    const/4 v1, 0x1

    .line 29
    :cond_0
    iput-boolean v1, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->d:Z

    .line 30
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-boolean v1, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->d:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 36
    :catch_0
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->b:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_2

    .line 41
    invoke-interface {v0, p1}, Lcom/tkay/expressad/mbbanner/a/c/c;->a(Ljava/util/List;)V

    :cond_2
    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 114
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->b:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_0

    .line 115
    invoke-interface {v0, p1}, Lcom/tkay/expressad/mbbanner/a/c/c;->a(Z)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->b:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_0

    .line 70
    invoke-interface {v0}, Lcom/tkay/expressad/mbbanner/a/c/c;->b()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->b:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_0

    .line 77
    invoke-interface {v0}, Lcom/tkay/expressad/mbbanner/a/c/c;->c()V

    :cond_0
    return-void
.end method

.method public final d()V
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/c/e;->b:Lcom/tkay/expressad/mbbanner/a/c/c;

    if-eqz v0, :cond_0

    .line 91
    invoke-interface {v0}, Lcom/tkay/expressad/mbbanner/a/c/c;->d()V

    :cond_0
    return-void
.end method
