.class final Lcom/mbridge/msdk/widget/custom/a/d$1;
.super Ljava/lang/Object;
.source "RenderEngine.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/widget/custom/a/d;->a(Landroid/view/ViewGroup;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/View;

.field final synthetic b:Landroid/widget/ImageView;

.field final synthetic c:Lcom/mbridge/msdk/widget/custom/a/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/a/d;Landroid/view/View;Landroid/widget/ImageView;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$1;->c:Lcom/mbridge/msdk/widget/custom/a/d;

    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/a/d$1;->a:Landroid/view/View;

    iput-object p3, p0, Lcom/mbridge/msdk/widget/custom/a/d$1;->b:Landroid/widget/ImageView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 3

    .line 76
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$1;->a:Landroid/view/View;

    invoke-virtual {p1}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    const/16 v0, 0x8

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    .line 77
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$1;->b:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/d$1;->c:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/a/d;->a(Lcom/mbridge/msdk/widget/custom/a/d;)Landroid/widget/ImageView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/a/d$1;->a:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getVisibility()I

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "mbridge_download_message_dialog_hide"

    goto :goto_1

    :cond_1
    const-string v1, "mbridge_download_message_dialog_expand"

    :goto_1
    const-string v2, "drawable"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    return-void
.end method
