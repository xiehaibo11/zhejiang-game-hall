.class public final Lcom/mbridge/msdk/mbnative/a/d;
.super Lcom/mbridge/msdk/mbnative/a/b;
.source "FaceBookCache.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/mbridge/msdk/mbnative/a/b<",
        "Ljava/lang/String;",
        "Ljava/util/List<",
        "Lcom/mbridge/msdk/out/Campaign;",
        ">;>;"
    }
.end annotation


# static fields
.field private static a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Ljava/lang/Object;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 11
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbnative/a/d;->a:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Lcom/mbridge/msdk/mbnative/a/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final bridge synthetic a(Ljava/lang/Object;Ljava/lang/Object;)V
    .locals 1

    .line 9
    check-cast p1, Ljava/lang/String;

    check-cast p2, Ljava/util/List;

    .line 3015
    sget-object v0, Lcom/mbridge/msdk/mbnative/a/d;->a:Ljava/util/Map;

    invoke-virtual {p0, p1, p2, v0}, Lcom/mbridge/msdk/mbnative/a/d;->a(Ljava/lang/String;Ljava/util/List;Ljava/util/Map;)V

    return-void
.end method

.method public final bridge synthetic a(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 9
    check-cast p1, Ljava/lang/String;

    check-cast p2, Ljava/util/List;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 42
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/mbnative/a/d;->a:Ljava/util/Map;

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbnative/a/d;->a(Ljava/lang/String;Ljava/util/Map;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 44
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final synthetic b(Ljava/lang/Object;I)Ljava/lang/Object;
    .locals 1

    .line 9
    check-cast p1, Ljava/lang/String;

    .line 1026
    sget-object v0, Lcom/mbridge/msdk/mbnative/a/d;->a:Ljava/util/Map;

    invoke-virtual {p0, p1, v0, p2}, Lcom/mbridge/msdk/mbnative/a/d;->a(Ljava/lang/String;Ljava/util/Map;I)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method
