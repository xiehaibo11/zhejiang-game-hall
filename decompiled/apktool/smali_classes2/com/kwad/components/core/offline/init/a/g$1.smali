.class final Lcom/kwad/components/core/offline/init/a/g$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/ICrash;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/offline/init/a/g;->crash()Lcom/kwad/components/offline/api/core/api/ICrash;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic LR:Lcom/kwad/components/core/offline/init/a/g;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/offline/init/a/g;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/a/g$1;->LR:Lcom/kwad/components/core/offline/init/a/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final gatherException(Ljava/lang/Throwable;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/service/c;->gatherException(Ljava/lang/Throwable;)V

    return-void
.end method
