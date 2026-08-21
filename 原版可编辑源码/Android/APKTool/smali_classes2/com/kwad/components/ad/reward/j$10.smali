.class final Lcom/kwad/components/ad/reward/j$10;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/b/c/d$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic oB:Lcom/kwad/components/ad/reward/j;

.field final synthetic pW:Lcom/kwad/components/ad/reward/k$c;

.field final synthetic pX:Lcom/kwad/components/ad/reward/k$a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j$10;->oB:Lcom/kwad/components/ad/reward/j;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j$10;->pW:Lcom/kwad/components/ad/reward/k$c;

    iput-object p3, p0, Lcom/kwad/components/ad/reward/j$10;->pX:Lcom/kwad/components/ad/reward/k$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final gi()Z
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j$10;->oB:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j$10;->pW:Lcom/kwad/components/ad/reward/k$c;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/j$10;->pX:Lcom/kwad/components/ad/reward/k$a;

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/ad/reward/k$c;Lcom/kwad/components/ad/reward/k$a;)V

    const/4 v0, 0x1

    return v0
.end method
