.class final Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->onAttachedToWindow()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$1;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 126
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$1;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Z

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$1;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$1;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_0
    return-void
.end method
