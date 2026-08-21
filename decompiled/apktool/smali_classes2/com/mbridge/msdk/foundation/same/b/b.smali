.class public abstract Lcom/mbridge/msdk/foundation/same/b/b;
.super Ljava/lang/Object;
.source "DirectoryContext.java"


# instance fields
.field protected a:Lcom/mbridge/msdk/foundation/same/b/a;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 14
    new-instance v0, Lcom/mbridge/msdk/foundation/same/b/a;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/same/b/a;-><init>()V

    .line 15
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/b/a;->a(Ljava/lang/String;)V

    .line 16
    sget-object p1, Lcom/mbridge/msdk/foundation/same/b/c;->a:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/b/a;->a(Lcom/mbridge/msdk/foundation/same/b/c;)V

    .line 17
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/same/b/b;->b()Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 18
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 19
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/b/a;->a(Ljava/util/List;)V

    .line 21
    :cond_0
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/b/b;->a:Lcom/mbridge/msdk/foundation/same/b/a;

    return-void
.end method


# virtual methods
.method public final a()Lcom/mbridge/msdk/foundation/same/b/a;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/b/b;->a:Lcom/mbridge/msdk/foundation/same/b/a;

    return-object v0
.end method

.method protected final a(Ljava/util/ArrayList;Lcom/mbridge/msdk/foundation/same/b/c;Ljava/lang/String;)Lcom/mbridge/msdk/foundation/same/b/a;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/mbridge/msdk/foundation/same/b/a;",
            ">;",
            "Lcom/mbridge/msdk/foundation/same/b/c;",
            "Ljava/lang/String;",
            ")",
            "Lcom/mbridge/msdk/foundation/same/b/a;"
        }
    .end annotation

    .line 35
    new-instance v0, Lcom/mbridge/msdk/foundation/same/b/a;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/same/b/a;-><init>()V

    .line 36
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/same/b/a;->a(Lcom/mbridge/msdk/foundation/same/b/c;)V

    .line 37
    invoke-virtual {v0, p3}, Lcom/mbridge/msdk/foundation/same/b/a;->a(Ljava/lang/String;)V

    .line 38
    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-object v0
.end method

.method protected abstract b()Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/same/b/a;",
            ">;"
        }
    .end annotation
.end method
