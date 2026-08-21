.class final Lcom/kwad/components/ad/reward/j$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;IIJZLcom/kwad/sdk/core/report/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic jy:I

.field final synthetic pR:Lcom/kwad/components/ad/reward/j;

.field final synthetic pS:Lcom/kwad/sdk/core/report/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j;ILcom/kwad/sdk/core/report/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j$5;->pR:Lcom/kwad/components/ad/reward/j;

    iput p2, p0, Lcom/kwad/components/ad/reward/j$5;->jy:I

    iput-object p3, p0, Lcom/kwad/components/ad/reward/j$5;->pS:Lcom/kwad/sdk/core/report/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j$5;->pR:Lcom/kwad/components/ad/reward/j;

    iget v1, p0, Lcom/kwad/components/ad/reward/j$5;->jy:I

    iget-object v2, p0, Lcom/kwad/components/ad/reward/j$5;->pS:Lcom/kwad/sdk/core/report/j;

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/j;ILcom/kwad/sdk/core/report/j;)V

    return-void
.end method
