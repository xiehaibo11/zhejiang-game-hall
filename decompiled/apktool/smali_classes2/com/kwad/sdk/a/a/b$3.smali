.class final Lcom/kwad/sdk/a/a/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/a/a/b;->ag(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ahA:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field final synthetic ahy:Lcom/kwad/sdk/a/a/b;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/a/a/b;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/a/a/b$3;->ahy:Lcom/kwad/sdk/a/a/b;

    iput-object p2, p0, Lcom/kwad/sdk/a/a/b$3;->ahA:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/a/a/b$3;->ahy:Lcom/kwad/sdk/a/a/b;

    iget-object v1, p0, Lcom/kwad/sdk/a/a/b$3;->ahA:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1}, Lcom/kwad/sdk/a/a/b;->b(Lcom/kwad/sdk/a/a/b;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method
