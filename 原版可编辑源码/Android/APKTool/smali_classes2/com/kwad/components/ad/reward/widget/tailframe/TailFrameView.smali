.class public Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;
.super Lcom/kwad/sdk/widget/KSFrameLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$a;,
        Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;,
        Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$c;,
        Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$d;
    }
.end annotation


# instance fields
.field private By:Lcom/kwad/components/ad/reward/widget/tailframe/a;

.field private qx:Lcom/kwad/components/ad/reward/j;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/view/View;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;Landroid/view/View;)V

    return-void
.end method

.method private d(ZZ)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->By:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_2

    if-eqz p2, :cond_1

    new-instance p1, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$d;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$d;-><init>()V

    :goto_0
    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->By:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    return-void

    :cond_1
    new-instance p1, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$c;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$c;-><init>()V

    goto :goto_0

    :cond_2
    if-eqz p2, :cond_3

    new-instance p1, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$b;-><init>()V

    goto :goto_0

    :cond_3
    new-instance p1, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$a;

    invoke-direct {p1}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView$a;-><init>()V

    goto :goto_0
.end method


# virtual methods
.method public final a(Landroid/content/Context;ZZ)V
    .locals 1

    invoke-direct {p0, p2, p3}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->d(ZZ)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->By:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->D(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->By:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->d(ZZ)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->By:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->kn()Landroid/view/View;

    move-result-object p1

    const/4 p2, -0x1

    invoke-virtual {p0, p1, p2, p2}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->addView(Landroid/view/View;II)V

    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/widget/tailframe/b;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->By:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->setCallerContext(Lcom/kwad/components/ad/reward/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->By:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    invoke-virtual {v0, v1, v2, p1}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/components/ad/reward/widget/tailframe/b;)V

    return-void
.end method

.method public final destroy()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->By:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->destroy()V

    :cond_0
    return-void
.end method

.method public final jV()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->By:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->jV()V

    return-void
.end method

.method public setCallerContext(Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->qx:Lcom/kwad/components/ad/reward/j;

    return-void
.end method
