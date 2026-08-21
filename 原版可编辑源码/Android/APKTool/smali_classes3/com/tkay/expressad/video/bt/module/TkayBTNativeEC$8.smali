.class final Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$8;
.super Lcom/tkay/expressad/widget/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a()V
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

    .line 357
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$8;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    invoke-direct {p0}, Lcom/tkay/expressad/widget/a;-><init>()V

    return-void
.end method


# virtual methods
.method protected final a(Landroid/view/View;)V
    .locals 2

    .line 360
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$8;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;I)V

    .line 361
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$8;->a:Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    invoke-virtual {p1}, Landroid/view/View;->getX()F

    move-result v1

    invoke-virtual {p1}, Landroid/view/View;->getY()F

    move-result p1

    invoke-static {v0, v1, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;FF)V

    return-void
.end method
