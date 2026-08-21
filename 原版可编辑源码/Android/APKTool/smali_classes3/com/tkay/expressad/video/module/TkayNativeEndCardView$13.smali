.class final Lcom/tkay/expressad/video/module/TkayNativeEndCardView$13;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->c()V
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

    .line 460
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$13;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 463
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$13;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->g(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 464
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$13;->a:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;I)V

    :cond_0
    return-void
.end method
