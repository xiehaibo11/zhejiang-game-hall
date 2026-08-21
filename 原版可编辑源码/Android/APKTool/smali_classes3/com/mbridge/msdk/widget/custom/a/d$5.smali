.class final Lcom/mbridge/msdk/widget/custom/a/d$5;
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
.field final synthetic a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

.field final synthetic b:Lcom/mbridge/msdk/widget/custom/a/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/a/d;Lcom/mbridge/msdk/widget/custom/baseview/MBButton;)V
    .locals 0

    .line 202
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$5;->b:Lcom/mbridge/msdk/widget/custom/a/d;

    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/a/d$5;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 3

    .line 205
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$5;->b:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/a/d;->c(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 206
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$5;->b:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/a/d;->c(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/d$5;->a:Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    const-string v1, "button_download"

    invoke-virtual {p1, v1, v0}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->putView(Ljava/lang/String;Landroid/view/View;)V

    .line 208
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/d$5;->b:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/a/d;->e(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/d$5;->b:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/a/d;->d(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/a/d$5;->b:Lcom/mbridge/msdk/widget/custom/a/d;

    invoke-static {v1}, Lcom/mbridge/msdk/widget/custom/a/d;->c(Lcom/mbridge/msdk/widget/custom/a/d;)Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;

    move-result-object v1

    sget-object v2, Lcom/mbridge/msdk/widget/custom/a$a;->b:Lcom/mbridge/msdk/widget/custom/a$a;

    invoke-interface {p1, v0, v1, v2}, Lcom/mbridge/msdk/widget/custom/a;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a$a;)V

    return-void
.end method
