.class final Lcom/kwad/components/offline/adLive/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveHttpRequestListenerDelegate;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/offline/adLive/b;->getAdLiveHttpRequestListenerDelegate()Lcom/kwad/components/offline/api/core/adlive/listener/AdLiveHttpRequestListenerDelegate;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Zl:Lcom/kwad/components/offline/adLive/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/offline/adLive/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/offline/adLive/b$2;->Zl:Lcom/kwad/components/offline/adLive/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final doPost(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;)Lcom/kwad/sdk/core/network/c;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/kwad/sdk/core/network/c;"
        }
    .end annotation

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/g;->wX()Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    move-result-object v0

    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/aq;->appendUrl(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1, p3, p4}, Lcom/kwad/sdk/export/proxy/AdHttpProxy;->doPost(Ljava/lang/String;Ljava/util/Map;Ljava/util/Map;)Lcom/kwad/sdk/core/network/c;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    const/4 p1, 0x0

    return-object p1
.end method
