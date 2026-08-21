.class final Lcom/mbridge/msdk/widget/custom/a/d$2;
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
.field final synthetic a:Lcom/mbridge/msdk/widget/custom/a/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/a/d;)V
    .locals 0

    .line 92
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$2;->a:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 3

    .line 95
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$2;->a:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/a/d;->c(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/d$2;->a:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/a/d;->b(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;

    move-result-object v0

    const-string v1, "image_close"

    invoke-virtual {p1, v1, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->putView(Ljava/lang/String;Landroid/view/View;)V

    .line 96
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$2;->a:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/a/d;->e(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/d$2;->a:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/a/d;->d(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/a/d$2;->a:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/a/d;->c(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    move-result-object v1

    sget-object v2, Lcom/mbridge/msdk/widget/custom/a$a;->c:Lcom/mbridge/msdk/widget/custom/a$a;

    invoke-interface {p1, v0, v1, v2}, Lcom/mbridge/msdk/widget/custom/a;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a$a;)V

    return-void
.end method
