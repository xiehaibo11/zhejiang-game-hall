.class final Lcom/tkay/expressad/video/module/TkayNativeEndCardView$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->onAttachedToWindow()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$1;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 158
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$1;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Z

    .line 159
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$1;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 160
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$1;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method
