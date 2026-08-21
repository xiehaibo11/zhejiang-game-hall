.class Lcom/sigmob/sdk/videoAd/l$21;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->d(Landroid/content/Context;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field a:Landroid/view/MotionEvent;

.field final synthetic b:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$21;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 4

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "mCompanionAdsWidget click"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Landroid/view/MotionEvent;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$21;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->u:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/common/a;->a()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, p2, v1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/view/MotionEvent;Ljava/lang/String;Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$21;->a:Landroid/view/MotionEvent;

    if-nez p1, :cond_0

    iput-object p2, p0, Lcom/sigmob/sdk/videoAd/l$21;->a:Landroid/view/MotionEvent;

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$21;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    instance-of v1, p1, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v1, :cond_1

    check-cast p1, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$21;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoAd/l;->t()I

    move-result v1

    mul-int/lit8 v1, v1, 0x64

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$21;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {v2}, Lcom/sigmob/sdk/videoAd/l;->s()I

    move-result v2

    div-int/2addr v1, v2

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "_PROGRESS_"

    invoke-virtual {p1, v2, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$21;->a:Landroid/view/MotionEvent;

    invoke-virtual {v1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v1

    float-to-int v1, v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "_DOWNX_"

    invoke-virtual {p1, v2, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$21;->a:Landroid/view/MotionEvent;

    invoke-virtual {v1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v1

    float-to-int v1, v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "_DOWNY_"

    invoke-virtual {p1, v2, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v1

    float-to-int v1, v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "_UPX_"

    invoke-virtual {p1, v2, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v1

    float-to-int v1, v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "_UPY_"

    invoke-virtual {p1, v2, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$21;->b:Lcom/sigmob/sdk/videoAd/l;

    const/4 v1, 0x4

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/sigmob/sdk/videoAd/l$21;->a:Landroid/view/MotionEvent;

    invoke-virtual {v3}, Landroid/view/MotionEvent;->getRawX()F

    move-result v3

    float-to-int v3, v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    iget-object v2, p0, Lcom/sigmob/sdk/videoAd/l$21;->a:Landroid/view/MotionEvent;

    invoke-virtual {v2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v2

    float-to-int v2, v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v0

    const/4 v2, 0x2

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v3

    float-to-int v3, v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x3

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result p2

    float-to-int p2, p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, v1, v2

    const-string p2, "%d,%d,%d,%d"

    invoke-static {p2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/sigmob/sdk/videoAd/l;->g:Ljava/lang/String;

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$21;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->e(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/h;

    move-result-object p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$21;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoAd/l;->u()V

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$21;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->o(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/a;->a:Lcom/sigmob/sdk/base/a;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$21;->b:Lcom/sigmob/sdk/videoAd/l;

    iget-object v1, v1, Lcom/sigmob/sdk/videoAd/l;->g:Ljava/lang/String;

    invoke-virtual {p1, p2, v1, v0}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Z)V

    goto :goto_0

    :cond_3
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    if-nez p1, :cond_4

    invoke-static {p2}, Landroid/view/MotionEvent;->obtain(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$21;->a:Landroid/view/MotionEvent;

    :cond_4
    :goto_0
    return v0
.end method
