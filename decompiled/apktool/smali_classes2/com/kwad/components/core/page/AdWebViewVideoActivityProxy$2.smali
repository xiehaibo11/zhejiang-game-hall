.class final Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$2;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->initView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$2;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 2

    iget-object p1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$2;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    invoke-static {p1}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$100(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    const/16 v0, 0x32

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/utils/ac$a;)V

    iget-object p1, p0, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy$2;->MG:Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;->access$200(Lcom/kwad/components/core/page/AdWebViewVideoActivityProxy;Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method
