.class final Lcom/kwad/components/ad/splashscreen/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c;->kv()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic BU:Lcom/kwad/components/ad/splashscreen/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c$2;->BU:Lcom/kwad/components/ad/splashscreen/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 4

    invoke-static {}, Lcom/kwad/sdk/d/a/a;->yD()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c$2;->BU:Lcom/kwad/components/ad/splashscreen/c;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c;->a(Lcom/kwad/components/ad/splashscreen/c;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c;->m(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c$2;->BU:Lcom/kwad/components/ad/splashscreen/c;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c;->b(Lcom/kwad/components/ad/splashscreen/c;)Lcom/kwad/sdk/mvp/a;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c$2;->BU:Lcom/kwad/components/ad/splashscreen/c;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c;->c(Lcom/kwad/components/ad/splashscreen/c;)Lcom/kwad/sdk/mvp/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/splashscreen/h;

    const/4 v1, 0x1

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    const/16 v2, 0x35

    const/4 v3, 0x2

    invoke-virtual {v0, v1, p1, v2, v3}, Lcom/kwad/components/ad/splashscreen/h;->c(ILandroid/content/Context;II)V

    :cond_1
    :goto_0
    return-void
.end method
