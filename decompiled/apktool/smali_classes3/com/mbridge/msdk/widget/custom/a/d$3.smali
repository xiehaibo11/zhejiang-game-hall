.class final Lcom/mbridge/msdk/widget/custom/a/d$3;
.super Ljava/lang/Object;
.source "RenderEngine.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/widget/custom/a/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/View;

.field final synthetic b:Lcom/mbridge/msdk/widget/custom/a/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/a/d;Landroid/view/View;)V
    .locals 0

    .line 115
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$3;->b:Lcom/mbridge/msdk/widget/custom/a/d;

    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/a/d$3;->a:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 119
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$3;->a:Landroid/view/View;

    check-cast p1, Landroid/view/ViewGroup;

    const/4 v0, 0x1

    .line 120
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 122
    invoke-virtual {p1}, Landroid/view/View;->performClick()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 125
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "render"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method
