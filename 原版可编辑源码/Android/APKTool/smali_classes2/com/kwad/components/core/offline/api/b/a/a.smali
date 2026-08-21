.class public final Lcom/kwad/components/core/offline/api/b/a/a;
.super Ljava/lang/Object;


# static fields
.field private static final Lp:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/kwad/components/core/offline/api/b/a/a;->Lp:Ljava/util/Map;

    return-void
.end method

.method public static a(ILcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    sget-object v0, Lcom/kwad/components/core/offline/api/b/a/a;->Lp:Ljava/util/Map;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-interface {v0, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static au(I)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    sget-object v0, Lcom/kwad/components/core/offline/api/b/a/a;->Lp:Ljava/util/Map;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method public static av(I)V
    .locals 1

    sget-object v0, Lcom/kwad/components/core/offline/api/b/a/a;->Lp:Ljava/util/Map;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
