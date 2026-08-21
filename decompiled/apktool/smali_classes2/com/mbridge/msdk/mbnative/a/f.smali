.class public final Lcom/mbridge/msdk/mbnative/a/f;
.super Ljava/lang/Object;
.source "NativeCacheFactory.java"


# static fields
.field public static a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Lcom/mbridge/msdk/mbnative/a/b<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;>;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 12
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbnative/a/f;->a:Ljava/util/Map;

    return-void
.end method

.method public static a(I)Lcom/mbridge/msdk/mbnative/a/b;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Lcom/mbridge/msdk/mbnative/a/b<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/Campaign;",
            ">;>;"
        }
    .end annotation

    .line 17
    sget-object v0, Lcom/mbridge/msdk/mbnative/a/f;->a:Ljava/util/Map;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 18
    sget-object v0, Lcom/mbridge/msdk/mbnative/a/f;->a:Ljava/util/Map;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/mbridge/msdk/mbnative/a/b;

    return-object p0

    :cond_0
    const/4 v0, 0x1

    if-eq p0, v0, :cond_5

    const/4 v0, 0x2

    if-eq p0, v0, :cond_4

    const/4 v0, 0x3

    if-eq p0, v0, :cond_3

    const/4 v0, 0x6

    if-eq p0, v0, :cond_2

    const/4 v0, 0x7

    if-eq p0, v0, :cond_1

    .line 37
    new-instance v0, Lcom/mbridge/msdk/mbnative/a/a;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbnative/a/a;-><init>(I)V

    goto :goto_0

    .line 34
    :cond_1
    new-instance v0, Lcom/mbridge/msdk/mbnative/a/e;

    invoke-direct {v0}, Lcom/mbridge/msdk/mbnative/a/e;-><init>()V

    goto :goto_0

    .line 31
    :cond_2
    new-instance v0, Lcom/mbridge/msdk/mbnative/a/c;

    invoke-direct {v0}, Lcom/mbridge/msdk/mbnative/a/c;-><init>()V

    goto :goto_0

    .line 28
    :cond_3
    new-instance v0, Lcom/mbridge/msdk/mbnative/a/d;

    invoke-direct {v0}, Lcom/mbridge/msdk/mbnative/a/d;-><init>()V

    goto :goto_0

    .line 25
    :cond_4
    new-instance v0, Lcom/mbridge/msdk/mbnative/a/a;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbnative/a/a;-><init>(I)V

    goto :goto_0

    .line 22
    :cond_5
    new-instance v0, Lcom/mbridge/msdk/mbnative/a/a;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbnative/a/a;-><init>(I)V

    .line 40
    :goto_0
    sget-object v1, Lcom/mbridge/msdk/mbnative/a/f;->a:Ljava/util/Map;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-interface {v1, p0, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method
