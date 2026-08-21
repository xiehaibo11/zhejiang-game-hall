.class public final Lcom/kwad/components/core/widget/a;
.super Lcom/kwad/sdk/widget/KSFrameLayout;

# interfaces
.implements Lcom/kwad/sdk/utils/bn$a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/widget/a$a;
    }
.end annotation


# instance fields
.field private final SM:Landroid/view/View;

.field private XK:Lcom/kwad/components/core/widget/a$a;

.field private XL:Z

.field private XM:Z

.field private XN:I

.field private XO:Z

.field private XP:J

.field private XQ:Z

.field private final XR:F

.field private final XS:I

.field private final gx:Lcom/kwad/sdk/utils/bn;


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/view/View;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;Landroid/view/View;)V

    new-instance p1, Lcom/kwad/sdk/utils/bn;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/utils/bn;-><init>(Lcom/kwad/sdk/utils/bn$a;)V

    iput-object p1, p0, Lcom/kwad/components/core/widget/a;->gx:Lcom/kwad/sdk/utils/bn;

    const/4 p1, 0x5

    iput p1, p0, Lcom/kwad/components/core/widget/a;->XN:I

    iput-object p2, p0, Lcom/kwad/components/core/widget/a;->SM:Landroid/view/View;

    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    const/4 p2, 0x1

    invoke-direct {p1, p2, p2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/a;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zH()F

    move-result p1

    iput p1, p0, Lcom/kwad/components/core/widget/a;->XR:F

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/widget/a;->setVisiblePercent(F)V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zI()F

    move-result p1

    const/4 p2, 0x0

    cmpg-float p2, p1, p2

    if-gez p2, :cond_0

    const/high16 p1, 0x3f800000    # 1.0f

    :cond_0
    const/high16 p2, 0x447a0000    # 1000.0f

    mul-float/2addr p1, p2

    float-to-int p1, p1

    iput p1, p0, Lcom/kwad/components/core/widget/a;->XS:I

    return-void
.end method

.method private si()V
    .locals 4

    iget v0, p0, Lcom/kwad/components/core/widget/a;->XS:I

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/widget/a;->XK:Lcom/kwad/components/core/widget/a$a;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/widget/a;->SM:Landroid/view/View;

    invoke-interface {v0, v1}, Lcom/kwad/components/core/widget/a$a;->k(Landroid/view/View;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/widget/a;->gx:Lcom/kwad/sdk/utils/bn;

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/bn;->obtainMessage()Landroid/os/Message;

    move-result-object v0

    const/4 v1, 0x2

    iput v1, v0, Landroid/os/Message;->what:I

    iget-object v1, p0, Lcom/kwad/components/core/widget/a;->gx:Lcom/kwad/sdk/utils/bn;

    iget v2, p0, Lcom/kwad/components/core/widget/a;->XS:I

    int-to-long v2, v2

    invoke-virtual {v1, v0, v2, v3}, Lcom/kwad/sdk/utils/bn;->sendMessageDelayed(Landroid/os/Message;J)Z

    return-void
.end method

.method private sj()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/widget/a;->gx:Lcom/kwad/sdk/utils/bn;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/utils/bn;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/widget/a;->XM:Z

    return-void
.end method

.method private sk()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/core/widget/a;->XM:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/widget/a;->XM:Z

    iget-object v1, p0, Lcom/kwad/components/core/widget/a;->gx:Lcom/kwad/sdk/utils/bn;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessage(I)Z

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Landroid/os/Message;)V
    .locals 9

    iget-boolean v0, p0, Lcom/kwad/components/core/widget/a;->XL:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget p1, p1, Landroid/os/Message;->what:I

    const/high16 v0, 0x42c80000    # 100.0f

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eq p1, v2, :cond_4

    const/4 v3, 0x2

    if-eq p1, v3, :cond_1

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/core/widget/a;->SM:Landroid/view/View;

    iget v3, p0, Lcom/kwad/components/core/widget/a;->XR:F

    mul-float/2addr v3, v0

    float-to-int v0, v3

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/utils/bm;->a(Landroid/view/View;IZ)Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/core/widget/a;->XK:Lcom/kwad/components/core/widget/a$a;

    if-eqz p1, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/widget/a;->SM:Landroid/view/View;

    invoke-interface {p1, v0}, Lcom/kwad/components/core/widget/a$a;->k(Landroid/view/View;)V

    return-void

    :cond_2
    const/4 p1, 0x5

    iput p1, p0, Lcom/kwad/components/core/widget/a;->XN:I

    iget-object p1, p0, Lcom/kwad/components/core/widget/a;->gx:Lcom/kwad/sdk/utils/bn;

    invoke-virtual {p1, v2}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessage(I)Z

    :cond_3
    :goto_0
    return-void

    :cond_4
    const-string p1, "AdExposureView"

    const-string v3, "handleMsg MSG_CHECKING"

    invoke-static {p1, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/core/widget/a;->SM:Landroid/view/View;

    iget v3, p0, Lcom/kwad/components/core/widget/a;->XR:F

    mul-float/2addr v3, v0

    float-to-int v0, v3

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/utils/bm;->a(Landroid/view/View;IZ)Z

    move-result p1

    const-wide/16 v3, 0x64

    const-wide/16 v5, 0x1f4

    if-eqz p1, :cond_8

    invoke-direct {p0}, Lcom/kwad/components/core/widget/a;->sj()V

    iget-boolean p1, p0, Lcom/kwad/components/core/widget/a;->XO:Z

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/kwad/components/core/widget/a;->XK:Lcom/kwad/components/core/widget/a$a;

    if-eqz p1, :cond_6

    iget-object v0, p0, Lcom/kwad/components/core/widget/a;->SM:Landroid/view/View;

    invoke-interface {p1, v0}, Lcom/kwad/components/core/widget/a$a;->k(Landroid/view/View;)V

    goto :goto_1

    :cond_5
    iput-boolean v2, p0, Lcom/kwad/components/core/widget/a;->XO:Z

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    iput-wide v7, p0, Lcom/kwad/components/core/widget/a;->XP:J

    invoke-direct {p0}, Lcom/kwad/components/core/widget/a;->si()V

    :cond_6
    :goto_1
    iput-boolean v1, p0, Lcom/kwad/components/core/widget/a;->XQ:Z

    iget-object p1, p0, Lcom/kwad/components/core/widget/a;->gx:Lcom/kwad/sdk/utils/bn;

    iget v0, p0, Lcom/kwad/components/core/widget/a;->XN:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/kwad/components/core/widget/a;->XN:I

    if-lez v0, :cond_7

    goto :goto_2

    :cond_7
    move-wide v3, v5

    :goto_2
    invoke-virtual {p1, v2, v3, v4}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessageDelayed(IJ)Z

    return-void

    :cond_8
    iget-object p1, p0, Lcom/kwad/components/core/widget/a;->XK:Lcom/kwad/components/core/widget/a$a;

    if-eqz p1, :cond_9

    iget-boolean v0, p0, Lcom/kwad/components/core/widget/a;->XQ:Z

    if-nez v0, :cond_9

    invoke-interface {p1}, Lcom/kwad/components/core/widget/a$a;->eH()V

    :cond_9
    iput-boolean v2, p0, Lcom/kwad/components/core/widget/a;->XQ:Z

    iget-object p1, p0, Lcom/kwad/components/core/widget/a;->gx:Lcom/kwad/sdk/utils/bn;

    iget v0, p0, Lcom/kwad/components/core/widget/a;->XN:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/kwad/components/core/widget/a;->XN:I

    if-lez v0, :cond_a

    goto :goto_3

    :cond_a
    move-wide v3, v5

    :goto_3
    invoke-virtual {p1, v2, v3, v4}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessageDelayed(IJ)Z

    return-void
.end method

.method public final aa()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->aa()V

    const/4 v0, 0x5

    iput v0, p0, Lcom/kwad/components/core/widget/a;->XN:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/widget/a;->XL:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/widget/a;->XO:Z

    invoke-direct {p0}, Lcom/kwad/components/core/widget/a;->sk()V

    iget-object v0, p0, Lcom/kwad/components/core/widget/a;->XK:Lcom/kwad/components/core/widget/a$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/core/widget/a$a;->aa()V

    :cond_0
    return-void
.end method

.method public final ab()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->ab()V

    invoke-direct {p0}, Lcom/kwad/components/core/widget/a;->sj()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/components/core/widget/a;->XN:I

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/components/core/widget/a;->XP:J

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/widget/a;->XL:Z

    iget-object v0, p0, Lcom/kwad/components/core/widget/a;->XK:Lcom/kwad/components/core/widget/a$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/core/widget/a$a;->ab()V

    :cond_0
    return-void
.end method

.method public final onWindowFocusChanged(Z)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;->onWindowFocusChanged(Z)V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onWindowFocusChanged hasWindowFocus:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "AdExposureView"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final setViewCallback(Lcom/kwad/components/core/widget/a$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/widget/a;->XK:Lcom/kwad/components/core/widget/a$a;

    return-void
.end method

.method public final sl()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/widget/a;->sk()V

    return-void
.end method

.method public final z(Landroid/view/View;)V
    .locals 4

    invoke-super {p0, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;->z(Landroid/view/View;)V

    iget v0, p0, Lcom/kwad/components/core/widget/a;->XS:I

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/widget/a;->XK:Lcom/kwad/components/core/widget/a$a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/components/core/widget/a$a;->k(Landroid/view/View;)V

    return-void

    :cond_0
    iget-boolean v0, p0, Lcom/kwad/components/core/widget/a;->XO:Z

    if-nez v0, :cond_1

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/widget/a;->XO:Z

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/core/widget/a;->XP:J

    invoke-direct {p0}, Lcom/kwad/components/core/widget/a;->sj()V

    invoke-direct {p0}, Lcom/kwad/components/core/widget/a;->si()V

    return-void

    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/kwad/components/core/widget/a;->XP:J

    sub-long/2addr v0, v2

    iget v2, p0, Lcom/kwad/components/core/widget/a;->XS:I

    int-to-long v2, v2

    cmp-long v0, v0, v2

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/core/widget/a;->XK:Lcom/kwad/components/core/widget/a$a;

    if-eqz v0, :cond_2

    invoke-interface {v0, p1}, Lcom/kwad/components/core/widget/a$a;->k(Landroid/view/View;)V

    invoke-direct {p0}, Lcom/kwad/components/core/widget/a;->sj()V

    :cond_2
    return-void
.end method
