.class final Lcom/kwad/components/ad/interstitial/d/d$17;
.super Landroid/view/ViewOutlineProvider;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->a(Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/webview/jshandler/WebCardVideoPositionHandler$VideoPosition;Lcom/kwad/sdk/widget/KSFrameLayout;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kd:Lcom/kwad/components/ad/interstitial/d/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$17;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Landroid/view/ViewOutlineProvider;-><init>()V

    return-void
.end method


# virtual methods
.method public final getOutline(Landroid/view/View;Landroid/graphics/Outline;)V
    .locals 2

    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result v0

    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result p1

    const/4 v1, 0x0

    invoke-virtual {p2, v1, v1, v0, p1}, Landroid/graphics/Outline;->setRect(IIII)V

    return-void
.end method
