.class final Lcom/kwad/components/ad/interstitial/d/c$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/c;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic eX:Landroid/view/View;

.field final synthetic jw:Lcom/kwad/components/ad/interstitial/d/c;

.field final synthetic jz:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/c;Landroid/content/Context;Landroid/view/View;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/c$4;->jw:Lcom/kwad/components/ad/interstitial/d/c;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/d/c$4;->jz:Landroid/content/Context;

    iput-object p3, p0, Lcom/kwad/components/ad/interstitial/d/c$4;->eX:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onDecode(Ljava/lang/String;Ljava/io/InputStream;Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public final onLoadingCancelled(Ljava/lang/String;Landroid/view/View;)V
    .locals 0

    return-void
.end method

.method public final onLoadingComplete(Ljava/lang/String;Landroid/view/View;Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;)V
    .locals 0

    new-instance p1, Lcom/kwad/components/ad/interstitial/d/c$4$1;

    invoke-direct {p1, p0, p3}, Lcom/kwad/components/ad/interstitial/d/c$4$1;-><init>(Lcom/kwad/components/ad/interstitial/d/c$4;Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onLoadingFailed(Ljava/lang/String;Landroid/view/View;Lcom/kwad/sdk/core/imageloader/core/assist/FailReason;)V
    .locals 0

    return-void
.end method

.method public final onLoadingStarted(Ljava/lang/String;Landroid/view/View;)V
    .locals 0

    return-void
.end method
