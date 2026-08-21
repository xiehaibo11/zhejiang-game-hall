.class Lcom/sigmob/sdk/mraid/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/o;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/b;

.field private b:Landroid/view/MotionEvent;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b$3;->a:Lcom/sigmob/sdk/mraid/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/b$3;->a:Lcom/sigmob/sdk/mraid/b;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/b;->d(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/base/common/aj;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/common/aj;->onTouchEvent(Landroid/view/MotionEvent;)Z

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->hasFocus()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p1}, Landroid/view/View;->requestFocus()Z

    :cond_1
    :goto_0
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 v0, 0x0

    if-ne p1, v1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b$3;->a:Lcom/sigmob/sdk/mraid/b;

    const/4 v2, 0x4

    new-array v2, v2, [Ljava/lang/Object;

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/b$3;->b:Landroid/view/MotionEvent;

    invoke-virtual {v3}, Landroid/view/MotionEvent;->getRawX()F

    move-result v3

    float-to-int v3, v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v0

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/b$3;->b:Landroid/view/MotionEvent;

    invoke-virtual {v3}, Landroid/view/MotionEvent;->getRawY()F

    move-result v3

    float-to-int v3, v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v1

    const/4 v1, 0x2

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawX()F

    move-result v3

    float-to-int v3, v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v1

    const/4 v1, 0x3

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getRawY()F

    move-result v3

    float-to-int v3, v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v1

    const-string v1, "%d,%d,%d,%d"

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/b;Ljava/lang/String;)Ljava/lang/String;

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b$3;->b:Landroid/view/MotionEvent;

    if-nez p1, :cond_2

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/b$3;->b:Landroid/view/MotionEvent;

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/b$3;->a:Lcom/sigmob/sdk/mraid/b;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/b;->a(Lcom/sigmob/sdk/mraid/b;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    instance-of v1, p1, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v1, :cond_4

    check-cast p1, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/b$3;->b:Landroid/view/MotionEvent;

    invoke-virtual {v1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v1

    float-to-int v1, v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "_DOWNX_"

    invoke-virtual {p1, v2, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/b$3;->b:Landroid/view/MotionEvent;

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

    move-result p2

    float-to-int p2, p2

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    const-string v1, "_UPY_"

    invoke-virtual {p1, v1, p2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_3
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    if-nez p1, :cond_4

    invoke-static {p2}, Landroid/view/MotionEvent;->obtain(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/b$3;->b:Landroid/view/MotionEvent;

    :cond_4
    :goto_1
    return v0
.end method
