.class final Lcom/kwad/components/core/c/d$b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/c/d$b;->a(Lcom/kwad/components/core/p/a;Lcom/kwad/components/core/response/model/AdResultData;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Iq:Lcom/kwad/components/core/response/model/AdResultData;

.field final synthetic Ir:Lcom/kwad/components/core/c/d$b;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/c/d$b;Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/c/d$b$1;->Ir:Lcom/kwad/components/core/c/d$b;

    iput-object p2, p0, Lcom/kwad/components/core/c/d$b$1;->Iq:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/c/d$b$1;->Ir:Lcom/kwad/components/core/c/d$b;

    iget-object v1, p0, Lcom/kwad/components/core/c/d$b$1;->Iq:Lcom/kwad/components/core/response/model/AdResultData;

    invoke-static {v0, v1}, Lcom/kwad/components/core/c/d$b;->a(Lcom/kwad/components/core/c/d$b;Lcom/kwad/components/core/response/model/AdResultData;)V

    return-void
.end method
