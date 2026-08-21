.class final Lcom/kwad/components/core/i/a$1$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/i/a$1;->a(Lcom/kwad/components/core/response/model/AdResultData;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic KM:Lcom/kwad/components/core/i/a$1;

.field final synthetic ie:Lcom/kwad/components/core/response/model/AdResultData;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/i/a$1;Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/i/a$1$2;->KM:Lcom/kwad/components/core/i/a$1;

    iput-object p2, p0, Lcom/kwad/components/core/i/a$1$2;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/core/i/a$1$2;->KM:Lcom/kwad/components/core/i/a$1;

    iget-object v0, v0, Lcom/kwad/components/core/i/a$1;->KL:Lcom/kwad/components/core/i/a$a;

    iget-object v1, p0, Lcom/kwad/components/core/i/a$1$2;->ie:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-virtual {v1}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/kwad/components/core/i/a$a;->onRequestResult(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-void
.end method
