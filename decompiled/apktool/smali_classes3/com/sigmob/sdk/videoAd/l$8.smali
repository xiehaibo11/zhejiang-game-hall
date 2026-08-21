.class Lcom/sigmob/sdk/videoAd/l$8;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/views/l$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->a(Landroid/content/Context;Lcom/sigmob/sdk/videoAd/h;)Lcom/sigmob/sdk/base/views/l;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Landroid/view/MotionEvent;Landroid/view/MotionEvent;)V
    .locals 8

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->U(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/x;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/x;->getVisibility()I

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->V(Lcom/sigmob/sdk/videoAd/l;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_1

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    const/4 v1, 0x1

    const-string v2, "endcard_click"

    invoke-static {v0, p2, v2, v1}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/view/MotionEvent;Ljava/lang/String;Z)V

    const/4 v0, 0x3

    const/4 v2, 0x2

    const/4 v3, 0x0

    const/4 v4, 0x4

    const-string v5, "%d,%d,%d,%d"

    iget-object v6, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    new-array v4, v4, [Ljava/lang/Object;

    if-nez p1, :cond_1

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v7

    float-to-int v7, v7

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v4, v3

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v3

    float-to-int v3, v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v4, v1

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v3

    float-to-int v3, v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v4, v2

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v2

    float-to-int v2, v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v4, v0

    invoke-static {v5, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_1
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v7

    float-to-int v7, v7

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v4, v3

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v3

    float-to-int v3, v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v4, v1

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v3

    float-to-int v3, v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v4, v2

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v2

    float-to-int v2, v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v4, v0

    invoke-static {v5, v4}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    :goto_0
    iput-object v0, v6, Lcom/sigmob/sdk/videoAd/l;->g:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {v0}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    instance-of v2, v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v2, :cond_2

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v2

    float-to-int v2, v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "_DOWNX_"

    invoke-virtual {v0, v3, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result p1

    float-to-int p1, p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v2, "_DOWNY_"

    invoke-virtual {v0, v2, p1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result p1

    float-to-int p1, p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v2, "_UPX_"

    invoke-virtual {v0, v2, p1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result p1

    float-to-int p1, p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string p2, "_UPY_"

    invoke-virtual {v0, p2, p1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1, v1}, Lcom/sigmob/sdk/videoAd/l;->h(Lcom/sigmob/sdk/videoAd/l;Z)Z

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->click_type:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    sget-object p2, Lcom/sigmob/sdk/base/common/k;->b:Lcom/sigmob/sdk/base/common/k;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/k;->a()I

    move-result p2

    if-ne p1, p2, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    sget-object p2, Lcom/sigmob/sdk/base/common/l;->f:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result p2

    if-eq p1, p2, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$8;->a:Lcom/sigmob/sdk/videoAd/l;

    iget-object v0, v0, Lcom/sigmob/sdk/videoAd/l;->g:Ljava/lang/String;

    invoke-virtual {p1, p2, v0, v1}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Z)V

    :cond_3
    return-void

    :cond_4
    :goto_1
    const-string p1, "ignore invalid click"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->w(Ljava/lang/String;)V

    return-void
.end method
