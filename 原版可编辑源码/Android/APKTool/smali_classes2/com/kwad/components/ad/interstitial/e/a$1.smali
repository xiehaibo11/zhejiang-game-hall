.class final Lcom/kwad/components/ad/interstitial/e/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/page/widget/a$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/e/a;->c(Lcom/kwad/components/ad/interstitial/d/c;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic jd:Lcom/kwad/components/ad/interstitial/d/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/e/a$1;->jd:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/DialogInterface;)V
    .locals 2

    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/e/a$1;->jd:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->ck(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/core/report/a;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    return-void
.end method

.method public final b(Landroid/content/DialogInterface;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/e/a$1;->jd:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    const/4 v2, 0x0

    const/4 v3, -0x1

    invoke-virtual {v0, v2, v3, v1}, Lcom/kwad/components/ad/interstitial/d/c;->a(ZILcom/kwad/sdk/core/video/videoview/a;)V

    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/e/a$1;->jd:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v1, 0x97

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->ci(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->ck(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/e/a$1;->jd:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d;->dismiss()V

    return-void
.end method

.method public final c(Landroid/content/DialogInterface;)V
    .locals 0

    return-void
.end method
