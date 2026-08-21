.class public abstract Lcom/kwad/components/core/offline/init/DefaultOfflineCompo;
.super Lcom/kwad/sdk/components/d;

# interfaces
.implements Lcom/kwad/components/offline/api/IOfflineCompo;


# instance fields
.field private final mOfflineComponents:Lcom/kwad/components/offline/api/IOfflineCompo;


# direct methods
.method public constructor <init>(Lcom/kwad/components/offline/api/IOfflineCompo;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/components/d;-><init>()V

    invoke-static {p1}, Lcom/kwad/sdk/utils/ao;->checkNotNull(Ljava/lang/Object;)Ljava/lang/Object;

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/DefaultOfflineCompo;->mOfflineComponents:Lcom/kwad/components/offline/api/IOfflineCompo;

    return-void
.end method


# virtual methods
.method public init(Landroid/content/Context;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/DefaultOfflineCompo;->mOfflineComponents:Lcom/kwad/components/offline/api/IOfflineCompo;

    invoke-interface {v0, p1}, Lcom/kwad/components/offline/api/IOfflineCompo;->init(Landroid/content/Context;)V

    return-void
.end method

.method public priority()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/DefaultOfflineCompo;->mOfflineComponents:Lcom/kwad/components/offline/api/IOfflineCompo;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/IOfflineCompo;->priority()I

    move-result v0

    return v0
.end method
