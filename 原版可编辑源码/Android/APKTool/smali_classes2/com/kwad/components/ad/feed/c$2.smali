.class final Lcom/kwad/components/ad/feed/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/feed/b/m$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/c;->a(Lcom/kwad/components/ad/feed/c$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic dK:Lcom/kwad/components/ad/feed/c;

.field final synthetic dL:Lcom/kwad/components/ad/feed/c$a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/c;Lcom/kwad/components/ad/feed/c$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/c$2;->dK:Lcom/kwad/components/ad/feed/c;

    iput-object p2, p0, Lcom/kwad/components/ad/feed/c$2;->dL:Lcom/kwad/components/ad/feed/c$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final c(ILjava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c$2;->dK:Lcom/kwad/components/ad/feed/c;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/c;->b(Lcom/kwad/components/ad/feed/c;)Lcom/kwad/components/core/widget/b;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/feed/c;->a(Lcom/kwad/components/ad/feed/c;Lcom/kwad/components/core/widget/b;Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/c$2;->dL:Lcom/kwad/components/ad/feed/c$a;

    invoke-interface {v0, p1, p2}, Lcom/kwad/components/ad/feed/c$a;->c(ILjava/lang/String;)V

    return-void
.end method
