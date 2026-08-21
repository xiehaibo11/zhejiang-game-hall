.class final Lcom/tkay/expressad/video/module/TkayNativeEndCardView$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/f/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a()V
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

    .line 207
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$9;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/video/dynview/a;)V
    .locals 2

    .line 211
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$9;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->a()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->addView(Landroid/view/View;)V

    .line 212
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$9;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->c()Z

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;Z)Z

    .line 213
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$9;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->a()Landroid/view/View;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;Landroid/view/View;)Z

    move-result p1

    iput-boolean p1, v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f:Z

    .line 214
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$9;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->c(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/video/dynview/c/b;)V
    .locals 2

    .line 220
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "errorMsg:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/c/b;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method
