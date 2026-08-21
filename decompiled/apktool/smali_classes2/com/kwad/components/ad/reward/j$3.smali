.class final Lcom/kwad/components/ad/reward/j$3;
.super Lcom/kwad/components/ad/reward/k$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/j;->a(Landroid/app/Activity;Lcom/kwad/components/ad/reward/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic oB:Lcom/kwad/components/ad/reward/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j$3;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/k$b;-><init>()V

    return-void
.end method


# virtual methods
.method public final gg()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j$3;->oB:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->pause()V

    return-void
.end method
