.class final Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/f/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->createView(Landroid/view/ViewGroup;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/ViewGroup;

.field final synthetic b:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;Landroid/view/ViewGroup;)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->b:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    iput-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->a:Landroid/view/ViewGroup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/video/dynview/a;)V
    .locals 2

    .line 108
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->b:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->b(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->a()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->addView(Landroid/view/View;)V

    .line 109
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->b:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->c()Z

    move-result p1

    invoke-static {v0, p1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->a(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;Z)Z

    .line 110
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->a:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 111
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->a:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->b:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->b(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    .line 113
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->b:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->setViewStatus()V

    .line 115
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->b:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->c(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)Lcom/tkay/expressad/video/dynview/f/b;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 116
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->b:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->c(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)Lcom/tkay/expressad/video/dynview/f/b;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/dynview/f/b;->a()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 119
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/video/dynview/c/b;)V
    .locals 0

    .line 128
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->b:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->c(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)Lcom/tkay/expressad/video/dynview/f/b;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 129
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;->b:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->c(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)Lcom/tkay/expressad/video/dynview/f/b;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/dynview/f/b;->b()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 132
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method
