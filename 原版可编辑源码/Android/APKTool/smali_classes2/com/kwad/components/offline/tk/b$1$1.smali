.class final Lcom/kwad/components/offline/tk/b$1$1;
.super Lcom/kwad/components/core/p/g;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/offline/tk/b$1;->onSuccess(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ZF:Lcom/kwad/components/offline/tk/TkCompoImpl;

.field final synthetic ZG:Lcom/kwad/components/offline/tk/b$1;


# direct methods
.method constructor <init>(Lcom/kwad/components/offline/tk/b$1;Lcom/kwad/components/offline/tk/TkCompoImpl;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/offline/tk/b$1$1;->ZG:Lcom/kwad/components/offline/tk/b$1;

    iput-object p2, p0, Lcom/kwad/components/offline/tk/b$1$1;->ZF:Lcom/kwad/components/offline/tk/TkCompoImpl;

    invoke-direct {p0}, Lcom/kwad/components/core/p/g;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/core/p/g;->a(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V

    new-instance v0, Lcom/kwad/components/offline/tk/b$1$1$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/offline/tk/b$1$1$1;-><init>(Lcom/kwad/components/offline/tk/b$1$1;Lcom/kwad/sdk/core/response/model/SdkConfigData;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method
