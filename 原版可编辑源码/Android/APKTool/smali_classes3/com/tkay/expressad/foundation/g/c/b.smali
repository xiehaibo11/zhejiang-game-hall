.class public abstract Lcom/tkay/expressad/foundation/g/c/b;
.super Ljava/lang/Object;


# instance fields
.field protected a:Lcom/tkay/expressad/foundation/g/c/a;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 10
    new-instance v0, Lcom/tkay/expressad/foundation/g/c/a;

    invoke-direct {v0}, Lcom/tkay/expressad/foundation/g/c/a;-><init>()V

    .line 11
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/g/c/a;->a(Ljava/lang/String;)V

    .line 12
    sget-object p1, Lcom/tkay/expressad/foundation/g/c/c;->a:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/g/c/a;->a(Lcom/tkay/expressad/foundation/g/c/c;)V

    .line 13
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/g/c/b;->b()Ljava/util/List;

    move-result-object p1

    .line 14
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 15
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/g/c/a;->a(Ljava/util/List;)V

    .line 17
    :cond_0
    iput-object v0, p0, Lcom/tkay/expressad/foundation/g/c/b;->a:Lcom/tkay/expressad/foundation/g/c/a;

    return-void
.end method

.method protected static a(Ljava/util/ArrayList;Lcom/tkay/expressad/foundation/g/c/c;Ljava/lang/String;)Lcom/tkay/expressad/foundation/g/c/a;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/foundation/g/c/a;",
            ">;",
            "Lcom/tkay/expressad/foundation/g/c/c;",
            "Ljava/lang/String;",
            ")",
            "Lcom/tkay/expressad/foundation/g/c/a;"
        }
    .end annotation

    .line 27
    new-instance v0, Lcom/tkay/expressad/foundation/g/c/a;

    invoke-direct {v0}, Lcom/tkay/expressad/foundation/g/c/a;-><init>()V

    .line 28
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/g/c/a;->a(Lcom/tkay/expressad/foundation/g/c/c;)V

    .line 29
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/foundation/g/c/a;->a(Ljava/lang/String;)V

    .line 30
    invoke-virtual {p0, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-object v0
.end method


# virtual methods
.method public final a()Lcom/tkay/expressad/foundation/g/c/a;
    .locals 1

    .line 21
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/c/b;->a:Lcom/tkay/expressad/foundation/g/c/a;

    return-object v0
.end method

.method protected abstract b()Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/g/c/a;",
            ">;"
        }
    .end annotation
.end method
