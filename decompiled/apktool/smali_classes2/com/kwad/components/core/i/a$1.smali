.class final Lcom/kwad/components/core/i/a$1;
.super Lcom/kwad/components/core/p/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/i/a;->a(IILcom/kwad/sdk/internal/api/SceneImpl;ILcom/kwad/components/core/i/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic KL:Lcom/kwad/components/core/i/a$a;

.field final synthetic Kg:I

.field final synthetic hD:J


# direct methods
.method constructor <init>(Lcom/kwad/components/core/i/a$a;IJ)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/i/a$1;->KL:Lcom/kwad/components/core/i/a$a;

    iput p2, p0, Lcom/kwad/components/core/i/a$1;->Kg:I

    iput-wide p3, p0, Lcom/kwad/components/core/i/a$1;->hD:J

    invoke-direct {p0}, Lcom/kwad/components/core/p/h;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/i/a$1$2;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/i/a$1$2;-><init>(Lcom/kwad/components/core/i/a$1;Lcom/kwad/components/core/response/model/AdResultData;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    new-instance v0, Lcom/kwad/components/core/i/a$1$3;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/i/a$1$3;-><init>(Lcom/kwad/components/core/i/a$1;Lcom/kwad/components/core/response/model/AdResultData;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onError(ILjava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/i/a$1$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/components/core/i/a$1$1;-><init>(Lcom/kwad/components/core/i/a$1;ILjava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
