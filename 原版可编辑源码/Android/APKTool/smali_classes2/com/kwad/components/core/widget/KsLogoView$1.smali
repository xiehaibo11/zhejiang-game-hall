.class final Lcom/kwad/components/core/widget/KsLogoView$1;
.super Lcom/kwad/sdk/core/imageloader/core/listener/SimpleImageLoadingListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/widget/KsLogoView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic YZ:Lcom/kwad/components/core/widget/KsLogoView;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/widget/KsLogoView;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView$1;->YZ:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-direct {p0}, Lcom/kwad/sdk/core/imageloader/core/listener/SimpleImageLoadingListener;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLoadingComplete(Ljava/lang/String;Landroid/view/View;Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView$1;->YZ:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-static {p1}, Lcom/kwad/components/core/widget/KsLogoView;->c(Lcom/kwad/components/core/widget/KsLogoView;)Lcom/kwad/components/core/widget/KsLogoView$a;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView$1;->YZ:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-static {p1}, Lcom/kwad/components/core/widget/KsLogoView;->c(Lcom/kwad/components/core/widget/KsLogoView;)Lcom/kwad/components/core/widget/KsLogoView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/kwad/components/core/widget/KsLogoView$a;->kh()V

    :cond_0
    return-void
.end method

.method public final onLoadingFailed(Ljava/lang/String;Landroid/view/View;Lcom/kwad/sdk/core/imageloader/core/assist/FailReason;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView$1;->YZ:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-static {p1}, Lcom/kwad/components/core/widget/KsLogoView;->b(Lcom/kwad/components/core/widget/KsLogoView;)V

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView$1;->YZ:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-static {p1}, Lcom/kwad/components/core/widget/KsLogoView;->c(Lcom/kwad/components/core/widget/KsLogoView;)Lcom/kwad/components/core/widget/KsLogoView$a;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/widget/KsLogoView$1;->YZ:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-static {p1}, Lcom/kwad/components/core/widget/KsLogoView;->c(Lcom/kwad/components/core/widget/KsLogoView;)Lcom/kwad/components/core/widget/KsLogoView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/kwad/components/core/widget/KsLogoView$a;->kh()V

    :cond_0
    return-void
.end method
